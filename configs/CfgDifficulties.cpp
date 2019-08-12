class CfgDifficulties
{
	default = "Regular";
	defaultEasy = "Regular";
	defaultHard = "Veteran";
	defaultNormal = "Regular";
	class Mercenary
	{
		animSpeedCoef = 0;
		autoAimAngle = 2.5;
		autoAimDistance = 0.6;
		autoAimSizeFactor = 0.3;
		autoReload = 0;
		badScoreChar = "X";
		badScoreImage = "#(argb,8,8,3)color(1,1,1,1)";
		BleedingRate = 0.011;
		CancelThreshold = 0;
		CancelTime = 2;
		description = "Had his body scarred from shrapnel and bullets, long-time army service";
		displayName = "Elite";
		DivingLimitMultiplier = 1;
		groupArmorCoef = 1;
		healFullMedikOther = 1;
		HealFullMedikSelf = 0.9;
		healPartialMedikOther = 0.7;
		HealPartialMedikSelf = 0.5;
		HealSoldierOther = 0.4;
		HealSoldierSelf = 0.2;
		HealSpeedMedic = 0.064;
		HealSpeedMedicFAK = 0.064;
		HealSpeedMedicMedikit = 0.08;
		HealSpeedSoldier = 0.032;
		HealSpeedSoldierFAK = 0.032;
		levelAI = "AILevelHigh";
		maxPilotHeight = 10000;
		myArmorCoef = 1;
		peripheralVisionAid = 0;
		precisionEnemy = 0.85;
		precisionFriendly = 1;
		recoilCoef = 1;
		scoreChar = "*";
		scoreImage = "#(argb,8,8,3)color(1,1,1,1)";
		showCadetHints = 0;
		showCadetWP = 0;
		skillEnemy = 0.85;
		skillFriendly = 1;
		StabilizeMedicWithBandageOther = 1000;
		StabilizeMedicWithBandageSelf = 1;
		StabilizeMedicWithMedikitOther = 1000;
		StabilizeMedicWithMedikitSelf = 1000;
		StabilizeSoldierOther = 0;
		StabilizeSoldierSelf = 0;
		StabilizeSoldierWithBandageOther = 1;
		StabilizeSoldierWithBandageSelf = 0.5;
		visionAid = 0;
		class Flags
		{
			3rdPersonView[] = {0, 0};
			armor[] = {0, 0};
			autoAim[] = {0, 0};
			autoGuideAT[] = {0, 0};
			autoSpot[] = {0, 1};
			autoTrimEnabled[] = {0, 0};
			cameraShake[] = {1, 0};
			clockIndicator[] = {0, 0};
			deathMessages[] = {1, 1};
			enemyTag[] = {0, 0};
			extendetInfoType[] = {0, 0};
			friendlyTag[] = {0, 0};
			hud[] = {1, 1};
			hudGroupInfo[] = {0, 0};
			hudPerm[] = {0, 0};
			hudWp[] = {0, 0};
			hudWpPerm[] = {0, 0};
			map[] = {0, 0};
			mineTag[] = {0, 0};
			netStats[] = {1, 1};
			roughLanding[] = {0, 0};
			staminaBar[] = {0, 0};
			stanceIndicator[] = {0, 0};
			stressDamageEnabled[] = {1, 0};
			unlimitedSaves[] = {0, 0};
			vonID[] = {0, 1};
			weaponCursor[] = {1, 1};
			windEnabled[] = {1, 0};
		};
	};
	class Recruit
	{
		animSpeedCoef = 0;
		autoAimAngle = 7;
		autoAimDistance = 1.2;
		autoAimSizeFactor = 0.8;
		autoReload = 0;
		badScoreChar = "X";
		badScoreImage = "#(argb,8,8,3)color(1,1,1,1)";
		BleedingRate = 0.005;
		CancelThreshold = 0;
		CancelTime = 2;
		description = "Regular man who just enrolled into the army.";
		displayName = "Recruit";
		DivingLimitMultiplier = 1;
		groupArmorCoef = 1.5;
		healFullMedikOther = 1;
		HealFullMedikSelf = 0.9;
		healPartialMedikOther = 0.7;
		HealPartialMedikSelf = 0.5;
		HealSoldierOther = 0.4;
		HealSoldierSelf = 0.2;
		HealSpeedMedic = 0.12;
		HealSpeedMedicFAK = 0.12;
		HealSpeedMedicMedikit = 0.15;
		HealSpeedSoldier = 0.06;
		HealSpeedSoldierFAK = 0.06;
		levelAI = "AILevelLow";
		maxPilotHeight = 150;
		myArmorCoef = 1.5;
		peripheralVisionAid = 0.8;
		precisionEnemy = 0.4;
		precisionFriendly = 0.65;
		recoilCoef = 1;
		scoreChar = "o";
		scoreImage = "#(argb,8,8,3)color(1,1,1,1)";
		showCadetHints = 1;
		showCadetWP = 1;
		skillEnemy = 0.4;
		skillFriendly = 0.65;
		StabilizeMedicWithBandageOther = 1000;
		StabilizeMedicWithBandageSelf = 1;
		StabilizeMedicWithMedikitOther = 1000;
		StabilizeMedicWithMedikitSelf = 1000;
		StabilizeSoldierOther = 0;
		StabilizeSoldierSelf = 0;
		StabilizeSoldierWithBandageOther = 1;
		StabilizeSoldierWithBandageSelf = 0.5;
		visionAid = 0.8;
		class Flags
		{
			3rdPersonView[] = {1, 1};
			armor[] = {1, 1};
			autoAim[] = {0, 0};
			autoGuideAT[] = {1, 1};
			autoSpot[] = {1, 1};
			autoTrimEnabled[] = {1, 1};
			cameraShake[] = {1, 1};
			clockIndicator[] = {1, 1};
			deathMessages[] = {1, 1};
			enemyTag[] = {0, 1};
			extendetInfoType[] = {1, 1};
			friendlyTag[] = {1, 1};
			hud[] = {1, 1};
			hudGroupInfo[] = {1, 1};
			hudPerm[] = {1, 1};
			hudWp[] = {1, 1};
			hudWpPerm[] = {1, 1};
			map[] = {1, 1};
			mineTag[] = {1, 1};
			netStats[] = {1, 1};
			roughLanding[] = {1, 1};
			staminaBar[] = {1, 1};
			stanceIndicator[] = {1, 1};
			stressDamageEnabled[] = {0, 1};
			unlimitedSaves[] = {1, 1};
			vonID[] = {1, 1};
			weaponCursor[] = {1, 1};
			windEnabled[] = {0, 1};
		};
	};
	class Regular
	{
		animSpeedCoef = 0;
		autoAimAngle = 6;
		autoAimDistance = 1.3;
		autoAimSizeFactor = 0.9;
		autoReload = 0;
		badScoreChar = "X";
		badScoreImage = "#(argb,8,8,3)color(1,1,1,1)";
		BleedingRate = 0.007;
		CancelThreshold = 0;
		CancelTime = 2;
		description = "Just finished training, no real combat experience.";
		displayName = "Regular";
		DivingLimitMultiplier = 1;
		groupArmorCoef = 1;
		healFullMedikOther = 1;
		HealFullMedikSelf = 0.9;
		healPartialMedikOther = 0.7;
		HealPartialMedikSelf = 0.5;
		HealSoldierOther = 0.4;
		HealSoldierSelf = 0.2;
		HealSpeedMedic = 0.1;
		HealSpeedMedicFAK = 0.1;
		HealSpeedMedicMedikit = 0.125;
		HealSpeedSoldier = 0.05;
		HealSpeedSoldierFAK = 0.05;
		levelAI = "AILevelMedium";
		maxPilotHeight = 400;
		myArmorCoef = 1;
		peripheralVisionAid = 0;
		precisionEnemy = 0.5;
		precisionFriendly = 1;
		recoilCoef = 1;
		scoreChar = "o";
		scoreImage = "#(argb,8,8,3)color(1,1,1,1)";
		showCadetHints = 1;
		showCadetWP = 1;
		skillEnemy = 0.6;
		skillFriendly = 0.75;
		StabilizeMedicWithBandageOther = 1000;
		StabilizeMedicWithBandageSelf = 1;
		StabilizeMedicWithMedikitOther = 1000;
		StabilizeMedicWithMedikitSelf = 1000;
		StabilizeSoldierOther = 0;
		StabilizeSoldierSelf = 0;
		StabilizeSoldierWithBandageOther = 1;
		StabilizeSoldierWithBandageSelf = 0.5;
		visionAid = 0;
		class Flags
		{
			3rdPersonView[] = {1, 1};
			armor[] = {0, 0};
			autoAim[] = {0, 0};
			autoGuideAT[] = {0, 0};
			autoSpot[] = {1, 1};
			autoTrimEnabled[] = {0, 1};
			cameraShake[] = {1, 1};
			clockIndicator[] = {1, 1};
			deathMessages[] = {1, 1};
			enemyTag[] = {0, 1};
			extendetInfoType[] = {1, 1};
			friendlyTag[] = {1, 1};
			hud[] = {1, 1};
			hudGroupInfo[] = {1, 1};
			hudPerm[] = {1, 1};
			hudWp[] = {1, 1};
			hudWpPerm[] = {1, 1};
			map[] = {1, 1};
			mineTag[] = {1, 1};
			netStats[] = {1, 1};
			roughLanding[] = {0, 1};
			staminaBar[] = {1, 1};
			stanceIndicator[] = {1, 1};
			stressDamageEnabled[] = {1, 1};
			unlimitedSaves[] = {0, 1};
			vonId[] = {1, 1};
			weaponCursor[] = {1, 1};
			windEnabled[] = {1, 1};
		};
	};
	class Veteran
	{
		animSpeedCoef = 0;
		autoAimAngle = 4;
		autoAimDistance = 1;
		autoAimSizeFactor = 0.7;
		autoReload = 0;
		badScoreChar = "X";
		badScoreImage = "#(argb,8,8,3)color(1,1,1,1)";
		BleedingRate = 0.009;
		CancelThreshold = 0;
		CancelTime = 2;
		description = "Has survived several contacts with the enemy.";
		displayName = "Veteran";
		DivingLimitMultiplier = 1;
		groupArmorCoef = 1;
		healFullMedikOther = 1;
		HealFullMedikSelf = 0.9;
		healPartialMedikOther = 0.7;
		HealPartialMedikSelf = 0.5;
		HealSoldierOther = 0.4;
		HealSoldierSelf = 0.2;
		HealSpeedMedic = 0.08;
		HealSpeedMedicFAK = 0.08;
		HealSpeedMedicMedikit = 0.1;
		HealSpeedSoldier = 0.04;
		HealSpeedSoldierFAK = 0.04;
		levelAI = "AILevelHigh";
		maxPilotHeight = 10000;
		myArmorCoef = 1;
		peripheralVisionAid = 0;
		precisionEnemy = 0.75;
		precisionFriendly = 1;
		recoilCoef = 1;
		scoreChar = "*";
		scoreImage = "#(argb,8,8,3)color(1,1,1,1)";
		showCadetHints = 0;
		showCadetWP = 1;
		skillEnemy = 0.85;
		skillFriendly = 0.85;
		StabilizeMedicWithBandageOther = 1000;
		StabilizeMedicWithBandageSelf = 1;
		StabilizeMedicWithMedikitOther = 1000;
		StabilizeMedicWithMedikitSelf = 1000;
		StabilizeSoldierOther = 0;
		StabilizeSoldierSelf = 0;
		StabilizeSoldierWithBandageOther = 1;
		StabilizeSoldierWithBandageSelf = 0.5;
		visionAid = 0;
		class Flags
		{
			3rdPersonView[] = {1, 1};
			armor[] = {0, 0};
			autoAim[] = {0, 0};
			autoGuideAT[] = {0, 0};
			autoSpot[] = {1, 1};
			autoTrimEnabled[] = {0, 0};
			cameraShake[] = {1, 1};
			clockIndicator[] = {1, 1};
			deathMessages[] = {1, 1};
			enemyTag[] = {0, 0};
			extendetInfoType[] = {0, 1};
			friendlyTag[] = {0, 0};
			hud[] = {1, 1};
			hudGroupInfo[] = {1, 1};
			hudPerm[] = {0, 0};
			hudWp[] = {1, 1};
			hudWpPerm[] = {1, 1};
			map[] = {0, 0};
			mineTag[] = {0, 0};
			netStats[] = {1, 1};
			roughLanding[] = {0, 0};
			staminaBar[] = {1, 1};
			stanceIndicator[] = {1, 1};
			stressDamageEnabled[] = {1, 0};
			unlimitedSaves[] = {0, 0};
			vonId[] = {0, 1};
			weaponCursor[] = {1, 1};
			windEnabled[] = {1, 0};
		};
	};
};
