class CfgDifficultyPresets
{
	animSpeedCoef = 0;
	cancelThreshold = 0;
	defaultPreset = "Regular";
	divingLimitMultiplier = 1;
	fadeDistanceSpan = 25;
	fadeDistanceStart = 150;
	groupArmorCoef = 1.5;
	myArmorCoef = 1.5;
	recoilCoef = 1;
	showCadetHints = 1;
	showCadetWP = 1;
	visionAidCoef = 0.8;
	class Custom
	{
		description = "Custom difficulty set by the player.";
		displayName = "Custom";
		levelAI = "AILevelMedium";
		optionDescription = "Custom difficulty set by the player.";
		optionPicture = "\A3\Ui_f\data\Logos\arma3_white_ca.paa";
		class Options
		{
			autoReport = 0;
			cameraShake = 1;
			commands = 0;
			deathMessages = 0;
			detectedMines = 0;
			enemyTags = 0;
			friendlyTags = 0;
			groupIndicators = 0;
			mapContent = 0;
			mapContentEnemy = 0;
			mapContentFriendly = 0;
			mapContentMines = 0;
			mapContentPing = 0;
			multipleSaves = 0;
			reducedDamage = 0;
			scoreTable = 0;
			squadRadar = 0;
			staminaBar = 0;
			stanceIndicator = 0;
			tacticalPing = 0;
			thirdPersonView = 0;
			visionAid = 0;
			vonID = 0;
			waypoints = 0;
			weaponCrosshair = 0;
			weaponInfo = 2;
		};
	};
	class Recruit
	{
		description = "Regular man who just enrolled into the army.";
		displayName = "Recruit";
		levelAI = "AILevelLow";
		optionDescription = "Regular man who just enrolled into the army.";
		optionPicture = "\A3\Ui_f\data\Logos\arma3_white_ca.paa";
		class Options
		{
			autoReport = 1;
			cameraShake = 1;
			commands = 2;
			deathMessages = 1;
			detectedMines = 2;
			enemyTags = 0;
			friendlyTags = 2;
			groupIndicators = 2;
			mapContentEnemy = 1;
			mapContentFriendly = 1;
			mapContentMines = 1;
			multipleSaves = 1;
			reducedDamage = 1;
			scoreTable = 1;
			squadRadar = 1;
			staminaBar = 1;
			stanceIndicator = 2;
			tacticalPing = 3;
			thirdPersonView = 1;
			visionAid = 1;
			vonID = 1;
			waypoints = 2;
			weaponCrosshair = 1;
			weaponInfo = 2;
		};
	};
	class Regular
	{
		description = "Just finished training, no real combat experience.";
		displayName = "Regular";
		levelAI = "AILevelMedium";
		optionDescription = "Just finished training, no real combat experience.";
		optionPicture = "\A3\Ui_f\data\Logos\arma3_white_ca.paa";
		class Options
		{
			autoReport = 1;
			cameraShake = 1;
			commands = 2;
			deathMessages = 1;
			detectedMines = 1;
			enemyTags = 0;
			friendlyTags = 1;
			groupIndicators = 1;
			mapContent = 1;
			mapContentEnemy = 1;
			mapContentFriendly = 1;
			mapContentMines = 1;
			multipleSaves = 1;
			reducedDamage = 0;
			scoreTable = 1;
			squadRadar = 1;
			staminaBar = 1;
			stanceIndicator = 2;
			tacticalPing = 3;
			thirdPersonView = 1;
			visionAid = 0;
			vonID = 1;
			waypoints = 2;
			weaponCrosshair = 1;
			weaponInfo = 2;
		};
	};
	class Veteran
	{
		description = "Has survived several contacts with the enemy.";
		displayName = "Veteran";
		levelAI = "AILevelHigh";
		optionDescription = "Has survived several contacts with the enemy.";
		optionPicture = "\A3\Ui_f\data\Logos\arma3_white_ca.paa";
		class Options
		{
			autoReport = 0;
			cameraShake = 1;
			commands = 0;
			deathMessages = 1;
			detectedMines = 0;
			enemyTags = 0;
			friendlyTags = 0;
			groupIndicators = 0;
			mapContent = 0;
			mapContentEnemy = 0;
			mapContentFriendly = 0;
			mapContentMines = 0;
			multipleSaves = 0;
			reducedDamage = 0;
			scoreTable = 1;
			squadRadar = 0;
			staminaBar = 0;
			stanceIndicator = 1;
			tacticalPing = 0;
			thirdPersonView = 0;
			visionAid = 0;
			vonID = 1;
			waypoints = 0;
			weaponCrosshair = 0;
			weaponInfo = 1;
		};
	};
};
