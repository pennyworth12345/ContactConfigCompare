class CfgTimeTrials
{
	colorsMedals[] = {"#A0522D", "#C0C0C0", "#FFD700"};
	iconsMedals[] = {"A3\modules_f_beta\data\FiringDrills\medal_bronze_ca", "A3\modules_f_beta\data\FiringDrills\medal_silver_ca", "A3\modules_f_beta\data\FiringDrills\medal_gold_ca"};
	music[] = {"BackgroundTrack01_F", "BackgroundTrack01_F_EPB", "BackgroundTrack01_F_EPC", "BackgroundTrack02_F_EPC", "BackgroundTrack03_F", "BackgroundTrack04_F_EPC"};
	penaltyMissed = 100;
	pointTimeMultiplier = 0.1;
	class Helpers
	{
		class Sign_Circle_F
		{
			3DIcon = "badge_simple";
			autoOrient = 1;
			triggerRadius = 14;
		};
	};
	class SP_TT01
	{
		color[] = {0.941176, 0.509804, 0.192157, 1};
		colorName = "orange";
		decals[] = {};
		displayName = "TT1: Circuit Training";
		leaderboard = 812543;
		looped = 1;
		noDefaultGPS = 1;
		objectTT = "BIS_TT";
		quitSelectors[] = {"BIS_TT_quitSelector1"};
		recolor[] = {"BIS_TT_recolor1", "BIS_TT_recolor2", "BIS_TT_recolor3", "BIS_TT_recolor4", "BIS_TT_recolor5", "BIS_TT_recolor6", "BIS_TT_recolor7", "BIS_TT_recolor8", "BIS_TT_recolor9", "BIS_TT_recolor10", "BIS_TT_recolor11", "BIS_TT_recolor12", "BIS_TT_recolor13", "BIS_TT_recolor14", "BIS_TT_recolor15", "BIS_TT_recolor16", "BIS_TT_recolor17", "BIS_TT_recolor18", "BIS_TT_recolor19", "BIS_TT_recolor20", "BIS_TT_recolor21", "BIS_TT_recolor22", "BIS_TT_recolor23", "BIS_TT_recolor24", "BIS_TT_recolor29", "BIS_TT_recolor30", "BIS_TT_recolor31", "BIS_TT_recolor32", "BIS_TT_recolor33", "BIS_TT_recolor34"};
		restartSelectors[] = {"BIS_TT_restartSelector1"};
		statistic = "TT01";
		timesMedals[] = {24.6, 22, 19.32};
		class CheckPoints
		{
			class CP1
			{
				object = "BIS_TT_CP1";
			};
			class CP2
			{
				object = "BIS_TT_CP2";
			};
			class CP3
			{
				object = "BIS_TT_CP3";
			};
			class CP4
			{
				object = "BIS_TT_CP4";
			};
			class CP5
			{
				object = "BIS_TT_CP5";
			};
			class CP6
			{
				object = "BIS_TT_CP6";
			};
			class CP8
			{
				object = "BIS_TT_CP8";
			};
			class CP9
			{
				object = "BIS_TT_CP9";
			};
		};
		class DynOs
		{
			class DynO1
			{
				positionAnchor[] = {14145, 16473.7};
				script = "dyno_sp_tt01.sqf";
			};
		};
	};
	class SP_TT02
	{
		color[] = {0.941176, 0.509804, 0.192157, 1};
		colorName = "orange";
		decals[] = {};
		displayName = "TT2: Kavala Chase";
		leaderboard = 812544;
		noDefaultGPS = 1;
		objectTT = "BIS_TT";
		quitSelectors[] = {"BIS_TT_quitSelector1"};
		recolor[] = {"BIS_TT_recolor1", "BIS_TT_recolor2", "BIS_TT_recolor3", "BIS_TT_recolor4", "BIS_TT_recolor5", "BIS_TT_recolor6", "BIS_TT_recolor7", "BIS_TT_recolor8", "BIS_TT_recolor9", "BIS_TT_recolor10", "BIS_TT_recolor11", "BIS_TT_recolor12", "BIS_TT_recolor13", "BIS_TT_recolor14", "BIS_TT_recolor15", "BIS_TT_recolor16", "BIS_TT_recolor17", "BIS_TT_recolor18", "BIS_TT_recolor19", "BIS_TT_recolor20", "BIS_TT_recolor21", "BIS_TT_recolor22", "BIS_TT_recolor23", "BIS_TT_recolor24", "BIS_TT_recolor25", "BIS_TT_recolor26", "BIS_TT_recolor27", "BIS_TT_recolor28", "BIS_TT_recolor29", "BIS_TT_recolor30", "BIS_TT_recolor31", "BIS_TT_recolor32", "BIS_TT_recolor33", "BIS_TT_recolor34", "BIS_TT_recolor35", "BIS_TT_recolor36", "BIS_TT_recolor37", "BIS_TT_recolor38", "BIS_TT_recolor39", "BIS_TT_recolor40", "BIS_TT_recolor41", "BIS_TT_recolor42", "BIS_TT_recolor43", "BIS_TT_recolor44", "BIS_TT_recolor45", "BIS_TT_recolor46", "BIS_TT_recolor47", "BIS_TT_recolor48", "BIS_TT_recolor49", "BIS_TT_recolor50", "BIS_TT_recolor51", "BIS_TT_recolor52", "BIS_TT_recolor53", "BIS_TT_recolor54", "BIS_TT_recolor55", "BIS_TT_recolor56", "BIS_TT_recolor57", "BIS_TT_recolor58", "BIS_TT_recolor59", "BIS_TT_recolor60", "BIS_TT_recolor61", "BIS_TT_recolor62", "BIS_TT_recolor63", "BIS_TT_recolor64", "BIS_TT_recolor65", "BIS_TT_recolor66", "BIS_TT_recolor67", "BIS_TT_recolor68", "BIS_TT_recolor69", "BIS_TT_recolor70", "BIS_TT_recolor71", "BIS_TT_recolor72", "BIS_TT_recolor73", "BIS_TT_recolor74", "BIS_TT_recolor75", "BIS_TT_recolor76", "BIS_TT_recolor77", "BIS_TT_recolor78", "BIS_TT_recolor79", "BIS_TT_recolor80", "BIS_TT_recolor81", "BIS_TT_recolor82", "BIS_TT_recolor83", "BIS_TT_recolor84", "BIS_TT_recolor85", "BIS_TT_recolor86", "BIS_TT_recolor87", "BIS_TT_recolor88", "BIS_TT_recolor89", "BIS_TT_recolor90", "BIS_TT_recolor91", "BIS_TT_recolor92", "BIS_TT_recolor93", "BIS_TT_recolor94", "BIS_TT_recolor95", "BIS_TT_recolor96", "BIS_TT_recolor97", "BIS_TT_recolor98", "BIS_TT_recolor99", "BIS_TT_recolor100", "BIS_TT_recolor101", "BIS_TT_recolor102", "BIS_TT_recolor103", "BIS_TT_recolor104", "BIS_TT_recolor105", "BIS_TT_recolor106", "BIS_TT_recolor107", "BIS_TT_recolor108", "BIS_TT_recolor109", "BIS_TT_recolor110", "BIS_TT_recolor111", "BIS_TT_recolor112", "BIS_TT_recolor113", "BIS_TT_recolor114", "BIS_TT_recolor115", "BIS_TT_recolor116", "BIS_TT_recolor117", "BIS_TT_recolor118", "BIS_TT_recolor119", "BIS_TT_recolor120", "BIS_TT_recolor121", "BIS_TT_recolor122", "BIS_TT_recolor123", "BIS_TT_recolor124", "BIS_TT_recolor125", "BIS_TT_recolor126", "BIS_TT_recolor127", "BIS_TT_recolor128", "BIS_TT_recolor129", "BIS_TT_recolor120", "BIS_TT_recolor131", "BIS_TT_recolor132", "BIS_TT_recolor133", "BIS_TT_recolor134", "BIS_TT_recolor135", "BIS_TT_recolor136", "BIS_TT_recolor137", "BIS_TT_recolor138", "BIS_TT_recolor139", "BIS_TT_recolor140", "BIS_TT_recolor141", "BIS_TT_recolor142", "BIS_TT_recolor143", "BIS_TT_recolor144", "BIS_TT_recolor145", "BIS_TT_recolor146", "BIS_TT_recolor147"};
		restartSelectors[] = {"BIS_TT_restartSelector1"};
		statistic = "TT02";
		timesMedals[] = {175, 163.33, 154};
		class CheckPoints
		{
			class CP1
			{
				object = "BIS_TT_CP1";
			};
			class CP10
			{
				object = "BIS_TT_CP10";
			};
			class CP11
			{
				object = "BIS_TT_CP11";
			};
			class CP12
			{
				object = "BIS_TT_CP12";
			};
			class CP13
			{
				object = "BIS_TT_CP13";
			};
			class CP14
			{
				object = "BIS_TT_CP14";
			};
			class CP15
			{
				object = "BIS_TT_CP15";
			};
			class CP16
			{
				object = "BIS_TT_CP16";
			};
			class CP17
			{
				object = "BIS_TT_CP17";
			};
			class CP18
			{
				object = "BIS_TT_CP18";
			};
			class CP19
			{
				object = "BIS_TT_CP19";
			};
			class CP2
			{
				object = "BIS_TT_CP2";
			};
			class CP20
			{
				object = "BIS_TT_CP20";
			};
			class CP21
			{
				object = "BIS_TT_CP21";
			};
			class CP22
			{
				object = "BIS_TT_CP22";
			};
			class CP23
			{
				object = "BIS_TT_CP23";
			};
			class CP24
			{
				object = "BIS_TT_CP24";
			};
			class CP25
			{
				object = "BIS_TT_CP25";
			};
			class CP26
			{
				object = "BIS_TT_CP26";
			};
			class CP27
			{
				object = "BIS_TT_CP27";
			};
			class CP28
			{
				object = "BIS_TT_CP28";
			};
			class CP29
			{
				object = "BIS_TT_CP29";
			};
			class CP3
			{
				object = "BIS_TT_CP3";
			};
			class CP30
			{
				object = "BIS_TT_CP30";
			};
			class CP31
			{
				object = "BIS_TT_CP31";
			};
			class CP32
			{
				object = "BIS_TT_CP32";
			};
			class CP33
			{
				object = "BIS_TT_CP33";
			};
			class CP34
			{
				object = "BIS_TT_CP34";
			};
			class CP35
			{
				object = "BIS_TT_CP35";
			};
			class CP36
			{
				object = "BIS_TT_CP36";
			};
			class CP37
			{
				object = "BIS_TT_CP37";
			};
			class CP38
			{
				object = "BIS_TT_CP38";
			};
			class CP4
			{
				object = "BIS_TT_CP4";
			};
			class CP5
			{
				object = "BIS_TT_CP5";
			};
			class CP6
			{
				object = "BIS_TT_CP6";
			};
			class CP7
			{
				object = "BIS_TT_CP7";
			};
			class CP8
			{
				object = "BIS_TT_CP8";
			};
			class CP9
			{
				object = "BIS_TT_CP9";
			};
		};
		class DynOs
		{
			class DynO1
			{
				positionAnchor[] = {3521.02, 13516.2};
				script = "dyno_sp_tt02.sqf";
			};
		};
	};
	class SP_TT03
	{
		color[] = {0.941176, 0.509804, 0.192157, 1};
		colorName = "orange";
		decals[] = {};
		displayName = "TT3: Industrial Loop";
		leaderboard = 812545;
		looped = 1;
		noDefaultGPS = 1;
		objectTT = "BIS_TT";
		quitSelectors[] = {"BIS_TT_quitSelector1"};
		recolor[] = {"BIS_TT_recolor1", "BIS_TT_recolor2", "BIS_TT_recolor3", "BIS_TT_recolor4", "BIS_TT_recolor5", "BIS_TT_recolor6", "BIS_TT_recolor7", "BIS_TT_recolor8", "BIS_TT_recolor9", "BIS_TT_recolor10", "BIS_TT_recolor11", "BIS_TT_recolor12", "BIS_TT_recolor13", "BIS_TT_recolor14", "BIS_TT_recolor15", "BIS_TT_recolor16", "BIS_TT_recolor17", "BIS_TT_recolor18", "BIS_TT_recolor19", "BIS_TT_recolor20", "BIS_TT_recolor21", "BIS_TT_recolor22", "BIS_TT_recolor23", "BIS_TT_recolor24", "BIS_TT_recolor25", "BIS_TT_recolor26", "BIS_TT_recolor27", "BIS_TT_recolor28", "BIS_TT_recolor29", "BIS_TT_recolor30", "BIS_TT_recolor31", "BIS_TT_recolor32", "BIS_TT_recolor33", "BIS_TT_recolor34", "BIS_TT_recolor35", "BIS_TT_recolor36", "BIS_TT_recolor37", "BIS_TT_recolor38", "BIS_TT_recolor39", "BIS_TT_recolor40", "BIS_TT_recolor41", "BIS_TT_recolor42", "BIS_TT_recolor43", "BIS_TT_recolor44"};
		restartSelectors[] = {"BIS_TT_restartSelector1"};
		statistic = "TT03";
		timesMedals[] = {35.2, 34.12, 31.666};
		class CheckPoints
		{
			class CP10
			{
				object = "BIS_TT_CP10";
			};
			class CP12
			{
				object = "BIS_TT_CP12";
			};
			class CP13
			{
				object = "BIS_TT_CP13";
			};
			class CP15
			{
				object = "BIS_TT_CP15";
			};
			class CP16
			{
				object = "BIS_TT_CP16";
			};
			class CP17
			{
				object = "BIS_TT_CP17";
			};
			class CP18
			{
				object = "BIS_TT_CP18";
			};
			class CP2
			{
				object = "BIS_TT_CP2";
			};
			class CP3
			{
				object = "BIS_TT_CP3";
			};
			class CP4
			{
				object = "BIS_TT_CP4";
			};
			class CP6
			{
				object = "BIS_TT_CP6";
			};
			class CP8
			{
				object = "BIS_TT_CP8";
			};
		};
		class DynOs
		{
			class DynO1
			{
				positionAnchor[] = {14322.4, 18926.9};
				script = "dyno_sp_tt03.sqf";
			};
		};
	};
	class SP_TT04
	{
		color[] = {0.941176, 0.509804, 0.192157, 1};
		colorName = "orange";
		decals[] = {};
		displayName = "TT4: Negades Speedway";
		leaderboard = 812546;
		looped = 1;
		noDefaultGPS = 1;
		objectTT = "BIS_TT";
		quitSelectors[] = {"BIS_TT_quitSelector1"};
		recolor[] = {"BIS_TT_recolor1", "BIS_TT_recolor2", "BIS_TT_recolor3", "BIS_TT_recolor4", "BIS_TT_recolor5", "BIS_TT_recolor6", "BIS_TT_recolor7", "BIS_TT_recolor8", "BIS_TT_recolor9", "BIS_TT_recolor10", "BIS_TT_recolor11", "BIS_TT_recolor12", "BIS_TT_recolor13", "BIS_TT_recolor14", "BIS_TT_recolor15", "BIS_TT_recolor16", "BIS_TT_recolor17", "BIS_TT_recolor18", "BIS_TT_recolor19", "BIS_TT_recolor20", "BIS_TT_recolor21", "BIS_TT_recolor22", "BIS_TT_recolor23", "BIS_TT_recolor24", "BIS_TT_recolor25", "BIS_TT_recolor26", "BIS_TT_recolor27", "BIS_TT_recolor28", "BIS_TT_recolor29", "BIS_TT_recolor30", "BIS_TT_recolor31", "BIS_TT_recolor32", "BIS_TT_recolor33", "BIS_TT_recolor34", "BIS_TT_recolor35", "BIS_TT_recolor36", "BIS_TT_recolor37", "BIS_TT_recolor38", "BIS_TT_recolor39", "BIS_TT_recolor40", "BIS_TT_recolor41", "BIS_TT_recolor42", "BIS_TT_recolor43", "BIS_TT_recolor44", "BIS_TT_recolor45", "BIS_TT_recolor46", "BIS_TT_recolor47", "BIS_TT_recolor48", "BIS_TT_recolor49", "BIS_TT_recolor50", "BIS_TT_recolor51", "BIS_TT_recolor52", "BIS_TT_recolor53", "BIS_TT_recolor54"};
		restartSelectors[] = {"BIS_TT_restartSelector1"};
		statistic = "TT04";
		timesMedals[] = {85, 79.3, 74.1};
		class CheckPoints
		{
			class CP1
			{
				object = "BIS_TT_CP1";
			};
			class CP10
			{
				object = "BIS_TT_CP10";
			};
			class CP11
			{
				object = "BIS_TT_CP11";
			};
			class CP12
			{
				object = "BIS_TT_CP12";
			};
			class CP13
			{
				object = "BIS_TT_CP13";
			};
			class CP14
			{
				object = "BIS_TT_CP14";
			};
			class CP2
			{
				object = "BIS_TT_CP2";
			};
			class CP3
			{
				object = "BIS_TT_CP3";
			};
			class CP4
			{
				object = "BIS_TT_CP4";
			};
			class CP5
			{
				object = "BIS_TT_CP5";
			};
			class CP6
			{
				object = "BIS_TT_CP6";
			};
			class CP7
			{
				object = "BIS_TT_CP7";
			};
			class CP8
			{
				object = "BIS_TT_CP8";
			};
			class CP9
			{
				object = "BIS_TT_CP9";
			};
		};
		class DynOs
		{
			class DynO1
			{
				positionAnchor[] = {4669.96, 16195.6};
				script = "dyno_sp_tt04.sqf";
			};
		};
	};
	class SP_TT05
	{
		color[] = {0.941176, 0.509804, 0.192157, 1};
		colorName = "orange";
		decals[] = {};
		displayName = "TT5: Terminal Velocity";
		leaderboard = 812547;
		looped = 1;
		noDefaultGPS = 1;
		objectTT = "BIS_TT";
		quitSelectors[] = {"BIS_TT_quitSelector1"};
		recolor[] = {"BIS_TT_recolor1", "BIS_TT_recolor2", "BIS_TT_recolor3", "BIS_TT_recolor4", "BIS_TT_recolor5", "BIS_TT_recolor6", "BIS_TT_recolor7", "BIS_TT_recolor8", "BIS_TT_recolor9", "BIS_TT_recolor10", "BIS_TT_recolor11", "BIS_TT_recolor12", "BIS_TT_recolor13", "BIS_TT_recolor14", "BIS_TT_recolor15", "BIS_TT_recolor16", "BIS_TT_recolor17", "BIS_TT_recolor18", "BIS_TT_recolor19", "BIS_TT_recolor20", "BIS_TT_recolor21", "BIS_TT_recolor22", "BIS_TT_recolor23", "BIS_TT_recolor24", "BIS_TT_recolor25", "BIS_TT_recolor26", "BIS_TT_recolor27", "BIS_TT_recolor28", "BIS_TT_recolor29", "BIS_TT_recolor30", "BIS_TT_recolor31", "BIS_TT_recolor32", "BIS_TT_recolor33", "BIS_TT_recolor34", "BIS_TT_recolor35", "BIS_TT_recolor36", "BIS_TT_recolor37"};
		restartSelectors[] = {"BIS_TT_restartSelector1"};
		statistic = "TT05";
		timesMedals[] = {110.66, 102.1, 96.33};
		class CheckPoints
		{
			class CP1
			{
				object = "BIS_TT_CP1";
			};
			class CP10
			{
				object = "BIS_TT_CP10";
			};
			class CP2
			{
				object = "BIS_TT_CP2";
			};
			class CP3
			{
				object = "BIS_TT_CP3";
			};
			class CP4
			{
				object = "BIS_TT_CP4";
			};
			class CP5
			{
				object = "BIS_TT_CP5";
			};
			class CP6
			{
				object = "BIS_TT_CP6";
			};
			class CP7
			{
				object = "BIS_TT_CP7";
			};
			class CP8
			{
				object = "BIS_TT_CP8";
			};
			class CP9
			{
				object = "BIS_TT_CP9";
			};
		};
		class DynOs
		{
			class DynO1
			{
				positionAnchor[] = {14683.5, 16740.2};
				script = "dyno_sp_tt05.sqf";
			};
		};
	};
	class SP_TT06
	{
		color[] = {0.941176, 0.509804, 0.192157, 1};
		colorName = "orange";
		decals[] = {};
		displayName = "TT6: Runway Lap";
		leaderboard = 812548;
		looped = 1;
		objectTT = "BIS_TT";
		quitSelectors[] = {"BIS_TT_quitSelector1"};
		recolor[] = {"BIS_TT_recolor3", "BIS_TT_recolor4", "BIS_TT_recolor5", "BIS_TT_recolor6", "BIS_TT_recolor7", "BIS_TT_recolor8", "BIS_TT_recolor9", "BIS_TT_recolor10", "BIS_TT_recolor11", "BIS_TT_recolor12", "BIS_TT_recolor13", "BIS_TT_recolor14", "BIS_TT_recolor15", "BIS_TT_recolor16", "BIS_TT_recolor17", "BIS_TT_recolor18", "BIS_TT_recolor19", "BIS_TT_recolor20", "BIS_TT_recolor21", "BIS_TT_recolor22", "BIS_TT_recolor23", "BIS_TT_recolor24", "BIS_TT_recolor25", "BIS_TT_recolor26", "BIS_TT_recolor27", "BIS_TT_recolor28", "BIS_TT_recolor29", "BIS_TT_recolor30", "BIS_TT_recolor31", "BIS_TT_recolor32", "BIS_TT_recolor33", "BIS_TT_recolor34", "BIS_TT_recolor35", "BIS_TT_recolor36", "BIS_TT_recolor37", "BIS_TT_recolor38", "BIS_TT_recolor39", "BIS_TT_recolor40", "BIS_TT_recolor41", "BIS_TT_recolor42", "BIS_TT_recolor43", "BIS_TT_recolor44", "BIS_TT_recolor45", "BIS_TT_recolor46", "BIS_TT_recolor47", "BIS_TT_recolor48", "BIS_TT_recolor49", "BIS_TT_recolor50", "BIS_TT_recolor51", "BIS_TT_recolor52", "BIS_TT_recolor53", "BIS_TT_recolor54", "BIS_TT_recolor55", "BIS_TT_recolor56", "BIS_TT_recolor57", "BIS_TT_recolor58", "BIS_TT_recolor59", "BIS_TT_recolor60", "BIS_TT_recolor61", "BIS_TT_recolor62", "BIS_TT_recolor63", "BIS_TT_recolor64", "BIS_TT_recolor65", "BIS_TT_recolor66", "BIS_TT_recolor67", "BIS_TT_recolor68"};
		restartSelectors[] = {"BIS_TT_restartSelector1"};
		statistic = "TT06";
		timesMedals[] = {85.25, 70.5, 67};
		class CheckPoints
		{
			class CP1
			{
				object = "BIS_TT_CP1";
			};
			class CP10: CP3
			{
				object = "BIS_TT_CP10Obj";
			};
			class CP11: CP3
			{
				object = "BIS_TT_CP11Obj";
			};
			class CP3
			{
				object = "BIS_TT_CP3Obj";
				radius = 18;
			};
			class CP4: CP3
			{
				object = "BIS_TT_CP4Obj";
			};
			class CP5: CP3
			{
				object = "BIS_TT_CP5Obj";
				penaltyMissed = 200;
			};
			class CP6: CP3
			{
				object = "BIS_TT_CP6Obj";
			};
			class CP7: CP3
			{
				object = "BIS_TT_CP7Obj";
			};
			class CP8: CP3
			{
				object = "BIS_TT_CP8Obj";
				penaltyMissed = 250;
			};
			class CP9: CP3
			{
				object = "BIS_TT_CP9Obj";
			};
		};
		class DynOs
		{
			class DynO1
			{
				positionAnchor = "BIS_TT_DynO1Anchor";
				script = "dyno_sp_tt06.sqf";
			};
		};
	};
	class SP_TT07
	{
		color[] = {0.941176, 0.509804, 0.192157, 1};
		colorName = "orange";
		decals[] = {};
		displayName = "TT7: Hillside Groove";
		leaderboard = 812549;
		objectTT = "BIS_TT";
		quitSelectors[] = {"BIS_TT_quitSelector1"};
		recolor[] = {};
		restartSelectors[] = {"BIS_TT_restartSelector1"};
		statistic = "TT07";
		timesMedals[] = {179, 162.333, 149.5};
		class CheckPoints
		{
			class CP1
			{
				object = "BIS_TT_CP1";
			};
			class CP10: CP2
			{
				object = "BIS_TT_CP10Obj";
			};
			class CP11: CP2
			{
				object = "BIS_TT_CP11Obj";
			};
			class CP12: CP2
			{
				object = "BIS_TT_CP12Obj";
			};
			class CP13: CP2
			{
				object = "BIS_TT_CP13Obj";
			};
			class CP14: CP2
			{
				object = "BIS_TT_CP14Obj";
			};
			class CP15: CP2
			{
				object = "BIS_TT_CP15Obj";
				penaltyMissed = 150;
			};
			class CP16: CP2
			{
				object = "BIS_TT_CP16Obj";
			};
			class CP18: CP2
			{
				object = "BIS_TT_CP18Obj";
			};
			class CP19: CP2
			{
				object = "BIS_TT_CP19Obj";
			};
			class CP2
			{
				object = "BIS_TT_CP2Obj";
				radius = 18;
			};
			class CP20: CP2
			{
				object = "BIS_TT_CP20Obj";
			};
			class CP21: CP2
			{
				object = "BIS_TT_CP21Obj";
			};
			class CP3: CP2
			{
				object = "BIS_TT_CP3Obj";
			};
			class CP4: CP2
			{
				object = "BIS_TT_CP4Obj";
			};
			class CP5: CP2
			{
				object = "BIS_TT_CP5Obj";
			};
			class CP5A: CP2
			{
				object = "BIS_TT_CP5AObj";
				penaltyMissed = 150;
			};
			class CP6: CP2
			{
				object = "BIS_TT_CP6Obj";
			};
			class CP7: CP2
			{
				object = "BIS_TT_CP7Obj";
			};
			class CP8: CP2
			{
				object = "BIS_TT_CP8Obj";
				penaltyMissed = 150;
			};
			class CP9: CP2
			{
				object = "BIS_TT_CP9Obj";
			};
		};
		class DynOs
		{
			class DynO1
			{
				positionAnchor = "BIS_TT_DynO1Anchor";
				script = "dyno_sp_tt07.sqf";
			};
		};
	};
	class SP_TT08
	{
		color[] = {0.941176, 0.509804, 0.192157, 1};
		colorName = "orange";
		decals[] = {};
		displayName = "TT8: King of the Hill";
		leaderboard = 812550;
		looped = 1;
		objectTT = "BIS_TT";
		quitSelectors[] = {"BIS_TT_quitSelector1"};
		recolor[] = {};
		restartSelectors[] = {"BIS_TT_restartSelector1"};
		statistic = "TT08";
		timesMedals[] = {144, 126.2, 120};
		class CheckPoints
		{
			class CP1
			{
				object = "BIS_TT_CP1";
			};
			class CP10: CP2
			{
				object = "BIS_TT_CP10Obj";
			};
			class CP11: CP2
			{
				object = "BIS_TT_CP11Obj";
			};
			class CP12: CP2
			{
				object = "BIS_TT_CP12Obj";
			};
			class CP13: CP2
			{
				object = "BIS_TT_CP13Obj";
			};
			class CP14: CP2
			{
				object = "BIS_TT_CP14Obj";
			};
			class CP15: CP2
			{
				object = "BIS_TT_CP15Obj";
			};
			class CP16: CP2
			{
				object = "BIS_TT_CP16Obj";
			};
			class CP17: CP2
			{
				object = "BIS_TT_CP17Obj";
			};
			class CP18: CP2
			{
				object = "BIS_TT_CP18Obj";
			};
			class CP19: CP2
			{
				object = "BIS_TT_CP19Obj";
			};
			class CP2
			{
				object = "BIS_TT_CP2Obj";
				radius = 18;
			};
			class CP20: CP2
			{
				object = "BIS_TT_CP20Obj";
			};
			class CP21: CP2
			{
				object = "BIS_TT_CP21Obj";
			};
			class CP22: CP2
			{
				object = "BIS_TT_CP22Obj";
			};
			class CP23: CP2
			{
				object = "BIS_TT_CP23Obj";
			};
			class CP24: CP2
			{
				object = "BIS_TT_CP24Obj";
			};
			class CP25: CP2
			{
				object = "BIS_TT_CP25Obj";
			};
			class CP26: CP2
			{
				object = "BIS_TT_CP26Obj";
			};
			class CP27: CP2
			{
				object = "BIS_TT_CP27Obj";
			};
			class CP28: CP2
			{
				object = "BIS_TT_CP28Obj";
			};
			class CP29: CP2
			{
				object = "BIS_TT_CP29Obj";
			};
			class CP3: CP2
			{
				object = "BIS_TT_CP3Obj";
			};
			class CP4: CP2
			{
				object = "BIS_TT_CP4Obj";
			};
			class CP5: CP2
			{
				object = "BIS_TT_CP5Obj";
			};
			class CP6: CP2
			{
				object = "BIS_TT_CP6Obj";
			};
			class CP7: CP2
			{
				object = "BIS_TT_CP7Obj";
			};
			class CP8: CP2
			{
				object = "BIS_TT_CP8Obj";
			};
			class CP9: CP2
			{
				object = "BIS_TT_CP9Obj";
			};
		};
		class DynOs
		{
			class DynO1
			{
				positionAnchor = "BIS_TT_DynO1Anchor";
				script = "dyno_sp_tt08.sqf";
			};
		};
	};
	class SP_TT09
	{
		color[] = {0.941176, 0.509804, 0.192157, 1};
		colorName = "orange";
		decals[] = {};
		displayName = "TT9: Kiss the Ground";
		leaderboard = 812551;
		objectTT = "BIS_TT";
		quitSelectors[] = {"BIS_TT_quitSelector1"};
		recolor[] = {"BIS_TT_recolor3", "BIS_TT_recolor4", "BIS_TT_recolor5", "BIS_TT_recolor6", "BIS_TT_recolor7", "BIS_TT_recolor8", "BIS_TT_recolor9", "BIS_TT_recolor10", "BIS_TT_recolor11", "BIS_TT_recolor12", "BIS_TT_recolor13", "BIS_TT_recolor14", "BIS_TT_recolor15", "BIS_TT_recolor16", "BIS_TT_recolor17", "BIS_TT_recolor18", "BIS_TT_recolor19", "BIS_TT_recolor20", "BIS_TT_recolor21", "BIS_TT_recolor22", "BIS_TT_recolor23", "BIS_TT_recolor24", "BIS_TT_recolor25", "BIS_TT_recolor26", "BIS_TT_recolor27", "BIS_TT_recolor28", "BIS_TT_recolor29", "BIS_TT_recolor30", "BIS_TT_recolor31", "BIS_TT_recolor32", "BIS_TT_recolor33", "BIS_TT_recolor34", "BIS_TT_recolor35", "BIS_TT_recolor36", "BIS_TT_recolor37", "BIS_TT_recolor38", "BIS_TT_recolor39", "BIS_TT_recolor40", "BIS_TT_recolor41", "BIS_TT_recolor42", "BIS_TT_recolor43", "BIS_TT_recolor44"};
		restartSelectors[] = {"BIS_TT_restartSelector1"};
		statistic = "TT09";
		timesMedals[] = {288.3, 252, 240.48};
		class CheckPoints
		{
			class CP1
			{
				object = "BIS_TT_CP1";
			};
			class CP10
			{
				object = "BIS_TT_CP10";
				omnidirectional = 1;
				onGround = 1;
				penaltyMissed = 600;
				timeout = 5;
			};
			class CP11: CP5
			{
				object = "BIS_TT_CP11Obj";
			};
			class CP12: CP5
			{
				object = "BIS_TT_CP12Obj";
				penaltyMissed = 200;
			};
			class CP13: CP5
			{
				object = "BIS_TT_CP13Obj";
			};
			class CP14
			{
				object = "BIS_TT_CP14";
				omnidirectional = 1;
				onGround = 1;
				penaltyMissed = 500;
				timeout = 2;
			};
			class CP15: CP5
			{
				object = "BIS_TT_CP15Obj";
			};
			class CP2
			{
				object = "BIS_TT_CP2";
				omnidirectional = 1;
				onGround = 1;
				penaltyMissed = 500;
				timeout = 3;
			};
			class CP3
			{
				helpers[] = {"BIS_TT_CP3_Helper1", "BIS_TT_CP3_Helper2", "BIS_TT_CP3_Helper3", "BIS_TT_CP3_Helper4"};
				object = "BIS_TT_CP3";
				omnidirectional = 1;
				penaltyMissed = 600;
				timeout = 6;
			};
			class CP4
			{
				helpers[] = {"BIS_TT_CP4_Helper1", "BIS_TT_CP4_Helper2", "BIS_TT_CP4_Helper3", "BIS_TT_CP4_Helper4"};
				object = "BIS_TT_CP4";
				omnidirectional = 1;
				penaltyMissed = 550;
				timeout = 4;
			};
			class CP5
			{
				object = "BIS_TT_CP5Obj";
				radius = 18;
			};
			class CP6: CP5
			{
				object = "BIS_TT_CP6Obj";
			};
			class CP7: CP5
			{
				object = "BIS_TT_CP7Obj";
				penaltyMissed = 200;
			};
			class CP8: CP5
			{
				object = "BIS_TT_CP8Obj";
				penaltyMissed = 150;
			};
			class CP9: CP5
			{
				object = "BIS_TT_CP9Obj";
				penaltyMissed = 150;
			};
		};
		class DynOs
		{
			class DynO1
			{
				positionAnchor = "BIS_TT_DynO1Anchor";
				script = "dyno_sp_tt09.sqf";
			};
		};
	};
	class SP_TT10
	{
		color[] = {0.941176, 0.509804, 0.192157, 1};
		colorName = "orange";
		decals[] = {};
		displayName = "TT10: Kart Delivery";
		leaderboard = 812552;
		looped = 1;
		objectTT = "BIS_TT";
		quitSelectors[] = {"BIS_TT_quitSelector1"};
		recolor[] = {"BIS_TT_recolor1", "BIS_TT_recolor2", "BIS_TT_recolor3", "BIS_TT_recolor4", "BIS_TT_recolor5", "BIS_TT_recolor6", "BIS_TT_recolor7", "BIS_TT_recolor8", "BIS_TT_recolor9", "BIS_TT_recolor10", "BIS_TT_recolor11", "BIS_TT_recolor12", "BIS_TT_recolor13", "BIS_TT_recolor14", "BIS_TT_recolor15", "BIS_TT_recolor16", "BIS_TT_recolor17", "BIS_TT_recolor18", "BIS_TT_recolor19", "BIS_TT_recolor20", "BIS_TT_recolor21", "BIS_TT_recolor22", "BIS_TT_recolor23", "BIS_TT_recolor24", "BIS_TT_recolor25", "BIS_TT_recolor26", "BIS_TT_recolor27", "BIS_TT_recolor28", "BIS_TT_recolor29", "BIS_TT_recolor30", "BIS_TT_recolor31", "BIS_TT_recolor32", "BIS_TT_recolor33", "BIS_TT_recolor34", "BIS_TT_recolor35", "BIS_TT_recolor36", "BIS_TT_recolor37", "BIS_TT_recolor38", "BIS_TT_recolor39", "BIS_TT_recolor40"};
		restartSelectors[] = {"BIS_TT_restartSelector1"};
		statistic = "TT10";
		timesMedals[] = {343, 312.1, 292.55};
		class CheckPoints
		{
			class CP1
			{
				object = "BIS_TT_CP1";
			};
			class CP10: CP8
			{
				object = "BIS_TT_CP10Obj";
				penaltyMissed = 200;
			};
			class CP11: CP8
			{
				object = "BIS_TT_CP11Obj";
			};
			class CP12
			{
				object = "BIS_TT_CP12";
				omnidirectional = 1;
				penaltyMissed = 300;
				slingLoadObject = "BIS_TT_SL1";
				slingLoadUnload = 1;
			};
			class CP15: CP2
			{
				object = "BIS_TT_CP15Obj";
			};
			class CP16
			{
				object = "BIS_TT_CP16";
				omnidirectional = 1;
				slingLoadLoad = 1;
				slingLoadObject = "BIS_TT_SL3";
			};
			class CP17
			{
				object = "BIS_TT_CP17";
				omnidirectional = 1;
				penaltyMissed = 300;
				slingLoadObject = "BIS_TT_SL3";
				slingLoadUnload = 1;
			};
			class CP18: CP2
			{
				object = "BIS_TT_CP18Obj";
			};
			class CP19: CP2
			{
				object = "BIS_TT_CP19Obj";
			};
			class CP2
			{
				object = "BIS_TT_CP2Obj";
				radius = 18;
			};
			class CP20: CP2
			{
				object = "BIS_TT_CP20Obj";
			};
			class CP21
			{
				object = "BIS_TT_CP21";
				omnidirectional = 1;
				onGround = 1;
			};
			class CP3: CP2
			{
				object = "BIS_TT_CP3Obj";
			};
			class CP4: CP2
			{
				object = "BIS_TT_CP4Obj";
				penaltyMissed = 150;
			};
			class CP5: CP2
			{
				object = "BIS_TT_CP5Obj";
			};
			class CP6
			{
				helpers[] = {"BIS_TT_CP6_Helper1", "BIS_TT_CP6_Helper2", "BIS_TT_CP6_Helper3", "BIS_TT_CP6_Helper4"};
				object = "BIS_TT_CP6";
				penaltyMissed = 800;
				timeout = 10;
			};
			class CP7
			{
				object = "BIS_TT_CP7";
				omnidirectional = 1;
				slingLoadLoad = 1;
				slingLoadObject = "BIS_TT_SL1";
			};
			class CP8: CP2
			{
				object = "BIS_TT_CP8Obj";
				slingLoadObject = "BIS_TT_SL1";
			};
			class CP9: CP8
			{
				object = "BIS_TT_CP9Obj";
			};
		};
		class DynOs
		{
			class DynO1
			{
				positionAnchor = "BIS_TT_DynO1Anchor";
				script = "dyno_sp_tt10.sqf";
			};
		};
	};
	class SP_TT11
	{
		color[] = {0.898039, 0.403922, 0.133333, 1};
		colorName = "orange";
		colorSpecial = "#E56722";
		decals[] = {};
		displayName = "TT11: Downhill Rumble";
		iconSpecial = "\A3\Missions_F_Orange\Data\Img\medal_idap_ca";
		leaderboard = "2126787";
		nameSpecial = "Andy Paterson";
		objectTT = "BIS_TT";
		onReset = "reset.sqf";
		quitSelectors[] = {"BIS_TT_quitSelector1"};
		recolor[] = {"BIS_TT_recolor1", "BIS_TT_recolor2", "BIS_TT_recolor3", "BIS_TT_recolor4", "BIS_TT_recolor5", "BIS_TT_recolor6", "BIS_TT_recolor7", "BIS_TT_recolor8", "BIS_TT_recolor9", "BIS_TT_recolor10", "BIS_TT_recolor11", "BIS_TT_recolor12", "BIS_TT_recolor13", "BIS_TT_recolor14", "BIS_TT_recolor15", "BIS_TT_recolor16", "BIS_TT_recolor17", "BIS_TT_recolor18", "BIS_TT_recolor19", "BIS_TT_recolor20", "BIS_TT_recolor21", "BIS_TT_recolor22", "BIS_TT_recolor23", "BIS_TT_recolor24", "BIS_TT_recolor25", "BIS_TT_recolor26", "BIS_TT_recolor27", "BIS_TT_recolor28", "BIS_TT_recolor29", "BIS_TT_recolor30", "BIS_TT_recolor31", "BIS_TT_recolor32", "BIS_TT_recolor33", "BIS_TT_recolor34", "BIS_TT_recolor35", "BIS_TT_recolor36", "BIS_TT_recolor37", "BIS_TT_recolor38", "BIS_TT_recolor39", "BIS_TT_recolor40", "BIS_TT_recolor41", "BIS_TT_recolor42", "BIS_TT_recolor43"};
		restartSelectors[] = {"BIS_TT_restartSelector1"};
		statistic = "TT11";
		timesMedals[] = {167.22, 158.5, 152.19};
		timeSpecial = 135.163;
		class CheckPoints
		{
			class CP1
			{
				object = "BIS_TT_CP1";
			};
			class CP10
			{
				object = "BIS_TT_CP10";
			};
			class CP11
			{
				object = "BIS_TT_CP11";
			};
			class CP12
			{
				object = "BIS_TT_CP12";
			};
			class CP2
			{
				object = "BIS_TT_CP2";
			};
			class CP3
			{
				object = "BIS_TT_CP3";
				penaltyMissed = 300;
			};
			class CP4
			{
				object = "BIS_TT_CP4";
			};
			class CP5
			{
				object = "BIS_TT_CP5";
			};
			class CP6
			{
				object = "BIS_TT_CP6";
				penaltyMissed = 200;
			};
			class CP7
			{
				object = "BIS_TT_CP7";
			};
			class CP8
			{
				object = "BIS_TT_CP8";
			};
			class CP9
			{
				object = "BIS_TT_CP9";
			};
		};
		class DynOs {};
	};
	class SP_TT12
	{
		color[] = {0.898039, 0.403922, 0.133333, 1};
		colorName = "orange";
		colorSpecial = "#E56722";
		decals[] = {};
		displayName = "TT12: Jungle Fever";
		iconSpecial = "\A3\Missions_F_Orange\Data\Img\medal_idap_ca";
		leaderboard = "2126788";
		nameSpecial = "Andy Paterson";
		objectTT = "BIS_TT";
		quitSelectors[] = {"BIS_TT_quitSelector1"};
		recolor[] = {"BIS_TT_recolor1", "BIS_TT_recolor2", "BIS_TT_recolor3", "BIS_TT_recolor4", "BIS_TT_recolor5", "BIS_TT_recolor6", "BIS_TT_recolor7", "BIS_TT_recolor8", "BIS_TT_recolor9", "BIS_TT_recolor10", "BIS_TT_recolor11", "BIS_TT_recolor12", "BIS_TT_recolor13", "BIS_TT_recolor14", "BIS_TT_recolor15", "BIS_TT_recolor16", "BIS_TT_recolor17", "BIS_TT_recolor18", "BIS_TT_recolor19", "BIS_TT_recolor20", "BIS_TT_recolor21", "BIS_TT_recolor22", "BIS_TT_recolor23", "BIS_TT_recolor24", "BIS_TT_recolor25", "BIS_TT_recolor26", "BIS_TT_recolor27", "BIS_TT_recolor28", "BIS_TT_recolor29", "BIS_TT_recolor30", "BIS_TT_recolor31", "BIS_TT_recolor32", "BIS_TT_recolor33", "BIS_TT_recolor34", "BIS_TT_recolor35", "BIS_TT_recolor36", "BIS_TT_recolor37", "BIS_TT_recolor38", "BIS_TT_recolor39", "BIS_TT_recolor40", "BIS_TT_recolor41", "BIS_TT_recolor42", "BIS_TT_recolor43", "BIS_TT_recolor44", "BIS_TT_recolor45", "BIS_TT_recolor46", "BIS_TT_recolor47", "BIS_TT_recolor48", "BIS_TT_recolor49", "BIS_TT_recolor50", "BIS_TT_recolor51", "BIS_TT_recolor52", "BIS_TT_recolor53", "BIS_TT_recolor54", "BIS_TT_recolor55", "BIS_TT_recolor56", "BIS_TT_recolor57"};
		restartSelectors[] = {"BIS_TT_restartSelector1"};
		statistic = "TT12";
		timesMedals[] = {209.18, 198.8, 192.33};
		timeSpecial = 171.705;
		class CheckPoints
		{
			class CP1
			{
				object = "BIS_TT_CP1";
			};
			class CP10
			{
				object = "BIS_TT_CP10";
			};
			class CP11
			{
				object = "BIS_TT_CP11";
			};
			class CP12
			{
				object = "BIS_TT_CP12";
				penaltyMissed = 200;
			};
			class CP13
			{
				object = "BIS_TT_CP13";
			};
			class CP14
			{
				object = "BIS_TT_CP14";
			};
			class CP15
			{
				object = "BIS_TT_CP15";
			};
			class CP16
			{
				object = "BIS_TT_CP16";
				penaltyMissed = 300;
			};
			class CP17
			{
				object = "BIS_TT_CP17";
			};
			class CP2
			{
				object = "BIS_TT_CP2";
			};
			class CP3
			{
				object = "BIS_TT_CP3";
				penaltyMissed = 300;
			};
			class CP4
			{
				object = "BIS_TT_CP4";
			};
			class CP5
			{
				height = 316.486;
				object = "BIS_TT_CP5";
			};
			class CP6
			{
				object = "BIS_TT_CP6";
			};
			class CP7
			{
				height = 215.956;
				object = "BIS_TT_CP7";
			};
			class CP8
			{
				object = "BIS_TT_CP8";
			};
			class CP9
			{
				object = "BIS_TT_CP9";
			};
		};
		class DynOs {};
	};
	class SP_TT13
	{
		color[] = {0.898039, 0.403922, 0.133333, 1};
		colorName = "orange";
		colorSpecial = "#E56722";
		decals[] = {};
		displayName = "TT13: Turbulence";
		iconSpecial = "\A3\Missions_F_Orange\Data\Img\medal_idap_ca";
		leaderboard = "2126789";
		looped = 1;
		nameSpecial = "Nathan MacDade";
		objectTT = "BIS_TT";
		quitSelectors[] = {"BIS_TT_quitSelector1"};
		recolor[] = {"BIS_TT_recolor1", "BIS_TT_recolor2", "BIS_TT_recolor3", "BIS_TT_recolor4", "BIS_TT_recolor5", "BIS_TT_recolor6", "BIS_TT_recolor7", "BIS_TT_recolor8", "BIS_TT_recolor9", "BIS_TT_recolor10", "BIS_TT_recolor11", "BIS_TT_recolor12", "BIS_TT_recolor13", "BIS_TT_recolor14", "BIS_TT_recolor15", "BIS_TT_recolor16", "BIS_TT_recolor17", "BIS_TT_recolor18", "BIS_TT_recolor19", "BIS_TT_recolor20", "BIS_TT_recolor21", "BIS_TT_recolor22", "BIS_TT_recolor23", "BIS_TT_recolor24", "BIS_TT_recolor25", "BIS_TT_recolor26", "BIS_TT_recolor27", "BIS_TT_recolor28", "BIS_TT_recolor29", "BIS_TT_recolor30", "BIS_TT_recolor31", "BIS_TT_recolor32", "BIS_TT_recolor33", "BIS_TT_recolor34", "BIS_TT_recolor35", "BIS_TT_recolor36", "BIS_TT_recolor37", "BIS_TT_recolor38", "BIS_TT_recolor39", "BIS_TT_recolor40", "BIS_TT_recolor41", "BIS_TT_recolor42", "BIS_TT_recolor43", "BIS_TT_recolor44", "BIS_TT_recolor45", "BIS_TT_recolor46", "BIS_TT_recolor47", "BIS_TT_recolor48", "BIS_TT_recolor49", "BIS_TT_recolor50", "BIS_TT_recolor51", "BIS_TT_recolor52", "BIS_TT_recolor53", "BIS_TT_recolor54", "BIS_TT_recolor55", "BIS_TT_recolor56", "BIS_TT_recolor57", "BIS_TT_recolor58", "BIS_TT_recolor59", "BIS_TT_recolor60", "BIS_TT_recolor61", "BIS_TT_recolor62", "BIS_TT_recolor63", "BIS_TT_recolor64", "BIS_TT_recolor65", "BIS_TT_recolor66", "BIS_TT_recolor67", "BIS_TT_recolor68", "BIS_TT_recolor69", "BIS_TT_recolor70", "BIS_TT_recolor71", "BIS_TT_recolor72", "BIS_TT_recolor73", "BIS_TT_recolor74", "BIS_TT_recolor75", "BIS_TT_recolor76", "BIS_TT_recolor77", "BIS_TT_recolor78", "BIS_TT_recolor79", "BIS_TT_recolor80", "BIS_TT_recolor81", "BIS_TT_recolor82", "BIS_TT_recolor83", "BIS_TT_recolor84", "BIS_TT_recolor85", "BIS_TT_recolor86", "BIS_TT_recolor87", "BIS_TT_recolor88", "BIS_TT_recolor89", "BIS_TT_recolor90", "BIS_TT_recolor91", "BIS_TT_recolor92"};
		restartSelectors[] = {"BIS_TT_restartSelector1"};
		statistic = "TT13";
		timesMedals[] = {148, 140.22, 133.5};
		timeSpecial = 129.085;
		class CheckPoints
		{
			class CP1
			{
				object = "BIS_TT_CP1";
			};
			class CP10: CP2
			{
				object = "BIS_TT_CP10Obj";
				penaltyMissed = 200;
			};
			class CP11: CP2
			{
				object = "BIS_TT_CP11Obj";
				penaltyMissed = 200;
			};
			class CP12: CP2
			{
				object = "BIS_TT_CP12Obj";
			};
			class CP13: CP2
			{
				object = "BIS_TT_CP13Obj";
				onActivate = "A3\Missions_F_Orange\Challenges\Time_Trials\Scripts\drone_onActivate.sqf";
			};
			class CP14: CP2
			{
				object = "BIS_TT_CP14Obj";
			};
			class CP15: CP13
			{
				object = "BIS_TT_CP15Obj";
				penaltyMissed = 200;
			};
			class CP16: CP2
			{
				object = "BIS_TT_CP16Obj";
				penaltyMissed = 250;
			};
			class CP17: CP13
			{
				object = "BIS_TT_CP17Obj";
			};
			class CP18: CP2
			{
				object = "BIS_TT_CP18Obj";
				penaltyMissed = 200;
			};
			class CP19: CP13
			{
				object = "BIS_TT_CP19Obj";
			};
			class CP2
			{
				object = "BIS_TT_CP2Obj";
				radius = 18;
			};
			class CP3: CP2
			{
				object = "BIS_TT_CP3Obj";
			};
			class CP4: CP2
			{
				object = "BIS_TT_CP4Obj";
				penaltyMissed = 200;
			};
			class CP5: CP2
			{
				object = "BIS_TT_CP5Obj";
				penaltyMissed = 200;
			};
			class CP6: CP2
			{
				object = "BIS_TT_CP6Obj";
				penaltyMissed = 150;
			};
			class CP7: CP2
			{
				object = "BIS_TT_CP7Obj";
				penaltyMissed = 200;
			};
			class CP8: CP2
			{
				object = "BIS_TT_CP8Obj";
				penaltyMissed = 200;
			};
			class CP9: CP2
			{
				object = "BIS_TT_CP9Obj";
				penaltyMissed = 200;
			};
		};
		class DynOs {};
	};
	class SP_TT14
	{
		color[] = {0.898039, 0.403922, 0.133333, 1};
		colorName = "orange";
		colorSpecial = "#E56722";
		decals[] = {};
		displayName = "TT14: Life in Danger";
		iconSpecial = "\A3\Missions_F_Orange\Data\Img\medal_idap_ca";
		leaderboard = "2126790";
		looped = 1;
		nameSpecial = "Nathan MacDade";
		objectTT = "BIS_TT";
		quitSelectors[] = {"BIS_TT_quitSelector1"};
		recolor[] = {"BIS_TT_recolor1", "BIS_TT_recolor2", "BIS_TT_recolor3", "BIS_TT_recolor4", "BIS_TT_recolor5", "BIS_TT_recolor6", "BIS_TT_recolor7", "BIS_TT_recolor8", "BIS_TT_recolor9", "BIS_TT_recolor10", "BIS_TT_recolor11", "BIS_TT_recolor12", "BIS_TT_recolor13", "BIS_TT_recolor14", "BIS_TT_recolor15", "BIS_TT_recolor16", "BIS_TT_recolor17", "BIS_TT_recolor18", "BIS_TT_recolor19", "BIS_TT_recolor20"};
		restartSelectors[] = {"BIS_TT_restartSelector1"};
		statistic = "TT14";
		timesMedals[] = {232.4, 223.12, 218.66};
		timeSpecial = 206;
		class CheckPoints
		{
			class CP1
			{
				object = "BIS_TT_CP1";
			};
			class CP10: CP4
			{
				object = "BIS_TT_CP10Obj";
			};
			class CP11: CP4
			{
				object = "BIS_TT_CP11Obj";
			};
			class CP12: CP4
			{
				object = "BIS_TT_CP12Obj";
			};
			class CP13: CP4
			{
				object = "BIS_TT_CP13Obj";
			};
			class CP14
			{
				helpers[] = {"BIS_TT_CP14_Helper1", "BIS_TT_CP14_Helper2", "BIS_TT_CP14_Helper3", "BIS_TT_CP14_Helper4"};
				object = "BIS_TT_CP14";
				penaltyMissed = 200;
				timeout = 2;
			};
			class CP15: CP4
			{
				object = "BIS_TT_CP15Obj";
			};
			class CP16: CP4
			{
				object = "BIS_TT_CP16Obj";
			};
			class CP17: CP4
			{
				object = "BIS_TT_CP17Obj";
			};
			class CP18: CP4
			{
				object = "BIS_TT_CP18Obj";
			};
			class CP19: CP4
			{
				object = "BIS_TT_CP19Obj";
			};
			class CP2
			{
				height = 403.63;
				object = "BIS_TT_CP2Obj";
				radius = 18;
			};
			class CP20: CP4
			{
				object = "BIS_TT_CP20";
				omnidirectional = 1;
				onGround = 1;
			};
			class CP3
			{
				helpers[] = {"BIS_TT_CP3_Helper1", "BIS_TT_CP3_Helper2", "BIS_TT_CP3_Helper3", "BIS_TT_CP3_Helper4"};
				object = "BIS_TT_CP3";
				penaltyMissed = 350;
				timeout = 4;
			};
			class CP4
			{
				object = "BIS_TT_CP4Obj";
				radius = 18;
			};
			class CP5: CP4
			{
				object = "BIS_TT_CP5Obj";
			};
			class CP6: CP4
			{
				object = "BIS_TT_CP6Obj";
			};
			class CP7: CP4
			{
				object = "BIS_TT_CP7Obj";
			};
			class CP8: CP4
			{
				object = "BIS_TT_CP8Obj";
			};
			class CP9: CP4
			{
				height = 293.657;
				object = "BIS_TT_CP9Obj";
			};
		};
		class DynOs {};
	};
	class SP_TT15
	{
		color[] = {0.898039, 0.403922, 0.133333, 1};
		colorName = "orange";
		colorSpecial = "#E56722";
		decals[] = {};
		displayName = "TT15: Off Road Excavation";
		iconSpecial = "\A3\Missions_F_Orange\Data\Img\medal_idap_ca";
		leaderboard = "2126791";
		looped = 1;
		nameSpecial = "Andy Paterson";
		objectTT = "BIS_TT";
		quitSelectors[] = {"BIS_TT_quitSelector1"};
		recolor[] = {"BIS_TT_recolor1", "BIS_TT_recolor2", "BIS_TT_recolor3", "BIS_TT_recolor4", "BIS_TT_recolor5", "BIS_TT_recolor6", "BIS_TT_recolor7", "BIS_TT_recolor8", "BIS_TT_recolor9", "BIS_TT_recolor10", "BIS_TT_recolor11", "BIS_TT_recolor12", "BIS_TT_recolor13", "BIS_TT_recolor14", "BIS_TT_recolor15", "BIS_TT_recolor16", "BIS_TT_recolor17", "BIS_TT_recolor18", "BIS_TT_recolor19", "BIS_TT_recolor20", "BIS_TT_recolor21", "BIS_TT_recolor22", "BIS_TT_recolor23", "BIS_TT_recolor24", "BIS_TT_recolor25", "BIS_TT_recolor26", "BIS_TT_recolor27", "BIS_TT_recolor28", "BIS_TT_recolor29", "BIS_TT_recolor30", "BIS_TT_recolor31", "BIS_TT_recolor32", "BIS_TT_recolor33", "BIS_TT_recolor34", "BIS_TT_recolor35", "BIS_TT_recolor36", "BIS_TT_recolor37", "BIS_TT_recolor38", "BIS_TT_recolor39", "BIS_TT_recolor40", "BIS_TT_recolor41", "BIS_TT_recolor42", "BIS_TT_recolor43", "BIS_TT_recolor44", "BIS_TT_recolor45", "BIS_TT_recolor46", "BIS_TT_recolor47", "BIS_TT_recolor48"};
		restartSelectors[] = {"BIS_TT_restartSelector1"};
		statistic = "TT15";
		timesMedals[] = {121.3, 115, 109.82};
		timeSpecial = 100.162;
		class CheckPoints
		{
			class CP1
			{
				object = "BIS_TT_CP1";
			};
			class CP10
			{
				object = "BIS_TT_CP10";
				penaltyMissed = 300;
			};
			class CP11
			{
				object = "BIS_TT_CP11";
				penaltyMissed = 200;
			};
			class CP12
			{
				object = "BIS_TT_CP12";
			};
			class CP13
			{
				object = "BIS_TT_CP13";
			};
			class CP2
			{
				object = "BIS_TT_CP2";
			};
			class CP3
			{
				object = "BIS_TT_CP3";
			};
			class CP4
			{
				object = "BIS_TT_CP4";
			};
			class CP5
			{
				object = "BIS_TT_CP5";
			};
			class CP6
			{
				object = "BIS_TT_CP6";
			};
			class CP7
			{
				object = "BIS_TT_CP7";
			};
			class CP8
			{
				object = "BIS_TT_CP8";
				penaltyMissed = 200;
			};
			class CP9
			{
				object = "BIS_TT_CP9";
			};
		};
		class DynOs {};
	};
	class SP_TT16
	{
		color[] = {0.678431, 0.74902, 0.513726, 1};
		colorName = "green";
		decals[] = {};
		displayName = "TT16: Weasel Run";
		leaderboard = "2563915";
		looped = 1;
		objectTT = "BIS_TT";
		onReset = "reset.sqf";
		quitSelectors[] = {"BIS_TT_quitSelector1"};
		recolor[] = {"BIS_TT_recolor01", "BIS_TT_recolor02", "BIS_TT_recolor03", "BIS_TT_recolor04", "BIS_TT_recolor05", "BIS_TT_recolor06", "BIS_TT_recolor07", "BIS_TT_recolor08", "BIS_TT_recolor09", "BIS_TT_recolor10", "BIS_TT_recolor11", "BIS_TT_recolor12", "BIS_TT_recolor13", "BIS_TT_recolor14", "BIS_TT_recolor15", "BIS_TT_recolor16", "BIS_TT_recolor17", "BIS_TT_recolor18", "BIS_TT_recolor19", "BIS_TT_recolor20", "BIS_TT_recolor21", "BIS_TT_recolor22", "BIS_TT_recolor23", "BIS_TT_recolor24", "BIS_TT_recolor25", "BIS_TT_recolor26", "BIS_TT_recolor27", "BIS_TT_recolor28", "BIS_TT_recolor29", "BIS_TT_recolor30", "BIS_TT_recolor31", "BIS_TT_recolor32", "BIS_TT_recolor33", "BIS_TT_recolor34", "BIS_TT_recolor35", "BIS_TT_recolor36", "BIS_TT_recolor37", "BIS_TT_recolor38", "BIS_TT_recolor39", "BIS_TT_recolor40", "BIS_TT_recolor41", "BIS_TT_recolor42", "BIS_TT_recolor43", "BIS_TT_recolor44", "BIS_TT_recolor45", "BIS_TT_recolor46", "BIS_TT_recolor47", "BIS_TT_recolor48", "BIS_TT_recolor49", "BIS_TT_recolor50"};
		restartSelectors[] = {"BIS_TT_restartSelector1"};
		statistic = "TT16";
		timesMedals[] = {157.2, 143.32, 134.5};
		class CheckPoints
		{
			class CP1
			{
				object = "BIS_TT_CP1";
			};
			class CP10
			{
				object = "BIS_TT_CP10";
			};
			class CP11
			{
				object = "BIS_TT_CP11";
			};
			class CP12
			{
				object = "BIS_TT_CP12";
			};
			class CP13
			{
				object = "BIS_TT_CP13";
			};
			class CP2
			{
				object = "BIS_TT_CP2";
			};
			class CP3
			{
				object = "BIS_TT_CP3";
				penaltyMissed = 200;
			};
			class CP4
			{
				object = "BIS_TT_CP4";
			};
			class CP5
			{
				object = "BIS_TT_CP5";
			};
			class CP6
			{
				object = "BIS_TT_CP6";
			};
			class CP7
			{
				object = "BIS_TT_CP7";
				penaltyMissed = 200;
			};
			class CP8
			{
				object = "BIS_TT_CP8";
			};
			class CP9
			{
				object = "BIS_TT_CP9";
			};
		};
		class DynOs {};
	};
	class SP_TT17
	{
		color[] = {0.678431, 0.74902, 0.513726, 1};
		colorName = "green";
		decals[] = {};
		displayName = "TT17: Shipping and Handling";
		leaderboard = "2563917";
		objectTT = "BIS_TT";
		quitSelectors[] = {"BIS_TT_quitSelector1"};
		recolor[] = {"BIS_TT_recolor01", "BIS_TT_recolor02", "BIS_TT_recolor03", "BIS_TT_recolor04", "BIS_TT_recolor05", "BIS_TT_recolor06", "BIS_TT_recolor07", "BIS_TT_recolor08", "BIS_TT_recolor09", "BIS_TT_recolor10", "BIS_TT_recolor11", "BIS_TT_recolor12", "BIS_TT_recolor13", "BIS_TT_recolor14", "BIS_TT_recolor15", "BIS_TT_recolor16", "BIS_TT_recolor17", "BIS_TT_recolor18", "BIS_TT_recolor19", "BIS_TT_recolor20", "BIS_TT_recolor21", "BIS_TT_recolor22", "BIS_TT_recolor23", "BIS_TT_recolor24", "BIS_TT_recolor25", "BIS_TT_recolor26", "BIS_TT_recolor27", "BIS_TT_recolor28", "BIS_TT_recolor29", "BIS_TT_recolor30", "BIS_TT_recolor31", "BIS_TT_recolor32", "BIS_TT_recolor33", "BIS_TT_recolor34", "BIS_TT_recolor35", "BIS_TT_recolor36", "BIS_TT_recolor37", "BIS_TT_recolor38", "BIS_TT_recolor39", "BIS_TT_recolor40", "BIS_TT_recolor41", "BIS_TT_recolor42", "BIS_TT_recolor43", "BIS_TT_recolor44", "BIS_TT_recolor45", "BIS_TT_recolor46", "BIS_TT_recolor47", "BIS_TT_recolor48", "BIS_TT_recolor49", "BIS_TT_recolor50", "BIS_TT_recolor51", "BIS_TT_recolor52", "BIS_TT_recolor53", "BIS_TT_recolor54", "BIS_TT_recolor55", "BIS_TT_recolor56", "BIS_TT_recolor57", "BIS_TT_recolor58"};
		restartSelectors[] = {"BIS_TT_restartSelector1"};
		statistic = "TT17";
		timesMedals[] = {170.12, 160.875, 153.2};
		class CheckPoints
		{
			class CP1
			{
				object = "BIS_TT_CP1";
			};
			class CP10
			{
				object = "BIS_TT_CP10";
			};
			class CP11
			{
				object = "BIS_TT_CP11";
				penaltyMissed = 150;
			};
			class CP11A
			{
				object = "BIS_TT_CP11A";
			};
			class CP12
			{
				object = "BIS_TT_CP12";
			};
			class CP2
			{
				object = "BIS_TT_CP2";
			};
			class CP3
			{
				object = "BIS_TT_CP3";
			};
			class CP4
			{
				object = "BIS_TT_CP4";
				penaltyMissed = 300;
			};
			class CP5
			{
				object = "BIS_TT_CP5";
			};
			class CP6
			{
				object = "BIS_TT_CP6";
			};
			class CP7
			{
				object = "BIS_TT_CP7";
			};
			class CP8
			{
				object = "BIS_TT_CP8";
			};
			class CP8A
			{
				object = "BIS_TT_CP8A";
			};
			class CP8B
			{
				object = "BIS_TT_CP8B";
			};
			class CP9
			{
				object = "BIS_TT_CP9";
			};
		};
		class DynOs {};
	};
	class SP_TT18
	{
		color[] = {0.678431, 0.74902, 0.513726, 1};
		colorName = "green";
		colorSpecial = "#375E5E";
		decals[] = {};
		displayName = "TT18: Hammer Time";
		iconSpecial = "\A3\Ui_f\data\GUI\Cfg\Ranks\lieutenant_gs";
		leaderboard = "2563918";
		nameSpecial = "Lt. Robert Hammer";
		objectTT = "BIS_TT";
		onReset = "reset.sqf";
		quitSelectors[] = {"BIS_TT_quitSelector1"};
		recolor[] = {"BIS_TT_recolor01", "BIS_TT_recolor02", "BIS_TT_recolor03", "BIS_TT_recolor04", "BIS_TT_recolor05", "BIS_TT_recolor06", "BIS_TT_recolor07", "BIS_TT_recolor08", "BIS_TT_recolor09", "BIS_TT_recolor10", "BIS_TT_recolor11", "BIS_TT_recolor12", "BIS_TT_recolor13", "BIS_TT_recolor14", "BIS_TT_recolor15", "BIS_TT_recolor16", "BIS_TT_recolor17", "BIS_TT_recolor18", "BIS_TT_recolor19", "BIS_TT_recolor20", "BIS_TT_recolor21", "BIS_TT_recolor22", "BIS_TT_recolor23", "BIS_TT_recolor24", "BIS_TT_recolor25", "BIS_TT_recolor26", "BIS_TT_recolor27", "BIS_TT_recolor28", "BIS_TT_recolor29", "BIS_TT_recolor30", "BIS_TT_recolor31", "BIS_TT_recolor32", "BIS_TT_recolor33", "BIS_TT_recolor33A", "BIS_TT_recolor34", "BIS_TT_recolor35", "BIS_TT_recolor35A", "BIS_TT_recolor36", "BIS_TT_recolor37", "BIS_TT_recolor38", "BIS_TT_recolor39", "BIS_TT_recolor40", "BIS_TT_recolor41", "BIS_TT_recolor42", "BIS_TT_recolor43", "BIS_TT_recolor44", "BIS_TT_recolor45", "BIS_TT_recolor45A", "BIS_TT_recolor46", "BIS_TT_recolor46A", "BIS_TT_recolor47", "BIS_TT_recolor47A", "BIS_TT_recolor48", "BIS_TT_recolor48A", "BIS_TT_recolor49", "BIS_TT_recolor50", "BIS_TT_recolor51", "BIS_TT_recolor52", "BIS_TT_recolor53", "BIS_TT_recolor54", "BIS_TT_recolor55", "BIS_TT_recolor56", "BIS_TT_recolor57", "BIS_TT_recolor58", "BIS_TT_recolor59", "BIS_TT_recolor60", "BIS_TT_recolor61", "BIS_TT_recolor62", "BIS_TT_recolor63", "BIS_TT_recolor64", "BIS_TT_recolor65", "BIS_TT_recolor66", "BIS_TT_recolor67", "BIS_TT_recolor68", "BIS_TT_recolor69", "BIS_TT_recolor70"};
		restartSelectors[] = {"BIS_TT_restartSelector1"};
		statistic = "TT18";
		timesMedals[] = {226.3, 214.87, 206};
		timeSpecial = 203.02;
		class CheckPoints
		{
			class CP1
			{
				object = "BIS_TT_CP1";
			};
			class CP10
			{
				object = "BIS_TT_CP10";
			};
			class CP10A
			{
				object = "BIS_TT_CP10A";
				penaltyMissed = 150;
			};
			class CP11
			{
				object = "BIS_TT_CP11";
			};
			class CP11A
			{
				object = "BIS_TT_CP11A";
				penaltyMissed = 150;
			};
			class CP11B
			{
				object = "BIS_TT_CP11B";
				penaltyMissed = 150;
			};
			class CP11C
			{
				object = "BIS_TT_CP11C";
			};
			class CP12
			{
				object = "BIS_TT_CP12";
			};
			class CP2
			{
				object = "BIS_TT_CP2";
			};
			class CP2A
			{
				object = "BIS_TT_CP2A";
				penaltyMissed = 150;
			};
			class CP2B
			{
				object = "BIS_TT_CP2B";
				penaltyMissed = 150;
			};
			class CP3
			{
				object = "BIS_TT_CP3";
				penaltyMissed = 150;
			};
			class CP3A
			{
				object = "BIS_TT_CP3A";
				penaltyMissed = 150;
			};
			class CP4
			{
				object = "BIS_TT_CP4";
			};
			class CP5
			{
				object = "BIS_TT_CP5";
			};
			class CP6
			{
				object = "BIS_TT_CP6";
			};
			class CP7
			{
				object = "BIS_TT_CP7";
				penaltyMissed = 300;
				timeout = 5;
			};
			class CP8
			{
				object = "BIS_TT_CP8";
			};
			class CP9
			{
				object = "BIS_TT_CP9";
			};
		};
		class DynOs {};
	};
};
