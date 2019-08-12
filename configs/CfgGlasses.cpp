class CfgGlasses
{
	class G_AirPurifyingRespirator_01_base_F: None
	{
		DLC = "Enoch";
		hiddenSelections[] = {"Camo"};
		identityTypes[] = {};
		mass = 8;
		model = "\a3\Characters_F_Enoch\Facewear\G_AirPurifyingRespirator_01_F.p3d";
		scope = 0;
		scopeArsenal = 0;
		scopeCurator = 0;
	};
	class G_AirPurifyingRespirator_01_F: G_AirPurifyingRespirator_01_base_F
	{
		_generalMacro = "G_AirPurifyingRespirator_01_F";
		author = "Bohemia Interactive";
		displayName = "APR [NATO]";
		hiddenSelectionsTextures[] = {"a3\characters_f_enoch\facewear\data\airpurifyingrespirator_co.paa"};
		picture = "\A3\Characters_F_Enoch\Facewear\Data\UI\icon_G_AirPurifyingRespirator_01_F_ca.paa";
		scope = 2;
		scopeArsenal = 2;
		scopeCurator = 2;
	};
	class G_AirPurifyingRespirator_01_nofilter_F: G_AirPurifyingRespirator_01_F
	{
		hiddenSelections[] = {"Camo", "filter"};
		scope = 1;
		scopeArsenal = 0;
	};
	class G_AirPurifyingRespirator_02_base_F: G_AirPurifyingRespirator_01_base_F
	{
		DLC = "Enoch";
		hiddenSelections[] = {"camo"};
		identityTypes[] = {};
		mass = 8;
		model = "\a3\Characters_F_Enoch\Facewear\G_AirPurifyingRespirator_02_F.p3d";
		scope = 0;
		scopeArsenal = 0;
		scopeCurator = 0;
	};
	class G_AirPurifyingRespirator_02_black_F: G_AirPurifyingRespirator_02_base_F
	{
		_generalMacro = "G_AirPurifyingRespirator_02_black_F";
		author = "Bohemia Interactive";
		displayName = "APR (Black) [CSAT]";
		hiddenSelectionsTextures[] = {"\A3\Characters_F_Enoch\Facewear\data\AirPurifyingRespirator_02_black_co"};
		picture = "\A3\Characters_F_Enoch\Facewear\Data\UI\icon_G_AirPurifyingRespirator_02_black_F_ca.paa";
		scope = 2;
		scopeArsenal = 2;
		scopeCurator = 2;
	};
	class G_AirPurifyingRespirator_02_black_nofilter_F: G_AirPurifyingRespirator_02_black_F
	{
		hiddenSelections[] = {"Camo", "filter"};
		scope = 1;
		scopeArsenal = 0;
	};
	class G_AirPurifyingRespirator_02_olive_F: G_AirPurifyingRespirator_02_base_F
	{
		_generalMacro = "G_AirPurifyingRespirator_02_olive_F";
		author = "Bohemia Interactive";
		displayName = "APR (Olive) [CSAT]";
		hiddenSelectionsTextures[] = {"\A3\Characters_F_Enoch\Facewear\data\AirPurifyingRespirator_02_olive_co"};
		picture = "\A3\Characters_F_Enoch\Facewear\Data\UI\icon_G_AirPurifyingRespirator_02_olive_F_ca.paa";
		scope = 2;
		scopeArsenal = 2;
		scopeCurator = 2;
	};
	class G_AirPurifyingRespirator_02_olive_nofilter_F: G_AirPurifyingRespirator_02_olive_F
	{
		hiddenSelections[] = {"Camo", "filter"};
		scope = 1;
		scopeArsenal = 0;
	};
	class G_AirPurifyingRespirator_02_sand_F: G_AirPurifyingRespirator_02_base_F
	{
		_generalMacro = "G_AirPurifyingRespirator_02_sand_F";
		author = "Bohemia Interactive";
		displayName = "APR (Sand) [CSAT]";
		hiddenSelectionsTextures[] = {"\A3\Characters_F_Enoch\Facewear\data\AirPurifyingRespirator_02_sand_co"};
		picture = "\A3\Characters_F_Enoch\Facewear\Data\UI\icon_G_AirPurifyingRespirator_02_sand_F_ca.paa";
		scope = 2;
		scopeArsenal = 2;
		scopeCurator = 2;
	};
	class G_AirPurifyingRespirator_02_sand_nofilter_F: G_AirPurifyingRespirator_02_sand_F
	{
		hiddenSelections[] = {"Camo", "filter"};
		scope = 1;
		scopeArsenal = 0;
	};
	class G_Aviator: None
	{
		_generalMacro = "G_Aviator";
		author = "Bohemia Interactive";
		displayname = "Aviator Glasses";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\a3\characters_f\heads\glasses\data\glass_ca.paa"};
		identityTypes[] = {"G_CIVIL_aidworker", 100, "G_CIVIL_constructionworker", 60, "G_CIVIL_man", 80, "NoGlasses", 0, "G_NATO_default", 50, "G_NATO_casual", 450, "G_NATO_pilot", 0, "G_NATO_recon", 15, "G_NATO_SF", 50, "G_NATO_sniper", 0, "G_NATO_diver", 0, "G_IRAN_default", 0, "G_IRAN_diver", 0, "G_GUERIL_default", 25, "G_HAF_default", 25, "G_CIVIL_female", 15, "G_CIVIL_male", 30, "G_IRAN_officer", 500};
		mass = 2;
		model = "\A3\characters_f_gamma\Heads\Glasses\g_aviators";
		picture = "\A3\Characters_F\data\ui\icon_g_aviators_CA.paa";
	};
	class G_B_Diving: G_Diving
	{
		_generalMacro = "G_B_Diving";
		author = "Bohemia Interactive";
		displayname = "Diving Goggles [NATO]";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\a3\characters_f_epb\heads\glasses\data\g_diving_nato_ca.paa"};
		mass = 4;
		model = "\A3\Characters_F_EPB\Heads\Glasses\g_b_diving.p3d";
		picture = "\A3\Characters_F_EPB\Heads\Glasses\data\UI\icon_g_diving_nato_ca.paa";
	};
	class G_Balaclava_blk: None
	{
		_generalMacro = "G_Balaclava_blk";
		author = "Bohemia Interactive";
		displayName = "Balaclava (Black)";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\a3\characters_f_bootcamp\guerrilla\data\headgear_balaclava_blk_co.paa"};
		identityTypes[] = {"NoGlasses", 0, "G_RUS_SF", 25};
		mass = 6;
		model = "\A3\Characters_F_Bootcamp\Guerrilla\g_balaclava_clean.p3d";
		picture = "\A3\Characters_F_Bootcamp\Data\UI\icon_G_Balaclava_clean_ca.paa";
		scope = 2;
		scopeArsenal = 2;
		scopeCurator = 2;
	};
	class G_Balaclava_combat: G_Balaclava_blk
	{
		_generalMacro = "G_Balaclava_combat";
		author = "Bohemia Interactive";
		displayName = "Balaclava (Combat Goggles)";
		hiddenSelections[] = {"camo1", "camo2"};
		hiddenSelectionsTextures[] = {"\a3\characters_f_bootcamp\guerrilla\data\headgear_balaclava_blk_co.paa", "\a3\characters_f\heads\glasses\data\g_combat_ca.paa"};
		identityTypes[] = {};
		mass = 10;
		model = "\A3\Characters_F_Bootcamp\Guerrilla\g_balaclava_combat.p3d";
		picture = "\A3\Characters_F_Bootcamp\Data\UI\icon_G_Balaclava_combat_ca.paa";
	};
	class G_Balaclava_lowprofile: G_Balaclava_blk
	{
		_generalMacro = "G_Balaclava_lowprofile";
		author = "Bohemia Interactive";
		displayName = "Balaclava (Low Profile Goggles)";
		hiddenSelections[] = {"camo1", "camo2"};
		hiddenSelectionsTextures[] = {"\a3\characters_f_bootcamp\guerrilla\data\headgear_balaclava_blk_co.paa", "\a3\characters_f\heads\glasses\data\lowprofile_black_ca.paa"};
		identityTypes[] = {};
		mass = 8;
		model = "\A3\Characters_F_Bootcamp\Guerrilla\g_balaclava_lowprofile.p3d";
		picture = "\A3\Characters_F_Bootcamp\Data\UI\icon_G_Balaclava_lowprofile_ca.paa";
	};
	class G_Balaclava_oli: G_Balaclava_blk
	{
		_generalMacro = "G_Balaclava_oli";
		author = "Bohemia Interactive";
		displayName = "Balaclava (Olive)";
		hiddenSelectionsTextures[] = {"\A3\Characters_F_Bootcamp\Guerrilla\Data\headgear_balaclava_grn_co.paa"};
		identityTypes[] = {};
		model = "\A3\Characters_F_Bootcamp\Guerrilla\g_balaclava_clean.p3d";
		picture = "\A3\Characters_F_Bootcamp\Data\UI\icon_G_Balaclava_olive_ca.paa";
	};
	class G_Balaclava_TI_blk_F: None
	{
		_generalMacro = "G_Balaclava_TI_blk_F";
		author = "Bohemia Interactive";
		displayName = "Stealth Balaclava (Black)";
		DLC = "Expansion";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\A3\Characters_F_Exp\BLUFOR\Data\G_Balaclava_TI_blk_F_co.paa"};
		identityTypes[] = {};
		mass = 6;
		model = "\A3\Characters_F_Exp\BLUFOR\G_Balaclava_TI_F.p3d";
		picture = "\A3\Characters_F_Exp\BLUFOR\Data\UI\icon_G_Balaclava_TI_blk_F_ca.paa";
		scope = 2;
		scopeArsenal = 2;
		scopeCurator = 2;
	};
	class G_Balaclava_TI_G_blk_F: G_Balaclava_TI_blk_F
	{
		_generalMacro = "G_Balaclava_TI_G_blk_F";
		author = "Bohemia Interactive";
		displayName = "Stealth Balaclava (Black, Goggles)";
		DLC = "Expansion";
		hiddenSelections[] = {"camo1", "camo2"};
		hiddenSelectionsTextures[] = {"\A3\Characters_F_Exp\BLUFOR\Data\G_Balaclava_TI_blk_F_co.paa", "\A3\Characters_F\Heads\Glasses\data\g_combat_ca.paa"};
		identityTypes[] = {};
		mass = 10;
		model = "\A3\Characters_F_Exp\BLUFOR\G_Balaclava_TI_G_F.p3d";
		picture = "\A3\Characters_F_Exp\BLUFOR\Data\UI\icon_G_Balaclava_TI_G_blk_F_ca.paa";
	};
	class G_Balaclava_TI_G_tna_F: G_Balaclava_TI_tna_F
	{
		_generalMacro = "G_Balaclava_TI_G_tna_F";
		author = "Bohemia Interactive";
		displayName = "Stealth Balaclava (Green, Goggles)";
		DLC = "Expansion";
		hiddenSelections[] = {"camo1", "camo2"};
		hiddenSelectionsTextures[] = {"\A3\Characters_F_Exp\BLUFOR\Data\G_Balaclava_TI_tna_F_co.paa", "\A3\Characters_F\Heads\Glasses\data\g_combat_ca.paa"};
		identityTypes[] = {};
		mass = 10;
		model = "\A3\Characters_F_Exp\BLUFOR\G_Balaclava_TI_G_F.p3d";
		picture = "\A3\Characters_F_Exp\BLUFOR\Data\UI\icon_G_Balaclava_TI_G_tna_F_ca.paa";
	};
	class G_Balaclava_TI_tna_F: G_Balaclava_TI_blk_F
	{
		_generalMacro = "G_Balaclava_TI_tna_F";
		author = "Bohemia Interactive";
		displayName = "Stealth Balaclava (Green)";
		DLC = "Expansion";
		hiddenSelectionsTextures[] = {"\A3\Characters_F_Exp\BLUFOR\Data\G_Balaclava_TI_tna_F_co.paa"};
		identityTypes[] = {};
		mass = 6;
		picture = "\A3\Characters_F_Exp\BLUFOR\Data\UI\icon_G_Balaclava_TI_tna_F_ca.paa";
	};
	class G_Bandanna_aviator: G_Bandanna_shades
	{
		_generalMacro = "G_Bandanna_aviator";
		author = "Bohemia Interactive";
		displayName = "Bandana (Aviator)";
		hiddenSelectionsTextures[] = {"\a3\characters_f_bootcamp\guerrilla\data\headgear_bandmask_blk_co.paa", "\a3\characters_f\heads\glasses\data\glass_ca.paa"};
		model = "\A3\Characters_F_Bootcamp\Guerrilla\g_bandana_aviator.p3d";
		picture = "\A3\Characters_F_Bootcamp\Data\UI\icon_G_Bandana_aviator_ca.paa";
	};
	class G_Bandanna_beast: G_Bandanna_blk
	{
		_generalMacro = "G_Bandanna_beast";
		author = "Bohemia Interactive";
		displayName = "Bandana (Beast)";
		hiddenSelectionsTextures[] = {"\A3\Characters_F_Bootcamp\Guerrilla\Data\headgear_bandMask_beast_co.paa"};
		picture = "\A3\Characters_F_Bootcamp\Data\UI\icon_G_BandMask_beast_ca.paa";
	};
	class G_Bandanna_blk: G_Balaclava_blk
	{
		_generalMacro = "G_Bandanna_blk";
		author = "Bohemia Interactive";
		displayName = "Bandana (Black)";
		hiddenSelectionsTextures[] = {"\a3\characters_f_bootcamp\guerrilla\data\headgear_bandmask_blk_co.paa"};
		identityTypes[] = {};
		mass = 4;
		model = "\A3\Characters_F_Bootcamp\Guerrilla\g_bandana_clean.p3d";
		picture = "\A3\Characters_F_Bootcamp\Data\UI\icon_G_Bandana_clean_ca.paa";
	};
	class G_Bandanna_khk: G_Bandanna_blk
	{
		_generalMacro = "G_Bandanna_khk";
		author = "Bohemia Interactive";
		displayName = "Bandana (Khaki)";
		hiddenSelectionsTextures[] = {"\A3\Characters_F_Bootcamp\Guerrilla\Data\headgear_bandMask_khk_co.paa"};
		picture = "\A3\Characters_F_Bootcamp\Data\UI\icon_G_BandMask_khaki_ca.paa";
	};
	class G_Bandanna_oli: G_Bandanna_blk
	{
		_generalMacro = "G_Bandanna_oli";
		author = "Bohemia Interactive";
		displayName = "Bandana (Olive)";
		hiddenSelectionsTextures[] = {"\A3\Characters_F_Bootcamp\Guerrilla\Data\headgear_bandMask_grn_co.paa"};
		picture = "\A3\Characters_F_Bootcamp\Data\UI\icon_G_BandMask_olive_ca.paa";
	};
	class G_Bandanna_shades: G_Bandanna_blk
	{
		_generalMacro = "G_Bandanna_shades";
		author = "Bohemia Interactive";
		displayName = "Bandana (Shades)";
		hiddenSelections[] = {"camo1", "camo2"};
		hiddenSelectionsTextures[] = {"\a3\characters_f_bootcamp\guerrilla\data\headgear_bandmask_blk_co.paa", "\a3\characters_f\heads\glasses\data\joeyx_black_ca.paa"};
		mass = 6;
		model = "\A3\Characters_F_Bootcamp\Guerrilla\g_bandana_shades.p3d";
		picture = "\A3\Characters_F_Bootcamp\Data\UI\icon_G_Bandana_shades_ca.paa";
	};
	class G_Bandanna_sport: G_Bandanna_shades
	{
		_generalMacro = "G_Bandanna_sport";
		author = "Bohemia Interactive";
		displayName = "Bandana (Sport)";
		hiddenSelectionsTextures[] = {"\a3\characters_f_bootcamp\guerrilla\data\headgear_bandmask_blk_co.paa", "\a3\characters_f\heads\glasses\data\sunglasses_sport_4_ca.paa"};
		model = "\A3\Characters_F_Bootcamp\Guerrilla\g_bandana_sport.p3d";
		picture = "\A3\Characters_F_Bootcamp\Data\UI\icon_G_Bandana_sport_ca.paa";
	};
	class G_Bandanna_tan: G_Bandanna_blk
	{
		_generalMacro = "G_Bandanna_tan";
		author = "Bohemia Interactive";
		displayName = "Bandana (Tan)";
		hiddenSelectionsTextures[] = {"\A3\Characters_F_Bootcamp\Guerrilla\Data\headgear_bandMask_tan_co.paa"};
		picture = "\A3\Characters_F_Bootcamp\Data\UI\icon_G_BandMask_tan_ca.paa";
	};
	class G_Blindfold_01_base_F: None
	{
		DLC = "Enoch";
		hiddenSelections[] = {"camo"};
		identityTypes[] = {};
		mass = 3;
		model = "\a3\Characters_F_Enoch\Facewear\G_Blindfold_01_F.p3d";
		scope = 0;
		scopeArsenal = 0;
		scopeCurator = 0;
	};
	class G_Blindfold_01_black_F: G_Blindfold_01_base_F
	{
		_generalMacro = "G_Blindfold_01_black_F";
		author = "Bohemia Interactive";
		displayName = "Blindfold (Black)";
		hiddenSelectionsTextures[] = {"\A3\Characters_F_Enoch\Facewear\data\G_Blindfold_01_Black_CO"};
		picture = "\A3\Characters_F_Enoch\Facewear\Data\UI\icon_G_Blindfold_01_black_F_ca.paa";
		scope = 2;
		scopeArsenal = 2;
		scopeCurator = 2;
	};
	class G_Blindfold_01_white_F: G_Blindfold_01_base_F
	{
		_generalMacro = "G_Blindfold_01_white_F";
		author = "Bohemia Interactive";
		displayName = "Blindfold (White)";
		hiddenSelectionsTextures[] = {"\A3\Characters_F_Enoch\Facewear\data\G_Blindfold_01_White_CO"};
		picture = "\A3\Characters_F_Enoch\Facewear\Data\UI\icon_G_Blindfold_01_white_F_ca.paa";
		scope = 2;
		scopeArsenal = 2;
		scopeCurator = 2;
	};
	class G_Combat: None
	{
		_generalMacro = "G_Combat";
		author = "Bohemia Interactive";
		displayname = "Combat Goggles";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\a3\characters_f\heads\glasses\data\g_combat_ca.paa"};
		identityTypes[] = {"NoGlasses", 0, "G_NATO_default", 300, "G_NATO_casual", 0, "G_NATO_pilot", 0, "G_NATO_recon", 50, "G_NATO_SF", 300, "G_NATO_sniper", 0, "G_NATO_diver", 0, "G_IRAN_default", 0, "G_IRAN_diver", 0, "G_GUERIL_default", 0, "G_HAF_default", 50, "G_CIVIL_female", 0, "G_CIVIL_male", 0};
		mass = 4;
		model = "\A3\characters_f_beta\heads\glasses\g_combat";
		picture = "\A3\Characters_F\data\ui\icon_g_combat_CA.paa";
	};
	class G_Combat_Goggles_tna_F: None
	{
		_generalMacro = "G_Combat_Goggles_tna_F";
		author = "Bohemia Interactive";
		displayName = "Combat Goggles (Green)";
		DLC = "Expansion";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\A3\Characters_F_Exp\BLUFOR\Data\G_Combat_Goggles_tna_F_ca.paa"};
		identityTypes[] = {};
		mass = 6;
		model = "\A3\Characters_F_Beta\Heads\Glasses\g_combat.p3d";
		picture = "\A3\Characters_F_Exp\BLUFOR\Data\UI\icon_G_Combat_Goggles_tna_F_ca.paa";
		scope = 2;
		scopeArsenal = 2;
		scopeCurator = 2;
	};
	class G_Diving
	{
		_generalMacro = "G_Diving";
		author = "Bohemia Interactive";
		descriptionUse = "$str_a3_cfgglasses_g_diving1";
		displayname = "Diving Goggles";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\a3\characters_f\heads\glasses\data\g_diving_ca.paa"};
		identityTypes[] = {"NoGlasses", 0, "G_NATO_default", 0, "G_NATO_casual", 0, "G_NATO_pilot", 0, "G_NATO_recon", 0, "G_NATO_SF", 0, "G_NATO_sniper", 0, "G_NATO_diver", 1000, "G_IRAN_default", 0, "G_IRAN_diver", 1000, "G_GUERIL_default", 0, "G_HAF_default", 0, "G_CIVIL_female", 0, "G_CIVIL_male", 0};
		mass = 3;
		mode = 1;
		model = "\A3\characters_f\Heads\glasses\g_diving";
		picture = "\A3\characters_F\data\ui\icon_G_Diving_CA.paa";
		scope = 2;
	};
	class G_EyeProtectors_base_F: None
	{
		_generalMacro = "G_EyeProtectors_base_F";
		author = "Bohemia Interactive";
		DLC = "Orange";
		hiddenSelections[] = {"Camo"};
		identityTypes[] = {};
		mass = 2;
		model = "\A3\Characters_F_Orange\Facewear\G_EyeProtectors_F.p3d";
		scope = 0;
		scopeArsenal = 0;
		scopeCurator = 0;
	};
	class G_EyeProtectors_Earpiece_F: G_EyeProtectors_base_F
	{
		_generalMacro = "G_EyeProtectors_Earpiece_F";
		author = "Bohemia Interactive";
		displayName = "Safety Goggles (Earpiece)";
		hiddenSelections[] = {"Camo", "Camo1"};
		hiddenSelectionsTextures[] = {"\A3\Characters_F_Orange\Facewear\Data\G_EyeProtectors_ca.paa", "\A3\Characters_F_Orange\Headgear\Data\H_WirelessEarpiece_co.paa"};
		identityTypes[] = {"G_CIVIL_constructionworker", 220};
		mass = 4;
		model = "\A3\Characters_F_Orange\Facewear\G_EyeProtectors_Earpiece_F.p3d";
		picture = "\A3\Characters_F_Orange\Facewear\Data\UI\icon_G_EyeProtectors_Earpiece_ca.paa";
		scope = 2;
		scopeArsenal = 2;
		scopeCurator = 2;
	};
	class G_EyeProtectors_F: G_EyeProtectors_base_F
	{
		_generalMacro = "G_EyeProtectors_F";
		author = "Bohemia Interactive";
		displayName = "Safety Goggles";
		hiddenSelectionsTextures[] = {"\A3\Characters_F_Orange\Facewear\Data\G_EyeProtectors_ca.paa"};
		identityTypes[] = {"G_CIVIL_constructionworker", 420};
		picture = "\A3\Characters_F_Orange\Facewear\Data\UI\icon_G_EyeProtectors_ca.paa";
		scope = 2;
		scopeArsenal = 2;
		scopeCurator = 2;
	};
	class G_Goggles_VR: None
	{
		_generalMacro = "G_Goggles_VR";
		author = "Bohemia Interactive";
		displayName = "VR Goggles";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\a3\characters_f_bootcamp\common\data\g_vr_co.paa"};
		identityTypes[] = {};
		mass = 6;
		model = "\A3\Characters_F_Bootcamp\Common\G_vr.p3d";
		picture = "\A3\Characters_F_Bootcamp\Data\UI\icon_G_Goggles_VR_ca.paa";
		scope = 2;
		scopeArsenal = 2;
		scopeCurator = 2;
	};
	class G_I_Diving: G_Diving
	{
		_generalMacro = "G_I_Diving";
		author = "Bohemia Interactive";
		displayname = "Diving Goggles [AAF]";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\a3\characters_f_epb\heads\glasses\data\g_diving_rus_ca.paa"};
		mass = 4;
		model = "\A3\Characters_F_EPB\Heads\Glasses\g_i_diving.p3d";
		picture = "\A3\Characters_F_EPB\Heads\Glasses\data\UI\icon_g_diving_rus_ca.paa";
	};
	class G_Lady_Blue: None
	{
		_generalMacro = "G_Lady_Blue";
		author = "Bohemia Interactive";
		displayname = "Ladies Shades";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\a3\characters_f\heads\glasses\data\glass_ca.paa"};
		identityTypes[] = {"NoGlasses", 0, "G_NATO_default", 0, "G_NATO_casual", 0, "G_NATO_pilot", 0, "G_NATO_recon", 0, "G_NATO_SF", 0, "G_NATO_sniper", 0, "G_NATO_diver", 0, "G_IRAN_default", 0, "G_IRAN_diver", 0, "G_GUERIL_default", 0, "G_HAF_default", 0, "G_CIVIL_female", 40, "G_CIVIL_male", 0};
		mass = 2;
		model = "\A3\characters_f_gamma\Heads\Glasses\g_lady_blue";
		picture = "\A3\Characters_F\data\ui\icon_g_lady_CA.paa";
	};
	class G_Lady_Dark: None
	{
		_generalMacro = "G_Lady_Dark";
		author = "Bohemia Interactive";
		displayname = "Ladies Shades (Sea)";
		identityTypes[] = {"NoGlasses", 0, "G_NATO_default", 0, "G_NATO_casual", 0, "G_NATO_pilot", 0, "G_NATO_recon", 0, "G_NATO_SF", 0, "G_NATO_sniper", 0, "G_NATO_diver", 0, "G_IRAN_default", 0, "G_IRAN_diver", 0, "G_GUERIL_default", 0, "G_HAF_default", 0, "G_CIVIL_female", 40, "G_CIVIL_male", 0};
		mass = 2;
		model = "\A3\characters_f_gamma\Heads\Glasses\g_lady_dark";
		picture = "\A3\Characters_F\data\ui\icon_g_lady_CA.paa";
		scope = 1;
	};
	class G_Lady_Mirror: None
	{
		_generalMacro = "G_Lady_Mirror";
		author = "Bohemia Interactive";
		displayname = "Ladies Shades (Iridium)";
		identityTypes[] = {"NoGlasses", 0, "G_NATO_default", 0, "G_NATO_casual", 0, "G_NATO_pilot", 0, "G_NATO_recon", 0, "G_NATO_SF", 0, "G_NATO_sniper", 0, "G_NATO_diver", 0, "G_IRAN_default", 0, "G_IRAN_diver", 0, "G_GUERIL_default", 0, "G_HAF_default", 0, "G_CIVIL_female", 40, "G_CIVIL_male", 0};
		mass = 2;
		model = "\A3\characters_f_gamma\Heads\Glasses\g_lady_mirror";
		picture = "\A3\Characters_F\data\ui\icon_g_lady_CA.paa";
		scope = 1;
	};
	class G_Lady_Red: None
	{
		_generalMacro = "G_Lady_Red";
		author = "Bohemia Interactive";
		displayname = "Ladies Shades (Fire)";
		identityTypes[] = {"NoGlasses", 0, "G_NATO_default", 0, "G_NATO_casual", 0, "G_NATO_pilot", 0, "G_NATO_recon", 0, "G_NATO_SF", 0, "G_NATO_sniper", 0, "G_NATO_diver", 0, "G_IRAN_default", 0, "G_IRAN_diver", 0, "G_GUERIL_default", 0, "G_HAF_default", 0, "G_CIVIL_female", 40, "G_CIVIL_male", 0};
		mass = 2;
		model = "\A3\characters_f_gamma\Heads\Glasses\g_lady_red";
		picture = "\A3\Characters_F\data\ui\icon_g_lady_CA.paa";
		scope = 1;
	};
	class G_Lowprofile: None
	{
		_generalMacro = "G_Lowprofile";
		author = "Bohemia Interactive";
		displayname = "Low Profile Goggles";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\a3\characters_f\heads\glasses\data\lowprofile_black_ca.paa"};
		identityTypes[] = {"NoGlasses", 0, "G_NATO_default", 0, "G_NATO_casual", 0, "G_NATO_pilot", 0, "G_NATO_recon", 150, "G_NATO_SF", 0, "G_NATO_sniper", 0, "G_NATO_diver", 0, "G_IRAN_default", 0, "G_IRAN_diver", 0, "G_GUERIL_default", 0, "G_HAF_default", 50, "G_CIVIL_female", 0, "G_CIVIL_male", 0};
		mass = 2;
		model = "\A3\characters_f_beta\heads\glasses\g_lowprofile";
		picture = "\A3\Characters_F\data\ui\icon_g_lowprofile_CA.paa";
	};
	class G_O_Diving: G_Diving
	{
		_generalMacro = "G_O_Diving";
		author = "Bohemia Interactive";
		displayname = "Diving Goggles [CSAT]";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\a3\characters_f_epb\heads\glasses\data\g_diving_iran_ca.paa"};
		mass = 4;
		model = "\A3\Characters_F_EPB\Heads\Glasses\g_o_diving.p3d";
		picture = "\A3\Characters_F_EPB\Heads\Glasses\data\UI\icon_g_diving_iran_ca.paa";
	};
	class G_RegulatorMask_base_F: None
	{
		DLC = "Enoch";
		hiddenSelections[] = {};
		identityTypes[] = {};
		mass = 8;
		model = "\a3\Characters_F_Enoch\Facewear\G_RegulatorMask_F.p3d";
		scope = 0;
		scopeArsenal = 0;
		scopeCurator = 0;
	};
	class G_RegulatorMask_F: G_RegulatorMask_base_F
	{
		_generalMacro = "G_RegulatorMask_F";
		author = "Bohemia Interactive";
		displayName = "Regulator Facepiece";
		hiddenSelectionsTextures[] = {};
		picture = "\A3\Characters_F_Enoch\Facewear\Data\UI\icon_G_RegulatorMask_F_ca.paa";
		scope = 2;
		scopeArsenal = 2;
		scopeCurator = 2;
	};
	class G_Respirator_base_F: None
	{
		_generalMacro = "G_Respirator_base_F";
		author = "Bohemia Interactive";
		DLC = "Orange";
		hiddenSelections[] = {"Camo"};
		identityTypes[] = {};
		mass = 2;
		model = "\A3\Characters_F_Orange\Facewear\G_Respirator_F.p3d";
		scope = 0;
		scopeArsenal = 0;
		scopeCurator = 0;
	};
	class G_Respirator_blue_F: G_Respirator_base_F
	{
		_generalMacro = "G_Respirator_blue_F";
		author = "Bohemia Interactive";
		displayName = "Respirator (Blue)";
		hiddenSelectionsTextures[] = {"\A3\Characters_F_Orange\Facewear\Data\G_Respirator_blue_co.paa"};
		identityTypes[] = {"G_CIVIL_paramedic", 420, "G_CIVIL_constructionworker", 420};
		picture = "\A3\Characters_F_Orange\Facewear\Data\UI\icon_G_Respirator_blue_ca.paa";
		scope = 2;
		scopeArsenal = 2;
		scopeCurator = 2;
	};
	class G_Respirator_white_F: G_Respirator_base_F
	{
		_generalMacro = "G_Respirator_white_F";
		author = "Bohemia Interactive";
		displayName = "Respirator (White)";
		hiddenSelectionsTextures[] = {"\A3\Characters_F_Orange\Facewear\Data\G_Respirator_white_co.paa"};
		identityTypes[] = {"G_CIVIL_paramedic", 820, "G_CIVIL_constructionworker", 120};
		picture = "\A3\Characters_F_Orange\Facewear\Data\UI\icon_G_Respirator_white_ca.paa";
		scope = 2;
		scopeArsenal = 2;
		scopeCurator = 2;
	};
	class G_Respirator_yellow_F: G_Respirator_base_F
	{
		_generalMacro = "G_Respirator_yellow_F";
		author = "Bohemia Interactive";
		displayName = "Respirator (Yellow)";
		hiddenSelectionsTextures[] = {"\A3\Characters_F_Orange\Facewear\Data\G_Respirator_yellow_co.paa"};
		identityTypes[] = {"G_CIVIL_paramedic", 420, "G_CIVIL_constructionworker", 420};
		picture = "\A3\Characters_F_Orange\Facewear\Data\UI\icon_G_Respirator_yellow_ca.paa";
		scope = 2;
		scopeArsenal = 2;
		scopeCurator = 2;
	};
	class G_Shades_Black: None
	{
		_generalMacro = "G_Shades_Black";
		author = "Bohemia Interactive";
		displayname = "Shades (Black)";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\a3\characters_f\heads\glasses\data\joeyx_black_ca.paa"};
		identityTypes[] = {"G_CIVIL_aidworker", 100, "G_CIVIL_constructionworker", 120, "G_CIVIL_man", 80, "NoGlasses", 0, "G_NATO_default", 0, "G_NATO_casual", 0, "G_NATO_pilot", 0, "G_NATO_recon", 10, "G_NATO_SF", 0, "G_NATO_sniper", 0, "G_NATO_diver", 0, "G_IRAN_default", 0, "G_IRAN_diver", 0, "G_GUERIL_default", 20, "G_HAF_default", 20, "G_CIVIL_female", 10, "G_CIVIL_male", 20, "G_Competitor", 10};
		mass = 2;
		model = "\A3\characters_f\Heads\glasses\g_shades_black";
		picture = "\A3\Characters_F\data\ui\icon_g_shades_black_CA.paa";
	};
	class G_Shades_Blue: None
	{
		_generalMacro = "G_Shades_Blue";
		author = "Bohemia Interactive";
		displayname = "Shades (Blue)";
		identityTypes[] = {"G_CIVIL_aidworker", 100, "G_CIVIL_constructionworker", 60, "G_CIVIL_man", 80, "NoGlasses", 0, "G_NATO_default", 0, "G_NATO_casual", 0, "G_NATO_pilot", 0, "G_NATO_recon", 10, "G_NATO_SF", 0, "G_NATO_sniper", 0, "G_NATO_diver", 0, "G_IRAN_default", 0, "G_IRAN_diver", 0, "G_GUERIL_default", 20, "G_HAF_default", 20, "G_CIVIL_female", 10, "G_CIVIL_male", 20};
		model = "\A3\characters_f\heads\glasses\g_shades_blue";
		picture = "\A3\Characters_F\data\ui\icon_g_shades_blue_CA.paa";
	};
	class G_Shades_Green: None
	{
		_generalMacro = "G_Shades_Green";
		author = "Bohemia Interactive";
		displayname = "Shades (Green)";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\a3\characters_f\heads\glasses\data\joeyx_green_ca.paa"};
		identityTypes[] = {"G_CIVIL_aidworker", 100, "G_CIVIL_constructionworker", 60, "G_CIVIL_man", 80, "NoGlasses", 0, "G_NATO_default", 0, "G_NATO_casual", 0, "G_NATO_pilot", 0, "G_NATO_recon", 10, "G_NATO_SF", 0, "G_NATO_sniper", 0, "G_NATO_diver", 0, "G_IRAN_default", 0, "G_IRAN_diver", 0, "G_GUERIL_default", 20, "G_HAF_default", 20, "G_CIVIL_female", 10, "G_CIVIL_male", 20, "G_Competitor", 10};
		mass = 2;
		model = "\A3\characters_f_beta\heads\glasses\g_shades_green";
		picture = "\A3\Characters_F\data\ui\icon_g_shades_green_CA.paa";
	};
	class G_Shades_Red: None
	{
		_generalMacro = "G_Shades_Red";
		author = "Bohemia Interactive";
		displayname = "Shades (Red)";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\a3\characters_f\heads\glasses\data\joeyx_red_ca.paa"};
		identityTypes[] = {"G_CIVIL_aidworker", 100, "G_CIVIL_constructionworker", 60, "G_CIVIL_man", 80, "NoGlasses", 0, "G_NATO_default", 0, "G_NATO_casual", 0, "G_NATO_pilot", 0, "G_NATO_recon", 10, "G_NATO_SF", 0, "G_NATO_sniper", 0, "G_NATO_diver", 0, "G_IRAN_default", 0, "G_IRAN_diver", 0, "G_GUERIL_default", 20, "G_HAF_default", 20, "G_CIVIL_female", 10, "G_CIVIL_male", 20, "G_Competitor", 10};
		mass = 2;
		model = "\A3\characters_f_beta\heads\glasses\g_shades_red";
		picture = "\A3\Characters_F\data\ui\icon_g_shades_red_CA.paa";
	};
	class G_Spectacles: None
	{
		_generalMacro = "G_Spectacles";
		author = "Bohemia Interactive";
		displayname = "Spectacle Glasses";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\a3\characters_f\heads\glasses\data\spectacles_brown_ca.paa"};
		identityTypes[] = {"G_CIVIL_aidworker", 100, "G_CIVIL_constructionworker", 120, "G_CIVIL_man", 80, "NoGlasses", 0, "G_NATO_default", 0, "G_NATO_casual", 0, "G_NATO_pilot", 0, "G_NATO_recon", 5, "G_NATO_SF", 0, "G_NATO_sniper", 0, "G_NATO_diver", 0, "G_IRAN_default", 0, "G_IRAN_diver", 0, "G_GUERIL_default", 10, "G_HAF_default", 10, "G_CIVIL_female", 10, "G_CIVIL_male", 20};
		mass = 2;
		model = "\A3\characters_f_beta\heads\glasses\g_spectacles";
		picture = "\A3\Characters_F\data\ui\icon_g_spectacles_CA.paa";
	};
	class G_Spectacles_Tinted: None
	{
		_generalMacro = "G_Spectacles_Tinted";
		author = "Bohemia Interactive";
		displayname = "Tinted Spectacles";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\a3\characters_f\heads\glasses\data\spectacles_black_ca.paa"};
		identityTypes[] = {"G_CIVIL_aidworker", 160, "G_CIVIL_constructionworker", 120, "G_CIVIL_man", 80, "NoGlasses", 0, "G_NATO_default", 0, "G_NATO_casual", 0, "G_NATO_pilot", 0, "G_NATO_recon", 5, "G_NATO_SF", 0, "G_NATO_sniper", 0, "G_NATO_diver", 0, "G_IRAN_default", 0, "G_IRAN_diver", 0, "G_GUERIL_default", 10, "G_HAF_default", 10, "G_CIVIL_female", 10, "G_CIVIL_male", 20};
		mass = 2;
		model = "\A3\characters_f_beta\heads\glasses\g_spectacles_tinted";
		picture = "\A3\Characters_F\data\ui\icon_g_spectacles_tinted_CA.paa";
	};
	class G_Sport_Blackred: None
	{
		_generalMacro = "G_Sport_Blackred";
		author = "Bohemia Interactive";
		displayname = "Sport Shades (Vulcan)";
		identityTypes[] = {"NoGlasses", 0, "G_NATO_default", 0, "G_NATO_casual", 0, "G_NATO_pilot", 0, "G_NATO_recon", 5, "G_NATO_SF", 0, "G_NATO_sniper", 0, "G_NATO_diver", 0, "G_IRAN_default", 0, "G_IRAN_diver", 0, "G_GUERIL_default", 10, "G_HAF_default", 10, "G_CIVIL_female", 15, "G_CIVIL_male", 25};
		model = "\A3\characters_f\heads\glasses\g_sport_blackred";
		picture = "\A3\Characters_F\data\ui\icon_g_sport_blackred_CA.paa";
	};
	class G_Sport_BlackWhite: None
	{
		_generalMacro = "G_Sport_BlackWhite";
		author = "Bohemia Interactive";
		displayname = "Sport Shades (Shadow)";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\a3\characters_f\heads\glasses\data\sunglasses_sport_1_ca.paa"};
		identityTypes[] = {"NoGlasses", 0, "G_NATO_default", 0, "G_NATO_casual", 0, "G_NATO_pilot", 0, "G_NATO_recon", 5, "G_NATO_SF", 0, "G_NATO_sniper", 0, "G_NATO_diver", 0, "G_IRAN_default", 0, "G_IRAN_diver", 0, "G_GUERIL_default", 10, "G_HAF_default", 10, "G_CIVIL_female", 15, "G_CIVIL_male", 25};
		mass = 2;
		model = "\A3\characters_f_beta\heads\glasses\g_sport_blackWhite";
		picture = "\A3\Characters_F\data\ui\icon_g_sport_blackwhite_CA.paa";
	};
	class G_Sport_Blackyellow: None
	{
		_generalMacro = "G_Sport_Blackyellow";
		author = "Bohemia Interactive";
		displayname = "Sport Shades (Poison)";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\a3\characters_f\heads\glasses\data\sunglasses_sport_2_ca.paa"};
		identityTypes[] = {"NoGlasses", 0, "G_NATO_default", 0, "G_NATO_casual", 0, "G_NATO_pilot", 0, "G_NATO_recon", 5, "G_NATO_SF", 0, "G_NATO_sniper", 0, "G_NATO_diver", 0, "G_IRAN_default", 0, "G_IRAN_diver", 0, "G_GUERIL_default", 10, "G_HAF_default", 10, "G_CIVIL_female", 15, "G_CIVIL_male", 25};
		mass = 2;
		model = "\A3\characters_f_beta\heads\glasses\g_sport_blackyellow";
		picture = "\A3\Characters_F\data\ui\icon_g_sport_blackyellow_CA.paa";
	};
	class G_Sport_Checkered: None
	{
		_generalMacro = "G_Sport_Checkered";
		author = "Bohemia Interactive";
		displayname = "Sport Shades (Style)";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\a3\characters_f\heads\glasses\data\sunglasses_sport_6_ca.paa"};
		identityTypes[] = {"NoGlasses", 0, "G_NATO_default", 0, "G_NATO_casual", 0, "G_NATO_pilot", 0, "G_NATO_recon", 5, "G_NATO_SF", 0, "G_NATO_sniper", 0, "G_NATO_diver", 0, "G_IRAN_default", 0, "G_IRAN_diver", 0, "G_GUERIL_default", 10, "G_HAF_default", 10, "G_CIVIL_female", 15, "G_CIVIL_male", 25};
		mass = 2;
		model = "\A3\characters_f_beta\heads\glasses\g_sport_checkered";
		picture = "\A3\Characters_F\data\ui\icon_g_sport_checkered_CA.paa";
	};
	class G_Sport_Greenblack: None
	{
		_generalMacro = "G_Sport_Greenblack";
		author = "Bohemia Interactive";
		displayname = "Sport Shades (Yetti)";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\a3\characters_f\heads\glasses\data\sunglasses_sport_3_ca.paa"};
		identityTypes[] = {"NoGlasses", 0, "G_NATO_default", 0, "G_NATO_casual", 0, "G_NATO_pilot", 0, "G_NATO_recon", 5, "G_NATO_SF", 0, "G_NATO_sniper", 0, "G_NATO_diver", 0, "G_IRAN_default", 0, "G_IRAN_diver", 0, "G_GUERIL_default", 10, "G_HAF_default", 10, "G_CIVIL_female", 15, "G_CIVIL_male", 25};
		mass = 2;
		model = "\A3\characters_f_beta\heads\glasses\g_sport_greenblack";
		picture = "\A3\Characters_F\data\ui\icon_g_sport_greenblack_CA.paa";
	};
	class G_Sport_Red: None
	{
		_generalMacro = "G_Sport_Red";
		author = "Bohemia Interactive";
		displayname = "Sport Shades (Fire)";
		identityTypes[] = {"NoGlasses", 0, "G_NATO_default", 0, "G_NATO_casual", 0, "G_NATO_pilot", 0, "G_NATO_recon", 5, "G_NATO_SF", 0, "G_NATO_sniper", 0, "G_NATO_diver", 0, "G_IRAN_default", 0, "G_IRAN_diver", 0, "G_GUERIL_default", 0, "G_HAF_default", 10, "G_CIVIL_female", 15, "G_CIVIL_male", 25};
		mass = 2;
		model = "\A3\characters_f_beta\heads\glasses\g_sport_red";
		picture = "\A3\Characters_F\data\ui\icon_g_sport_red_CA.paa";
	};
	class G_Squares: None
	{
		_generalMacro = "G_Squares";
		author = "Bohemia Interactive";
		displayname = "Square Spectacles";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\a3\characters_f\civil\data\nikos_wear_ca.paa"};
		identityTypes[] = {"NoGlasses", 0, "G_NATO_default", 0, "G_NATO_casual", 0, "G_NATO_pilot", 0, "G_NATO_recon", 5, "G_NATO_SF", 0, "G_NATO_sniper", 0, "G_NATO_diver", 0, "G_IRAN_default", 0, "G_IRAN_diver", 0, "G_GUERIL_default", 10, "G_HAF_default", 10, "G_CIVIL_female", 10, "G_CIVIL_male", 15};
		mass = 2;
		model = "\A3\characters_f_beta\heads\glasses\g_squares";
		picture = "\A3\Characters_F\data\ui\icon_g_squares_CA.paa";
	};
	class G_Squares_Tinted: None
	{
		_generalMacro = "G_Squares_Tinted";
		author = "Bohemia Interactive";
		displayname = "Square Shades";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\a3\characters_f\civil\data\nikos_wear_co.paa"};
		identityTypes[] = {"NoGlasses", 0, "G_NATO_default", 0, "G_NATO_casual", 0, "G_NATO_pilot", 0, "G_NATO_recon", 5, "G_NATO_SF", 0, "G_NATO_sniper", 0, "G_NATO_diver", 0, "G_IRAN_default", 0, "G_IRAN_diver", 0, "G_GUERIL_default", 10, "G_HAF_default", 10, "G_CIVIL_female", 10, "G_CIVIL_male", 15};
		mass = 2;
		model = "\A3\characters_f_beta\heads\glasses\g_squares_tinted";
		picture = "\A3\Characters_F\data\ui\icon_g_squares_CA.paa";
	};
	class G_Tactical_Black: None
	{
		_generalMacro = "G_Tactical_Black";
		author = "Bohemia Interactive";
		displayname = "Tactical Shades";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\a3\characters_f\heads\glasses\data\tactical_3_ca.paa"};
		identityTypes[] = {"NoGlasses", 0, "G_NATO_default", 100, "G_NATO_casual", 0, "G_NATO_pilot", 0, "G_NATO_recon", 50, "G_NATO_SF", 100, "G_NATO_sniper", 0, "G_NATO_diver", 0, "G_IRAN_default", 0, "G_IRAN_diver", 0, "G_GUERIL_default", 0, "G_HAF_default", 50, "G_CIVIL_female", 0, "G_CIVIL_male", 0, "G_Competitor", 10};
		mass = 2;
		model = "\A3\characters_f_beta\heads\glasses\g_tactical_black";
		picture = "\A3\Characters_F\data\ui\icon_g_tactical_CA.paa";
	};
	class G_Tactical_Clear: None
	{
		_generalMacro = "G_Tactical_Clear";
		author = "Bohemia Interactive";
		displayname = "Tactical Glasses";
		identityTypes[] = {"NoGlasses", 0, "G_NATO_default", 250, "G_NATO_casual", 0, "G_NATO_pilot", 0, "G_NATO_recon", 50, "G_NATO_SF", 250, "G_NATO_sniper", 0, "G_NATO_diver", 0, "G_IRAN_default", 0, "G_IRAN_diver", 0, "G_GUERIL_default", 0, "G_HAF_default", 50, "G_CIVIL_female", 0, "G_CIVIL_male", 0, "G_Rangemaster", 1};
		model = "\A3\characters_f\heads\glasses\g_tactical_clear";
		picture = "\A3\Characters_F\data\ui\icon_g_tactical_CA.paa";
	};
	class G_WirelessEarpiece_base_F: None
	{
		_generalMacro = "G_WirelessEarpiece_base_F";
		author = "Bohemia Interactive";
		DLC = "Orange";
		hiddenSelections[] = {"Camo"};
		hiddenSelectionsTextures[] = {"\A3\Characters_F_Orange\Headgear\Data\H_WirelessEarpiece_co.paa"};
		identityTypes[] = {};
		mass = 2;
		model = "\A3\Characters_F_Orange\Headgear\H_WirelessEarpiece_F.p3d";
		scope = 0;
		scopeArsenal = 0;
		scopeCurator = 0;
	};
	class G_WirelessEarpiece_F: G_WirelessEarpiece_base_F
	{
		_generalMacro = "G_WirelessEarpiece_F";
		author = "Bohemia Interactive";
		displayName = "Wireless Earpiece";
		identityTypes[] = {"G_CIVIL_aidworker", 310};
		picture = "\A3\Characters_F_Orange\Headgear\Data\UI\icon_H_WirelessEarpiece_CA.paa";
		scope = 2;
		scopeArsenal = 2;
		scopeCurator = 2;
	};
	class None
	{
		displayname = "None";
		identityTypes[] = {"G_RUS_SF", 50, "G_CIVIL_aidworker", 200, "G_CIVIL_man", 150, "G_CIVIL_paramedic", 520, "G_CIVIL_constructionworker", 220, "NoGlasses", 1000, "G_NATO_default", 300, "G_NATO_casual", 550, "G_NATO_pilot", 1000, "G_NATO_recon", 595, "G_NATO_SF", 300, "G_NATO_sniper", 1000, "G_NATO_diver", 0, "G_IRAN_default", 1000, "G_IRAN_diver", 0, "G_GUERIL_default", 595, "G_HAF_default", 595, "G_CIVIL_female", 655, "G_CIVIL_male", 670, "g_Rangemaster", 0, "G_IRAN_officer", 500};
		mass = 1;
		model = "";
		name = "None";
		picture = "\A3\Characters_F\data\ui\icon_g_aviators_CA.paa";
		scope = 2;
	};
};
