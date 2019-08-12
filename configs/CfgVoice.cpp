class CfgVoice
{
	access = 0;
	default = "Male01ENG";
	femaleVoices[] = {};
	micOuts[] = {"micOut1", "micOut2", "micOut3", "micOut4", "micOut5", "micOut6"};
	preview = "preview.ogg";
	voicePlayer = "NoVoice";
	voices[] = {"Male01CHI", "Male02CHI", "Male03CHI", "Male01FRE", "Male02FRE", "Male03FRE", "Male01ENGFRE", "Male02ENGFRE", "Male01ENG", "Male02ENG", "Male03ENG", "Male04ENG", "Male05ENG", "Male06ENG", "Male07ENG", "Male08ENG", "Male09ENG", "Male10ENG", "Male11ENG", "Male12ENG", "Male01ENGB", "Male02ENGB", "Male03ENGB", "Male04ENGB", "Male05ENGB", "Male01PER", "Male02PER", "Male03PER", "Male01GRE", "Male02GRE", "Male03GRE", "Male04GRE", "Male05GRE", "Male06GRE", "Male01ENGVR", "Male01GREVR", "Male01PERVR", "Male01Pol", "Male02Pol", "Male03Pol", "Male01Rus", "Male02Rus", "Male03Rus"};
	class Base
	{
		directories[] = {"", ""};
		icon = "#(argb,8,8,3)color(0,0,0,0)";
		protocol = "RadioProtocolBase";
		scope = 0;
		variants[] = {0.95, 1, 1.05};
		voiceType = "";
	};
	class CHI: Base
	{
		icon = "\a3\Ui_f\data\Map\Markers\Flags\viper_ca.paa";
		identityTypes[] = {"LanguageCHI_F"};
		protocol = "RadioProtocolCHI";
	};
	class ENG: Base
	{
		icon = "\a3\Ui_f\data\Map\Markers\Flags\usa_ca.paa";
		identityTypes[] = {"default", "Head_USMC", "Head_USMC_CO", "Head_USMC_Camo", "Head_USMC_CO_Camo", "Head_Default", "Head_Special", "LanguageENG_F"};
		protocol = "RadioProtocolENG";
	};
	class ENGB: Base
	{
		icon = "\a3\Ui_f\data\Map\Markers\Flags\uk_ca.paa";
		identityTypes[] = {"default", "Head_USMC", "Head_USMC_CO", "Head_USMC_Camo", "Head_USMC_CO_Camo", "Head_Default", "Head_Special", "LanguageENGB_F"};
		protocol = "RadioProtocolENG";
	};
	class ENGFRE: ENG
	{
		icon = "\a3\Ui_f\data\Map\Markers\Flags\tanoa_ca.paa";
		identityTypes[] = {"LanguageENGFRE_F"};
	};
	class ENGVR: Base
	{
		icon = "\a3\Ui_f\data\Map\Markers\Flags\usa_ca.paa";
		identityTypes[] = {"LanguageENGVR_F"};
		protocol = "RadioProtocolENG";
	};
	class FRE: Base
	{
		icon = "\a3\Ui_f\data\Map\Markers\Flags\syndicat_ca.paa";
		identityTypes[] = {"LanguageFRE_F"};
		protocol = "RadioProtocolFRE";
	};
	class GRE: Base
	{
		icon = "\a3\Ui_f\data\Map\Markers\Flags\altis_ca.paa";
		identityTypes[] = {"default", "Head_USMC", "Head_USMC_CO", "Head_USMC_Camo", "Head_USMC_CO_Camo", "Head_Default", "Head_Special", "LanguageGRE_F"};
		protocol = "RadioProtocolGRE";
	};
	class GREVR: Base
	{
		icon = "\a3\Ui_f\data\Map\Markers\Flags\altis_ca.paa";
		identityTypes[] = {"LanguageGREVR_F"};
		protocol = "RadioProtocolGRE";
	};
	class Male01CHI: CHI
	{
		author = "Bohemia Interactive";
		directories[] = {"\A3\Dubbing_Radio_F_EXP\data\CHI\Male01CHI\", "\A3\Dubbing_Radio_F_EXP\data\CHI\Male01CHI\"};
		displayName = "Chinese 01";
		scope = 2;
	};
	class Male01ENG: ENG
	{
		author = "Bohemia Interactive";
		directories[] = {"\A3\Dubbing_Radio_F\data\ENG\Male01ENG\", "\A3\Dubbing_Radio_F\data\ENG\Male01ENG\"};
		displayName = "American English 01";
		scope = 2;
	};
	class Male01ENGB: ENGB
	{
		author = "Bohemia Interactive";
		directories[] = {"\A3\Dubbing_Radio_F\data\ENGB\Male01ENGB\", "\A3\Dubbing_Radio_F\data\ENGB\Male01ENGB\"};
		displayName = "British English 01";
		scope = 2;
	};
	class Male01ENGFRE: ENGFRE
	{
		author = "Bohemia Interactive";
		directories[] = {"\A3\Dubbing_Radio_F_EXP\data\ENGFRE\Male01ENGFRE\", "\A3\Dubbing_Radio_F_EXP\data\ENGFRE\Male01ENGFRE\"};
		displayName = "French English 01";
		scope = 2;
	};
	class Male01ENGVR: ENGVR
	{
		author = "Bohemia Interactive";
		directories[] = {"\A3\Dubbing_Radio_F\data\VR\Male01ENGVR\", "\A3\Dubbing_Radio_F\data\VR\Male01ENGVR\"};
		displayName = "English VR 01";
		scope = 2;
	};
	class Male01FRE: FRE
	{
		author = "Bohemia Interactive";
		directories[] = {"\A3\Dubbing_Radio_F_EXP\data\FRE\Male01FRE\", "\A3\Dubbing_Radio_F_EXP\data\FRE\Male01FRE\"};
		displayName = "French 01";
		scope = 2;
	};
	class Male01GRE: GRE
	{
		author = "Bohemia Interactive";
		directories[] = {"\A3\Dubbing_Radio_F\data\GRE\Male01GRE\", "\A3\Dubbing_Radio_F\data\GRE\Male01GRE\"};
		displayName = "Altian English 01";
		scope = 2;
	};
	class Male01GREVR: GREVR
	{
		author = "Bohemia Interactive";
		directories[] = {"\A3\Dubbing_Radio_F\data\VR\Male01GREVR\", "\A3\Dubbing_Radio_F\data\VR\Male01GREVR\"};
		displayName = "Altian English VR 01";
		scope = 2;
	};
	class Male01PER: PER
	{
		author = "Bohemia Interactive";
		directories[] = {"\A3\Dubbing_Radio_F\data\PER\Male01PER\", "\A3\Dubbing_Radio_F\data\PER\Male01PER\"};
		displayName = "Farsi 01";
		scope = 2;
	};
	class Male01PERVR: PERVR
	{
		author = "Bohemia Interactive";
		directories[] = {"\A3\Dubbing_Radio_F\data\VR\Male01PERVR\", "\A3\Dubbing_Radio_F\data\VR\Male01PERVR\"};
		displayName = "Farsi VR 01";
		scope = 2;
	};
	class Male01POL: POL
	{
		author = "Bohemia Interactive";
		directories[] = {"\A3\Dubbing_Radio_F_Enoch\data\POL\Male01POL\", "\A3\Dubbing_Radio_F_Enoch\data\POL\Male01POL\"};
		displayName = "Polish 01";
		scope = 2;
	};
	class Male01RUS: RUS
	{
		author = "Bohemia Interactive";
		directories[] = {"\A3\Dubbing_Radio_F_Enoch\data\RUS\Male01RUS\", "\A3\Dubbing_Radio_F_Enoch\data\RUS\Male01RUS\"};
		displayName = "Russian 01";
		scope = 2;
	};
	class Male02CHI: CHI
	{
		author = "Bohemia Interactive";
		directories[] = {"\A3\Dubbing_Radio_F_EXP\data\CHI\Male02CHI\", "\A3\Dubbing_Radio_F_EXP\data\CHI\Male02CHI\"};
		displayName = "Chinese 02";
		scope = 2;
	};
	class Male02ENG: ENG
	{
		author = "Bohemia Interactive";
		directories[] = {"\A3\Dubbing_Radio_F\data\ENG\Male02ENG\", "\A3\Dubbing_Radio_F\data\ENG\Male02ENG\"};
		displayName = "American English 02";
		scope = 2;
	};
	class Male02ENGB: ENGB
	{
		author = "Bohemia Interactive";
		directories[] = {"\A3\Dubbing_Radio_F\data\ENGB\Male02ENGB\", "\A3\Dubbing_Radio_F\data\ENGB\Male02ENGB\"};
		displayName = "British English 02";
		scope = 2;
	};
	class Male02ENGFRE: ENGFRE
	{
		author = "Bohemia Interactive";
		directories[] = {"\A3\Dubbing_Radio_F_EXP\data\ENGFRE\Male02ENGFRE\", "\A3\Dubbing_Radio_F_EXP\data\ENGFRE\Male02ENGFRE\"};
		displayName = "French English 02";
		scope = 2;
	};
	class Male02FRE: FRE
	{
		author = "Bohemia Interactive";
		directories[] = {"\A3\Dubbing_Radio_F_EXP\data\FRE\Male02FRE\", "\A3\Dubbing_Radio_F_EXP\data\FRE\Male02FRE\"};
		displayName = "French 02";
		scope = 2;
	};
	class Male02GRE: GRE
	{
		author = "Bohemia Interactive";
		directories[] = {"\A3\Dubbing_Radio_F\data\GRE\Male02GRE\", "\A3\Dubbing_Radio_F\data\GRE\Male02GRE\"};
		displayName = "Altian English 02";
		scope = 2;
	};
	class Male02PER: PER
	{
		author = "Bohemia Interactive";
		directories[] = {"\A3\Dubbing_Radio_F\data\PER\Male02PER\", "\A3\Dubbing_Radio_F\data\PER\Male02PER\"};
		displayName = "Farsi 02";
		scope = 2;
	};
	class Male02POL: POL
	{
		author = "Bohemia Interactive";
		directories[] = {"\A3\Dubbing_Radio_F_Enoch\data\POL\Male02POL\", "\A3\Dubbing_Radio_F_Enoch\data\POL\Male02POL\"};
		displayName = "Polish 02";
		scope = 2;
	};
	class Male02RUS: RUS
	{
		author = "Bohemia Interactive";
		directories[] = {"\A3\Dubbing_Radio_F_Enoch\data\RUS\Male02RUS\", "\A3\Dubbing_Radio_F_Enoch\data\RUS\Male02RUS\"};
		displayName = "Russian 02";
		scope = 2;
	};
	class Male03CHI: CHI
	{
		author = "Bohemia Interactive";
		directories[] = {"\A3\Dubbing_Radio_F_EXP\data\CHI\Male03CHI\", "\A3\Dubbing_Radio_F_EXP\data\CHI\Male03CHI\"};
		displayName = "Chinese 03";
		scope = 2;
	};
	class Male03ENG: ENG
	{
		author = "Bohemia Interactive";
		directories[] = {"\A3\Dubbing_Radio_F\data\ENG\Male03ENG\", "\A3\Dubbing_Radio_F\data\ENG\Male03ENG\"};
		displayName = "American English 03";
		scope = 2;
	};
	class Male03ENGB: ENGB
	{
		author = "Bohemia Interactive";
		directories[] = {"\A3\Dubbing_Radio_F\data\ENGB\Male03ENGB\", "\A3\Dubbing_Radio_F\data\ENGB\Male03ENGB\"};
		displayName = "British English 03";
		scope = 2;
	};
	class Male03FRE: FRE
	{
		author = "Bohemia Interactive";
		directories[] = {"\A3\Dubbing_Radio_F_EXP\data\FRE\Male03FRE\", "\A3\Dubbing_Radio_F_EXP\data\FRE\Male03FRE\"};
		displayName = "French 03";
		scope = 2;
	};
	class Male03GRE: GRE
	{
		author = "Bohemia Interactive";
		directories[] = {"\A3\Dubbing_Radio_F\data\GRE\Male03GRE\", "\A3\Dubbing_Radio_F\data\GRE\Male03GRE\"};
		displayName = "Altian English 03";
		scope = 2;
	};
	class Male03PER: PER
	{
		author = "Bohemia Interactive";
		directories[] = {"\A3\Dubbing_Radio_F\data\PER\Male03PER\", "\A3\Dubbing_Radio_F\data\PER\Male03PER\"};
		displayName = "Farsi 03";
		scope = 2;
	};
	class Male03POL: POL
	{
		author = "Bohemia Interactive";
		directories[] = {"\A3\Dubbing_Radio_F_Enoch\data\POL\Male03POL\", "\A3\Dubbing_Radio_F_Enoch\data\POL\Male03POL\"};
		displayName = "Polish 03";
		scope = 2;
	};
	class Male03RUS: RUS
	{
		author = "Bohemia Interactive";
		directories[] = {"\A3\Dubbing_Radio_F_Enoch\data\RUS\Male03RUS\", "\A3\Dubbing_Radio_F_Enoch\data\RUS\Male03RUS\"};
		displayName = "Russian 03";
		scope = 2;
	};
	class Male04ENG: ENG
	{
		author = "Bohemia Interactive";
		directories[] = {"\A3\Dubbing_Radio_F\data\ENG\Male04ENG\", "\A3\Dubbing_Radio_F\data\ENG\Male04ENG\"};
		displayName = "American English 04";
		scope = 2;
	};
	class Male04ENGB: ENGB
	{
		author = "Bohemia Interactive";
		directories[] = {"\A3\Dubbing_Radio_F\data\ENGB\Male04ENGB\", "\A3\Dubbing_Radio_F\data\ENGB\Male04ENGB\"};
		displayName = "British English 04";
		scope = 2;
	};
	class Male04GRE: GRE
	{
		author = "Bohemia Interactive";
		directories[] = {"\A3\Dubbing_Radio_F\data\GRE\Male04GRE\", "\A3\Dubbing_Radio_F\data\GRE\Male04GRE\"};
		displayName = "Altian English 04";
		scope = 2;
	};
	class Male05ENG: ENG
	{
		author = "Bohemia Interactive";
		directories[] = {"\A3\Dubbing_Radio_F\data\ENG\Male05ENG\", "\A3\Dubbing_Radio_F\data\ENG\Male05ENG\"};
		displayName = "American English 05";
		scope = 2;
	};
	class Male05ENGB: ENGB
	{
		author = "Bohemia Interactive";
		directories[] = {"\A3\Dubbing_Radio_F\data\ENGB\Male05ENGB\", "\A3\Dubbing_Radio_F\data\ENGB\Male05ENGB\"};
		displayName = "British English 05";
		scope = 2;
	};
	class Male05GRE: GRE
	{
		author = "Bohemia Interactive";
		directories[] = {"\A3\Dubbing_Radio_F\data\GRE\Male05GRE\", "\A3\Dubbing_Radio_F\data\GRE\Male05GRE\"};
		displayName = "Altian English 05";
		scope = 2;
	};
	class Male06ENG: ENG
	{
		author = "Bohemia Interactive";
		directories[] = {"\A3\Dubbing_Radio_F\data\ENG\Male06ENG\", "\A3\Dubbing_Radio_F\data\ENG\Male06ENG\"};
		displayName = "American English 06";
		scope = 2;
	};
	class Male06GRE: GRE
	{
		author = "Bohemia Interactive";
		directories[] = {"\A3\Dubbing_Radio_F\data\GRE\Male06GRE\", "\A3\Dubbing_Radio_F\data\GRE\Male06GRE\"};
		displayName = "Altian English 06";
		scope = 2;
	};
	class Male07ENG: ENG
	{
		author = "Bohemia Interactive";
		directories[] = {"\A3\Dubbing_Radio_F\data\ENG\Male07ENG\", "\A3\Dubbing_Radio_F\data\ENG\Male07ENG\"};
		displayName = "American English 07";
		scope = 2;
	};
	class Male08ENG: ENG
	{
		author = "Bohemia Interactive";
		directories[] = {"\A3\Dubbing_Radio_F\data\ENG\Male08ENG\", "\A3\Dubbing_Radio_F\data\ENG\Male08ENG\"};
		displayName = "American English 08";
		scope = 2;
	};
	class Male09ENG: ENG
	{
		author = "Bohemia Interactive";
		directories[] = {"\A3\Dubbing_Radio_F\data\ENG\Male09ENG\", "\A3\Dubbing_Radio_F\data\ENG\Male09ENG\"};
		displayName = "American English 09";
		scope = 2;
	};
	class Male10ENG: ENG
	{
		author = "Bohemia Interactive";
		directories[] = {"\A3\Dubbing_Radio_F\data\ENG\Male10ENG\", "\A3\Dubbing_Radio_F\data\ENG\Male10ENG\"};
		displayName = "American English 10";
		scope = 2;
	};
	class Male11ENG: ENG
	{
		author = "Bohemia Interactive";
		directories[] = {"\A3\Dubbing_Radio_F\data\ENG\Male11ENG\", "\A3\Dubbing_Radio_F\data\ENG\Male11ENG\"};
		displayName = "American English 11";
		scope = 2;
	};
	class Male12ENG: ENG
	{
		author = "Bohemia Interactive";
		directories[] = {"\A3\Dubbing_Radio_F\data\ENG\Male12ENG\", "\A3\Dubbing_Radio_F\data\ENG\Male12ENG\"};
		displayName = "American English 12";
		scope = 2;
	};
	class NoVoice
	{
		directories[] = {"", ""};
		identityTypes[] = {"Default"};
		protocol = "RadioProtocolBase";
		scope = 2;
		variants[] = {1};
		voiceType = "";
	};
	class PER: Base
	{
		icon = "\a3\Ui_f\data\Map\Markers\Flags\csat_ca.paa";
		identityTypes[] = {"default", "Head_USMC", "Head_USMC_CO", "Head_USMC_Camo", "Head_USMC_CO_Camo", "Head_Default", "Head_Special", "LanguagePER_F"};
		protocol = "RadioProtocolPER";
	};
	class PERVR: Base
	{
		icon = "\a3\Ui_f\data\Map\Markers\Flags\csat_ca.paa";
		identityTypes[] = {"LanguagePERVR_F"};
		protocol = "RadioProtocolPER";
	};
	class POL: Base
	{
		icon = "\a3\UI_F_Enoch\Data\CfgMarkers\Livonia_CA.paa";
		identityTypes[] = {"LanguagePOL_F"};
		protocol = "RadioProtocolPOL";
	};
	class RUS: Base
	{
		icon = "\a3\UI_F_Enoch\Data\CfgMarkers\Russia_CA.paa";
		identityTypes[] = {"LanguageRUS_F"};
		protocol = "RadioProtocolRUS";
	};
};
