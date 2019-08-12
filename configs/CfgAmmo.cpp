class CfgAmmo
{
	access = 1;
	class AlienDrone_01_LandCrash_Sound: GrenadeHand
	{
		CraterEffects = "AlienDrone_01_CrashDust_Crater";
		dangerRadiusHit = 0;
		deflecting = 30;
		explosionEffects = "";
		explosionEffectsRadius = 1.5;
		explosionTime = 0.001;
		hit = 0;
		indirectHit = 1;
		indirectHitRange = 0.01;
		simulationStep = 0.001;
		SoundSetExplosion[] = {"AlienDrone_01_Crash_SoundSet"};
		suppressionRadiusHit = 0;
		typicalspeed = 26;
		whistleDist = 12;
		class CamShakeExplode
		{
			distance = 176.498;
			duration = 1.6;
			frequency = 20;
			power = 13;
		};
	};
	class AlienDrone_01_Sounds_DummyAmmo: BulletBase
	{
		cost = 1e+010;
		EffectFly = "";
		hit = 0.01;
		simulationStep = 0.001;
		submunitionAmmo = "AlienDrone_01_Sounds_DummyAmmo_Fake";
		submunitionConeAngle = 1;
		submunitionConeType[] = {"randomcenter", 1};
		triggerDistance = 0.0001;
		triggerSpeedCoef[] = {1e-005};
		triggerTime = 0.0001;
	};
	class AlienDrone_01_Sounds_DummyAmmo_Fake: BulletBase
	{
		EffectFly = "";
		hit = 1;
		indirectHit = 1;
		indirectHitRange = 1;
		soundSetBulletFly[] = {};
		soundSetSonicCrack[] = {};
		timeToLive = 0.001;
	};
	class ammo_AAA_Gun35mm_AA: ammo_Gun35mmAABase
	{
		model = "\A3\Weapons_f\Data\bullettracer\tracer_white";
		shotDistractionAI = -0.5;
		tracerEndTime = 2;
		tracerScale = 2;
		tracerStartTime = 0.05;
	};
	class ammo_Bomb_LaserGuidedBase: LaserBombCore
	{
		aiAmmoUsageFlags = "128 + 512";
		airFriction = 0.06;
		autoSeekTarget = 1;
		cmImmunity = 0.3;
		craterEffects = "BombCrater";
		dangerRadiusHit = 1000;
		explosionEffects = "BombExplosion";
		explosionSoundEffect = "DefaultExplosion";
		explosionTime = 2;
		flightProfiles[] = {"LoalAltitude"};
		fuseDistance = 50;
		hit = 5000;
		indirectHit = 1100;
		indirectHitRange = 12;
		lockSeekRadius = 500;
		maneuvrability = 10;
		missileKeepLockedCone = 120;
		missileLockCone = 120;
		missileLockMaxDistance = 5000;
		missileLockMaxSpeed = 30;
		missileLockMinDistance = 100;
		model = "\A3\weapons_f\empty";
		multiSoundHit[] = {"soundHit1", 0.2, "soundHit2", 0.2, "soundHit3", 0.2, "soundHit4", 0.2, "soundHit5", 0.2};
		proxyShape = "\A3\weapons_f\empty";
		sideAirFriction = 0.12;
		soundHit1[] = {"\A3\Sounds_F\weapons\Explosion\expl_big_1", 2.51189, 1, 2400};
		soundHit2[] = {"\A3\Sounds_F\weapons\Explosion\expl_big_2", 2.51189, 1, 2400};
		soundHit3[] = {"\A3\Sounds_F\weapons\Explosion\expl_big_3", 2.51189, 1, 2400};
		soundHit4[] = {"\A3\Sounds_F\weapons\Explosion\expl_shell_1", 2.51189, 1, 2400};
		soundHit5[] = {"\A3\Sounds_F\weapons\Explosion\expl_shell_2", 2.51189, 1, 2400};
		suppressionRadiusHit = 120;
		trackLead = 0.95;
		trackOversteer = 1;
		weaponLockSystem = 4;
		whistleDist = 24;
		class Components
		{
			class SensorsManagerComponent
			{
				class Components
				{
					class LaserSensorComponent: SensorTemplateLaser
					{
						angleRangeHorizontal = 120;
						angleRangeVertical = 120;
						maxTrackableSpeed = 30;
						class AirTarget
						{
							maxRange = 5000;
							minRange = 5000;
							objectDistanceLimitCoef = -1;
							viewDistanceLimitCoef = -1;
						};
						class GroundTarget
						{
							maxRange = 5000;
							minRange = 5000;
							objectDistanceLimitCoef = -1;
							viewDistanceLimitCoef = -1;
						};
					};
					class NVSensorComponent: SensorTemplateNV
					{
						angleRangeHorizontal = 120;
						angleRangeVertical = 120;
						maxTrackableSpeed = 30;
						class AirTarget
						{
							maxRange = 5000;
							minRange = 500;
							objectDistanceLimitCoef = -1;
							viewDistanceLimitCoef = 1;
						};
						class GroundTarget
						{
							maxRange = 5000;
							minRange = 500;
							objectDistanceLimitCoef = 1;
							viewDistanceLimitCoef = 1;
						};
					};
				};
			};
		};
		class LoalAltitude
		{
			lockSeekAltitude = 500;
		};
	};
	class ammo_Bomb_SDB: ammo_Bomb_SmallDiameterBase
	{
		model = "\A3\Weapons_F_Sams\Ammo\Bomb_05_F_fly.p3d";
		proxyShape = "\A3\Weapons_F_Sams\Ammo\Bomb_05_F.p3d";
	};
	class ammo_Bomb_SmallDiameterBase: ammo_Bomb_LaserGuidedBase
	{
		cost = 1200;
		craterEffects = "AAMissileCrater";
		dangerRadiusHit = 1500;
		explosionEffects = "AAMissileExplosion";
		explosionSoundEffect = "DefaultExplosion";
		explosionTime = 2;
		fuseDistance = 35;
		hit = 1800;
		indirectHit = 85;
		indirectHitRange = 3;
		maneuvrability = 20;
		model = "\A3\weapons_f\empty";
		multiSoundHit[] = {"soundHit1", 0.2, "soundHit2", 0.2, "soundHit3", 0.2, "soundHit4", 0.2, "soundHit5", 0.2};
		proxyShape = "\A3\weapons_f\empty";
		soundHit1[] = {"A3\Sounds_F\weapons\Explosion\expl_big_1", 2.51189, 1, 2400};
		soundHit2[] = {"A3\Sounds_F\weapons\Explosion\expl_big_2", 2.51189, 1, 2400};
		soundHit3[] = {"A3\Sounds_F\weapons\Explosion\expl_big_3", 2.51189, 1, 2400};
		soundHit4[] = {"A3\Sounds_F\weapons\Explosion\expl_shell_1", 2.51189, 1, 2400};
		soundHit5[] = {"A3\Sounds_F\weapons\Explosion\expl_shell_2", 2.51189, 1, 2400};
		suppressionRadiusHit = 200;
		trackLead = 0.95;
		trackOversteer = 1;
		whistleDist = 24;
		class Components
		{
			class SensorsManagerComponent
			{
				class Components
				{
					class IRSensorComponent: SensorTemplateIR
					{
						angleRangeHorizontal = 180;
						angleRangeVertical = 180;
						maxTrackableSpeed = 55;
						class AirTarget
						{
							maxRange = 8000;
							minRange = 500;
							objectDistanceLimitCoef = -1;
							viewDistanceLimitCoef = 1;
						};
						class GroundTarget
						{
							maxRange = 8000;
							minRange = 500;
							objectDistanceLimitCoef = 1;
							viewDistanceLimitCoef = 1;
						};
					};
					class LaserSensorComponent: SensorTemplateLaser
					{
						angleRangeHorizontal = 180;
						angleRangeVertical = 180;
						maxTrackableSpeed = 30;
						class AirTarget
						{
							maxRange = 8000;
							minRange = 8000;
							objectDistanceLimitCoef = -1;
							viewDistanceLimitCoef = -1;
						};
						class GroundTarget
						{
							maxRange = 8000;
							minRange = 8000;
							objectDistanceLimitCoef = -1;
							viewDistanceLimitCoef = -1;
						};
					};
					class NVSensorComponent: SensorTemplateNV
					{
						angleRangeHorizontal = 180;
						angleRangeVertical = 180;
						maxTrackableSpeed = 30;
						class AirTarget
						{
							maxRange = 8000;
							minRange = 8000;
							objectDistanceLimitCoef = -1;
							viewDistanceLimitCoef = -1;
						};
						class GroundTarget
						{
							maxRange = 8000;
							minRange = 8000;
							objectDistanceLimitCoef = -1;
							viewDistanceLimitCoef = -1;
						};
					};
				};
			};
		};
	};
	class ammo_Fighter01_Gun20mm_AA: ammo_Gun20mmAABase
	{
		model = "\A3\Weapons_f\Data\bullettracer\tracer_white";
		tracerEndTime = 2;
		tracerScale = 2;
		tracerStartTime = 0.05;
	};
	class ammo_Fighter02_Gun30mm_AA: ammo_Gun30mmAABase
	{
		model = "\A3\Weapons_f\Data\bullettracer\tracer_white";
		tracerEndTime = 2;
		tracerScale = 2;
		tracerStartTime = 0.05;
	};
	class ammo_Fighter04_Gun20mm_AA: ammo_Gun20mmAABase
	{
		model = "\A3\Weapons_f\Data\bullettracer\tracer_green";
		tracerEndTime = 2;
		tracerScale = 2;
		tracerStartTime = 0.05;
	};
	class ammo_Gun20mmAABase: BulletBase
	{
		aiAmmoUsageFlags = 256;
		airFriction = -0.00078;
		airLock = 1;
		audibleFire = 200;
		caliber = 3.4;
		cost = 30;
		CraterEffects = "ExploAmmoCrater";
		dangerRadiusBulletClose = 16;
		dangerRadiusHit = 40;
		explosionEffects = "ExploAmmoExplosion";
		explosionSoundEffect = "DefaultExplosion";
		explosive = 0;
		hit = 60;
		indirectHit = 6;
		indirectHitRange = 0.4;
		model = "\A3\Weapons_f\Data\bullettracer\tracer_white";
		multiSoundHit[] = {"soundHit1", 0.25, "soundHit2", 0.25, "soundHit3", 0.25, "soundHit4", 0.25};
		muzzleEffect = "";
		nvgOnly = 0;
		soundHit1[] = {"A3\Sounds_F\arsenal\explosives\grenades\Explosion_mini_grenade_01", 1.77828, 1, 1300};
		soundHit2[] = {"A3\Sounds_F\arsenal\explosives\grenades\Explosion_mini_grenade_02", 1.77828, 1, 1300};
		soundHit3[] = {"A3\Sounds_F\arsenal\explosives\grenades\Explosion_mini_grenade_03", 1.77828, 1, 1300};
		soundHit4[] = {"A3\Sounds_F\arsenal\explosives\grenades\Explosion_mini_grenade_04", 1.77828, 1, 1300};
		suppressionRadiusBulletClose = 10;
		suppressionRadiusHit = 14;
		tracerEndTime = 2;
		tracerScale = 2;
		tracerStartTime = 0.05;
		typicalSpeed = 1030;
		visibleFire = 32;
		visibleFireTime = 4;
		warheadName = "AP";
		class CamShakeExplode
		{
			distance = 43.7771;
			duration = 0.8;
			frequency = 20;
			power = 4;
		};
		class CamShakeFire
		{
			distance = 35.7771;
			duration = 0.8;
			frequency = 20;
			power = 2.11474;
		};
		class CamShakeHit
		{
			distance = 1;
			duration = 0.4;
			frequency = 20;
			power = 20;
		};
		class CamShakePlayerFire
		{
			distance = 1;
			duration = 0.1;
			frequency = 20;
			power = 0.01;
		};
	};
	class ammo_Gun30mmAABase: BulletBase
	{
		aiAmmoUsageFlags = 256;
		airFriction = -0.0005;
		airLock = 1;
		audibleFire = 200;
		caliber = 4.5;
		cost = 30;
		CraterEffects = "ExploAmmoCrater";
		dangerRadiusBulletClose = 16;
		dangerRadiusHit = 40;
		explosionEffects = "ExploAmmoExplosion";
		explosionSoundEffect = "DefaultExplosion";
		explosive = 0;
		hit = 70;
		indirectHit = 6;
		indirectHitRange = 1;
		model = "\A3\Weapons_f\Data\bullettracer\tracer_white";
		multiSoundHit[] = {"soundHit1", 0.25, "soundHit2", 0.25, "soundHit3", 0.25, "soundHit4", 0.25};
		muzzleEffect = "";
		nvgOnly = 0;
		soundHit1[] = {"A3\Sounds_F\arsenal\explosives\grenades\Explosion_mini_grenade_01", 1.77828, 1, 1300};
		soundHit2[] = {"A3\Sounds_F\arsenal\explosives\grenades\Explosion_mini_grenade_02", 1.77828, 1, 1300};
		soundHit3[] = {"A3\Sounds_F\arsenal\explosives\grenades\Explosion_mini_grenade_03", 1.77828, 1, 1300};
		soundHit4[] = {"A3\Sounds_F\arsenal\explosives\grenades\Explosion_mini_grenade_04", 1.77828, 1, 1300};
		suppressionRadiusBulletClose = 10;
		suppressionRadiusHit = 14;
		tracerEndTime = 2;
		tracerScale = 2;
		tracerStartTime = 0.1;
		typicalSpeed = 980;
		visibleFire = 32;
		visibleFireTime = 4;
		warheadName = "AP";
		class CamShakeExplode
		{
			distance = 43.7771;
			duration = 0.8;
			frequency = 20;
			power = 4;
		};
		class CamShakeFire
		{
			distance = 35.7771;
			duration = 0.8;
			frequency = 20;
			power = 2.11474;
		};
		class CamShakeHit
		{
			distance = 1;
			duration = 0.4;
			frequency = 20;
			power = 20;
		};
		class CamShakePlayerFire
		{
			distance = 1;
			duration = 0.1;
			frequency = 20;
			power = 0.01;
		};
	};
	class ammo_Gun35mmAABase: BulletBase
	{
		aiAmmoUsageFlags = 256;
		airFriction = -0.00035;
		airLock = 1;
		audibleFire = 200;
		caliber = 4.5;
		cost = 42;
		CraterEffects = "ExploAmmoCrater";
		dangerRadiusBulletClose = 20;
		dangerRadiusHit = 60;
		deflecting = 0;
		explosionEffects = "ExploAmmoExplosion";
		explosionSoundEffect = "DefaultExplosion";
		explosive = 0;
		hit = 72;
		indirectHit = 6;
		indirectHitRange = 1;
		model = "\A3\Weapons_f\Data\bullettracer\tracer_red";
		multiSoundHit[] = {"soundHit1", 0.25, "soundHit2", 0.25, "soundHit3", 0.25, "soundHit4", 0.25};
		muzzleEffect = "";
		soundHit1[] = {"A3\Sounds_F\arsenal\explosives\shells\30mm40mm_shell_explosion_01", 1.77828, 1, 1600};
		soundHit2[] = {"A3\Sounds_F\arsenal\explosives\shells\30mm40mm_shell_explosion_02", 1.77828, 1, 1600};
		soundHit3[] = {"A3\Sounds_F\arsenal\explosives\shells\30mm40mm_shell_explosion_03", 1.77828, 1, 1600};
		soundHit4[] = {"A3\Sounds_F\arsenal\explosives\shells\30mm40mm_shell_explosion_04", 1.77828, 1, 1600};
		suppressionRadiusBulletClose = 12;
		suppressionRadiusHit = 24;
		tracerEndTime = 2;
		tracerScale = 2;
		tracerStartTime = 0.1;
		typicalSpeed = 950;
		visibleFire = 38;
		visibleFireTime = 5;
		warheadName = "AP";
		class CamShakeExplode
		{
			distance = 41.9411;
			duration = 0.8;
			frequency = 20;
			power = 3.6;
		};
		class CamShakeFire
		{
			distance = 17.8885;
			duration = 0.4;
			frequency = 20;
			power = 1.49535;
		};
		class CamShakeHit
		{
			distance = 1;
			duration = 0.4;
			frequency = 20;
			power = 18;
		};
		class CamShakePlayerFire
		{
			distance = 1;
			duration = 0.1;
			frequency = 20;
			power = 0.001;
		};
	};
	class ammo_Missile_AA_R73: ammo_Missile_ShortRangeAABase
	{
		airFriction = 0.16;
		cmimmunity = 0.92;
		hit = 140;
		indirectHit = 95;
		maneuvrability = 38;
		missileKeepLockedCone = 150;
		missileLockCone = 150;
		missileLockMaxDistance = 6000;
		missileLockMinDistance = 75;
		model = "\A3\Weapons_F_Jets\Ammo\Missile_AA_07_fly_F";
		proxyShape = "\A3\Weapons_F_Jets\Ammo\Missile_AA_07_F";
		sideAirFriction = 0.25;
		thrustTime = 6;
		timeToLive = 25;
		class Components: Components
		{
			class SensorsManagerComponent: SensorsManagerComponent
			{
				class Components: Components
				{
					class IRSensorComponent: IRSensorComponent
					{
						angleRangeHorizontal = 150;
						angleRangeVertical = 150;
						class AirTarget
						{
							maxRange = 6000;
							minRange = 500;
							objectDistanceLimitCoef = -1;
							viewDistanceLimitCoef = 1;
						};
						class GroundTarget
						{
							maxRange = 4000;
							minRange = 500;
							objectDistanceLimitCoef = 1;
							viewDistanceLimitCoef = 1;
						};
					};
				};
			};
		};
	};
	class ammo_Missile_AA_R77: ammo_Missile_MediumRangeAABase
	{
		airFriction = 0.08;
		maneuvrability = 30;
		missileLockCone = 90;
		model = "\A3\Weapons_F_Jets\Ammo\Missile_AA_05_fly_F";
		proxyShape = "\A3\Weapons_F_Jets\Ammo\Missile_AA_05_F";
		sideAirFriction = 0.16;
		thrust = 240;
		class Components: Components
		{
			class SensorsManagerComponent: SensorsManagerComponent
			{
				class Components: Components
				{
					class ActiveRadarSensorComponent: ActiveRadarSensorComponent
					{
						angleRangeHorizontal = 65;
						angleRangeVertical = 65;
					};
					class DataLinkSensorComponent: ActiveRadarSensorComponent
					{
						componentType = "DataLinkSensorComponent";
					};
				};
			};
		};
	};
	class ammo_Missile_AMRAAM_C: ammo_Missile_MediumRangeAABase
	{
		model = "\A3\Weapons_F_Jets\Ammo\Missile_AA_10_fly_F";
		proxyShape = "\A3\Weapons_F_Jets\Ammo\Missile_AA_10_F";
	};
	class ammo_Missile_AMRAAM_D: ammo_Missile_MediumRangeAABase
	{
		airFriction = 0.065;
		cmimmunity = 0.96;
		missileKeepLockedCone = 140;
		missileLockCone = 140;
		missileLockMaxDistance = 13000;
		model = "\A3\Weapons_F_Jets\Ammo\Missile_AA_06_fly_F";
		proxyShape = "\A3\Weapons_F_Jets\Ammo\Missile_AA_06_F";
		thrustTime = 7.5;
		class Components: Components
		{
			class SensorsManagerComponent: SensorsManagerComponent
			{
				class Components: Components
				{
					class ActiveRadarSensorComponent: ActiveRadarSensorComponent
					{
						angleRangeHorizontal = 100;
						angleRangeVertical = 100;
						class AirTarget
						{
							maxRange = 13000;
							minRange = 13000;
							objectDistanceLimitCoef = -1;
							viewDistanceLimitCoef = -1;
						};
						class GroundTarget
						{
							maxRange = 9000;
							minRange = 9000;
							objectDistanceLimitCoef = -1;
							viewDistanceLimitCoef = -1;
						};
					};
					class DataLinkSensorComponent: ActiveRadarSensorComponent
					{
						componentType = "DataLinkSensorComponent";
					};
				};
			};
		};
	};
	class ammo_Missile_AntiRadiationBase: MissileBase
	{
		aiAmmoUsageFlags = "128 + 512";
		airFriction = 0.05;
		airLock = 0;
		autoSeekTarget = 1;
		cameraViewAvailable = 0;
		cmImmunity = 0.5;
		cost = 1500;
		craterEffects = "AAMissileCrater";
		effectsMissile = "missile3";
		effectsMissileInit = "PylonBackEffects";
		explosionEffects = "AAMissileExplosion";
		flightProfiles[] = {"LoalDistance"};
		fuseDistance = 500;
		hit = 2100;
		indirectHit = 85;
		indirectHitRange = 8;
		initTime = 0;
		lockSeekRadius = 0;
		maneuvrability = 27;
		manualControl = 0;
		maxControlRange = 16000;
		maxSpeed = 828;
		missileKeepLockedCone = 120;
		missileLockCone = 120;
		missileLockMaxDistance = 16000;
		missileLockMaxSpeed = 55;
		missileLockMinDistance = 1000;
		model = "\A3\weapons_f\empty";
		muzzleEffect = "BIS_fnc_effectFiredHeliRocket";
		proxyShape = "\A3\weapons_f\empty";
		sideAirFriction = 0.1;
		simulationStep = 0.002;
		thrust = 240;
		thrustTime = 5;
		timeToLive = 40;
		trackLead = 1;
		trackOversteer = 1;
		warheadName = "HE";
		weaponLockSystem = 16;
		whistleDist = 20;
		class CamShakeExplode
		{
			distance = 163.905;
			duration = 2;
			frequency = 20;
			power = 22;
		};
		class CamShakeFire
		{
			distance = 71.5542;
			duration = 1.8;
			frequency = 20;
			power = 2.9907;
		};
		class CamShakeHit
		{
			distance = 1;
			duration = 0.6;
			frequency = 20;
			power = 110;
		};
		class CamShakePlayerFire
		{
			distance = 1;
			duration = 0.1;
			frequency = 20;
			power = 4;
		};
		class Components: Components
		{
			class SensorsManagerComponent
			{
				class Components
				{
					class AntiRadiationSensorComponent: SensorTemplateAntiRadiation
					{
						angleRangeHorizontal = 60;
						angleRangeVertical = 180;
						maxTrackableATL = 100;
						maxTrackableSpeed = 60;
						class AirTarget
						{
							maxRange = 16000;
							minRange = 16000;
							objectDistanceLimitCoef = -1;
							viewDistanceLimitCoef = -1;
						};
						class GroundTarget
						{
							maxRange = 16000;
							minRange = 16000;
							objectDistanceLimitCoef = -1;
							viewDistanceLimitCoef = -1;
						};
					};
				};
			};
		};
		class LoalDistance
		{
			lockSeekDistanceFromParent = 1000;
		};
	};
	class ammo_Missile_BIM9X: ammo_Missile_ShortRangeAABase
	{
		model = "\A3\Weapons_F_Jets\Ammo\Missile_AA_08_fly_F";
		proxyShape = "\A3\Weapons_F_Jets\Ammo\Missile_AA_08_F";
	};
	class ammo_Missile_CannonLaunchedBase: MissileBase
	{
		aiAmmoUsageFlags = "128 + 512";
		airFriction = 0.05;
		cameraViewAvailable = 1;
		cmImmunity = 1;
		cost = 500;
		craterEffects = "ATRocketCrater";
		dangerRadiusHit = 1000;
		effectsMissile = "missile2";
		effectsMissileInit = "RocketBackEffectsRPG";
		explosionEffects = "ATRocketExplosion";
		explosionSoundEffect = "DefaultExplosion";
		explosive = 0.4;
		fuseDistance = 50;
		hit = 750;
		indirectHit = 15;
		indirectHitRange = 4.5;
		initTime = 0;
		lockType = 1;
		maneuvrability = 3;
		manualControl = 1;
		manualControlOffset = 100;
		maxControlRange = 5000;
		maxSpeed = 280;
		missileManualControlCone = 90;
		model = "\A3\weapons_f\empty";
		muzzleEffect = "";
		proxyShape = "\A3\weapons_f\empty";
		sideAirFriction = 0.1;
		simulationStep = 0.002;
		suppressionRadiusHit = 120;
		thrust = 60;
		thrustTime = 5;
		timeToLive = 75;
		trackLead = 0.95;
		trackOversteer = 1.4;
		warheadName = "HE";
		weaponLockSystem = 16;
		whistleDist = 4;
		class CamShakeExplode
		{
			distance = 91.3296;
			duration = 1.4;
			frequency = 20;
			power = 11;
		};
		class CamShakeFire
		{
			distance = 61.9677;
			duration = 1.6;
			frequency = 20;
			power = 2.78316;
		};
		class CamShakeHit
		{
			distance = 1;
			duration = 0.6;
			frequency = 20;
			power = 110;
		};
		class CamShakePlayerFire
		{
			distance = 1;
			duration = 0.1;
			frequency = 20;
			power = 3;
		};
		class Components: Components
		{
			class SensorsManagerComponent
			{
				class Components
				{
					class AIManualSensorComponent: SensorTemplateVisual
					{
						angleRangeHorizontal = 3;
						angleRangeVertical = 3;
						maxTrackableATL = 50;
						maxTrackableSpeed = 35;
						class AirTarget
						{
							maxRange = 8000;
							minRange = 500;
							objectDistanceLimitCoef = -1;
							viewDistanceLimitCoef = 1;
						};
						class GroundTarget
						{
							maxRange = 8000;
							minRange = 500;
							objectDistanceLimitCoef = 1;
							viewDistanceLimitCoef = 1;
						};
					};
				};
			};
		};
	};
	class ammo_Missile_Cruise_01: ammo_Missile_CruiseBase
	{
		cameraViewAvailable = 1;
		model = "\A3\Weapons_F_Destroyer\Ammo\Missile_Cruise_01_Fly_F";
		proxyShape = "\A3\Weapons_F_Destroyer\Ammo\Missile_Cruise_01_Fly_F";
	};
	class ammo_Missile_Cruise_01_Cluster: ammo_Missile_Cruise_01
	{
		cameraViewAvailable = 1;
		model = "\A3\Weapons_F_Destroyer\Ammo\Missile_Cruise_01_Fly_F";
		proxyShape = "\A3\Weapons_F_Destroyer\Ammo\Missile_Cruise_01_Fly_F";
		submunitionAmmo[] = {"Mo_cluster_AP", 0.93, "Mo_cluster_AP_UXO_deploy", 0.07};
		submunitionConeAngle = 19;
		submunitionConeType[] = {"randomcenter", 50};
		triggerDistance = 250;
		triggerSpeedCoef[] = {0.5, 1};
	};
	class ammo_Missile_CruiseBase: MissileBase
	{
		aiAmmoUsageFlags = "128 + 512";
		airFriction = 0.45;
		airLock = 0;
		audibleFire = 64;
		autoSeekTarget = 0;
		cameraViewAvailable = 1;
		cmImmunity = 1;
		cost = 5000;
		craterEffects = "HeavyBombCrater";
		dangerRadiusHit = 2000;
		effectsMissile = "CruiseMissile";
		effectsMissileInit = "RocketBackEffectsRPG";
		explosionEffects = "HeavyBombExplosion";
		explosive = 0.8;
		flightProfiles[] = {"Cruise"};
		fuseDistance = 100;
		hit = 6000;
		indirectHit = 2000;
		indirectHitRange = 30;
		initTime = 0.3;
		lockSeekRadius = 1500;
		lockType = 0;
		maneuvDependsOnSpeedCoef = 0.4;
		maneuvrability = 16;
		maxSpeed = 194.444;
		missileKeepLockedCone = 360;
		missileLockCone = 360;
		missileLockMaxDistance = 32000;
		missileLockMaxSpeed = 1;
		missileLockMinDistance = 50;
		model = "\A3\weapons_f\empty";
		muzzleEffect = "BIS_fnc_effectFiredCruiseMissile";
		proxyShape = "\A3\weapons_f\empty";
		sideAirFriction = 0.5;
		simulationStep = 0.002;
		soundEngine[] = {"A3\Sounds_F\weapons\Rockets\rocket_fly_2", 1.58489, 1.8, 1000};
		soundFly[] = {"A3\Sounds_F\weapons\Rockets\rocket_fly_2", 1.58489, 1.8, 1000};
		soundSetExplosion[] = {"BombsHeavy_Exp_SoundSet", "BombsHeavy_Tail_SoundSet", "Explosion_Debris_SoundSet"};
		suppressionRadiusHit = 200;
		thrust = 35;
		thrustTime = 200;
		timeToLive = 205;
		trackLead = 0.5;
		trackOversteer = 1.2;
		visibleFire = 64;
		visibleFireTime = 20;
		warheadName = "HE";
		weaponLockSystem = 16;
		whistleDist = 64;
		class CamShakeExplode
		{
			distance = 361.326;
			duration = 3;
			frequency = 20;
			power = 46;
		};
		class CamShakeFire
		{
			distance = 121.326;
			duration = 3;
			frequency = 20;
			power = 3.89432;
		};
		class CamShakeHit
		{
			distance = 1;
			duration = 0.8;
			frequency = 20;
			power = 230;
		};
		class CamShakePlayerFire
		{
			distance = 1;
			duration = 0.1;
			frequency = 20;
			power = 5;
		};
		class Components: Components
		{
			class SensorsManagerComponent
			{
				class Components
				{
					class DataLinkSensorComponent: SensorTemplateDataLink
					{
						maxTrackableSpeed = 1;
						class AirTarget
						{
							maxRange = 32000;
							minRange = 32000;
							objectDistanceLimitCoef = -1;
							viewDistanceLimitCoef = -1;
						};
						class GroundTarget
						{
							maxRange = 32000;
							minRange = 32000;
							objectDistanceLimitCoef = -1;
							viewDistanceLimitCoef = -1;
						};
					};
				};
			};
		};
		class Cruise
		{
			lockDistanceToTarget = 300;
			preferredFlightAltitude = 100;
		};
	};
	class ammo_Missile_HARM: ammo_Missile_AntiRadiationBase
	{
		model = "\A3\Weapons_F_Sams\Ammo\Missile_AR_01_F_fly.p3d";
		proxyShape = "\A3\Weapons_F_Sams\Ammo\Missile_AR_01_F.p3d";
	};
	class ammo_Missile_KH58: ammo_Missile_AntiRadiationBase
	{
		model = "\A3\Weapons_F_Sams\Ammo\Missile_AR_02_F_fly.p3d";
		proxyShape = "\A3\Weapons_F_Sams\Ammo\Missile_AR_02_F.p3d";
	};
	class ammo_Missile_LongRangeAABase: MissileBase
	{
		activeSensorAlwaysOn = 0;
		aiAmmoUsageFlags = 256;
		airFriction = 0.09;
		airLock = 2;
		autoSeekTarget = 1;
		cmimmunity = 0.95;
		cost = 500;
		CraterEffects = "AAMissileCrater";
		effectsFire = "CannonFire";
		effectsMissile = "FX_Missile_SAM_LongRange";
		explosionEffects = "AAMissileExplosion";
		flightProfiles[] = {"LoalDistance"};
		fuseDistance = 100;
		hit = 400;
		indirectHit = 90;
		indirectHitRange = 25;
		initTime = 0.1;
		lockedTargetSound[] = {"A3\Sounds_F\arsenal\weapons_static\Missile_Launcher\Locked_Titan", 0.562341, 2.5};
		lockingTargetSound[] = {"A3\Sounds_F\arsenal\weapons_static\Missile_Launcher\Locking_Titan", 0.562341, 1};
		lockType = 0;
		maneuvrability = 25;
		maxcontrolRange = 16000;
		maxSpeed = 850;
		missileFireAnim = "rocket_fire_hide";
		missileKeepLockedCone = 90;
		missileLockCone = 70;
		missileLockMaxDistance = 16000;
		missileLockMaxSpeed = 777.778;
		missileLockMinDistance = 1000;
		model = "\A3\weapons_f\empty";
		multiSoundHit[] = {"soundHit1", 0.34, "soundHit2", 0.33, "soundHit3", 0.33};
		muzzleEffect = "";
		proximityExplosionDistance = 35;
		proxyShape = "\A3\weapons_f\empty";
		reloadMagazineSound[] = {"A3\Sounds_F\arsenal\weapons_static\Missile_Launcher\reload_Missile_Launcher", 0.891251, 1, 10};
		sideAirFriction = 0.18;
		simulationStep = 0.001;
		soundFly[] = {"A3\Sounds_F\arsenal\weapons_static\Missile_Launcher\rocket_fly", 1, 1.1, 700};
		soundHit1[] = {"A3\Sounds_F\arsenal\weapons\Launchers\Titan\Explosion_titan_missile_01", 2.51189, 1, 1900};
		soundHit2[] = {"A3\Sounds_F\arsenal\weapons\Launchers\Titan\Explosion_titan_missile_02", 2.51189, 1, 1900};
		soundHit3[] = {"A3\Sounds_F\arsenal\weapons\Launchers\Titan\Explosion_titan_missile_03", 2.51189, 1, 1900};
		sounds[] = {"StandardSound"};
		SoundSetExplosion[] = {"RocketsHeavy_Exp_SoundSet", "RocketsHeavy_Tail_SoundSet", "Explosion_Debris_SoundSet"};
		supersonicCrackFar[] = {"A3\Sounds_F\weapons\Explosion\supersonic_crack_50meters", 0.316228, 1, 50};
		supersonicCrackNear[] = {"A3\Sounds_F\weapons\Explosion\supersonic_crack_close", 0.398107, 1, 20};
		thrust = 450;
		thrustTime = 20;
		timeToLive = 55;
		trackLead = 1.06;
		trackOversteer = 0.7;
		warheadName = "HE";
		weaponLockSystem = "8 + 16";
		class Components: Components
		{
			class SensorsManagerComponent
			{
				class Components
				{
					class ActiveRadarSensorComponent: SensorTemplateActiveRadar
					{
						angleRangeHorizontal = 120;
						angleRangeVertical = 120;
						groundNoiseDistanceCoef = 0.2;
						maxGroundNoiseDistance = 50;
						maxSpeedThreshold = 40;
						maxTrackableATL = 1e+010;
						maxTrackableSpeed = 777.778;
						minSpeedThreshold = 30;
						minTrackableATL = 10;
						minTrackableSpeed = -1e+010;
						class AirTarget
						{
							maxRange = 16000;
							minRange = 16000;
							objectDistanceLimitCoef = -1;
							viewDistanceLimitCoef = -1;
						};
						class GroundTarget
						{
							maxRange = 8000;
							minRange = 8000;
							objectDistanceLimitCoef = -1;
							viewDistanceLimitCoef = -1;
						};
					};
					class DataLinkSensorComponent: ActiveRadarSensorComponent
					{
						componentType = "DataLinkSensorComponent";
					};
				};
			};
		};
		class LoalDistance
		{
			lockSeekDistanceFromParent = 2000;
		};
		class StandardSound
		{
			begin1[] = {"A3\Sounds_F\arsenal\weapons_static\Missile_Launcher\Titan", 1.41254, 1, 1100};
			soundBegin[] = {"begin1", 1};
			soundSetShot[] = {"Static_Launcher_Titan_ATAA_Shot_SoundSet", "Static_Launcher_Titan_ATAA_Tail_SoundSet"};
		};
	};
	class ammo_Missile_MediumRangeAABase: MissileBase
	{
		activeSensorAlwaysOn = 0;
		aiAmmoUsageFlags = 256;
		airFriction = 0.07;
		airLock = 2;
		autoSeekTarget = 1;
		cmimmunity = 0.95;
		cost = 1500;
		CraterEffects = "AAMissileCrater";
		effectsMissile = "FX_Missile_AA";
		explosionEffects = "AAMissileExplosion";
		flightProfiles[] = {"LoalDistance"};
		fuseDistance = 750;
		hit = 200;
		indirectHit = 125;
		indirectHitRange = 13;
		initTime = 0.6;
		lockType = 0;
		maneuvrability = 23;
		maxSpeed = 900;
		missileFireAnim = "rocket_fire_hide";
		missileKeepLockedCone = 90;
		missileLockCone = 70;
		missileLockMaxDistance = 12000;
		missileLockMaxSpeed = 777.778;
		missileLockMinDistance = 800;
		model = "\A3\weapons_f\empty";
		muzzleEffect = "";
		proximityExplosionDistance = 30;
		proxyShape = "\A3\weapons_f\empty";
		sideAirFriction = 0.18;
		simulationStep = 0.002;
		thrust = 210;
		thrustTime = 7;
		timeToLive = 35;
		trackLead = 1.06;
		trackOversteer = 1.1;
		warheadName = "HE";
		weaponLockSystem = "8 + 16";
		class Components: Components
		{
			class SensorsManagerComponent
			{
				class Components
				{
					class ActiveRadarSensorComponent: SensorTemplateActiveRadar
					{
						angleRangeHorizontal = 50;
						angleRangeVertical = 50;
						groundNoiseDistanceCoef = 0.2;
						maxSpeedThreshold = 40;
						maxTrackableSpeed = 777.778;
						minSpeedThreshold = 30;
						minTrackableATL = 10;
						class AirTarget
						{
							maxRange = 12000;
							minRange = 12000;
							objectDistanceLimitCoef = -1;
							viewDistanceLimitCoef = -1;
						};
						class GroundTarget
						{
							maxRange = 8000;
							minRange = 8000;
							objectDistanceLimitCoef = -1;
							viewDistanceLimitCoef = -1;
						};
					};
					class DataLinkSensorComponent: ActiveRadarSensorComponent
					{
						componentType = "DataLinkSensorComponent";
					};
				};
			};
		};
		class LoalDistance
		{
			lockSeekDistanceFromParent = 2000;
		};
	};
	class ammo_Missile_mim145: ammo_Missile_LongRangeAABase
	{
		missileKeepLockedCone = 120;
		missileLockCone = 120;
		model = "\A3\Weapons_F_Sams\Ammo\Missile_SAM_03_fly_F.p3d";
		proxyShape = "\A3\Weapons_F_Sams\Ammo\Missile_SAM_03_fly_F.p3d";
		class Components: Components
		{
			class SensorsManagerComponent: SensorsManagerComponent
			{
				class Components: Components
				{
					class ActiveRadarSensorComponent: ActiveRadarSensorComponent
					{
						angleRangeHorizontal = 120;
						angleRangeVertical = 120;
					};
				};
			};
		};
	};
	class ammo_Missile_rim116: ammo_Missile_ShortRangeAABase
	{
		airFriction = 0.16;
		maxSpeed = 800;
		missileLockMaxDistance = 4000;
		model = "\A3\Weapons_F_Jets\Ammo\Missile_SAM_01_fly_F.p3d";
		proxyShape = "\A3\Weapons_F_Jets\Ammo\Missile_SAM_01_fly_F.p3d";
		thrust = 300;
		thrustTime = 4;
	};
	class ammo_Missile_rim162: ammo_Missile_MediumRangeAABase
	{
		airFriction = 0.09;
		hit = 200;
		indirectHit = 200;
		initTime = 0;
		maneuvrability = 24;
		missileKeepLockedCone = 170;
		missileLockCone = 170;
		missileLockMaxSpeed = 888.889;
		model = "\A3\Weapons_F_Jets\Ammo\Missile_SAM_02_fly_F.p3d";
		proxyShape = "\A3\Weapons_F_Jets\Ammo\Missile_SAM_02_fly_F.p3d";
		sideAirFriction = 0.16;
		thrust = 230;
		trackOversteer = 2;
		class Components: Components
		{
			class SensorsManagerComponent: SensorsManagerComponent
			{
				class Components: Components
				{
					class ActiveRadarSensorComponent: ActiveRadarSensorComponent
					{
						angleRangeHorizontal = 120;
						angleRangeVertical = 120;
						maxTrackableSpeed = 888.889;
						class AirTarget
						{
							maxRange = 12000;
							minRange = 12000;
							objectDistanceLimitCoef = -1;
							viewDistanceLimitCoef = -1;
						};
						class GroundTarget
						{
							maxRange = 8000;
							minRange = 8000;
							objectDistanceLimitCoef = -1;
							viewDistanceLimitCoef = -1;
						};
					};
					class DataLinkSensorComponent: ActiveRadarSensorComponent
					{
						componentType = "DataLinkSensorComponent";
					};
				};
			};
		};
	};
	class ammo_Missile_s750: ammo_Missile_mim145
	{
		model = "\A3\Weapons_F_Sams\Ammo\Missile_SAM_04_fly_F.p3d";
		proxyShape = "\A3\Weapons_F_Sams\Ammo\Missile_SAM_04_fly_F.p3d";
	};
	class ammo_Missile_ShortRangeAABase: MissileBase
	{
		aiAmmoUsageFlags = 256;
		airFriction = 0.14;
		airLock = 2;
		cmimmunity = 0.92;
		cost = 1000;
		CraterEffects = "AAMissileCrater";
		effectsMissile = "FX_Missile_AA";
		explosionEffects = "AAMissileExplosion";
		fuseDistance = 100;
		hit = 130;
		indirectHit = 85;
		indirectHitRange = 10;
		initTime = 0;
		lockType = 0;
		maneuvrability = 42;
		maxSpeed = 700;
		missileFireAnim = "rocket_fire_hide";
		missileKeepLockedCone = 180;
		missileLockCone = 180;
		missileLockMaxDistance = 5000;
		missileLockMaxSpeed = 600;
		missileLockMinDistance = 250;
		model = "\A3\weapons_f\empty";
		muzzleEffect = "B01_fnc_effectFiredJetMissile";
		proximityExplosionDistance = 20;
		proxyShape = "\A3\weapons_f\empty";
		sideAirFriction = 0.23;
		simulationStep = 0.002;
		thrust = 250;
		thrustTime = 5;
		timeToLive = 20;
		trackLead = 0.9;
		trackOversteer = 1.6;
		warheadName = "HE";
		weaponLockSystem = "2 + 16";
		whistleDist = 20;
		class Components: Components
		{
			class SensorsManagerComponent
			{
				class Components
				{
					class IRSensorComponent: SensorTemplateIR
					{
						angleRangeHorizontal = 180;
						angleRangeVertical = 180;
						maxTrackableSpeed = 600;
						minTrackableATL = 3;
						class AirTarget
						{
							maxRange = 5000;
							minRange = 500;
							objectDistanceLimitCoef = -1;
							viewDistanceLimitCoef = 1;
						};
						class GroundTarget
						{
							maxRange = 4000;
							minRange = 500;
							objectDistanceLimitCoef = 1;
							viewDistanceLimitCoef = 1;
						};
					};
				};
			};
		};
	};
	class ammo_Penetrator_105mm: ammo_Penetrator_Base
	{
		caliber = 28.6667;
		hit = 450;
	};
	class ammo_Penetrator_120mm: ammo_Penetrator_Base
	{
		caliber = 40;
		hit = 510;
	};
	class ammo_Penetrator_120mm_missile: ammo_Penetrator_Base
	{
		caliber = 53.3333;
		hit = 630;
		warheadName = "TandemHEAT";
	};
	class ammo_Penetrator_125mm: ammo_Penetrator_Base
	{
		caliber = 43.3333;
		hit = 532.5;
		warheadName = "TandemHEAT";
	};
	class ammo_Penetrator_125mm_missile: ammo_Penetrator_Base
	{
		caliber = 56.6667;
		hit = 600;
		warheadName = "TandemHEAT";
	};
	class ammo_Penetrator_30mm: ammo_Penetrator_Base
	{
		caliber = 2;
		hit = 75;
	};
	class ammo_Penetrator_AGM_01: ammo_Penetrator_Base
	{
		caliber = 66.6667;
		explosive = 0.65;
		hit = 1650;
		indirectHit = 90;
		indirectHitRange = 10;
		warheadName = "HE";
	};
	class ammo_Penetrator_AGM_02: ammo_Penetrator_Base
	{
		caliber = 66.6667;
		explosive = 0.65;
		hit = 1500;
		indirectHit = 85;
		indirectHitRange = 8;
		warheadName = "HE";
	};
	class ammo_Penetrator_Base: ShellBase
	{
		aiAmmoUsageFlags = "128 + 512";
		airFriction = -0.28;
		caliber = 40;
		CraterEffects = "ExploAmmoCrater";
		dangerRadiusHit = 60;
		deflecting = 0;
		deflectionDirDistribution = 0;
		explosionEffects = "ExploAmmoExplosion";
		explosive = 0;
		hit = 300;
		indirectHit = 0;
		indirectHitRange = 0;
		model = "\A3\weapons_f\empty";
		penetrationDirDistribution = 0;
		simulationStep = 0.05;
		suppressionRadiusHit = 30;
		timeToLive = 0.2;
		typicalSpeed = 1000;
		warheadName = "HEAT";
		whistleDist = 14;
		whistleOnFire = 1;
		class HitEffects
		{
			default_mat = "ImpactMetalSabotSmall";
			Hit_Foliage_Dead = "ImpactLeavesDead";
			Hit_Foliage_green = "ImpactLeavesGreen";
			Hit_Foliage_Green_big = "ImpactLeavesGreenBig";
			Hit_Foliage_Palm = "ImpactLeavesPalm";
			Hit_Foliage_Pine = "ImpactLeavesPine";
			hitBuilding = "ImpactMetalSabotSmall";
			hitConcrete = "ImpactMetalSabotSmall";
			hitFoliage = "ImpactLeaves";
			hitGlass = "ImpactMetalSabotSmall";
			hitGlassArmored = "ImpactMetalSabotSmall";
			hitGroundHard = "ImpactMetalSabotSmall";
			hitGroundRed = "ImpactMetalSabotSmall";
			hitGroundSoft = "ImpactMetalSabotSmall";
			hitHay = "ImpactMetalSabotSmall";
			hitMan = "ImpactMetalSabotSmall";
			hitMetal = "ImpactMetalSabotSmall";
			hitMetalPlate = "ImpactMetalSabotSmall";
			hitPlastic = "ImpactMetalSabotSmall";
			hitRubber = "ImpactMetalSabotSmall";
			hitTyre = "ImpactMetalSabotSmall";
			hitWater = "ImpactEffectsWater";
			hitWood = "ImpactMetalSabotSmall";
		};
	};
	class ammo_Penetrator_Firefist: ammo_Penetrator_Base
	{
		caliber = 60;
		hit = 750;
		warheadName = "TandemHEAT";
	};
	class ammo_Penetrator_grenade_40mm: ammo_Penetrator_Base
	{
		caliber = 3.33333;
		hit = 84;
	};
	class ammo_Penetrator_Jian: ammo_Penetrator_Base
	{
		caliber = 66.6667;
		hit = 999;
		warheadName = "TandemHEAT";
	};
	class ammo_Penetrator_MRAAWS: ammo_Penetrator_Base
	{
		caliber = 33.3333;
		hit = 495;
		warheadName = "TandemHEAT";
	};
	class ammo_Penetrator_MRAAWS_HEAT55: ammo_Penetrator_Base
	{
		caliber = 26.6667;
		hit = 450;
	};
	class ammo_Penetrator_NLAW: ammo_Penetrator_Base
	{
		caliber = 26.6667;
		hit = 525;
		typicalSpeed = 1000;
		warheadName = "AP";
	};
	class ammo_Penetrator_PG7: ammo_Penetrator_Base
	{
		caliber = 20;
		hit = 390;
	};
	class ammo_Penetrator_PG_AT: ammo_Penetrator_Base
	{
		caliber = 20;
		hit = 450;
	};
	class ammo_Penetrator_Rocket_03_AP: ammo_Penetrator_Base
	{
		caliber = 26.6667;
		hit = 420;
	};
	class ammo_Penetrator_Rocket_04_AP: ammo_Penetrator_Base
	{
		caliber = 20;
		hit = 435;
	};
	class ammo_Penetrator_RPG32V: ammo_Penetrator_Base
	{
		caliber = 43.3333;
		hit = 480;
		warheadName = "TandemHEAT";
	};
	class ammo_Penetrator_Scalpel: ammo_Penetrator_Base
	{
		caliber = 56.6667;
		hit = 900;
		warheadName = "TandemHEAT";
	};
	class ammo_Penetrator_SPG9: ammo_Penetrator_Base
	{
		caliber = 26.6667;
		hit = 450;
	};
	class ammo_Penetrator_Titan_AT: ammo_Penetrator_Base
	{
		caliber = 60;
		hit = 585;
	};
	class ammo_Penetrator_Titan_AT_long: ammo_Penetrator_Base
	{
		caliber = 60;
		hit = 780;
		warheadName = "TandemHEAT";
	};
	class ammo_Penetrator_Vorona: ammo_Penetrator_Base
	{
		caliber = 60;
		hit = 720;
		warheadName = "TandemHEAT";
	};
	class ammo_ShipCannon_120mm_AT_mine: AT_Mine_155mm_AMOS_range {};
	class ammo_ShipCannon_120mm_HE: Sh_155mm_AMOS {};
	class ammo_ShipCannon_120mm_HE_cluster: Cluster_155mm_AMOS {};
	class ammo_ShipCannon_120mm_HE_guided: Sh_155mm_AMOS_guided {};
	class ammo_ShipCannon_120mm_HE_LG: Sh_155mm_AMOS_LG {};
	class ammo_ShipCannon_120mm_mine: Mine_155mm_AMOS_range {};
	class ammo_ShipCannon_120mm_smoke: Smoke_120mm_AMOS_White {};
	class APERSBoundingMine_Range_Ammo: BoundingMineBase
	{
		cost = 300;
		CraterEffects = "BoundingMineCrater";
		defaultMagazine = "APERSBoundingMine_Range_Mag";
		explosionEffects = "BoundingMineExplosion";
		hit = 20;
		indirectHit = 20;
		indirectHitRange = 20;
		mineBoundingDist = 2;
		mineBoundingTime = 0.3;
		mineInconspicuousness = 40;
		mineJumpEffects = "MineJumpEffect";
		mineModelDisabled = "\A3\Weapons_F\explosives\mine_AP_bouncing_d";
		mineTrigger = "RangeTriggerBounding";
		model = "\A3\Weapons_F\explosives\mine_AP_bouncing";
		multiSoundHit[] = {"soundHit1", 0.5, "soundHit2", 0.5};
		soundActivation[] = {"A3\Sounds_F_Orange\arsenal\explosives\Handling\ApersBoundingMine_Placement_01", 1, 1, 20};
		soundDeactivation[] = {"A3\Sounds_F_Orange\arsenal\explosives\Handling\ApersBoundingMine_Deactivate_01", 1.99526, 1, 20};
		soundHit1[] = {"A3\Sounds_F\arsenal\explosives\mines\Explosion_M6_slam_mine_01", 3.16228, 1, 1300};
		soundHit2[] = {"A3\Sounds_F\arsenal\explosives\mines\Explosion_M6_slam_mine_02", 3.16228, 1, 2000};
		SoundSetExplosion[] = {"M6slamMine_Exp_SoundSet", "M6slamMine_Tail_SoundSet", "Explosion_Debris_SoundSet"};
		soundTrigger[] = {"A3\Sounds_F_Orange\arsenal\explosives\Handling\ApersBoundingMine_Trigger_01", 3.98107, 1, 20};
		whistleDist = 60;
	};
	class APERSMine_Range_Ammo: MineBase
	{
		cost = 200;
		CraterEffects = "MineCrater";
		defaultMagazine = "APERSMine_Range_Mag";
		explosionEffects = "MineExplosion";
		hit = 10;
		icon = "iconExplosiveAP";
		indirectHit = 10;
		indirectHitRange = 5;
		mineInconspicuousness = 50;
		mineModelDisabled = "\A3\Weapons_F\explosives\mine_ap_d";
		mineTrigger = "RangeTriggerShort";
		model = "\A3\Weapons_F\explosives\mine_ap";
		multiSoundHit[] = {"soundHit1", 0.5, "soundHit2", 0.5};
		soundActivation[] = {"A3\Sounds_F_Orange\arsenal\explosives\Handling\ApersMine_Placement_01", 0.398107, 1, 20};
		soundDeactivation[] = {"A3\Sounds_F_Orange\arsenal\explosives\Handling\ApersMine_Deactivate_01", 1.41254, 1, 20};
		soundHit1[] = {"A3\Sounds_F\arsenal\explosives\mines\AP_mines_explosion_01", 3.16228, 1, 1500};
		soundHit2[] = {"A3\Sounds_F\arsenal\explosives\mines\AP_mines_explosion_02", 3.16228, 1, 2000};
		SoundSetExplosion[] = {"APmine_Exp_SoundSet", "APmine_Tail_SoundSet", "Explosion_Debris_SoundSet"};
		soundTrigger[] = {"A3\Sounds_F_Orange\arsenal\explosives\Handling\ApersMine_Trigger_01", 2.51189, 1, 20};
		whistleDist = 8;
	};
	class APERSMineDispenser_Ammo: PipeBombBase
	{
		craterEffects = "";
		defaultMagazine = "APERSMineDispenser_Mag";
		directionalExplosion = 1;
		explosionEffects = "EffectMOPMS";
		hit = 1;
		indirectHit = 1;
		indirectHitRange = 1;
		mineModelDisabled = "\A3\Weapons_F_Orange\Explosives\APERSmineDispenser";
		model = "\A3\Weapons_F_Orange\Explosives\APERSmineDispenser";
		multiSoundHit[] = {"soundHit1", 0.25, "soundHit2", 0.25, "soundHit3", 0.25, "soundHit4", 0.25};
		soundActivation[] = {"A3\Sounds_F_Orange\arsenal\explosives\MineDispenser\MineDispenser_Placement_01", 1.41254, 1, 35};
		soundDeactivation[] = {"A3\Sounds_F_Orange\arsenal\explosives\MineDispenser\MineDispenser_Deactivation_01", 1.99526, 1, 35};
		soundHit1[] = {"A3\Sounds_F_Orange\arsenal\explosives\MineDispenser\MineDispenser_Launch_01", 1, 1, 100};
		soundHit2[] = {"A3\Sounds_F_Orange\arsenal\explosives\MineDispenser\MineDispenser_Launch_02", 1, 1, 100};
		soundHit3[] = {"A3\Sounds_F_Orange\arsenal\explosives\MineDispenser\MineDispenser_Launch_03", 1, 1, 100};
		soundHit4[] = {"A3\Sounds_F_Orange\arsenal\explosives\MineDispenser\MineDispenser_Launch_04", 1, 1, 100};
		soundTrigger[] = {""};
		submunitionAmmo[] = {"APERSMineDispenser_Deploy", 1};
		submunitionAutoleveling = 1;
		submunitionConeAngle[] = {70, 100};
		submunitionConeAngleHorizontal = 135;
		submunitionConeType[] = {"randomupcone", 14};
		submunitionInitSpeed = 13;
		triggerSpeedCoef[] = {0.5, 1.2};
		triggerWhenDestroyed = 0;
	};
	class APERSMineDispenser_Ammo_Scripted: APERSMineDispenser_Ammo
	{
		triggerWhenDestroyed = 1;
	};
	class APERSMineDispenser_Deploy: ShotDeployBase
	{
		mineFloating = 1000;
		model = "\A3\Weapons_F_Orange\Explosives\APERSmineDispenser_ap_f";
		submunitionAmmo = "APERSMineDispenser_Mine_Ammo";
	};
	class APERSMineDispenser_Mine_Ammo: APERSMine_Range_Ammo
	{
		defaultMagazine = "";
		hit = 7;
		impactArmor[] = {"soundImpactIron1", 0.2, "soundImpactIron2", 0.2, "soundImpactIron3", 0.2, "soundImpactIron4", 0.2, "soundImpactIron5", 0.2};
		impactBuilding[] = {"soundImpactHard1", 0.1, "soundImpactHard2", 0.1, "soundImpactHard3", 0.1, "soundImpactHard4", 0.1, "soundImpactHard5", 0.1, "soundImpactHard6", 0.1, "soundImpactHard7", 0.1, "soundImpactHard8", 0.1, "soundImpactHard9", 0.1, "soundImpactHard10", 0.1};
		impactConcrete[] = {"soundImpactHard1", 0.1, "soundImpactHard2", 0.1, "soundImpactHard3", 0.1, "soundImpactHard4", 0.1, "soundImpactHard5", 0.1, "soundImpactHard6", 0.1, "soundImpactHard7", 0.1, "soundImpactHard8", 0.1, "soundImpactHard9", 0.1, "soundImpactHard10", 0.1};
		impactDefault[] = {"soundImpactHard1", 0.1, "soundImpactHard2", 0.1, "soundImpactHard3", 0.1, "soundImpactHard4", 0.1, "soundImpactHard5", 0.1, "soundImpactHard6", 0.1, "soundImpactHard7", 0.1, "soundImpactHard8", 0.1, "soundImpactHard9", 0.1, "soundImpactHard10", 0.1};
		impactFoliage[] = {"soundImpactSoft1", 0.2, "soundImpactSoft2", 0.2, "soundImpactSoft3", 0.2, "soundImpactSoft4", 0.2, "soundImpactSoft5", 0.2};
		impactGlass[] = {"soundImpactHard1", 0.1, "soundImpactHard2", 0.1, "soundImpactHard3", 0.1, "soundImpactHard4", 0.1, "soundImpactHard5", 0.1, "soundImpactHard6", 0.1, "soundImpactHard7", 0.1, "soundImpactHard8", 0.1, "soundImpactHard9", 0.1, "soundImpactHard10", 0.1};
		impactGlassArmored[] = {"soundImpactHard1", 0.2, "soundImpactHard2", 0.2, "soundImpactHard3", 0.2, "soundImpactHard4", 0.2, "soundImpactHard5", 0.2};
		impactGroundHard[] = {"soundImpactHard1", 0.1, "soundImpactHard2", 0.1, "soundImpactHard3", 0.1, "soundImpactHard4", 0.1, "soundImpactHard5", 0.1, "soundImpactHard6", 0.1, "soundImpactHard7", 0.1, "soundImpactHard8", 0.1, "soundImpactHard9", 0.1, "soundImpactHard10", 0.1};
		impactGroundSoft[] = {"soundImpactSoft1", 0.1, "soundImpactSoft2", 0.1, "soundImpactSoft3", 0.1, "soundImpactSoft4", 0.1, "soundImpactSoft5", 0.1, "soundImpactSoft6", 0.1, "soundImpactSoft7", 0.1, "soundImpactSoft8", 0.1, "soundImpactSoft9", 0.1, "soundImpactSoft10", 0.1};
		impactIron[] = {"soundImpactIron1", 0.2, "soundImpactIron2", 0.2, "soundImpactIron3", 0.2, "soundImpactIron4", 0.2, "soundImpactIron5", 0.2};
		impactMetal[] = {"soundImpactIron1", 0.2, "soundImpactIron2", 0.2, "soundImpactIron3", 0.2, "soundImpactIron4", 0.2, "soundImpactIron5", 0.2};
		impactMetalplate[] = {"soundImpactIron1", 0.2, "soundImpactIron2", 0.2, "soundImpactIron3", 0.2, "soundImpactIron4", 0.2, "soundImpactIron5", 0.2};
		impactPlastic[] = {"soundImpactSoft1", 0.2, "soundImpactSoft2", 0.2, "soundImpactSoft3", 0.2, "soundImpactSoft4", 0.2, "soundImpactSoft5", 0.2};
		impactRubber[] = {"soundImpactSoft1", 0.2, "soundImpactSoft2", 0.2, "soundImpactSoft3", 0.2, "soundImpactSoft4", 0.2, "soundImpactSoft5", 0.2};
		impactTyre[] = {"soundImpactSoft1", 0.2, "soundImpactSoft2", 0.2, "soundImpactSoft3", 0.2, "soundImpactSoft4", 0.2, "soundImpactSoft5", 0.2};
		impactWater[] = {"soundImpactWater1", 0.25, "soundImpactWater2", 0.25, "soundImpactWater3", 0.25, "soundImpactWater4", 0.25};
		impactWood[] = {"soundImpactWoodExt1", 0.25, "soundImpactWoodExt2", 0.25, "soundImpactWoodExt3", 0.25, "soundImpactWoodExt4", 0.25};
		indirectHit = 7;
		indirectHitRange = 3;
		mineCanBeReactivated = 0;
		mineFloating = 1000;
		mineInconspicuousness = 60;
		mineModelDisabled = "\A3\Weapons_F\empty.p3d";
		model = "\A3\Weapons_F_Orange\Explosives\APERSmineDispenser_AP";
		soundActivation[] = {""};
		soundDeactivation[] = {"A3\Sounds_F_Orange\arsenal\explosives\MineDispenser\MineDispenser_Mine_Deactivate_01", 1.99526, 1, 20};
		soundImpactHard1[] = {"A3\Sounds_F_Orange\arsenal\explosives\Mine_Drop_01", 0.354813, 1, 65};
		soundImpactHard10[] = {"A3\Sounds_F_Orange\arsenal\explosives\Mine_Drop_10", 0.354813, 1, 65};
		soundImpactHard2[] = {"A3\Sounds_F_Orange\arsenal\explosives\Mine_Drop_02", 0.354813, 1, 65};
		soundImpactHard3[] = {"A3\Sounds_F_Orange\arsenal\explosives\Mine_Drop_03", 0.354813, 1, 65};
		soundImpactHard4[] = {"A3\Sounds_F_Orange\arsenal\explosives\Mine_Drop_04", 0.354813, 1, 65};
		soundImpactHard5[] = {"A3\Sounds_F_Orange\arsenal\explosives\Mine_Drop_05", 0.354813, 1, 65};
		soundImpactHard6[] = {"A3\Sounds_F_Orange\arsenal\explosives\Mine_Drop_06", 0.354813, 1, 65};
		soundImpactHard7[] = {"A3\Sounds_F_Orange\arsenal\explosives\Mine_Drop_07", 0.354813, 1, 65};
		soundImpactHard8[] = {"A3\Sounds_F_Orange\arsenal\explosives\Mine_Drop_08", 0.354813, 1, 65};
		soundImpactHard9[] = {"A3\Sounds_F_Orange\arsenal\explosives\Mine_Drop_09", 0.354813, 1, 65};
		soundImpactIron1[] = {"A3\Sounds_F\weapons\Grenades\handgrenade_drops\handg_drop_Metal_1", 0.354813, 1, 65};
		soundImpactIron2[] = {"A3\Sounds_F\weapons\Grenades\handgrenade_drops\handg_drop_Metal_2", 0.354813, 1, 65};
		soundImpactIron3[] = {"A3\Sounds_F\weapons\Grenades\handgrenade_drops\handg_drop_Metal_3", 0.354813, 1, 65};
		soundImpactIron4[] = {"A3\Sounds_F\weapons\Grenades\handgrenade_drops\handg_drop_Metal_4", 0.354813, 1, 65};
		soundImpactIron5[] = {"A3\Sounds_F\weapons\Grenades\handgrenade_drops\handg_drop_Metal_5", 0.354813, 1, 65};
		soundImpactSoft1[] = {"A3\Sounds_F_Orange\arsenal\explosives\Mine_Drop_01", 0.354813, 1, 45};
		soundImpactSoft10[] = {"A3\Sounds_F_Orange\arsenal\explosives\Mine_Drop_10", 0.354813, 1, 45};
		soundImpactSoft2[] = {"A3\Sounds_F_Orange\arsenal\explosives\Mine_Drop_02", 0.354813, 1, 45};
		soundImpactSoft3[] = {"A3\Sounds_F_Orange\arsenal\explosives\Mine_Drop_03", 0.354813, 1, 45};
		soundImpactSoft4[] = {"A3\Sounds_F_Orange\arsenal\explosives\Mine_Drop_04", 0.354813, 1, 45};
		soundImpactSoft5[] = {"A3\Sounds_F_Orange\arsenal\explosives\Mine_Drop_05", 0.354813, 1, 45};
		soundImpactSoft6[] = {"A3\Sounds_F_Orange\arsenal\explosives\Mine_Drop_06", 0.354813, 1, 45};
		soundImpactSoft7[] = {"A3\Sounds_F_Orange\arsenal\explosives\Mine_Drop_07", 0.354813, 1, 45};
		soundImpactSoft8[] = {"A3\Sounds_F_Orange\arsenal\explosives\Mine_Drop_08", 0.354813, 1, 45};
		soundImpactSoft9[] = {"A3\Sounds_F_Orange\arsenal\explosives\Mine_Drop_09", 0.354813, 1, 45};
		soundImpactWater1[] = {"A3\Sounds_F\weapons\Grenades\handgrenade_drops\handg_drop_water_1", 0.354813, 1, 65};
		soundImpactWater2[] = {"A3\Sounds_F\weapons\Grenades\handgrenade_drops\handg_drop_water_2", 0.354813, 1, 65};
		soundImpactWater3[] = {"A3\Sounds_F\weapons\Grenades\handgrenade_drops\handg_drop_water_3", 0.354813, 1, 65};
		soundImpactWater4[] = {"A3\Sounds_F\weapons\Grenades\handgrenade_drops\handg_drop_water_3", 0.354813, 1, 65};
		soundImpactWoodExt1[] = {"A3\Sounds_F\weapons\Grenades\handgrenade_drops\handg_drop_wood_ext_1", 0.354813, 1, 65};
		soundImpactWoodExt2[] = {"A3\Sounds_F\weapons\Grenades\handgrenade_drops\handg_drop_wood_ext_2", 0.354813, 1, 65};
		soundImpactWoodExt3[] = {"A3\Sounds_F\weapons\Grenades\handgrenade_drops\handg_drop_wood_ext_3", 0.354813, 1, 65};
		soundImpactWoodExt4[] = {"A3\Sounds_F\weapons\Grenades\handgrenade_drops\handg_drop_wood_ext_4", 0.354813, 1, 65};
		SoundSetExplosion[] = {"MineDispenser_Mines_Exp_SoundSet"};
		soundTrigger[] = {"A3\Sounds_F_Orange\arsenal\explosives\MineDispenser\MineDispenser_Mine_Trigger_01", 1.99526, 1, 20};
		submunitionYRandomizationAngle = 180;
		suppressionRadiusHit = 16;
	};
	class APERSMineDispenser_Mine_Ammo_Scripted: APERSMineDispenser_Mine_Ammo
	{
		triggerWhenDestroyed = 1;
	};
	class APERSTripMine_Wire_Ammo: DirectionalBombBase
	{
		cost = 200;
		CraterEffects = "MineCrater";
		defaultMagazine = "APERSTripMine_Wire_Mag";
		explosionAngle = 360;
		explosionEffects = "MineExplosion";
		hit = 15;
		icon = "iconExplosiveAP";
		indirectHit = 15;
		indirectHitRange = 10;
		mineInconspicuousness = 30;
		mineModelDisabled = "\A3\Weapons_F\explosives\mine_AP_tripwire_d";
		mineTrigger = "WireTrigger";
		minimumSafeZone = 0;
		model = "\A3\Weapons_F\explosives\mine_AP_tripwire";
		soundActivation[] = {"A3\Sounds_F_Orange\arsenal\explosives\Handling\ApersTripwire_Placement_01", 1.77828, 1, 20};
		soundDeactivation[] = {"A3\Sounds_F_Orange\arsenal\explosives\Handling\ApersTripwire_Deactivate_01", 1.99526, 1, 20};
		soundHit[] = {"\A3\Sounds_F\arsenal\explosives\mines\Explosion_tripwire_landmine", 3.16228, 1, 1500};
		SoundSetExplosion[] = {"TripwireMine_Exp_SoundSet", "TripwireMine_Tail_SoundSet", "Explosion_Debris_SoundSet"};
		soundTrigger[] = {"A3\Sounds_F_Orange\arsenal\explosives\Handling\ApersTripwire_Trigger_01", 1, 1, 20};
		whistleDist = 8;
	};
	class ArtilleryRocketCore: RocketCore
	{
		artilleryLock = 1;
	};
	class AT_Mine_155mm_AMOS_range: SubmunitionBase
	{
		airFriction = 0;
		cost = 500;
		hit = 300;
		muzzleEffect = "";
		submunitionAmmo = "Mo_ATMineRange";
		submunitionConeAngle = 30;
		submunitionConeType[] = {"randomcenter", 12};
		triggerDistance = 100;
		class CamShakeFire
		{
			distance = 99.5992;
			duration = 2.4;
			frequency = 20;
			power = 3.52844;
		};
		class CamShakePlayerFire
		{
			distance = 1;
			duration = 0.1;
			frequency = 20;
			power = 0.02;
		};
	};
	class ATMine_Range_Ammo: MineBase
	{
		CraterEffects = "ATMineCrater";
		defaultMagazine = "ATMine_Range_Mag";
		explosionEffects = "ATMineExplosion";
		hit = 2000;
		indirectHit = 2000;
		indirectHitRange = 1;
		mineInconspicuousness = 40;
		mineModelDisabled = "\A3\Weapons_f\Explosives\mine_at_d";
		mineTrigger = "TankTriggerMagnetic";
		model = "\A3\Weapons_f\Explosives\mine_at";
		multiSoundHit[] = {"soundHit1", 0.5, "soundHit2", 0.5};
		soundActivation[] = {"A3\Sounds_F_Orange\arsenal\explosives\Handling\AtMine_Placement_01", 1, 1, 20};
		soundDeactivation[] = {"A3\Sounds_F_Orange\arsenal\explosives\Handling\AtMine_Deactivate_01", 1.99526, 1, 20};
		soundHit1[] = {"A3\Sounds_F\arsenal\explosives\mines\AT_landmine_explosion_01", 3.16228, 1, 2000};
		soundHit2[] = {"A3\Sounds_F\arsenal\explosives\mines\AT_landmine_explosion_02", 3.16228, 1, 2000};
		SoundSetExplosion[] = {"ATmine_Exp_SoundSet", "ATmine_Tail_SoundSet", "Explosion_Debris_SoundSet"};
		whistleDist = 8;
	};
	class B_127x108_APDS: B_127x108_Ball
	{
		airFriction = -0.00036;
		caliber = 3.6;
		cost = 15;
		hit = 60;
		indirectHit = 0;
		indirectHitRange = 0;
		typicalSpeed = 1060;
		class CamShakeExplode
		{
			distance = 13.4164;
			duration = 0.8;
			frequency = 20;
			power = 4.47214;
		};
		class CamShakeHit
		{
			distance = 1;
			duration = 0.4;
			frequency = 20;
			power = 20;
		};
	};
	class B_127x108_Ball: BulletBase
	{
		airFriction = -0.00086;
		airLock = 1;
		audibleFire = 120;
		caliber = 2.8;
		cartridge = "FxCartridge_127";
		cost = 5;
		dangerRadiusBulletClose = 12;
		dangerRadiusHit = 16;
		hit = 35;
		indirectHit = 0;
		indirectHitRange = 0;
		model = "\A3\Weapons_f\Data\bullettracer\tracer_green";
		suppressionRadiusBulletClose = 8;
		suppressionRadiusHit = 12;
		timeToLive = 10;
		tracerEndTime = 1;
		tracerScale = 1.5;
		tracerStartTime = 0.075;
		typicalSpeed = 820;
		visibleFire = 5;
		visibleFireTime = 3;
		class CamShakeExplode
		{
			distance = 10.8167;
			duration = 0.8;
			frequency = 20;
			power = 3.60555;
		};
		class CamShakeHit
		{
			distance = 1;
			duration = 0.4;
			frequency = 20;
			power = 13;
		};
	};
	class B_127x33_Ball: BulletBase
	{
		airFriction = -0.002;
		airLock = 1;
		audibleFire = 50;
		caliber = 1;
		cartridge = "FxCartridge_127";
		cost = 50;
		dangerRadiusBulletClose = 4;
		dangerRadiusHit = 8;
		deflecting = 25;
		hit = 7.5;
		indirectHit = 0;
		indirectHitRange = 0;
		model = "\A3\Weapons_f\Data\bullettracer\tracer_green";
		suppressionRadiusBulletClose = 2;
		suppressionRadiusHit = 4;
		tracerEndTime = 1;
		tracerScale = 1.2;
		tracerStartTime = 0.075;
		typicalSpeed = 420;
		visibleFireTime = 3;
	};
	class B_127x54_Ball: BulletBase
	{
		airFriction = -0.0014;
		airLock = 1;
		audibleFire = 5;
		caliber = 4.6;
		cartridge = "FxCartridge_127x54_APDS";
		cost = 15;
		dangerRadiusBulletClose = 4;
		dangerRadiusHit = 14;
		hit = 20;
		indirectHit = 0;
		indirectHitRange = 0;
		model = "\A3\Weapons_f\Data\bullettracer\tracer_green";
		suppressionRadiusBulletClose = 2;
		suppressionRadiusHit = 10;
		timeToLive = 6;
		tracerEndTime = 1;
		tracerScale = 1.5;
		tracerStartTime = 0.075;
		typicalSpeed = 270;
		visibleFire = 1;
		visibleFireTime = 3;
		class CamShakeExplode
		{
			distance = 6.7082;
			duration = 0.4;
			frequency = 20;
			power = 2.23607;
		};
		class CamShakeHit
		{
			distance = 1;
			duration = 0.4;
			frequency = 20;
			power = 15;
		};
	};
	class B_127x99_Ball: BulletBase
	{
		airFriction = -0.00086;
		airLock = 1;
		audibleFire = 120;
		caliber = 2.6;
		cartridge = "FxCartridge_127";
		cost = 5;
		dangerRadiusBulletClose = 12;
		dangerRadiusHit = 16;
		hit = 30;
		indirectHit = 0;
		indirectHitRange = 0;
		model = "\A3\Weapons_f\Data\bullettracer\tracer_white";
		suppressionRadiusBulletClose = 8;
		suppressionRadiusHit = 12;
		timeToLive = 10;
		tracerEndTime = 1;
		tracerScale = 1.2;
		tracerStartTime = 0.075;
		typicalSpeed = 880;
		visibleFire = 8;
		class CamShakeExplode
		{
			distance = 10.8167;
			duration = 0.8;
			frequency = 20;
			power = 3.60555;
		};
		class CamShakeHit
		{
			distance = 1;
			duration = 0.4;
			frequency = 20;
			power = 13;
		};
	};
	class B_127x99_Ball_Tracer_Green: B_127x99_Ball
	{
		model = "\A3\Weapons_f\Data\bullettracer\tracer_green";
	};
	class B_127x99_Ball_Tracer_Red: B_127x99_Ball
	{
		model = "\A3\Weapons_f\Data\bullettracer\tracer_red";
	};
	class B_127x99_Ball_Tracer_Yellow: B_127x99_Ball
	{
		model = "\A3\Weapons_f\Data\bullettracer\tracer_yellow";
	};
	class B_127x99_SLAP: B_127x99_Ball
	{
		airFriction = -0.00036;
		caliber = 3.4;
		cost = 15;
		hit = 50;
		indirectHit = 0;
		indirectHitRange = 0;
		typicalSpeed = 1215;
		class CamShakeExplode
		{
			distance = 13.4164;
			duration = 0.8;
			frequency = 20;
			power = 4.47214;
		};
		class CamShakeHit
		{
			distance = 1;
			duration = 0.4;
			frequency = 20;
			power = 20;
		};
	};
	class B_127x99_SLAP_Tracer_Green: B_127x99_SLAP
	{
		model = "\A3\Weapons_f\Data\bullettracer\tracer_green";
	};
	class B_127x99_SLAP_Tracer_Red: B_127x99_SLAP
	{
		model = "\A3\Weapons_f\Data\bullettracer\tracer_red";
	};
	class B_127x99_SLAP_Tracer_Yellow: B_127x99_SLAP
	{
		model = "\A3\Weapons_f\Data\bullettracer\tracer_yellow";
	};
	class B_12Gauge_HD_Pellets_Submunition: B_12Gauge_Pellets_Submunition
	{
		submunitionConeAngle = 1.3;
	};
	class B_12Gauge_Pellets: ShotgunBase
	{
		airFriction = -0.008;
		caliber = 1;
		cartridge = "FxCartridge_slug";
		cost = 5;
		deflecting = 30;
		hit = 2;
		indirectHit = 2;
		indirectHitRange = 0.4;
		typicalSpeed = 400;
		class CamShakeFire
		{
			distance = 10;
			duration = 0.5;
			frequency = 20;
			power = 3;
		};
		class CamShakeHit
		{
			duration = 1;
			frequency = 20;
			power = 10;
		};
		class CamShakePlayerFire
		{
			duration = 0.1;
			frequency = 20;
			power = 1;
		};
	};
	class B_12Gauge_Pellets_Submunition: BulletBase
	{
		cartridge = "";
		cost = 1;
		hit = 20;
		simulationStep = 0.0001;
		submunitionAmmo = "B_12Gauge_Pellets_Submunition_Deploy";
		submunitionConeAngle = 0.8;
		submunitionConeType[] = {"poissondisc", 18};
		triggerSpeedCoef[] = {0.85, 1};
		triggerTime = 0.001;
	};
	class B_12Gauge_Pellets_Submunition_Deploy: BulletBase
	{
		airFriction = -0.0067;
		bulletFly[] = {"bulletFly1", 0.083, "bulletFly2", 0.083, "bulletFly3", 0.083, "bulletFly4", 0.083, "bulletFly5", 0.083, "bulletFly6", 0.083, "bulletFly7", 0.083, "bulletFly8", 0.083, "bulletFly9", 0.083, "bulletFly10", 0.083, "bulletFly11", 0.083, "bulletFly12", 0.083};
		bulletFly1[] = {"A3\sounds_f\arsenal\sfx\bullet_flyby\bullet_flyby01", 1.9, 1, 100};
		bulletFly10[] = {"A3\sounds_f\arsenal\sfx\bullet_flyby\bullet_flyby10", 1.9, 1, 100};
		bulletFly11[] = {"A3\sounds_f\arsenal\sfx\bullet_flyby\bullet_flyby11", 1.9, 1, 100};
		bulletFly12[] = {"A3\sounds_f\arsenal\sfx\bullet_flyby\bullet_flyby12", 1.9, 1, 100};
		bulletFly2[] = {"A3\sounds_f\arsenal\sfx\bullet_flyby\bullet_flyby02", 1.9, 1, 100};
		bulletFly3[] = {"A3\sounds_f\arsenal\sfx\bullet_flyby\bullet_flyby03", 1.9, 1, 100};
		bulletFly4[] = {"A3\sounds_f\arsenal\sfx\bullet_flyby\bullet_flyby04", 1.9, 1, 100};
		bulletFly5[] = {"A3\sounds_f\arsenal\sfx\bullet_flyby\bullet_flyby05", 1.9, 1, 100};
		bulletFly6[] = {"A3\sounds_f\arsenal\sfx\bullet_flyby\bullet_flyby06", 1.9, 1, 100};
		bulletFly7[] = {"A3\sounds_f\arsenal\sfx\bullet_flyby\bullet_flyby07", 1.9, 1, 100};
		bulletFly8[] = {"A3\sounds_f\arsenal\sfx\bullet_flyby\bullet_flyby08", 1.9, 1, 100};
		bulletFly9[] = {"A3\sounds_f\arsenal\sfx\bullet_flyby\bullet_flyby09", 1.9, 1, 100};
		deflecting = 35;
		hit = 6;
		hitArmor[] = {"soundVehiclePlate1", 0.125, "soundVehiclePlate2", 0.125, "soundVehiclePlate3", 0.125, "soundVehiclePlate4", 0.125, "soundVehiclePlate5", 0.125, "soundVehiclePlate6", 0.125, "soundVehiclePlate7", 0.125, "soundVehiclePlate8", 0.125};
		hitArmorInt[] = {"soundVehiclePlateInt1", 0.066, "soundVehiclePlateInt2", 0.066, "soundVehiclePlateInt3", 0.066, "soundVehiclePlateInt4", 0.066, "soundVehiclePlateInt5", 0.066, "soundVehiclePlateInt6", 0.066, "soundVehiclePlateInt7", 0.066, "soundVehiclePlateInt8", 0.066, "soundVehiclePlateInt9", 0.066, "soundVehiclePlateInt10", 0.066, "soundVehiclePlateInt11", 0.066, "soundVehiclePlateInt12", 0.066, "soundVehiclePlateInt13", 0.066, "soundVehiclePlateInt14", 0.066, "soundVehiclePlateInt15", 0.066};
		hitBuilding[] = {"soundHitBuilding1", 0.2, "soundHitBuilding2", 0.2, "soundHitBuilding3", 0.1, "soundHitBuilding4", 0.1, "soundHitBuilding5", 0.1, "soundHitBuilding6", 0.1, "soundHitBuilding7", 0.1, "soundHitBuilding8", 0.1};
		hitConcrete[] = {"soundConcrete1", 0.125, "soundConcrete2", 0.125, "soundConcrete3", 0.125, "soundConcrete4", 0.125, "soundConcrete5", 0.125, "soundConcrete6", 0.125, "soundConcrete7", 0.125, "soundConcrete8", 0.125};
		hitDefault[] = {"soundDefault1", 0.2, "soundDefault2", 0.2, "soundDefault3", 0.1, "soundDefault4", 0.1, "soundDefault5", 0.1, "soundDefault6", 0.1, "soundDefault7", 0.1, "soundDefault8", 0.1};
		hitFoliage[] = {"soundHitFoliage1", 0.125, "soundHitFoliage2", 0.125, "soundHitFoliage3", 0.125, "soundHitFoliage4", 0.125, "soundHitFoliage5", 0.125, "soundHitFoliage6", 0.125, "soundHitFoliage7", 0.125, "soundHitFoliage8", 0.125};
		hitGlass[] = {"soundGlass1", 0.125, "soundGlass2", 0.125, "soundGlass3", 0.125, "soundGlass4", 0.125, "soundGlass5", 0.125, "soundGlass6", 0.125, "soundGlass7", 0.125, "soundGlass8", 0.125};
		hitGlassArmored[] = {"soundGlassArmored1", 0.125, "soundGlassArmored2", 0.125, "soundGlassArmored3", 0.125, "soundGlassArmored4", 0.125, "soundGlassArmored5", 0.125, "soundGlassArmored6", 0.125, "soundGlassArmored7", 0.125, "soundGlassArmored8", 0.125};
		hitGroundHard[] = {"soundGroundHard1", 0.2, "soundGroundHard2", 0.2, "soundGroundHard3", 0.1, "soundGroundHard4", 0.1, "soundGroundHard5", 0.1, "soundGroundHard6", 0.1, "soundGroundHard7", 0.1, "soundGroundHard8", 0.1};
		hitGroundSoft[] = {"soundGroundSoft1", 0.2, "soundGroundSoft2", 0.2, "soundGroundSoft3", 0.1, "soundGroundSoft4", 0.1, "soundGroundSoft5", 0.1, "soundGroundSoft6", 0.1, "soundGroundSoft7", 0.1, "soundGroundSoft8", 0.1};
		hitMan[] = {"soundHitBody1", 0.125, "soundHitBody2", 0.125, "soundHitBody3", 0.125, "soundHitBody4", 0.125, "soundHitBody5", 0.125, "soundHitBody6", 0.125, "soundHitBody7", 0.125, "soundHitBody8", 0.125};
		hitMetal[] = {"soundMetal1", 0.125, "soundMetal2", 0.125, "soundMetal3", 0.125, "soundMetal4", 0.125, "soundMetal5", 0.125, "soundMetal6", 0.125, "soundMetal7", 0.125, "soundMetal8", 0.125};
		hitMetalInt[] = {"soundMetalInt1", 0.166, "soundMetalInt2", 0.166, "soundMetalInt3", 0.166, "soundMetalInt4", 0.166, "soundMetalInt5", 0.166, "soundMetalInt6", 0.166};
		hitMetalplate[] = {"soundVehiclePlate1", 0.125, "soundVehiclePlate2", 0.125, "soundVehiclePlate3", 0.125, "soundVehiclePlate4", 0.125, "soundVehiclePlate5", 0.125, "soundVehiclePlate6", 0.125, "soundVehiclePlate7", 0.125, "soundVehiclePlate8", 0.125};
		hitPlastic[] = {"soundPlastic1", 0.125, "soundPlastic2", 0.125, "soundPlastic3", 0.125, "soundPlastic4", 0.125, "soundPlastic5", 0.125, "soundPlastic6", 0.125, "soundPlastic7", 0.125, "soundPlastic8", 0.125};
		hitRubber[] = {"soundRubber1", 0.125, "soundRubber2", 0.125, "soundRubber3", 0.125, "soundRubber4", 0.125, "soundRubber5", 0.125, "soundRubber6", 0.125};
		hitTyre[] = {"soundTyre1", 0.125, "soundTyre2", 0.125, "soundTyre3", 0.125, "soundTyre4", 0.125, "soundTyre5", 0.125, "soundTyre6", 0.125, "soundTyre7", 0.125, "soundTyre8", 0.125};
		hitWater[] = {"soundWater1", 0.125, "soundWater2", 0.125, "soundWater3", 0.125, "soundWater4", 0.125, "soundWater5", 0.125, "soundWater6", 0.125, "soundWater7", 0.125, "soundWater8", 0.125};
		hitWood[] = {"soundWood1", 0.0625, "soundWood2", 0.0625, "soundWood3", 0.0625, "soundWood4", 0.0625, "soundWood5", 0.0625, "soundWood6", 0.0625, "soundWood7", 0.0625, "soundWood8", 0.0625, "soundWood9", 0.0625, "soundWood10", 0.0625, "soundWood11", 0.0625, "soundWood12", 0.0625, "soundWood13", 0.0625, "soundWood14", 0.0625, "soundWood15", 0.0625, "soundWood16", 0.0625};
		impactArmor[] = {"soundImpactDefault1", 1};
		impactBuilding[] = {"soundImpactDefault1", 1};
		impactConcrete[] = {"soundImpactDefault1", 1};
		impactDefault[] = {"soundImpactDefault1", 1};
		impactFoliage[] = {"soundImpactDefault1", 1};
		impactGlass[] = {"soundImpactDefault1", 1};
		impactGlassArmored[] = {"soundImpactDefault1", 1};
		impactGroundHard[] = {"soundImpactDefault1", 1};
		impactGroundSoft[] = {"soundImpactDefault1", 1};
		impactIron[] = {"soundImpactDefault1", 1};
		impactMan[] = {"soundImpactDefault1", 1};
		impactMetal[] = {"soundImpactDefault1", 1};
		impactMetalplate[] = {"soundImpactDefault1", 1};
		impactPlastic[] = {"soundImpactDefault1", 1};
		impactRubber[] = {"soundImpactDefault1", 1};
		impactTyre[] = {"soundImpactDefault1", 1};
		impactWater[] = {"soundImpactDefault1", 1};
		impactWood[] = {"soundImpactDefault1", 1};
		indirectHit = 0;
		indirectHitRange = 0;
		soundConcrete1[] = {"A3\Sounds_F\arsenal\sfx\bullet_hits\concrete_01", 1.8, 1, 100};
		soundConcrete2[] = {"A3\Sounds_F\arsenal\sfx\bullet_hits\concrete_02", 1.8, 1, 100};
		soundConcrete3[] = {"A3\Sounds_F\arsenal\sfx\bullet_hits\concrete_03", 1.8, 1, 100};
		soundConcrete4[] = {"A3\Sounds_F\arsenal\sfx\bullet_hits\concrete_04", 1.8, 1, 100};
		soundConcrete5[] = {"A3\Sounds_F\arsenal\sfx\bullet_hits\concrete_05", 1.8, 1, 100};
		soundConcrete6[] = {"A3\Sounds_F\arsenal\sfx\bullet_hits\concrete_06", 1.8, 1, 100};
		soundConcrete7[] = {"A3\Sounds_F\arsenal\sfx\bullet_hits\concrete_07", 1.8, 1, 100};
		soundConcrete8[] = {"A3\Sounds_F\arsenal\sfx\bullet_hits\concrete_08", 1.8, 1, 100};
		soundDefault1[] = {"A3\Sounds_F\arsenal\sfx\bullet_hits\concrete_01", 1.5, 1, 100};
		soundDefault2[] = {"A3\Sounds_F\arsenal\sfx\bullet_hits\concrete_02", 1.5, 1, 100};
		soundDefault3[] = {"A3\Sounds_F\arsenal\sfx\bullet_hits\concrete_03", 1.5, 1, 100};
		soundDefault4[] = {"A3\Sounds_F\arsenal\sfx\bullet_hits\concrete_04", 1.5, 1, 100};
		soundDefault5[] = {"A3\Sounds_F\arsenal\sfx\bullet_hits\concrete_05", 1.5, 1, 100};
		soundDefault6[] = {"A3\Sounds_F\arsenal\sfx\bullet_hits\concrete_06", 1.5, 1, 100};
		soundDefault7[] = {"A3\Sounds_F\arsenal\sfx\bullet_hits\concrete_07", 1.5, 1, 100};
		soundDefault8[] = {"A3\Sounds_F\arsenal\sfx\bullet_hits\concrete_08", 1.5, 1, 100};
		soundGlass1[] = {"A3\Sounds_F\arsenal\sfx\bullet_hits\glass_01", 0.25, 1, 100};
		soundGlass2[] = {"A3\Sounds_F\arsenal\sfx\bullet_hits\glass_02", 0.25, 1, 100};
		soundGlass3[] = {"A3\Sounds_F\arsenal\sfx\bullet_hits\glass_03", 0.25, 1, 100};
		soundGlass4[] = {"A3\Sounds_F\arsenal\sfx\bullet_hits\glass_04", 0.25, 1, 100};
		soundGlass5[] = {"A3\Sounds_F\arsenal\sfx\bullet_hits\glass_05", 0.25, 1, 100};
		soundGlass6[] = {"A3\Sounds_F\arsenal\sfx\bullet_hits\glass_06", 0.25, 1, 100};
		soundGlass7[] = {"A3\Sounds_F\arsenal\sfx\bullet_hits\glass_07", 0.25, 1, 100};
		soundGlass8[] = {"A3\Sounds_F\arsenal\sfx\bullet_hits\glass_08", 0.25, 1, 100};
		soundGlassArmored1[] = {"A3\Sounds_F\arsenal\sfx\bullet_hits\glass_arm_01", 0.25, 1, 100};
		soundGlassArmored2[] = {"A3\Sounds_F\arsenal\sfx\bullet_hits\glass_arm_02", 0.25, 1, 100};
		soundGlassArmored3[] = {"A3\Sounds_F\arsenal\sfx\bullet_hits\glass_arm_03", 0.25, 1, 100};
		soundGlassArmored4[] = {"A3\Sounds_F\arsenal\sfx\bullet_hits\glass_arm_04", 0.25, 1, 100};
		soundGlassArmored5[] = {"A3\Sounds_F\arsenal\sfx\bullet_hits\glass_arm_05", 0.25, 1, 100};
		soundGlassArmored6[] = {"A3\Sounds_F\arsenal\sfx\bullet_hits\glass_arm_06", 0.25, 1, 100};
		soundGlassArmored7[] = {"A3\Sounds_F\arsenal\sfx\bullet_hits\glass_arm_07", 0.25, 1, 100};
		soundGlassArmored8[] = {"A3\Sounds_F\arsenal\sfx\bullet_hits\glass_arm_08", 0.25, 1, 100};
		soundGroundHard1[] = {"A3\Sounds_F\arsenal\sfx\bullet_hits\hard_ground_01", 1.5, 1, 100};
		soundGroundHard2[] = {"A3\Sounds_F\arsenal\sfx\bullet_hits\hard_ground_02", 1.5, 1, 100};
		soundGroundHard3[] = {"A3\Sounds_F\arsenal\sfx\bullet_hits\hard_ground_03", 1.5, 1, 100};
		soundGroundHard4[] = {"A3\Sounds_F\arsenal\sfx\bullet_hits\hard_ground_04", 1.5, 1, 100};
		soundGroundHard5[] = {"A3\Sounds_F\arsenal\sfx\bullet_hits\hard_ground_05", 1.5, 1, 100};
		soundGroundHard6[] = {"A3\Sounds_F\arsenal\sfx\bullet_hits\hard_ground_06", 1.5, 1, 100};
		soundGroundHard7[] = {"A3\Sounds_F\arsenal\sfx\bullet_hits\hard_ground_07", 1.5, 1, 100};
		soundGroundHard8[] = {"A3\Sounds_F\arsenal\sfx\bullet_hits\hard_ground_08", 1.5, 1, 100};
		soundGroundSoft1[] = {"A3\Sounds_F\arsenal\sfx\bullet_hits\soft_ground_01", 1.5, 1, 100};
		soundGroundSoft2[] = {"A3\Sounds_F\arsenal\sfx\bullet_hits\soft_ground_02", 1.5, 1, 100};
		soundGroundSoft3[] = {"A3\Sounds_F\arsenal\sfx\bullet_hits\soft_ground_03", 1.5, 1, 100};
		soundGroundSoft4[] = {"A3\Sounds_F\arsenal\sfx\bullet_hits\soft_ground_04", 1.5, 1, 100};
		soundGroundSoft5[] = {"A3\Sounds_F\arsenal\sfx\bullet_hits\soft_ground_05", 1.5, 1, 100};
		soundGroundSoft6[] = {"A3\Sounds_F\arsenal\sfx\bullet_hits\soft_ground_06", 1.5, 1, 100};
		soundGroundSoft7[] = {"A3\Sounds_F\arsenal\sfx\bullet_hits\soft_ground_07", 1.5, 1, 100};
		soundGroundSoft8[] = {"A3\Sounds_F\arsenal\sfx\bullet_hits\soft_ground_08", 1.5, 1, 100};
		soundHitBody1[] = {"A3\Sounds_F\arsenal\sfx\bullet_hits\body_01", 1.5, 1, 100};
		soundHitBody2[] = {"A3\Sounds_F\arsenal\sfx\bullet_hits\body_02", 1.5, 1, 100};
		soundHitBody3[] = {"A3\Sounds_F\arsenal\sfx\bullet_hits\body_03", 1.5, 1, 100};
		soundHitBody4[] = {"A3\Sounds_F\arsenal\sfx\bullet_hits\body_04", 1.5, 1, 100};
		soundHitBody5[] = {"A3\Sounds_F\arsenal\sfx\bullet_hits\body_05", 1.5, 1, 100};
		soundHitBody6[] = {"A3\Sounds_F\arsenal\sfx\bullet_hits\body_06", 1.5, 1, 100};
		soundHitBody7[] = {"A3\Sounds_F\arsenal\sfx\bullet_hits\body_07", 1.5, 1, 100};
		soundHitBody8[] = {"A3\Sounds_F\arsenal\sfx\bullet_hits\body_08", 1.5, 1, 100};
		soundHitBuilding1[] = {"A3\Sounds_F\arsenal\sfx\bullet_hits\building_01", 1.5, 1, 100};
		soundHitBuilding2[] = {"A3\Sounds_F\arsenal\sfx\bullet_hits\building_02", 1.5, 1, 100};
		soundHitBuilding3[] = {"A3\Sounds_F\arsenal\sfx\bullet_hits\building_03", 1.5, 1, 100};
		soundHitBuilding4[] = {"A3\Sounds_F\arsenal\sfx\bullet_hits\building_04", 1.5, 1, 100};
		soundHitBuilding5[] = {"A3\Sounds_F\arsenal\sfx\bullet_hits\building_05", 1.5, 1, 100};
		soundHitBuilding6[] = {"A3\Sounds_F\arsenal\sfx\bullet_hits\building_06", 1.5, 1, 100};
		soundHitBuilding7[] = {"A3\Sounds_F\arsenal\sfx\bullet_hits\building_07", 1.5, 1, 100};
		soundHitBuilding8[] = {"A3\Sounds_F\arsenal\sfx\bullet_hits\building_08", 1.5, 1, 100};
		soundHitFoliage1[] = {"A3\Sounds_F\arsenal\sfx\bullet_hits\foliage_01", 1.3, 1, 100};
		soundHitFoliage2[] = {"A3\Sounds_F\arsenal\sfx\bullet_hits\foliage_02", 1.3, 1, 100};
		soundHitFoliage3[] = {"A3\Sounds_F\arsenal\sfx\bullet_hits\foliage_03", 1.3, 1, 100};
		soundHitFoliage4[] = {"A3\Sounds_F\arsenal\sfx\bullet_hits\foliage_04", 1.3, 1, 100};
		soundHitFoliage5[] = {"A3\Sounds_F\arsenal\sfx\bullet_hits\foliage_05", 1.3, 1, 100};
		soundHitFoliage6[] = {"A3\Sounds_F\arsenal\sfx\bullet_hits\foliage_06", 1.3, 1, 100};
		soundHitFoliage7[] = {"A3\Sounds_F\arsenal\sfx\bullet_hits\foliage_07", 1.3, 1, 100};
		soundHitFoliage8[] = {"A3\Sounds_F\arsenal\sfx\bullet_hits\foliage_08", 1.3, 1, 100};
		soundImpactDefault1[] = {"A3\Sounds_F\weapons\Grenades\Grenade_Roll", 2.51189, 1, 200};
		soundMetal1[] = {"A3\Sounds_F\arsenal\sfx\bullet_hits\metal_01", 1.5, 1, 100};
		soundMetal2[] = {"A3\Sounds_F\arsenal\sfx\bullet_hits\metal_02", 1.5, 1, 100};
		soundMetal3[] = {"A3\Sounds_F\arsenal\sfx\bullet_hits\metal_03", 1.5, 1, 100};
		soundMetal4[] = {"A3\Sounds_F\arsenal\sfx\bullet_hits\metal_04", 1.5, 1, 100};
		soundMetal5[] = {"A3\Sounds_F\arsenal\sfx\bullet_hits\metal_05", 1.5, 1, 100};
		soundMetal6[] = {"A3\Sounds_F\arsenal\sfx\bullet_hits\metal_06", 1.5, 1, 100};
		soundMetal7[] = {"A3\Sounds_F\arsenal\sfx\bullet_hits\metal_07", 1.5, 1, 100};
		soundMetal8[] = {"A3\Sounds_F\arsenal\sfx\bullet_hits\metal_08", 1.5, 1, 100};
		soundMetalInt1[] = {"A3\Sounds_F\arsenal\sfx\bullet_hitsInt\metal_01", 1, 1, 100};
		soundMetalInt2[] = {"A3\Sounds_F\arsenal\sfx\bullet_hitsInt\metal_02", 1, 1, 100};
		soundMetalInt3[] = {"A3\Sounds_F\arsenal\sfx\bullet_hitsInt\metal_03", 1, 1, 100};
		soundMetalInt4[] = {"A3\Sounds_F\arsenal\sfx\bullet_hitsInt\metal_04", 1, 1, 100};
		soundMetalInt5[] = {"A3\Sounds_F\arsenal\sfx\bullet_hitsInt\metal_05", 1, 1, 100};
		soundMetalInt6[] = {"A3\Sounds_F\arsenal\sfx\bullet_hitsInt\metal_06", 1, 1, 100};
		soundPlastic1[] = {"A3\Sounds_F\arsenal\sfx\bullet_hits\plastic_01", 1.2, 1, 100};
		soundPlastic2[] = {"A3\Sounds_F\arsenal\sfx\bullet_hits\plastic_02", 1.2, 1, 100};
		soundPlastic3[] = {"A3\Sounds_F\arsenal\sfx\bullet_hits\plastic_03", 1.2, 1, 100};
		soundPlastic4[] = {"A3\Sounds_F\arsenal\sfx\bullet_hits\plastic_04", 1.2, 1, 100};
		soundPlastic5[] = {"A3\Sounds_F\arsenal\sfx\bullet_hits\plastic_05", 1.2, 1, 100};
		soundPlastic6[] = {"A3\Sounds_F\arsenal\sfx\bullet_hits\plastic_06", 1.2, 1, 100};
		soundPlastic7[] = {"A3\Sounds_F\arsenal\sfx\bullet_hits\plastic_07", 1.2, 1, 100};
		soundPlastic8[] = {"A3\Sounds_F\arsenal\sfx\bullet_hits\plastic_08", 1.2, 1, 100};
		soundRubber1[] = {"A3\Sounds_F\arsenal\sfx\bullet_hits\rubber_01", 1.2, 1, 100};
		soundRubber2[] = {"A3\Sounds_F\arsenal\sfx\bullet_hits\rubber_02", 1.2, 1, 100};
		soundRubber3[] = {"A3\Sounds_F\arsenal\sfx\bullet_hits\rubber_03", 1.2, 1, 100};
		soundRubber4[] = {"A3\Sounds_F\arsenal\sfx\bullet_hits\rubber_04", 1.2, 1, 100};
		soundRubber5[] = {"A3\Sounds_F\arsenal\sfx\bullet_hits\rubber_05", 1.2, 1, 100};
		soundRubber6[] = {"A3\Sounds_F\arsenal\sfx\bullet_hits\rubber_06", 1.2, 1, 100};
		soundSetBulletFly[] = {"bulletFlyBy_SoundSet"};
		soundSetSonicCrack[] = {"bulletSonicCrack_SoundSet", "bulletSonicCrackTail_SoundSet"};
		soundTyre1[] = {"A3\Sounds_F\arsenal\sfx\bullet_hits\tyre_01", 1.5, 1, 100};
		soundTyre2[] = {"A3\Sounds_F\arsenal\sfx\bullet_hits\tyre_02", 1.5, 1, 100};
		soundTyre3[] = {"A3\Sounds_F\arsenal\sfx\bullet_hits\tyre_03", 1.5, 1, 100};
		soundTyre4[] = {"A3\Sounds_F\arsenal\sfx\bullet_hits\tyre_04", 1.5, 1, 100};
		soundTyre5[] = {"A3\Sounds_F\arsenal\sfx\bullet_hits\tyre_05", 1.5, 1, 100};
		soundTyre6[] = {"A3\Sounds_F\arsenal\sfx\bullet_hits\tyre_06", 1.5, 1, 100};
		soundTyre7[] = {"A3\Sounds_F\arsenal\sfx\bullet_hits\tyre_07", 1.5, 1, 100};
		soundTyre8[] = {"A3\Sounds_F\arsenal\sfx\bullet_hits\tyre_08", 1.5, 1, 100};
		soundVehiclePlate1[] = {"A3\Sounds_F\arsenal\sfx\bullet_hits\metal_plate_01", 1, 1, 100};
		soundVehiclePlate2[] = {"A3\Sounds_F\arsenal\sfx\bullet_hits\metal_plate_02", 1, 1, 100};
		soundVehiclePlate3[] = {"A3\Sounds_F\arsenal\sfx\bullet_hits\metal_plate_03", 1, 1, 100};
		soundVehiclePlate4[] = {"A3\Sounds_F\arsenal\sfx\bullet_hits\metal_plate_04", 1, 1, 100};
		soundVehiclePlate5[] = {"A3\Sounds_F\arsenal\sfx\bullet_hits\metal_plate_05", 1, 1, 100};
		soundVehiclePlate6[] = {"A3\Sounds_F\arsenal\sfx\bullet_hits\metal_plate_06", 1, 1, 100};
		soundVehiclePlate7[] = {"A3\Sounds_F\arsenal\sfx\bullet_hits\metal_plate_07", 1, 1, 100};
		soundVehiclePlate8[] = {"A3\Sounds_F\arsenal\sfx\bullet_hits\metal_plate_08", 1, 1, 100};
		soundVehiclePlateInt1[] = {"A3\Sounds_F\arsenal\sfx\bullet_hitsInt\metal_plate_01", 1, 1, 100};
		soundVehiclePlateInt10[] = {"A3\Sounds_F\arsenal\sfx\bullet_hitsInt\metal_plate_10", 1, 1, 100};
		soundVehiclePlateInt11[] = {"A3\Sounds_F\arsenal\sfx\bullet_hitsInt\metal_plate_11", 1, 1, 100};
		soundVehiclePlateInt12[] = {"A3\Sounds_F\arsenal\sfx\bullet_hitsInt\metal_plate_12", 1, 1, 100};
		soundVehiclePlateInt13[] = {"A3\Sounds_F\arsenal\sfx\bullet_hitsInt\metal_plate_13", 1, 1, 100};
		soundVehiclePlateInt14[] = {"A3\Sounds_F\arsenal\sfx\bullet_hitsInt\metal_plate_14", 1, 1, 100};
		soundVehiclePlateInt15[] = {"A3\Sounds_F\arsenal\sfx\bullet_hitsInt\metal_plate_15", 1, 1, 100};
		soundVehiclePlateInt2[] = {"A3\Sounds_F\arsenal\sfx\bullet_hitsInt\metal_plate_02", 1, 1, 100};
		soundVehiclePlateInt3[] = {"A3\Sounds_F\arsenal\sfx\bullet_hitsInt\metal_plate_03", 1, 1, 100};
		soundVehiclePlateInt4[] = {"A3\Sounds_F\arsenal\sfx\bullet_hitsInt\metal_plate_04", 1, 1, 100};
		soundVehiclePlateInt5[] = {"A3\Sounds_F\arsenal\sfx\bullet_hitsInt\metal_plate_05", 1, 1, 100};
		soundVehiclePlateInt6[] = {"A3\Sounds_F\arsenal\sfx\bullet_hitsInt\metal_plate_06", 1, 1, 100};
		soundVehiclePlateInt7[] = {"A3\Sounds_F\arsenal\sfx\bullet_hitsInt\metal_plate_07", 1, 1, 100};
		soundVehiclePlateInt8[] = {"A3\Sounds_F\arsenal\sfx\bullet_hitsInt\metal_plate_08", 1, 1, 100};
		soundVehiclePlateInt9[] = {"A3\Sounds_F\arsenal\sfx\bullet_hitsInt\metal_plate_09", 1, 1, 100};
		soundWater1[] = {"A3\Sounds_F\arsenal\sfx\bullet_hits\water_01", 1.3, 1, 100};
		soundWater2[] = {"A3\Sounds_F\arsenal\sfx\bullet_hits\water_02", 1.3, 1, 100};
		soundWater3[] = {"A3\Sounds_F\arsenal\sfx\bullet_hits\water_03", 1.3, 1, 100};
		soundWater4[] = {"A3\Sounds_F\arsenal\sfx\bullet_hits\water_04", 1.3, 1, 100};
		soundWater5[] = {"A3\Sounds_F\arsenal\sfx\bullet_hits\water_05", 1.3, 1, 100};
		soundWater6[] = {"A3\Sounds_F\arsenal\sfx\bullet_hits\water_06", 1.3, 1, 100};
		soundWater7[] = {"A3\Sounds_F\arsenal\sfx\bullet_hits\water_07", 1.3, 1, 100};
		soundWater8[] = {"A3\Sounds_F\arsenal\sfx\bullet_hits\water_08", 1.3, 1, 100};
		soundWood1[] = {"A3\Sounds_F_Enoch\Assets\Arsenal\Bullet_Impacts\Impact_Wood_01", 1.8, 1, 100};
		soundWood10[] = {"A3\Sounds_F_Enoch\Assets\Arsenal\Bullet_Impacts\Impact_Wood_10", 1.8, 0.9, 100};
		soundWood11[] = {"A3\Sounds_F_Enoch\Assets\Arsenal\Bullet_Impacts\Impact_Wood_11", 1.8, 0.9, 100};
		soundWood12[] = {"A3\Sounds_F_Enoch\Assets\Arsenal\Bullet_Impacts\Impact_Wood_12", 1.8, 0.9, 100};
		soundWood13[] = {"A3\Sounds_F_Enoch\Assets\Arsenal\Bullet_Impacts\Impact_Wood_13", 1.8, 0.9, 100};
		soundWood14[] = {"A3\Sounds_F_Enoch\Assets\Arsenal\Bullet_Impacts\Impact_Wood_14", 1.8, 0.9, 100};
		soundWood15[] = {"A3\Sounds_F_Enoch\Assets\Arsenal\Bullet_Impacts\Impact_Wood_15", 1.8, 0.9, 100};
		soundWood16[] = {"A3\Sounds_F_Enoch\Assets\Arsenal\Bullet_Impacts\Impact_Wood_16", 1.8, 0.9, 100};
		soundWood2[] = {"A3\Sounds_F_Enoch\Assets\Arsenal\Bullet_Impacts\Impact_Wood_02", 1.8, 1, 100};
		soundWood3[] = {"A3\Sounds_F_Enoch\Assets\Arsenal\Bullet_Impacts\Impact_Wood_03", 1.8, 1, 100};
		soundWood4[] = {"A3\Sounds_F_Enoch\Assets\Arsenal\Bullet_Impacts\Impact_Wood_04", 1.8, 1, 100};
		soundWood5[] = {"A3\Sounds_F_Enoch\Assets\Arsenal\Bullet_Impacts\Impact_Wood_05", 1.8, 1, 100};
		soundWood6[] = {"A3\Sounds_F_Enoch\Assets\Arsenal\Bullet_Impacts\Impact_Wood_06", 1.8, 1, 100};
		soundWood7[] = {"A3\Sounds_F_Enoch\Assets\Arsenal\Bullet_Impacts\Impact_Wood_07", 1.8, 1, 100};
		soundWood8[] = {"A3\Sounds_F_Enoch\Assets\Arsenal\Bullet_Impacts\Impact_Wood_08", 1.8, 1, 100};
		soundWood9[] = {"A3\Sounds_F_Enoch\Assets\Arsenal\Bullet_Impacts\Impact_Wood_09", 1.8, 0.9, 100};
		typicalSpeed = 360;
	};
	class B_12Gauge_Slug: BulletBase
	{
		airFriction = -0.008;
		caliber = 3;
		cartridge = "FxCartridge_slug";
		cost = 5;
		deflecting = 30;
		hit = 42;
		indirectHit = 0;
		indirectHitRange = 0;
		typicalSpeed = 600;
	};
	class B_12Gauge_Slug_NoCartridge: B_12Gauge_Slug
	{
		cartridge = "";
		model = "\A3\weapons_f\empty";
		simulation = "shotSubmunitions";
	};
	class B_19mm_HE: BulletBase
	{
		airFriction = -0.0006;
		audibleFire = 150;
		caliber = 2;
		cost = 20;
		craterEffects = "ExploAmmoCrater";
		dangerRadiusBulletClose = 16;
		dangerRadiusHit = 40;
		deflecting = 5;
		explosionEffects = "ExploAmmoExplosion";
		explosionSoundEffect = "DefaultExplosion";
		explosive = 0.8;
		fuseDistance = 3;
		hit = 20;
		indirectHit = 6;
		indirectHitRange = 2;
		model = "\A3\Weapons_f\Data\bullettracer\tracer_white";
		multiSoundHit[] = {"soundHit1", 0.25, "soundHit2", 0.25, "soundHit3", 0.25, "soundHit4", 0.25};
		soundFly[] = {"", 1, 1, 50};
		soundHit1[] = {"A3\Sounds_F\arsenal\explosives\shells\30mm40mm_shell_explosion_01", 1.77828, 1, 1600};
		soundHit2[] = {"A3\Sounds_F\arsenal\explosives\shells\30mm40mm_shell_explosion_02", 1.77828, 1, 1600};
		soundHit3[] = {"A3\Sounds_F\arsenal\explosives\shells\30mm40mm_shell_explosion_03", 1.77828, 1, 1600};
		soundHit4[] = {"A3\Sounds_F\arsenal\explosives\shells\30mm40mm_shell_explosion_04", 1.77828, 1, 1600};
		SoundSetExplosion[] = {"Shell19mm25mm_Exp_SoundSet"};
		suppressionRadiusBulletClose = 10;
		suppressionRadiusHit = 14;
		tracerEndTime = 1;
		tracerScale = 1;
		tracerStartTime = 0.05;
		typicalSpeed = 400;
		visibleFire = 16;
		visibleFireTime = 3;
		warheadName = "HE";
		class CamShakeExplode
		{
			distance = 50.8712;
			duration = 0.8;
			frequency = 20;
			power = 3.8;
		};
		class CamShakeFire
		{
			distance = 34.8712;
			duration = 0.8;
			frequency = 20;
			power = 2.0878;
		};
		class CamShakeHit
		{
			distance = 1;
			duration = 0.4;
			frequency = 20;
			power = 19;
		};
		class CamShakePlayerFire
		{
			distance = 1;
			duration = 0.1;
			frequency = 20;
			power = 0.01;
		};
	};
	class B_20mm: BulletBase
	{
		aiAmmoUsageFlags = "64 + 128";
		airFriction = -0.00078;
		airLock = 1;
		audibleFire = 200;
		caliber = 3.4;
		cost = 30;
		CraterEffects = "ExploAmmoCrater";
		dangerRadiusBulletClose = 16;
		dangerRadiusHit = 40;
		explosionEffects = "ExploAmmoExplosion";
		explosionSoundEffect = "DefaultExplosion";
		explosive = 0.4;
		hit = 60;
		indirectHit = 6;
		indirectHitRange = 1.6;
		model = "\A3\Weapons_f\Data\bullettracer\tracer_white";
		multiSoundHit[] = {"soundHit1", 0.25, "soundHit2", 0.25, "soundHit3", 0.25, "soundHit4", 0.25};
		muzzleEffect = "";
		nvgOnly = 0;
		soundHit1[] = {"A3\Sounds_F\arsenal\explosives\grenades\Explosion_mini_grenade_01", 1.77828, 1, 1300};
		soundHit2[] = {"A3\Sounds_F\arsenal\explosives\grenades\Explosion_mini_grenade_02", 1.77828, 1, 1300};
		soundHit3[] = {"A3\Sounds_F\arsenal\explosives\grenades\Explosion_mini_grenade_03", 1.77828, 1, 1300};
		soundHit4[] = {"A3\Sounds_F\arsenal\explosives\grenades\Explosion_mini_grenade_04", 1.77828, 1, 1300};
		SoundSetExplosion[] = {"Shell19mm25mm_Exp_SoundSet"};
		suppressionRadiusBulletClose = 10;
		suppressionRadiusHit = 14;
		tracerEndTime = 1;
		tracerScale = 1;
		tracerStartTime = 0.05;
		typicalSpeed = 1030;
		visibleFire = 32;
		visibleFireTime = 4;
		warheadName = "HE";
		weaponType = "cannon";
		class CamShakeExplode
		{
			distance = 43.7771;
			duration = 0.8;
			frequency = 20;
			power = 4;
		};
		class CamShakeFire
		{
			distance = 35.7771;
			duration = 0.8;
			frequency = 20;
			power = 2.11474;
		};
		class CamShakeHit
		{
			distance = 1;
			duration = 0.4;
			frequency = 20;
			power = 20;
		};
		class CamShakePlayerFire
		{
			distance = 1;
			duration = 0.1;
			frequency = 20;
			power = 0.01;
		};
	};
	class B_20mm_AP: BulletBase
	{
		aiAmmoUsageFlags = "128 + 512";
		airFriction = -0.00042;
		airlock = 1;
		allowAgainstInfantry = 1;
		audibleFire = 200;
		caliber = 3.4;
		cost = 35;
		dangerRadiusBulletClose = 16;
		dangerRadiusHit = 40;
		deflecting = 15;
		hit = 60;
		indirectHit = 8;
		indirectHitRange = 0.2;
		model = "\A3\Weapons_f\Data\bullettracer\tracer_white";
		multiSoundHit[] = {"soundHit1", 0.25, "soundHit2", 0.25, "soundHit3", 0.25, "soundHit4", 0.25};
		muzzleEffect = "";
		soundHit1[] = {"A3\Sounds_F\arsenal\explosives\shells\30mm40mm_shell_explosion_01", 1.77828, 1, 1600};
		soundHit2[] = {"A3\Sounds_F\arsenal\explosives\shells\30mm40mm_shell_explosion_02", 1.77828, 1, 1600};
		soundHit3[] = {"A3\Sounds_F\arsenal\explosives\shells\30mm40mm_shell_explosion_03", 1.77828, 1, 1600};
		soundHit4[] = {"A3\Sounds_F\arsenal\explosives\shells\30mm40mm_shell_explosion_04", 1.77828, 1, 1600};
		suppressionRadiusBulletClose = 10;
		suppressionRadiusHit = 14;
		tracerEndTime = 2;
		tracerScale = 2.5;
		tracerStartTime = 0.1;
		typicalSpeed = 1120;
		visibleFire = 32;
		visibleFireTime = 3;
		warheadName = "AP";
		weaponType = "cannon";
		class CamShakeExplode
		{
			distance = 56;
			duration = 1;
			frequency = 20;
			power = 5;
		};
		class CamShakeFire
		{
			distance = 40;
			duration = 1;
			frequency = 20;
			power = 2.23607;
		};
		class CamShakeHit
		{
			distance = 1;
			duration = 0.6;
			frequency = 20;
			power = 50;
		};
		class CamShakePlayerFire
		{
			distance = 1;
			duration = 0.1;
			frequency = 20;
			power = 0.01;
		};
	};
	class B_20mm_Tracer_Red: B_20mm
	{
		model = "\A3\Weapons_f\Data\bullettracer\tracer_red";
	};
	class B_25mm: BulletBase
	{
		airFriction = -0.00076;
		airLock = 1;
		audibleFire = 200;
		caliber = 3.8;
		cost = 20;
		CraterEffects = "ExploAmmoCrater";
		dangerRadiusBulletClose = 16;
		dangerRadiusHit = 40;
		explosionEffects = "ExploAmmoExplosion";
		explosionSoundEffect = "DefaultExplosion";
		explosive = 0.4;
		hit = 70;
		indirectHit = 6;
		indirectHitRange = 0.4;
		model = "\A3\Weapons_f\Data\bullettracer\tracer_white";
		multiSoundHit[] = {"soundHit1", 0.25, "soundHit2", 0.25, "soundHit3", 0.25, "soundHit4", 0.25};
		muzzleEffect = "";
		nvgOnly = 1;
		soundHit1[] = {"A3\Sounds_F\arsenal\explosives\shells\30mm40mm_shell_explosion_01", 1.77828, 1, 1600};
		soundHit2[] = {"A3\Sounds_F\arsenal\explosives\shells\30mm40mm_shell_explosion_02", 1.77828, 1, 1600};
		soundHit3[] = {"A3\Sounds_F\arsenal\explosives\shells\30mm40mm_shell_explosion_03", 1.77828, 1, 1600};
		soundHit4[] = {"A3\Sounds_F\arsenal\explosives\shells\30mm40mm_shell_explosion_04", 1.77828, 1, 1600};
		SoundSetExplosion[] = {"Shell30mm40mm_Exp_SoundSet", "Shell30mm40mm_Tail_SoundSet", "Explosion_Debris_SoundSet"};
		suppressionRadiusBulletClose = 10;
		suppressionRadiusHit = 14;
		tracerEndTime = 1;
		tracerScale = 1;
		tracerStartTime = 0.05;
		typicalSpeed = 1030;
		visibleFire = 32;
		visibleFireTime = 4;
		warheadName = "AP";
		class CamShakeExplode
		{
			distance = 56;
			duration = 1;
			frequency = 20;
			power = 5;
		};
		class CamShakeFire
		{
			distance = 40;
			duration = 1;
			frequency = 20;
			power = 2.23607;
		};
		class CamShakeHit
		{
			distance = 1;
			duration = 0.4;
			frequency = 20;
			power = 25;
		};
		class CamShakePlayerFire
		{
			distance = 1;
			duration = 0.1;
			frequency = 20;
			power = 0.01;
		};
	};
	class B_25x40mm_airburst: B_25x40mm_base
	{
		directionalExplosion = 1;
		submunitionAmmo[] = {"B_25x40mm_airburst_deploy", 1};
		submunitionAutoleveling = 1;
		submunitionConeAngle[] = {10, 180};
		submunitionConeAngleHorizontal = 175;
		submunitionConeType[] = {"randomupcone", 5};
		submunitionInitSpeed = 18;
		submunitionParentSpeedCoef = 0;
		triggerDistance = 22;
		triggerSpeedCoef[] = {0.1, 2};
	};
	class B_25x40mm_airburst_deploy: B_25x40mm_HE
	{
		airFriction = 0;
		explosionTime = 0.1;
		model = "\A3\Weapons_F_EPB\Ammo\B_IRstrobe_F.p3d";
		sideairFriction = 0;
		simulation = "shotGrenade";
		simulationStep = 0.1;
	};
	class B_25x40mm_autoseek: B_25x40mm_base {};
	class B_25x40mm_base: B_19mm_HE
	{
		hit = 11;
		indirectHit = 6;
		indirectHitRange = 4;
		simulationStep = 0.001;
	};
	class B_25x40mm_HE: B_25x40mm_base {};
	class B_25x40mm_stick: B_25x40mm_base {};
	class B_30mm_AP: BulletBase
	{
		aiAmmoUsageFlags = "128 + 512";
		airFriction = -0.00042;
		airlock = 1;
		allowAgainstInfantry = 1;
		audibleFire = 200;
		caliber = 4.2;
		cost = 35;
		dangerRadiusBulletClose = 16;
		dangerRadiusHit = 40;
		deflecting = 15;
		hit = 80;
		indirectHit = 8;
		indirectHitRange = 0.2;
		model = "\A3\Weapons_f\Data\bullettracer\tracer_white";
		multiSoundHit[] = {"soundHit1", 0.25, "soundHit2", 0.25, "soundHit3", 0.25, "soundHit4", 0.25};
		muzzleEffect = "";
		soundHit1[] = {"A3\Sounds_F\arsenal\explosives\shells\30mm40mm_shell_explosion_01", 1.77828, 1, 1600};
		soundHit2[] = {"A3\Sounds_F\arsenal\explosives\shells\30mm40mm_shell_explosion_02", 1.77828, 1, 1600};
		soundHit3[] = {"A3\Sounds_F\arsenal\explosives\shells\30mm40mm_shell_explosion_03", 1.77828, 1, 1600};
		soundHit4[] = {"A3\Sounds_F\arsenal\explosives\shells\30mm40mm_shell_explosion_04", 1.77828, 1, 1600};
		SoundSetExplosion[] = {"Shell30mm40mm_Exp_SoundSet", "Shell30mm40mm_Tail_SoundSet", "Explosion_Debris_SoundSet"};
		suppressionRadiusBulletClose = 10;
		suppressionRadiusHit = 14;
		tracerEndTime = 2;
		tracerScale = 2.5;
		tracerStartTime = 0.1;
		typicalSpeed = 1120;
		visibleFire = 32;
		visibleFireTime = 3;
		warheadName = "AP";
		weaponType = "cannon";
		class CamShakeExplode
		{
			distance = 56;
			duration = 1;
			frequency = 20;
			power = 5;
		};
		class CamShakeFire
		{
			distance = 40;
			duration = 1;
			frequency = 20;
			power = 2.23607;
		};
		class CamShakeHit
		{
			distance = 1;
			duration = 0.6;
			frequency = 20;
			power = 50;
		};
		class CamShakePlayerFire
		{
			distance = 1;
			duration = 0.1;
			frequency = 20;
			power = 0.01;
		};
	};
	class B_30mm_AP_Tracer_Green: B_30mm_AP
	{
		model = "\A3\Weapons_f\Data\bullettracer\tracer_green";
	};
	class B_30mm_AP_Tracer_Red: B_30mm_AP
	{
		model = "\A3\Weapons_f\Data\bullettracer\tracer_red";
	};
	class B_30mm_AP_Tracer_Yellow: B_30mm_AP
	{
		model = "\A3\Weapons_f\Data\bullettracer\tracer_yellow";
	};
	class B_30mm_APFSDS: B_30mm_AP
	{
		airFriction = -0.0001;
		caliber = 6;
		cost = 75;
		deflecting = 15;
		hit = 120;
		indirectHit = 8;
		indirectHitRange = 0.2;
		multiSoundHit[] = {"soundHit1", 0.25, "soundHit2", 0.25, "soundHit3", 0.25, "soundHit4", 0.25};
		soundHit1[] = {"A3\Sounds_F\arsenal\explosives\shells\30mm40mm_shell_explosion_01", 1.77828, 1, 1600};
		soundHit2[] = {"A3\Sounds_F\arsenal\explosives\shells\30mm40mm_shell_explosion_02", 1.77828, 1, 1600};
		soundHit3[] = {"A3\Sounds_F\arsenal\explosives\shells\30mm40mm_shell_explosion_03", 1.77828, 1, 1600};
		soundHit4[] = {"A3\Sounds_F\arsenal\explosives\shells\30mm40mm_shell_explosion_04", 1.77828, 1, 1600};
		tracerEndTime = 1.5;
		typicalSpeed = 1320;
		class CamShakeExplode
		{
			distance = 20.1246;
			duration = 1.4;
			frequency = 20;
			power = 6.7082;
		};
		class CamShakeFire
		{
			distance = 43.8178;
			duration = 1;
			frequency = 20;
			power = 2.34035;
		};
		class CamShakeHit
		{
			distance = 1;
			duration = 0.6;
			frequency = 20;
			power = 45;
		};
		class CamShakePlayerFire
		{
			distance = 1;
			duration = 0.1;
			frequency = 20;
			power = 0.01;
		};
		class HitEffects
		{
			default_mat = "ImpactEffectsGroundSabot";
			Hit_Foliage_Dead = "ImpactLeavesDead";
			Hit_Foliage_green = "ImpactLeavesGreen";
			Hit_Foliage_Green_big = "ImpactLeavesGreenBig";
			Hit_Foliage_Palm = "ImpactLeavesPalm";
			Hit_Foliage_Pine = "ImpactLeavesPine";
			hitBuilding = "ImpactConcreteSabotSmall";
			hitConcrete = "ImpactConcreteSabotSmall";
			hitFoliage = "ImpactLeaves";
			hitGlass = "ImpactGlass";
			hitGlassArmored = "ImpactGlassThin";
			hitGroundHard = "ImpactEffectsGroundSabot";
			hitGroundSoft = "ImpactEffectsGroundSabot";
			hitHay = "ImpactHay";
			hitMan = "ImpactEffectsBlood";
			hitMetal = "ImpactMetalSabotSmall";
			hitMetalPlate = "ImpactMetalSabotSmall";
			hitPlastic = "ImpactPlastic";
			hitRubber = "ImpactRubber";
			hitTyre = "ImpactTyre";
			hitWater = "ImpactEffectsWater";
			hitWood = "ImpactWood";
		};
	};
	class B_30mm_APFSDS_Tracer_Green: B_30mm_APFSDS
	{
		model = "\A3\Weapons_f\Data\bullettracer\tracer_green";
	};
	class B_30mm_APFSDS_Tracer_Red: B_30mm_APFSDS
	{
		model = "\A3\Weapons_f\Data\bullettracer\tracer_red";
	};
	class B_30mm_APFSDS_Tracer_Yellow: B_30mm_APFSDS
	{
		model = "\A3\Weapons_f\Data\bullettracer\tracer_yellow";
	};
	class B_30mm_HE: B_19mm_HE
	{
		aiAmmoUsageFlags = "64 + 128";
		airFriction = -0.00036;
		airlock = 1;
		audibleFire = 200;
		caliber = 1.4;
		cost = 20;
		dangerRadiusBulletClose = 20;
		dangerRadiusHit = 60;
		explosive = 0.8;
		fuseDistance = 3;
		hit = 30;
		indirectHit = 8;
		indirectHitRange = 3;
		multiSoundHit[] = {"soundHit1", 0.25, "soundHit2", 0.25, "soundHit3", 0.25, "soundHit4", 0.25};
		soundHit1[] = {"A3\Sounds_F\arsenal\explosives\shells\30mm40mm_shell_explosion_01", 1.77828, 1, 1600};
		soundHit2[] = {"A3\Sounds_F\arsenal\explosives\shells\30mm40mm_shell_explosion_02", 1.77828, 1, 1600};
		soundHit3[] = {"A3\Sounds_F\arsenal\explosives\shells\30mm40mm_shell_explosion_03", 1.77828, 1, 1600};
		soundHit4[] = {"A3\Sounds_F\arsenal\explosives\shells\30mm40mm_shell_explosion_04", 1.77828, 1, 1600};
		SoundSetExplosion[] = {"Shell30mm40mm_Exp_SoundSet", "Shell30mm40mm_Tail_SoundSet", "Explosion_Debris_SoundSet"};
		suppressionRadiusBulletClose = 12;
		suppressionRadiusHit = 24;
		tracerEndTime = 4.7;
		tracerScale = 2.5;
		tracerStartTime = 0.1;
		typicalSpeed = 960;
		visibleFire = 32;
		visibleFireTime = 3;
		weaponType = "cannon";
		class CamShakeExplode
		{
			distance = 67.8178;
			duration = 1;
			frequency = 20;
			power = 6;
		};
		class CamShakeFire
		{
			distance = 40;
			duration = 1;
			frequency = 20;
			power = 2.23607;
		};
		class CamShakeHit
		{
			distance = 1;
			duration = 0.4;
			frequency = 20;
			power = 30;
		};
		class CamShakePlayerFire
		{
			distance = 1;
			duration = 0.1;
			frequency = 20;
			power = 0.01;
		};
	};
	class B_30mm_HE_Tracer_Green: B_30mm_HE
	{
		model = "\A3\Weapons_f\Data\bullettracer\tracer_green";
	};
	class B_30mm_HE_Tracer_Red: B_30mm_HE
	{
		model = "\A3\Weapons_f\Data\bullettracer\tracer_red";
	};
	class B_30mm_HE_Tracer_Yellow: B_30mm_HE
	{
		model = "\A3\Weapons_f\Data\bullettracer\tracer_yellow";
	};
	class B_30mm_MP: B_30mm_HE
	{
		airFriction = -0.00036;
		caliber = 4.4;
		dangerRadiusBulletClose = 16;
		dangerRadiusHit = 40;
		deflecting = 10;
		explosive = 0.6;
		hit = 90;
		indirectHit = 4;
		indirectHitRange = 2;
		multiSoundHit[] = {"soundHit1", 0.25, "soundHit2", 0.25, "soundHit3", 0.25, "soundHit4", 0.25};
		soundHit1[] = {"A3\Sounds_F\arsenal\explosives\shells\30mm40mm_shell_explosion_01", 1.77828, 1, 1600};
		soundHit2[] = {"A3\Sounds_F\arsenal\explosives\shells\30mm40mm_shell_explosion_02", 1.77828, 1, 1600};
		soundHit3[] = {"A3\Sounds_F\arsenal\explosives\shells\30mm40mm_shell_explosion_03", 1.77828, 1, 1600};
		soundHit4[] = {"A3\Sounds_F\arsenal\explosives\shells\30mm40mm_shell_explosion_04", 1.77828, 1, 1600};
		SoundSetExplosion[] = {"Shell30mm40mm_Exp_SoundSet", "Shell30mm40mm_Tail_SoundSet", "Explosion_Debris_SoundSet"};
		suppressionRadiusBulletClose = 10;
		suppressionRadiusHit = 14;
		typicalSpeed = 1070;
		warheadName = "HEAT";
		class CamShakeExplode
		{
			distance = 67.8178;
			duration = 1;
			frequency = 20;
			power = 6;
		};
		class CamShakeFire
		{
			distance = 43.8178;
			duration = 1;
			frequency = 20;
			power = 2.34035;
		};
		class CamShakeHit
		{
			distance = 1;
			duration = 0.4;
			frequency = 20;
			power = 30;
		};
		class CamShakePlayerFire
		{
			distance = 1;
			duration = 0.1;
			frequency = 20;
			power = 0.01;
		};
	};
	class B_30mm_MP_Tracer_Green: B_30mm_MP
	{
		model = "\A3\Weapons_f\Data\bullettracer\tracer_green";
	};
	class B_30mm_MP_Tracer_Red: B_30mm_MP
	{
		model = "\A3\Weapons_f\Data\bullettracer\tracer_red";
	};
	class B_30mm_MP_Tracer_Yellow: B_30mm_MP
	{
		model = "\A3\Weapons_f\Data\bullettracer\tracer_yellow";
	};
	class B_338_Ball: BulletBase
	{
		airFriction = -0.00061;
		airLock = 1;
		audibleFire = 80;
		caliber = 2;
		cartridge = "FxCartridge_338_Ball";
		cost = 6;
		dangerRadiusBulletClose = 10;
		dangerRadiusHit = 14;
		hit = 16;
		indirectHit = 0;
		indirectHitRange = 0;
		model = "\A3\Weapons_f\Data\bullettracer\tracer_red";
		suppressionRadiusBulletClose = 8;
		suppressionRadiusHit = 10;
		timeToLive = 10;
		tracerEndTime = 1;
		tracerScale = 1.2;
		tracerStartTime = 0.075;
		typicalSpeed = 890;
		visibleFireTime = 3;
		class CamShakeExplode
		{
			distance = 9.48683;
			duration = 0.6;
			frequency = 20;
			power = 3.16228;
		};
		class CamShakeHit
		{
			distance = 1;
			duration = 0.4;
			frequency = 20;
			power = 10;
		};
	};
	class B_338_NM_Ball: BulletBase
	{
		airFriction = -0.00061;
		airLock = 1;
		audibleFire = 60;
		caliber = 1.8;
		cartridge = "FxCartridge_338_NM_Ball";
		cost = 6;
		dangerRadiusBulletClose = 10;
		dangerRadiusHit = 14;
		hit = 14;
		indirectHit = 0;
		indirectHitRange = 0;
		model = "\A3\Weapons_f\Data\bullettracer\tracer_red";
		suppressionRadiusBulletClose = 8;
		suppressionRadiusHit = 10;
		timeToLive = 10;
		tracerEndTime = 1;
		tracerScale = 1.2;
		tracerStartTime = 0.075;
		typicalSpeed = 760;
		visibleFireTime = 3;
		class CamShakeExplode
		{
			distance = 9.48683;
			duration = 0.6;
			frequency = 20;
			power = 3.16228;
		};
		class CamShakeHit
		{
			distance = 1;
			duration = 0.4;
			frequency = 20;
			power = 10;
		};
	};
	class B_35mm_AA: BulletBase
	{
		aiAmmoUsageFlags = "64 + 128 + 256";
		airFriction = -0.0005;
		airLock = 1;
		audibleFire = 200;
		caliber = 2.8;
		cost = 42;
		CraterEffects = "ExploAmmoCrater";
		dangerRadiusBulletClose = 20;
		dangerRadiusHit = 60;
		deflecting = 0;
		explosionEffects = "ExploAmmoExplosion";
		explosionSoundEffect = "DefaultExplosion";
		explosive = 0.6;
		hit = 60;
		indirectHit = 25;
		indirectHitRange = 2.4;
		model = "\A3\Weapons_f\Data\bullettracer\tracer_white";
		multiSoundHit[] = {"soundHit1", 0.25, "soundHit2", 0.25, "soundHit3", 0.25, "soundHit4", 0.25};
		muzzleEffect = "";
		soundHit1[] = {"A3\Sounds_F\arsenal\explosives\shells\30mm40mm_shell_explosion_01", 1.77828, 1, 1600};
		soundHit2[] = {"A3\Sounds_F\arsenal\explosives\shells\30mm40mm_shell_explosion_02", 1.77828, 1, 1600};
		soundHit3[] = {"A3\Sounds_F\arsenal\explosives\shells\30mm40mm_shell_explosion_03", 1.77828, 1, 1600};
		soundHit4[] = {"A3\Sounds_F\arsenal\explosives\shells\30mm40mm_shell_explosion_04", 1.77828, 1, 1600};
		SoundSetExplosion[] = {"Shell19mm25mm_Exp_SoundSet"};
		suppressionRadiusBulletClose = 12;
		suppressionRadiusHit = 24;
		tracerEndTime = 2;
		tracerScale = 1.85;
		tracerStartTime = 0.1;
		typicalSpeed = 960;
		visibleFire = 38;
		visibleFireTime = 5;
		warheadName = "HE";
		class CamShakeExplode
		{
			distance = 41.9411;
			duration = 0.8;
			frequency = 20;
			power = 3.6;
		};
		class CamShakeFire
		{
			distance = 17.8885;
			duration = 0.4;
			frequency = 20;
			power = 1.49535;
		};
		class CamShakeHit
		{
			distance = 1;
			duration = 0.4;
			frequency = 20;
			power = 18;
		};
		class CamShakePlayerFire
		{
			distance = 1;
			duration = 0.1;
			frequency = 20;
			power = 0.001;
		};
	};
	class B_35mm_AA_Tracer_Green: B_35mm_AA
	{
		model = "\A3\Weapons_f\Data\bullettracer\tracer_green";
	};
	class B_35mm_AA_Tracer_Red: B_35mm_AA
	{
		model = "\A3\Weapons_f\Data\bullettracer\tracer_red";
	};
	class B_35mm_AA_Tracer_Yellow: B_35mm_AA
	{
		model = "\A3\Weapons_f\Data\bullettracer\tracer_yellow";
	};
	class B_408_Ball: BulletBase
	{
		airFriction = -0.00048;
		airLock = 1;
		audibleFire = 120;
		caliber = 2.4;
		cartridge = "FxCartridge_127";
		cost = 7;
		hit = 24;
		indirectHit = 0;
		indirectHitRange = 0;
		model = "\A3\Weapons_f\Data\bullettracer\tracer_green";
		timeToLive = 10;
		tracerEndTime = 1;
		tracerScale = 1.2;
		tracerStartTime = 0.075;
		typicalSpeed = 910;
		visibleFire = 5;
		visibleFireTime = 3;
		class CamShakeExplode
		{
			distance = 9.48683;
			duration = 0.6;
			frequency = 20;
			power = 3.16228;
		};
		class CamShakeHit
		{
			distance = 1;
			duration = 0.4;
			frequency = 20;
			power = 10;
		};
	};
	class B_40mm_APFSDS: B_30mm_APFSDS
	{
		airFriction = -0.00012;
		caliber = 8;
		cost = 100;
		hit = 150;
		indirectHit = 8;
		indirectHitRange = 0.2;
		multiSoundHit[] = {"soundHit1", 0.25, "soundHit2", 0.25, "soundHit3", 0.25, "soundHit4", 0.25};
		soundHit1[] = {"A3\Sounds_F\arsenal\explosives\shells\30mm40mm_shell_explosion_01", 1.77828, 1, 1600};
		soundHit2[] = {"A3\Sounds_F\arsenal\explosives\shells\30mm40mm_shell_explosion_02", 1.77828, 1, 1600};
		soundHit3[] = {"A3\Sounds_F\arsenal\explosives\shells\30mm40mm_shell_explosion_03", 1.77828, 1, 1600};
		soundHit4[] = {"A3\Sounds_F\arsenal\explosives\shells\30mm40mm_shell_explosion_04", 1.77828, 1, 1600};
		typicalSpeed = 1140;
		warheadName = "AP";
		class CamShakeExplode
		{
			distance = 23.2379;
			duration = 1.6;
			frequency = 20;
			power = 7.74597;
		};
		class CamShakeFire
		{
			distance = 50.5964;
			duration = 1.2;
			frequency = 20;
			power = 2.51487;
		};
		class CamShakeHit
		{
			distance = 1;
			duration = 0.6;
			frequency = 20;
			power = 60;
		};
		class CamShakePlayerFire
		{
			distance = 1;
			duration = 0.1;
			frequency = 20;
			power = 0.01;
		};
	};
	class B_40mm_APFSDS_Tracer_Green: B_40mm_APFSDS
	{
		model = "\A3\Weapons_f\Data\bullettracer\tracer_green";
	};
	class B_40mm_APFSDS_Tracer_Red: B_40mm_APFSDS
	{
		model = "\A3\Weapons_f\Data\bullettracer\tracer_red";
	};
	class B_40mm_APFSDS_Tracer_Yellow: B_40mm_APFSDS
	{
		model = "\A3\Weapons_f\Data\bullettracer\tracer_yellow";
	};
	class B_40mm_GPR: B_30mm_HE
	{
		airFriction = -0.0006;
		caliber = 4.6;
		cost = 40;
		deflecting = 10;
		hit = 70;
		indirectHit = 8;
		indirectHitRange = 4;
		multiSoundHit[] = {"soundHit1", 0.25, "soundHit2", 0.25, "soundHit3", 0.25, "soundHit4", 0.25};
		soundHit1[] = {"A3\Sounds_F\arsenal\explosives\shells\30mm40mm_shell_explosion_01", 1.77828, 1, 1600};
		soundHit2[] = {"A3\Sounds_F\arsenal\explosives\shells\30mm40mm_shell_explosion_02", 1.77828, 1, 1600};
		soundHit3[] = {"A3\Sounds_F\arsenal\explosives\shells\30mm40mm_shell_explosion_03", 1.77828, 1, 1600};
		soundHit4[] = {"A3\Sounds_F\arsenal\explosives\shells\30mm40mm_shell_explosion_04", 1.77828, 1, 1600};
		SoundSetExplosion[] = {"Shell30mm40mm_Exp_SoundSet", "Shell30mm40mm_Tail_SoundSet", "Explosion_Debris_SoundSet"};
		warheadName = "AP";
		class CamShakeExplode
		{
			distance = 82.5964;
			duration = 1.2;
			frequency = 20;
			power = 8;
		};
		class CamShakeFire
		{
			distance = 50.5964;
			duration = 1.2;
			frequency = 20;
			power = 2.51487;
		};
		class CamShakeHit
		{
			distance = 1;
			duration = 0.6;
			frequency = 20;
			power = 40;
		};
		class CamShakePlayerFire
		{
			distance = 1;
			duration = 0.1;
			frequency = 20;
			power = 0.01;
		};
	};
	class B_40mm_GPR_Tracer_Green: B_40mm_GPR
	{
		model = "\A3\Weapons_f\Data\bullettracer\tracer_green";
	};
	class B_40mm_GPR_Tracer_Red: B_40mm_GPR
	{
		model = "\A3\Weapons_f\Data\bullettracer\tracer_red";
	};
	class B_40mm_GPR_Tracer_Yellow: B_40mm_GPR
	{
		model = "\A3\Weapons_f\Data\bullettracer\tracer_yellow";
	};
	class B_45ACP_Ball: BulletBase
	{
		aiAmmoUsageFlags = 64;
		airFriction = -0.0018;
		airLock = 1;
		audibleFire = 45;
		caliber = 1.4;
		cartridge = "FxCartridge_9mm";
		cost = 100;
		dangerRadiusBulletClose = 4;
		dangerRadiusHit = 8;
		deflecting = 25;
		hit = 5;
		indirectHit = 0;
		indirectHitRange = 0;
		model = "\A3\Weapons_f\Data\bullettracer\tracer_red";
		suppressionRadiusBulletClose = 2;
		suppressionRadiusHit = 4;
		tracerEndTime = 5;
		tracerScale = 0.6;
		tracerStartTime = 0.0075;
		typicalSpeed = 280;
	};
	class B_45ACP_Ball_Green: B_45ACP_Ball
	{
		model = "\A3\Weapons_f\Data\bullettracer\tracer_green";
	};
	class B_45ACP_Ball_Yellow: B_45ACP_Ball
	{
		model = "\A3\Weapons_f\Data\bullettracer\tracer_yellow";
	};
	class B_50BW_Ball_F: BulletBase
	{
		airFriction = -0.002;
		airLock = 1;
		caliber = 4.2;
		cartridge = "";
		dangerRadiusBulletClose = 12;
		dangerRadiusHit = 16;
		hit = 22;
		indirectHit = 0;
		indirectHitRange = 0;
		model = "\A3\Weapons_f\Data\bullettracer\tracer_green";
		nvgOnly = 0;
		suppressionRadiusBulletClose = 8;
		suppressionRadiusHit = 12;
		tracerEndTime = 1;
		tracerScale = 1;
		tracerStartTime = 0.05;
		typicalSpeed = 550;
	};
	class B_545x39_Ball_F: BulletBase
	{
		airFriction = -0.0013;
		airLock = 1;
		caliber = 0.6;
		dangerRadiusBulletClose = 8;
		dangerRadiusHit = 12;
		deflecting = 20;
		hit = 8;
		indirectHit = 0;
		indirectHitRange = 0;
		model = "\A3\Weapons_f\Data\bullettracer\tracer_yellow";
		nvgOnly = 0;
		suppressionRadiusBulletClose = 6;
		suppressionRadiusHit = 8;
		tracerEndTime = 1;
		tracerScale = 1;
		tracerStartTime = 0.05;
		typicalSpeed = 880;
	};
	class B_545x39_Ball_Green_F: B_545x39_Ball_F
	{
		model = "\A3\Weapons_f\Data\bullettracer\tracer_green";
	};
	class B_556x45_Ball: BulletBase
	{
		aiAmmoUsageFlags = 64;
		airFriction = -0.0012;
		airLock = 1;
		audibleFire = 35;
		caliber = 0.869565;
		cost = 1;
		dangerRadiusBulletClose = 8;
		dangerRadiusHit = 12;
		hit = 9;
		indirectHit = 0;
		indirectHitRange = 0;
		model = "\A3\Weapons_f\Data\bullettracer\tracer_yellow";
		suppressionRadiusBulletClose = 6;
		suppressionRadiusHit = 8;
		tracerEndTime = 1;
		tracerScale = 1;
		tracerStartTime = 0.05;
		typicalSpeed = 920;
		waterFriction = -0.3;
		class CamShakeExplode
		{
			distance = 6.7082;
			duration = 0.4;
			frequency = 20;
			power = 2.23607;
		};
		class CamShakeHit
		{
			distance = 1;
			duration = 0.2;
			frequency = 20;
			power = 5;
		};
	};
	class B_556x45_Ball_Tracer_Green: B_556x45_Ball
	{
		model = "\A3\Weapons_f\Data\bullettracer\tracer_green";
		nvgOnly = 0;
	};
	class B_556x45_Ball_Tracer_Red: B_556x45_Ball
	{
		model = "\A3\Weapons_f\Data\bullettracer\tracer_red";
		nvgOnly = 0;
	};
	class B_556x45_Ball_Tracer_Yellow: B_556x45_Ball
	{
		model = "\A3\Weapons_f\Data\bullettracer\tracer_yellow";
		nvgOnly = 0;
	};
	class B_556x45_dual: B_556x45_Ball
	{
		aiAmmoUsageFlags = "64 + 32";
		airFriction = -0.02;
		audibleFire = 20;
		cartridge = "FxCartridge_65";
		dangerRadiusBulletClose = 4;
		dangerRadiusHit = 8;
		effectFly = "AmmoUnderwater";
		nvgOnly = 1;
		suppressionRadiusBulletClose = 2;
		suppressionRadiusHit = 4;
		typicalSpeed = 270;
		waterFriction = -0.01;
	};
	class B_56x15_dual: BulletBase
	{
		aiAmmoUsageFlags = 64;
		airFriction = -0.0018;
		audibleFire = 20;
		caliber = 2;
		cartridge = "FxCartridge_9mm";
		cost = 2;
		deflecting = 25;
		hit = 8;
		indirectHit = 0;
		indirectHitRange = 0;
		model = "\A3\Weapons_f\Data\bullettracer\tracer_white";
		nvgOnly = 1;
		tracerEndTime = 1;
		tracerScale = 0.5;
		tracerStartTime = 0.05;
		waterFriction = -0.014;
	};
	class B_570x28_Ball: BulletBase
	{
		airFriction = -0.001412;
		audibleFire = 25;
		caliber = 0.559441;
		dangerRadiusBulletClose = 8;
		dangerRadiusHit = 12;
		deflecting = 20;
		hit = 8;
		indirectHit = 0;
		indirectHitRange = 0;
		model = "\A3\Weapons_f\Data\bullettracer\tracer_green";
		nvgOnly = 1;
		suppressionRadiusBulletClose = 6;
		suppressionRadiusHit = 8;
		tracerEndTime = 1;
		tracerScale = 1;
		tracerStartTime = 0.05;
		typicalSpeed = 715;
		visibleFire = 3;
		visibleFireTime = 5;
	};
	class B_580x42_Ball_F: BulletBase
	{
		airFriction = -0.0011;
		airLock = 1;
		caliber = 0.9;
		dangerRadiusBulletClose = 8;
		dangerRadiusHit = 12;
		deflecting = 20;
		hit = 9.4;
		indirectHit = 0;
		indirectHitRange = 0;
		model = "\A3\Weapons_f\Data\bullettracer\tracer_green";
		nvgOnly = 0;
		suppressionRadiusBulletClose = 6;
		suppressionRadiusHit = 8;
		tracerEndTime = 1;
		tracerScale = 1;
		tracerStartTime = 0.05;
		typicalSpeed = 870;
	};
	class B_65x39_Case: B_65x39_Caseless
	{
		cartridge = "FxCartridge_65";
	};
	class B_65x39_Case_green: B_65x39_Case
	{
		model = "\A3\Weapons_f\Data\bullettracer\tracer_green";
	};
	class B_65x39_Case_yellow: B_65x39_Case
	{
		model = "\A3\Weapons_f\Data\bullettracer\tracer_yellow";
	};
	class B_65x39_Caseless: BulletBase
	{
		aiAmmoUsageFlags = 64;
		airFriction = -0.0009;
		airLock = 1;
		caliber = 1;
		cartridge = "";
		cost = 1.2;
		dangerRadiusBulletClose = 8;
		dangerRadiusHit = 12;
		hit = 10;
		indirectHit = 0;
		indirectHitRange = 0;
		model = "\A3\Weapons_f\Data\bullettracer\tracer_red";
		suppressionRadiusBulletClose = 6;
		suppressionRadiusHit = 8;
		tracerEndTime = 1;
		tracerScale = 1;
		tracerStartTime = 0.05;
		typicalSpeed = 820;
		class CamShakeExplode
		{
			distance = 7.34847;
			duration = 0.4;
			frequency = 20;
			power = 2.44949;
		};
		class CamShakeHit
		{
			distance = 1;
			duration = 0.4;
			frequency = 20;
			power = 6;
		};
	};
	class B_65x39_Caseless_green: B_65x39_Caseless
	{
		model = "\A3\Weapons_f\Data\bullettracer\tracer_green";
	};
	class B_65x39_Caseless_yellow: B_65x39_Caseless
	{
		model = "\A3\Weapons_f\Data\bullettracer\tracer_yellow";
	};
	class B_65x39_Minigun_Caseless: SubmunitionBullet
	{
		airFriction = -0.0009;
		airLock = 1;
		audibleFire = 60;
		caliber = 3.2;
		cartridge = "";
		cost = 1.2;
		deflecting = 25;
		explosive = 0;
		hit = 10;
		indirectHit = 0;
		indirectHitRange = 0;
		model = "\A3\Weapons_f\Data\bullettracer\tracer_red";
		submunitionAmmo = "B_65x39_Minigun_Caseless_Red_splash";
		submunitionConeAngle = 0;
		submunitionCount = 1;
		tracerEndTime = 1;
		tracerScale = 1;
		tracerStartTime = 0.05;
		triggerTime = 0.1;
		typicalSpeed = 820;
		visibleFire = 5;
		class CamShakeExplode
		{
			distance = 7.34847;
			duration = 0.4;
			frequency = 20;
			power = 2.44949;
		};
		class CamShakeHit
		{
			distance = 1;
			duration = 0.4;
			frequency = 20;
			power = 6;
		};
	};
	class B_65x39_Minigun_Caseless_Green_splash: B_65x39_Minigun_Caseless_Red_splash
	{
		model = "\A3\Weapons_f\Data\bullettracer\tracer_green";
	};
	class B_65x39_Minigun_Caseless_Red_splash: B_65x39_Caseless
	{
		caliber = 3.2;
		deflecting = 25;
		fuseDistance = 12;
		hit = 10;
		indirectHit = 1;
		indirectHitRange = 2;
		soundSetSonicCrack[] = {"BulletSonicCrack_Gatling_SoundSet"};
	};
	class B_65x39_Minigun_Caseless_Yellow_splash: B_65x39_Minigun_Caseless_Red_splash
	{
		model = "\A3\Weapons_f\Data\bullettracer\tracer_yellow";
	};
	class B_762x39_Ball_F: BulletBase
	{
		airFriction = -0.0016;
		airLock = 1;
		caliber = 1.2;
		cartridge = "FxCartridge_762x39";
		dangerRadiusBulletClose = 8;
		dangerRadiusHit = 12;
		hit = 11;
		indirectHit = 0;
		indirectHitRange = 0;
		model = "\A3\Weapons_f\Data\bullettracer\tracer_yellow";
		nvgOnly = 0;
		suppressionRadiusBulletClose = 6;
		suppressionRadiusHit = 8;
		tracerEndTime = 1;
		tracerScale = 1;
		tracerStartTime = 0.05;
		typicalSpeed = 730;
	};
	class B_762x39_Ball_Green_F: B_762x39_Ball_F
	{
		model = "\A3\Weapons_f\Data\bullettracer\tracer_green";
	};
	class B_762x51_Ball: BulletBase
	{
		airFriction = -0.001;
		airLock = 1;
		audibleFire = 45;
		caliber = 1.6;
		cartridge = "FxCartridge_762";
		cost = 1.2;
		dangerRadiusBulletClose = 8;
		dangerRadiusHit = 12;
		hit = 11.6;
		indirectHit = 0;
		indirectHitRange = 0;
		model = "\A3\Weapons_f\Data\bullettracer\tracer_white";
		suppressionRadiusBulletClose = 6;
		suppressionRadiusHit = 8;
		tracerEndTime = 5;
		tracerScale = 0.6;
		tracerStartTime = 0.0075;
		typicalSpeed = 800;
		visibleFire = 3;
		class CamShakeExplode
		{
			distance = 8.48528;
			duration = 0.6;
			frequency = 20;
			power = 2.82843;
		};
		class CamShakeHit
		{
			distance = 1;
			duration = 0.2;
			frequency = 20;
			power = 5;
		};
	};
	class B_762x51_Minigun_Tracer_Red: SubmunitionBullet
	{
		airFriction = -0.001;
		airLock = 1;
		audibleFire = 70;
		caliber = 3.6;
		cartridge = "FxCartridge_762";
		cost = 1.2;
		deflecting = 25;
		explosive = 0;
		hit = 11.6;
		indirectHit = 0;
		indirectHitRange = 0;
		model = "\A3\Weapons_f\Data\bullettracer\tracer_red";
		submunitionAmmo = "B_762x51_Minigun_Tracer_Red_splash";
		submunitionConeAngle = 0;
		submunitionCount = 1;
		tracerEndTime = 5;
		tracerScale = 0.6;
		tracerStartTime = 0.0075;
		triggerTime = 0.1;
		typicalSpeed = 800;
		visibleFire = 5;
		class CamShakeExplode
		{
			distance = 8.48528;
			duration = 0.6;
			frequency = 20;
			power = 2.82843;
		};
		class CamShakeHit
		{
			distance = 1;
			duration = 0.2;
			frequency = 20;
			power = 5;
		};
	};
	class B_762x51_Minigun_Tracer_Red_splash: B_762x51_Ball
	{
		caliber = 3.6;
		deflecting = 25;
		fuseDistance = 12;
		hit = 11.6;
		indirectHit = 1.2;
		indirectHitRange = 2;
		model = "\A3\Weapons_f\Data\bullettracer\tracer_red";
		soundSetSonicCrack[] = {"BulletSonicCrack_Gatling_SoundSet"};
	};
	class B_762x51_Minigun_Tracer_Yellow: B_762x51_Minigun_Tracer_Red
	{
		model = "\A3\Weapons_f\Data\bullettracer\tracer_yellow";
		submunitionAmmo = "B_762x51_Minigun_Tracer_Yellow_splash";
	};
	class B_762x51_Minigun_Tracer_Yellow_splash: B_762x51_Minigun_Tracer_Red_splash
	{
		model = "\A3\Weapons_f\Data\bullettracer\tracer_yellow";
	};
	class B_762x51_Tracer_Green: B_762x51_Ball
	{
		model = "\A3\Weapons_f\Data\bullettracer\tracer_green";
	};
	class B_762x51_Tracer_Red: B_762x51_Ball
	{
		model = "\A3\Weapons_f\Data\bullettracer\tracer_red";
	};
	class B_762x51_Tracer_Yellow: B_762x51_Ball
	{
		model = "\A3\Weapons_f\Data\bullettracer\tracer_yellow";
	};
	class B_762x54_Ball: B_762x51_Ball
	{
		airFriction = -0.0012;
		caliber = 1.8;
	};
	class B_762x54_Tracer_Green: B_762x54_Ball
	{
		model = "\A3\Weapons_f\Data\bullettracer\tracer_green";
	};
	class B_762x54_Tracer_Red: B_762x54_Ball
	{
		model = "\A3\Weapons_f\Data\bullettracer\tracer_red";
	};
	class B_762x54_Tracer_Yellow: B_762x54_Ball
	{
		model = "\A3\Weapons_f\Data\bullettracer\tracer_yellow";
	};
	class B_93x64_Ball: BulletBase
	{
		airFriction = -0.00075;
		airLock = 1;
		audibleFire = 80;
		caliber = 2.2;
		cartridge = "FxCartridge_93x64_Ball";
		cost = 6;
		dangerRadiusBulletClose = 10;
		dangerRadiusHit = 14;
		hit = 18;
		indirectHit = 0;
		indirectHitRange = 0;
		model = "\A3\Weapons_f\Data\bullettracer\tracer_green";
		suppressionRadiusBulletClose = 8;
		suppressionRadiusHit = 10;
		timeToLive = 10;
		tracerEndTime = 1;
		tracerScale = 1.2;
		tracerStartTime = 0.075;
		typicalSpeed = 785;
		visibleFireTime = 3;
		class CamShakeExplode
		{
			distance = 9.48683;
			duration = 0.6;
			frequency = 20;
			power = 3.16228;
		};
		class CamShakeHit
		{
			distance = 1;
			duration = 0.4;
			frequency = 20;
			power = 10;
		};
	};
	class B_9x21_Ball: BulletBase
	{
		aiAmmoUsageFlags = 64;
		airFriction = -0.0016;
		airLock = 1;
		audibleFire = 30;
		caliber = 1.2;
		cartridge = "FxCartridge_9mm";
		cost = 100;
		dangerRadiusBulletClose = 4;
		dangerRadiusHit = 8;
		deflecting = 25;
		hit = 5;
		indirectHit = 0;
		indirectHitRange = 0;
		model = "\A3\Weapons_f\Data\bullettracer\tracer_white";
		nvgOnly = 1;
		suppressionRadiusBulletClose = 2;
		suppressionRadiusHit = 4;
		tracerEndTime = 1;
		tracerScale = 0.5;
		tracerStartTime = 0.05;
		typicalSpeed = 380;
	};
	class B_9x21_Ball_Tracer_Green: B_9x21_Ball
	{
		model = "\A3\Weapons_f\Data\bullettracer\tracer_green";
		nvgOnly = 0;
		tracerEndTime = 1;
		tracerScale = 0.5;
		tracerStartTime = 0.05;
	};
	class B_9x21_Ball_Tracer_Red: B_9x21_Ball_Tracer_Green
	{
		model = "\A3\Weapons_f\Data\bullettracer\tracer_Red";
	};
	class B_9x21_Ball_Tracer_Yellow: B_9x21_Ball_Tracer_Green
	{
		model = "\A3\Weapons_f\Data\bullettracer\tracer_Yellow";
	};
	class B_BlankRound: B_556x45_Ball
	{
		deleteParentWhenTriggered = 1;
		model = "\A3\Weapons_f\empty";
		simulation = "shotSubmunitions";
		submunitionAmmo = "B_BlankRound_Fired";
		submunitionDirectionType = "SubmunitionModelDirection";
		submunitionInitSpeed = 3000;
		submunitionParentSpeedCoef = 0;
		triggerDistance = 0.0001;
		triggerOnImpact = 1;
		triggerTime = 1e-006;
	};
	class B_BlankRound_caseless: B_BlankRound
	{
		cartridge = "";
	};
	class B_BlankRound_Fired: B_556x45_Ball
	{
		airFriction = 0;
		caliber = 0;
		coefGravity = 0;
		deleteParentWhenTriggered = 1;
		explosive = 1;
		model = "\A3\Weapons_f\empty";
		submunitionAmmo = "B_BlankRound_SubAmmo";
		submunitionInitialOffset[] = {10, 10, -10.5};
		submunitionInitSpeed = 10;
		triggerOnImpact = 1;
	};
	class B_BlankRound_SubAmmo: B_556x45_Ball
	{
		craterEffects = "";
		craterWaterEffects = "";
		hit = 1;
		hitArmor[] = {"soundHit", 1};
		hitBuilding[] = {"soundHit", 1};
		hitConcrete[] = {"soundHit", 1};
		hitDefault[] = {"soundHit", 1};
		hitFoliage[] = {"soundHit", 1};
		hitGlass[] = {"soundHit", 1};
		hitGlassArmored[] = {"soundHit", 1};
		hitGroundHard[] = {"soundHit", 1};
		hitGroundSoft[] = {"soundHit", 1};
		hitIron[] = {"soundHit", 1};
		hitMan[] = {"soundHit", 1};
		hitMetal[] = {"soundHit", 1};
		hitMetalplate[] = {"soundHit", 1};
		hitPlastic[] = {"soundHit", 1};
		hitRubber[] = {"soundHit", 1};
		hitTyre[] = {"soundHit", 1};
		hitWater[] = {"soundHit", 1};
		hitWood[] = {"soundHit", 1};
		impactArmor[] = {"soundImpact", 1};
		impactBuilding[] = {"soundImpact", 1};
		impactConcrete[] = {"soundImpact", 1};
		impactDefault[] = {"soundImpact", 1};
		impactFoliage[] = {"soundImpact", 1};
		impactGlass[] = {"soundImpact", 1};
		impactGlassArmored[] = {"soundImpact", 1};
		impactGroundHard[] = {"soundImpact", 1};
		impactGroundSoft[] = {"soundImpact", 1};
		impactIron[] = {"soundImpact", 1};
		impactMan[] = {"soundImpact", 1};
		impactMetal[] = {"soundImpact", 1};
		impactMetalplate[] = {"soundImpact", 1};
		impactPlastic[] = {"soundImpact", 1};
		impactRubber[] = {"soundImpact", 1};
		impactTyre[] = {"soundImpact", 1};
		impactWater[] = {"soundImpact", 1};
		impactWood[] = {"soundImpact", 1};
		soundEngine[] = {"", 1, 1};
		soundFakeFall[] = {"soundFall", 1};
		soundFall[] = {"", 1, 1};
		soundFly[] = {"", 1, 1};
		soundHit[] = {"", 1, 1};
		soundImpact[] = {"", 1, 1};
		supersonicCrackFar[] = {"", 1, 1};
		supersonicCrackNear[] = {"", 1, 1};
		timetolive = 0.0001;
		class CamShakeHit
		{
			distance = 1;
			duration = 0.2;
			frequency = 20;
			power = 0;
		};
		class HitEffects {};
	};
	class B_coil_20g_spike: B_coil_5g_spike
	{
		hit = 120;
		typicalSpeed = 6000;
	};
	class B_coil_5g_spike: BulletBase
	{
		airFriction = -0.0001;
		audibleFire = 0.01;
		caliber = 10;
		cartridge = "FxCartridge_9mm";
		cost = 50;
		dangerRadiusBulletClose = 16;
		dangerRadiusHit = 40;
		deflecting = 0;
		hit = 30;
		indirectHit = 0;
		indirectHitRange = 0;
		suppressionRadiusBulletClose = 10;
		suppressionRadiusHit = 14;
		typicalSpeed = 3000;
		visibleFire = 1;
		visibleFireTime = 2;
	};
	class B_IRStrobe: IRStrobeBase
	{
		model = "\A3\Weapons_F_EPB\Ammo\B_IRstrobe_F.p3d";
		class NVGMarkers
		{
			class Blinking1 {};
		};
	};
	class Bo_Air_LGB: M_Scalpel_AT {};
	class Bo_Air_LGB_hidden: M_Scalpel_AT_hidden {};
	class Bo_GBU12_LGB: ammo_Bomb_LaserGuidedBase
	{
		model = "\A3\Weapons_F\Ammo\Bomb_01_fly_F";
		proxyShape = "\A3\Weapons_F\Ammo\Bomb_01_F";
		SoundSetExplosion[] = {"BombsHeavy_Exp_SoundSet", "BombsHeavy_Tail_SoundSet", "Explosion_Debris_SoundSet"};
	};
	class Bo_GBU12_LGB_MI10: Bo_GBU12_LGB
	{
		maverickWeaponIndexOffset = 10;
	};
	class Bo_Leaflets: BombCore
	{
		CraterEffects = "";
		CraterWaterEffects = "";
		effectFly = "";
		ExplosionEffects = "";
		hit = 0;
		indirectHit = 0;
		indirectHitRange = 0;
		timeToLive = 0;
	};
	class Bo_Mk82: BombCore
	{
		airFriction = 0.08;
		cost = 500;
		CraterEffects = "BombCrater";
		dangerRadiusHit = 1250;
		explosionEffects = "BombExplosion";
		explosionSoundEffect = "DefaultExplosion";
		hit = 5000;
		indirectHit = 1100;
		indirectHitRange = 12;
		initTime = 0;
		irLock = 0;
		laserLock = 0;
		maneuvrability = 4.6;
		maxSpeed = 100;
		model = "\A3\Weapons_F\Ammo\Bomb_02_F";
		multiSoundHit[] = {"soundHit1", 0.2, "soundHit2", 0.2, "soundHit3", 0.2, "soundHit4", 0.2, "soundHit5", 0.2};
		proxyShape = "\A3\Weapons_F\Ammo\Bomb_02_F";
		sideAirFriction = 0.12;
		soundHit1[] = {"A3\Sounds_F\weapons\Explosion\expl_big_1", 2.51189, 1, 1500};
		soundHit2[] = {"A3\Sounds_F\weapons\Explosion\expl_big_2", 2.51189, 1, 1500};
		soundHit3[] = {"A3\Sounds_F\weapons\Explosion\expl_big_3", 2.51189, 1, 1500};
		soundHit4[] = {"A3\Sounds_F\weapons\Explosion\expl_shell_1", 2.51189, 1, 1500};
		soundHit5[] = {"A3\Sounds_F\weapons\Explosion\expl_shell_2", 2.51189, 1, 1500};
		SoundSetExplosion[] = {"BombsHeavy_Exp_SoundSet", "BombsHeavy_Tail_SoundSet", "Explosion_Debris_SoundSet"};
		suppressionRadiusHit = 100;
		thrust = 0;
		thrustTime = 0;
		timeToLive = 120;
		trackLead = 0;
		whistleDist = 24;
	};
	class Bo_Mk82_MI08: Bo_Mk82
	{
		maverickWeaponIndexOffset = 8;
	};
	class Bomb_03_F: ammo_Bomb_LaserGuidedBase
	{
		hit = 6400;
		indirectHit = 1400;
		indirectHitRange = 16;
		maverickWeaponIndexOffset = 6;
		model = "\A3\Weapons_F_EPC\Ammo\Bomb_03_F.p3d";
		proxyShape = "\A3\Weapons_F_EPC\Ammo\Bomb_03_F.p3d";
	};
	class Bomb_04_F: ammo_Bomb_LaserGuidedBase
	{
		maverickWeaponIndexOffset = 8;
		model = "\A3\Weapons_F_EPC\Ammo\Bomb_04_fly_F.p3d";
		proxyShape = "\A3\Weapons_F_EPC\Ammo\Bomb_04_F.p3d";
		SoundSetExplosion[] = {"BombsHeavy_Exp_SoundSet", "BombsHeavy_Tail_SoundSet", "Explosion_Debris_SoundSet"};
	};
	class BombCluster_01_Ammo_F: Bomb_04_F
	{
		model = "\a3\Weapons_F_Orange\Ammo\BombCluster_01_fly_F";
		proxyShape = "\a3\Weapons_F_Orange\Ammo\BombCluster_01_F";
		simulation = "shotMissile";
		submunitionAmmo[] = {"Mo_cluster_Bomb_01_F", 0.93, "BombCluster_01_UXO_deploy", 0.07};
		submunitionConeAngle = 10;
		submunitionConeType[] = {"randomcenter", 85};
		triggerDistance = 250;
		triggerSpeedCoef[] = {0.8, 1};
	};
	class BombCluster_01_UXO1_Ammo_F: UXO1_Ammo_Base_F
	{
		model = "\A3\Weapons_F_Orange\Explosives\BombCluster_01_UXO1_F";
	};
	class BombCluster_01_UXO1_deployMine: UXO_deployMine_base_F
	{
		model = "\a3\Weapons_F_Orange\Ammo\BombCluster_01_sub_F";
		submunitionAmmo = "BombCluster_01_UXO1_Ammo_F";
	};
	class BombCluster_01_UXO2_Ammo_F: UXO2_Ammo_Base_F
	{
		model = "\A3\Weapons_F_Orange\Explosives\BombCluster_01_UXO2_F";
	};
	class BombCluster_01_UXO2_deployMine: UXO_deployMine_base_F
	{
		model = "\a3\Weapons_F_Orange\Ammo\BombCluster_01_sub_F";
		submunitionAmmo = "BombCluster_01_UXO2_Ammo_F";
	};
	class BombCluster_01_UXO3_Ammo_F: UXO3_Ammo_Base_F
	{
		model = "\A3\Weapons_F_Orange\Explosives\BombCluster_01_UXO3_F";
	};
	class BombCluster_01_UXO3_deployMine: UXO_deployMine_base_F
	{
		model = "\a3\Weapons_F_Orange\Ammo\BombCluster_01_sub_F";
		submunitionAmmo = "BombCluster_01_UXO3_Ammo_F";
	};
	class BombCluster_01_UXO4_Ammo_F: UXO4_Ammo_Base_F
	{
		model = "\A3\Weapons_F_Orange\Explosives\BombCluster_01_UXO4_F";
	};
	class BombCluster_01_UXO4_deployMine: UXO_deployMine_base_F
	{
		model = "\a3\Weapons_F_Orange\Ammo\BombCluster_01_sub_F";
		submunitionAmmo = "BombCluster_01_UXO4_Ammo_F";
	};
	class BombCluster_01_UXO_deploy: UXO_deploy_BombCluster_base_F
	{
		model = "\a3\Weapons_F_Orange\Ammo\BombCluster_01_sub_F";
		submunitionAmmo[] = {"BombCluster_01_UXO1_deployMine", 0.25, "BombCluster_01_UXO2_deployMine", 0.25, "BombCluster_01_UXO3_deployMine", 0.25, "BombCluster_01_UXO4_deployMine", 0.25};
	};
	class BombCluster_02_Ammo_F: BombCluster_01_Ammo_F
	{
		maverickWeaponIndexOffset = 6;
		model = "\a3\Weapons_F_Orange\Ammo\BombCluster_02_fly_F";
		proxyShape = "\a3\Weapons_F_Orange\Ammo\BombCluster_02_F";
		submunitionAmmo[] = {"Mo_cluster_Bomb_02_F", 0.93, "BombCluster_02_UXO_deploy", 0.07};
		submunitionConeType[] = {"randomcenter", 45};
	};
	class BombCluster_02_Cap_Ammo_F: BombCluster_02_Ammo_F
	{
		model = "\a3\Weapons_F_Orange\Ammo\BombCluster_02_cap_fly_F";
		proxyShape = "\a3\Weapons_F_Orange\Ammo\BombCluster_02_cap_F";
	};
	class BombCluster_02_UXO1_Ammo_F: UXO1_Ammo_Base_F
	{
		model = "\A3\Weapons_F_Orange\Explosives\BombCluster_02_UXO1_F";
	};
	class BombCluster_02_UXO1_deployMine: UXO_deployMine_base_F
	{
		model = "\a3\Weapons_F_Orange\Ammo\BombCluster_02_sub_F";
		submunitionAmmo = "BombCluster_02_UXO1_Ammo_F";
	};
	class BombCluster_02_UXO2_Ammo_F: UXO2_Ammo_Base_F
	{
		model = "\A3\Weapons_F_Orange\Explosives\BombCluster_02_UXO2_F";
	};
	class BombCluster_02_UXO2_deployMine: UXO_deployMine_base_F
	{
		model = "\a3\Weapons_F_Orange\Ammo\BombCluster_02_sub_F";
		submunitionAmmo = "BombCluster_02_UXO2_Ammo_F";
	};
	class BombCluster_02_UXO3_Ammo_F: UXO3_Ammo_Base_F
	{
		model = "\A3\Weapons_F_Orange\Explosives\BombCluster_02_UXO3_F";
	};
	class BombCluster_02_UXO3_deployMine: UXO_deployMine_base_F
	{
		model = "\a3\Weapons_F_Orange\Ammo\BombCluster_02_sub_F";
		submunitionAmmo = "BombCluster_02_UXO3_Ammo_F";
	};
	class BombCluster_02_UXO4_Ammo_F: UXO4_Ammo_Base_F
	{
		model = "\A3\Weapons_F_Orange\Explosives\BombCluster_02_UXO4_F";
	};
	class BombCluster_02_UXO4_deployMine: UXO_deployMine_base_F
	{
		model = "\a3\Weapons_F_Orange\Ammo\BombCluster_02_sub_F";
		submunitionAmmo = "BombCluster_02_UXO4_Ammo_F";
	};
	class BombCluster_02_UXO_deploy: UXO_deploy_BombCluster_base_F
	{
		model = "\a3\Weapons_F_Orange\Ammo\BombCluster_02_sub_F";
		submunitionAmmo[] = {"BombCluster_02_UXO1_deployMine", 0.25, "BombCluster_02_UXO2_deployMine", 0.25, "BombCluster_02_UXO3_deployMine", 0.25, "BombCluster_02_UXO4_deployMine", 0.25};
	};
	class BombCluster_03_Ammo_F: BombCluster_01_Ammo_F
	{
		model = "\a3\Weapons_F_Orange\Ammo\BombCluster_03_fly_F";
		proxyShape = "\a3\Weapons_F_Orange\Ammo\BombCluster_03_F";
		submunitionAmmo[] = {"Mo_cluster_Bomb_03_F", 0.93, "BombCluster_03_UXO_deploy", 0.07};
		submunitionConeType[] = {"randomcenter", 50};
	};
	class BombCluster_03_UXO1_Ammo_F: UXO1_Ammo_Base_F
	{
		model = "\A3\Weapons_F_Orange\Explosives\BombCluster_03_UXO1_F";
	};
	class BombCluster_03_UXO1_deployMine: UXO_deployMine_base_F
	{
		model = "\a3\Weapons_F_Orange\Ammo\BombCluster_03_sub_F";
		submunitionAmmo = "BombCluster_03_UXO1_Ammo_F";
	};
	class BombCluster_03_UXO2_Ammo_F: UXO2_Ammo_Base_F
	{
		model = "\A3\Weapons_F_Orange\Explosives\BombCluster_03_UXO2_F";
	};
	class BombCluster_03_UXO2_deployMine: UXO_deployMine_base_F
	{
		model = "\a3\Weapons_F_Orange\Ammo\BombCluster_03_sub_F";
		submunitionAmmo = "BombCluster_03_UXO2_Ammo_F";
	};
	class BombCluster_03_UXO3_Ammo_F: UXO3_Ammo_Base_F
	{
		model = "\A3\Weapons_F_Orange\Explosives\BombCluster_03_UXO3_F";
	};
	class BombCluster_03_UXO3_deployMine: UXO_deployMine_base_F
	{
		model = "\a3\Weapons_F_Orange\Ammo\BombCluster_03_sub_F";
		submunitionAmmo = "BombCluster_03_UXO3_Ammo_F";
	};
	class BombCluster_03_UXO4_Ammo_F: UXO4_Ammo_Base_F
	{
		model = "\A3\Weapons_F_Orange\Explosives\BombCluster_03_UXO4_F";
	};
	class BombCluster_03_UXO4_deployMine: UXO_deployMine_base_F
	{
		model = "\a3\Weapons_F_Orange\Ammo\BombCluster_03_sub_F";
		submunitionAmmo = "BombCluster_03_UXO4_Ammo_F";
	};
	class BombCluster_03_UXO_deploy: UXO_deploy_BombCluster_base_F
	{
		model = "\a3\Weapons_F_Orange\Ammo\BombCluster_03_sub_F";
		submunitionAmmo[] = {"BombCluster_03_UXO1_deployMine", 0.25, "BombCluster_03_UXO2_deployMine", 0.25, "BombCluster_03_UXO3_deployMine", 0.25, "BombCluster_03_UXO4_deployMine", 0.25};
	};
	class BombCore: Default
	{
		cost = 200;
		hit = 50;
		indirectHit = 40;
		indirectHitRange = 10;
		initTime = 0;
		irLock = 0;
		laserLock = 0;
		maneuvrability = 16;
		maxControlRange = 0;
		maxSpeed = 100;
		sideAirFriction = 0.1;
		simulation = "shotMissile";
		thrust = 0;
		thrustTime = 0;
		timeToLive = 120;
	};
	class BombDemine_01_Ammo_F: BombCore
	{
		cost = 10;
		craterEffects = "DeminingExplosiveCrater";
		craterShape = "\a3\Data_f_orange\data\krater_maly";
		effectsMissile = "DeminingExplosiveTrials";
		explosionEffects = "DeminingExplosiveExplosion";
		hit = 1;
		indirectHit = 35;
		indirectHitRange = 11;
		model = "\a3\Weapons_F_Orange\Ammo\BombDemine_01_fly_F";
		proxyShape = "\a3\Weapons_F_Orange\Ammo\BombDemine_01_F";
		simulation = "shotMissile";
		soundFly[] = {"A3\Sounds_F_Orange\Vehicles\Air\UAV_06\UAV_6_DemineDrone_Bomb_Whistle", 1, 1, 100};
		submunitionAmmo = "BombDemine_01_SubAmmo_F";
		submunitionConeAngle = 0;
		submunitionConeType[] = {"custom", {{0, 0}}};
		thrustTime = 10;
		triggerDistance = 1;
		triggerSpeedCoef[] = {0.1, 0.1};
	};
	class BombDemine_01_DummyAmmo_F: BombDemine_01_Ammo_F
	{
		CraterEffects = "";
		effectsMissile = "DeminingExplosiveTrials_Dummy";
		explosionEffects = "";
		hit = 1;
		indirectHit = 1;
		indirectHitRange = 1;
		model = "\a3\Weapons_F_Orange\Ammo\BombDemine_01_Dummy_fly_F";
		proxyShape = "\a3\Weapons_F_Orange\Ammo\BombDemine_01_Dummy_F";
		SoundSetExplosion[] = {"UAV_6_DemineDrone_DummyBomb_Exp_SoundSet", "UAV_6_DemineDrone_DummyBomb_Report_SoundSet", "UAV_6_DemineDrone_Bomb_Exp_SoundSet"};
		submunitionAmmo = "BombDemine_01_DummySubAmmo_F";
	};
	class BombDemine_01_DummySubAmmo_F: BombDemine_01_SubAmmo_F
	{
		craterEffects = "DeminingExplosiveCrater_Dummy";
		craterShape = "\a3\Weapons_F_Orange\Ammo\BombDemine_01_Dummy_F";
		explosionEffects = "";
		indirectHit = 1;
		indirectHitRange = 1;
		model = "\a3\Weapons_F_Orange\Ammo\BombDemine_01_Dummy_ground_F";
		SoundSetExplosion[] = {"UAV_6_DemineDrone_DummyBomb_Exp_SoundSet", "UAV_6_DemineDrone_DummyBomb_Report_SoundSet"};
	};
	class BombDemine_01_SubAmmo_F: ShellBase
	{
		craterEffects = "DeminingExplosiveCrater";
		craterShape = "\a3\Data_f_orange\data\krater_maly";
		effectsMissile = "DeminingExplosiveTrials";
		explosionEffects = "DeminingExplosiveExplosion";
		explosionTime = 1;
		hit = 1;
		indirectHit = 35;
		indirectHitRange = 11;
		model = "\a3\Weapons_F_Orange\Ammo\BombDemine_01_ground_F";
		simulation = "shotShell";
		SoundSetExplosion[] = {"UAV_6_DemineDrone_Bomb_Exp_SoundSet", "Shell30mm40mm_Tail_SoundSet", "Explosion_Debris_SoundSet", "UXO_Debris_Dust_Cloud_SoundSet"};
		thrust = 0;
		thrustTime = 0;
		typicalSpeed = 1;
	};
	class BoundingMineBase: BoundingMineCore
	{
		explosionType = "mine";
		icon = "iconExplosiveAP";
		mapsize = 1;
		mineBoundingDist = 3;
		mineBoundingTime = 5;
		soundActivation[] = {"A3\Sounds_F\weapons\Mines\electron_activate_mine_1", 0.562341, 1, 30};
		soundDeactivation[] = {"A3\Sounds_F_Orange\arsenal\explosives\Handling\ApersMine_Deactivate_02", 1, 1, 20};
		soundTrigger[] = {"A3\Sounds_F\weapons\mines\expl_trigger_1", 0.562341, 1, 30};
		triggerWhenDestroyed = 1;
		underwaterHitRangeCoef = 0.5;
	};
	class BoundingMineCore: TimeBombCore
	{
		hit = 750;
		indirectHit = 750;
		indirectHitRange = 5;
		mineBoundingDist = 3;
		mineBoundingTime = 0.2;
		simulation = "shotBoundingMine";
	};
	class BulletBase: BulletCore
	{
		aiAmmoUsageFlags = "64 + 128 + 256";
		audibleFire = 40;
		bulletFly[] = {"bulletFly1", 0.083, "bulletFly2", 0.083, "bulletFly3", 0.083, "bulletFly4", 0.083, "bulletFly5", 0.083, "bulletFly6", 0.083, "bulletFly7", 0.083, "bulletFly8", 0.083, "bulletFly9", 0.083, "bulletFly10", 0.083, "bulletFly11", 0.083, "bulletFly12", 0.083};
		bulletFly1[] = {"A3\sounds_f\arsenal\sfx\bullet_flyby\bullet_flyby01", 2.23872, 1, 75};
		bulletFly10[] = {"A3\sounds_f\arsenal\sfx\bullet_flyby\bullet_flyby10", 2.23872, 1, 75};
		bulletFly11[] = {"A3\sounds_f\arsenal\sfx\bullet_flyby\bullet_flyby11", 2.23872, 1, 75};
		bulletFly12[] = {"A3\sounds_f\arsenal\sfx\bullet_flyby\bullet_flyby12", 2.23872, 1, 75};
		bulletFly2[] = {"A3\sounds_f\arsenal\sfx\bullet_flyby\bullet_flyby02", 2.23872, 1, 75};
		bulletFly3[] = {"A3\sounds_f\arsenal\sfx\bullet_flyby\bullet_flyby03", 2.23872, 1, 75};
		bulletFly4[] = {"A3\sounds_f\arsenal\sfx\bullet_flyby\bullet_flyby04", 2.23872, 1, 75};
		bulletFly5[] = {"A3\sounds_f\arsenal\sfx\bullet_flyby\bullet_flyby05", 2.23872, 1, 75};
		bulletFly6[] = {"A3\sounds_f\arsenal\sfx\bullet_flyby\bullet_flyby06", 2.23872, 1, 75};
		bulletFly7[] = {"A3\sounds_f\arsenal\sfx\bullet_flyby\bullet_flyby07", 2.23872, 1, 75};
		bulletFly8[] = {"A3\sounds_f\arsenal\sfx\bullet_flyby\bullet_flyby08", 2.23872, 1, 75};
		bulletFly9[] = {"A3\sounds_f\arsenal\sfx\bullet_flyby\bullet_flyby09", 2.23872, 1, 75};
		caliber = 1;
		cartridge = "FxCartridge_556";
		cost = 1;
		dangerRadiusBulletClose = 4;
		dangerRadiusHit = -1;
		deflecting = 15;
		effectFly = "AmmoClassic";
		hit = 8;
		hitArmor[] = {"soundVehiclePlate1", 0.0199, "soundVehiclePlate2", 0.0199, "soundVehiclePlate3", 0.0199, "soundVehiclePlate4", 0.0199, "soundVehiclePlate5", 0.0199, "soundVehiclePlate6", 0.0199, "soundVehiclePlate7", 0.0199, "soundVehiclePlate8", 0.0199, "soundVehiclePlate9", 0.0199, "soundVehiclePlate10", 0.0199, "soundVehiclePlate11", 0.0199, "soundVehiclePlate12", 0.0199, "soundVehiclePlate13", 0.0199, "soundVehiclePlate14", 0.0199, "soundVehiclePlate15", 0.0199, "soundVehiclePlate16", 0.0199, "soundVehiclePlate17", 0.0199, "soundVehiclePlate18", 0.0199, "soundVehiclePlate19", 0.0199, "soundVehiclePlate20", 0.0199, "soundVehiclePlate21", 0.0199, "soundVehiclePlate22", 0.0199, "soundVehiclePlate23", 0.0199, "soundVehiclePlate24", 0.0199, "soundVehiclePlate25", 0.0199, "soundVehiclePlate26", 0.0199, "soundVehiclePlate27", 0.0199, "soundVehiclePlate28", 0.0199, "soundVehiclePlate29", 0.0199, "soundVehiclePlate30", 0.0199, "soundVehiclePlate31", 0.0199, "soundVehiclePlate32", 0.0199, "soundVehiclePlate33", 0.0199, "soundVehiclePlate34", 0.0199, "soundVehiclePlate35", 0.0199, "soundVehiclePlate36", 0.0199, "soundVehiclePlate37", 0.0199, "soundVehiclePlate38", 0.0199, "soundVehiclePlate39", 0.007, "soundVehiclePlate40", 0.007, "soundVehiclePlate41", 0.007, "soundVehiclePlate42", 0.007, "soundVehiclePlate43", 0.007, "soundVehiclePlate44", 0.007, "soundVehiclePlate45", 0.007, "soundVehiclePlate46", 0.007, "soundVehiclePlate47", 0.007, "soundVehiclePlate48", 0.007, "soundVehiclePlate49", 0.007, "soundVehiclePlate50", 0.007, "soundVehiclePlate51", 0.007, "soundVehiclePlate52", 0.007, "soundVehiclePlate53", 0.007, "soundVehiclePlate54", 0.007, "soundVehiclePlate55", 0.007, "soundVehiclePlate56", 0.007, "soundVehiclePlate57", 0.007, "soundVehiclePlate58", 0.007, "soundVehiclePlate59", 0.007, "soundVehiclePlate60", 0.007, "soundVehiclePlate61", 0.007, "soundVehiclePlate62", 0.007, "soundVehiclePlate63", 0.007, "soundVehiclePlate64", 0.007, "soundVehiclePlate65", 0.007, "soundVehiclePlate66", 0.007, "soundVehiclePlate67", 0.007, "soundVehiclePlate68", 0.007, "soundVehiclePlate69", 0.007, "soundVehiclePlate70", 0.007, "soundVehiclePlate71", 0.007};
		hitArmorInt[] = {"soundVehiclePlateInt1", 0.0199, "soundVehiclePlateInt2", 0.0199, "soundVehiclePlateInt3", 0.0199, "soundVehiclePlateInt4", 0.0199, "soundVehiclePlateInt5", 0.0199, "soundVehiclePlateInt6", 0.0199, "soundVehiclePlateInt7", 0.0199, "soundVehiclePlateInt8", 0.0199, "soundVehiclePlateInt9", 0.0199, "soundVehiclePlateInt10", 0.0199, "soundVehiclePlateInt11", 0.0199, "soundVehiclePlateInt12", 0.0199, "soundVehiclePlateInt13", 0.0199, "soundVehiclePlateInt14", 0.0199, "soundVehiclePlateInt15", 0.0199, "soundVehiclePlateInt16", 0.0199, "soundVehiclePlateInt17", 0.0199, "soundVehiclePlateInt18", 0.0199, "soundVehiclePlateInt19", 0.0199, "soundVehiclePlateInt20", 0.0199, "soundVehiclePlateInt21", 0.0199, "soundVehiclePlateInt22", 0.0199, "soundVehiclePlateInt23", 0.0199, "soundVehiclePlateInt24", 0.0199, "soundVehiclePlateInt25", 0.0199, "soundVehiclePlateInt26", 0.0199, "soundVehiclePlateInt27", 0.0199, "soundVehiclePlateInt28", 0.0199, "soundVehiclePlateInt29", 0.0199, "soundVehiclePlateInt30", 0.0199, "soundVehiclePlateInt31", 0.0199, "soundVehiclePlateInt32", 0.0199, "soundVehiclePlateInt33", 0.0199, "soundVehiclePlateInt34", 0.0199, "soundVehiclePlateInt35", 0.0199, "soundVehiclePlateInt36", 0.0199, "soundVehiclePlateInt37", 0.0199, "soundVehiclePlateInt38", 0.0199, "soundVehiclePlateInt39", 0.007, "soundVehiclePlateInt40", 0.007, "soundVehiclePlateInt41", 0.007, "soundVehiclePlateInt42", 0.007, "soundVehiclePlateInt43", 0.007, "soundVehiclePlateInt44", 0.007, "soundVehiclePlateInt45", 0.007, "soundVehiclePlateInt46", 0.007, "soundVehiclePlateInt47", 0.007, "soundVehiclePlateInt48", 0.007, "soundVehiclePlateInt49", 0.007, "soundVehiclePlateInt50", 0.007, "soundVehiclePlateInt51", 0.007, "soundVehiclePlateInt52", 0.007, "soundVehiclePlateInt53", 0.007, "soundVehiclePlateInt54", 0.007, "soundVehiclePlateInt55", 0.007, "soundVehiclePlateInt56", 0.007, "soundVehiclePlateInt57", 0.007, "soundVehiclePlateInt58", 0.007, "soundVehiclePlateInt59", 0.007, "soundVehiclePlateInt60", 0.007, "soundVehiclePlateInt61", 0.007, "soundVehiclePlateInt62", 0.007, "soundVehiclePlateInt63", 0.007, "soundVehiclePlateInt64", 0.007, "soundVehiclePlateInt65", 0.007, "soundVehiclePlateInt66", 0.007, "soundVehiclePlateInt67", 0.007, "soundVehiclePlateInt68", 0.007, "soundVehiclePlateInt69", 0.007, "soundVehiclePlateInt70", 0.007, "soundVehiclePlateInt71", 0.007};
		hitBell[] = {"soundBell1", 1};
		hitBuilding[] = {"soundHitBuilding1", 0.0744, "soundHitBuilding2", 0.0744, "soundHitBuilding3", 0.0744, "soundHitBuilding4", 0.0744, "soundHitBuilding5", 0.0744, "soundHitBuilding6", 0.0744, "soundHitBuilding7", 0.0744, "soundHitBuilding8", 0.0744, "soundHitBuilding9", 0.01215, "soundHitBuilding10", 0.01215, "soundHitBuilding11", 0.01215, "soundHitBuilding12", 0.01215, "soundHitBuilding13", 0.01215, "soundHitBuilding14", 0.01215, "soundHitBuilding15", 0.01215, "soundHitBuilding16", 0.01215, "soundHitBuilding17", 0.01215, "soundHitBuilding18", 0.01215, "soundHitBuilding19", 0.01215, "soundHitBuilding20", 0.01215, "soundHitBuilding21", 0.01215, "soundHitBuilding22", 0.01215, "soundHitBuilding23", 0.01215, "soundHitBuilding24", 0.01215, "soundHitBuilding25", 0.01215, "soundHitBuilding26", 0.01215, "soundHitBuilding27", 0.01215, "soundHitBuilding28", 0.01215, "soundHitBuilding29", 0.01215, "soundHitBuilding30", 0.01215, "soundHitBuilding31", 0.01215, "soundHitBuilding32", 0.01215, "soundHitBuilding33", 0.01215, "soundHitBuilding34", 0.01215, "soundHitBuilding35", 0.01215, "soundHitBuilding36", 0.01215, "soundHitBuilding37", 0.01215, "soundHitBuilding38", 0.01215, "soundHitBuilding39", 0.01215, "soundHitBuilding40", 0.01215, "soundHitBuilding41", 0.01215};
		hitConcrete[] = {"soundConcrete1", 0.0744, "soundConcrete2", 0.0744, "soundConcrete3", 0.0744, "soundConcrete4", 0.0744, "soundConcrete5", 0.0744, "soundConcrete6", 0.0744, "soundConcrete7", 0.0744, "soundConcrete8", 0.0744, "soundConcrete9", 0.01215, "soundConcrete10", 0.01215, "soundConcrete11", 0.01215, "soundConcrete12", 0.01215, "soundConcrete13", 0.01215, "soundConcrete14", 0.01215, "soundConcrete15", 0.01215, "soundConcrete16", 0.01215, "soundConcrete17", 0.01215, "soundConcrete18", 0.01215, "soundConcrete19", 0.01215, "soundConcrete20", 0.01215, "soundConcrete21", 0.01215, "soundConcrete22", 0.01215, "soundConcrete23", 0.01215, "soundConcrete24", 0.01215, "soundConcrete25", 0.01215, "soundConcrete26", 0.01215, "soundConcrete27", 0.01215, "soundConcrete28", 0.01215, "soundConcrete29", 0.01215, "soundConcrete30", 0.01215, "soundConcrete31", 0.01215, "soundConcrete32", 0.01215, "soundConcrete33", 0.01215, "soundConcrete34", 0.01215, "soundConcrete35", 0.01215, "soundConcrete36", 0.01215, "soundConcrete37", 0.01215, "soundConcrete38", 0.01215, "soundConcrete39", 0.01215, "soundConcrete40", 0.01215, "soundConcrete41", 0.01215};
		hitDefault[] = {"soundDefault1", 0.2, "soundDefault2", 0.2, "soundDefault3", 0.1, "soundDefault4", 0.1, "soundDefault5", 0.1, "soundDefault6", 0.1, "soundDefault7", 0.1, "soundDefault8", 0.1};
		hitFoliage[] = {"soundHitFoliage1", 0.125, "soundHitFoliage2", 0.125, "soundHitFoliage3", 0.125, "soundHitFoliage4", 0.125, "soundHitFoliage5", 0.125, "soundHitFoliage6", 0.125, "soundHitFoliage7", 0.125, "soundHitFoliage8", 0.125};
		hitGlass[] = {"soundGlass1", 0.125, "soundGlass2", 0.125, "soundGlass3", 0.125, "soundGlass4", 0.125, "soundGlass5", 0.125, "soundGlass6", 0.125, "soundGlass7", 0.125, "soundGlass8", 0.125};
		hitGlassArmored[] = {"soundGlassArmored1", 0.125, "soundGlassArmored2", 0.125, "soundGlassArmored3", 0.125, "soundGlassArmored4", 0.125, "soundGlassArmored5", 0.125, "soundGlassArmored6", 0.125, "soundGlassArmored7", 0.125, "soundGlassArmored8", 0.125};
		hitGroundHard[] = {"soundGroundHard1", 0.03388, "soundGroundHard2", 0.03388, "soundGroundHard3", 0.03388, "soundGroundHard4", 0.03388, "soundGroundHard5", 0.03388, "soundGroundHard6", 0.03388, "soundGroundHard7", 0.03388, "soundGroundHard8", 0.03388, "soundGroundHard9", 0.03388, "soundGroundHard10", 0.03388, "soundGroundHard11", 0.03388, "soundGroundHard12", 0.03388, "soundGroundHard13", 0.03388, "soundGroundHard14", 0.03388, "soundGroundHard15", 0.03388, "soundGroundHard16", 0.03388, "soundGroundHard17", 0.03388, "soundGroundHard18", 0.03388, "soundGroundHard19", 0.03388, "soundGroundHard20", 0.03388, "soundGroundHard21", 0.03388, "soundGroundHard22", 0.03388, "soundGroundHard23", 0.0457, "soundGroundHard24", 0.0457, "soundGroundHard25", 0.0457, "soundGroundHard26", 0.0457, "soundGroundHard27", 0.0457, "soundGroundHard28", 0.0457};
		hitGroundSoft[] = {"soundGroundSoft1", 0.03388, "soundGroundSoft2", 0.03388, "soundGroundSoft3", 0.03388, "soundGroundSoft4", 0.03388, "soundGroundSoft5", 0.03388, "soundGroundSoft6", 0.03388, "soundGroundSoft7", 0.03388, "soundGroundSoft8", 0.03388, "soundGroundSoft9", 0.03388, "soundGroundSoft10", 0.03388, "soundGroundSoft11", 0.03388, "soundGroundSoft12", 0.03388, "soundGroundSoft13", 0.03388, "soundGroundSoft14", 0.03388, "soundGroundSoft15", 0.03388, "soundGroundSoft16", 0.03388, "soundGroundSoft17", 0.03388, "soundGroundSoft18", 0.03388, "soundGroundSoft19", 0.03388, "soundGroundSoft20", 0.03388, "soundGroundSoft21", 0.03388, "soundGroundSoft22", 0.03388, "soundGroundSoft23", 0.0457, "soundGroundSoft24", 0.0457, "soundGroundSoft25", 0.0457, "soundGroundSoft26", 0.0457, "soundGroundSoft27", 0.0457, "soundGroundSoft28", 0.0457};
		hitMan[] = {"soundHitBody1", 0.125, "soundHitBody2", 0.125, "soundHitBody3", 0.125, "soundHitBody4", 0.125, "soundHitBody5", 0.125, "soundHitBody6", 0.125, "soundHitBody7", 0.125, "soundHitBody8", 0.125};
		hitMetal[] = {"soundMetal1", 0.0199, "soundMetal2", 0.0199, "soundMetal3", 0.0199, "soundMetal4", 0.0199, "soundMetal5", 0.0199, "soundMetal6", 0.0199, "soundMetal7", 0.0199, "soundMetal8", 0.0199, "soundMetal9", 0.0199, "soundMetal10", 0.0199, "soundMetal11", 0.0199, "soundMetal12", 0.0199, "soundMetal13", 0.0199, "soundMetal14", 0.0199, "soundMetal15", 0.0199, "soundMetal16", 0.0199, "soundMetal17", 0.0199, "soundMetal18", 0.0199, "soundMetal19", 0.0199, "soundMetal20", 0.0199, "soundMetal21", 0.0199, "soundMetal22", 0.0199, "soundMetal23", 0.0199, "soundMetal24", 0.0199, "soundMetal25", 0.0199, "soundMetal26", 0.0199, "soundMetal27", 0.0199, "soundMetal28", 0.0199, "soundMetal29", 0.0199, "soundMetal30", 0.0199, "soundMetal31", 0.0199, "soundMetal32", 0.0199, "soundMetal33", 0.0199, "soundMetal34", 0.0199, "soundMetal35", 0.0199, "soundMetal36", 0.0199, "soundMetal37", 0.0199, "soundMetal38", 0.0199, "soundMetal39", 0.007, "soundMetal40", 0.007, "soundMetal41", 0.007, "soundMetal42", 0.007, "soundMetal43", 0.007, "soundMetal44", 0.007, "soundMetal45", 0.007, "soundMetal46", 0.007, "soundMetal47", 0.007, "soundMetal48", 0.007, "soundMetal49", 0.007, "soundMetal50", 0.007, "soundMetal51", 0.007, "soundMetal52", 0.007, "soundMetal53", 0.007, "soundMetal54", 0.007, "soundMetal55", 0.007, "soundMetal56", 0.007, "soundMetal57", 0.007, "soundMetal58", 0.007, "soundMetal59", 0.007, "soundMetal60", 0.007, "soundMetal61", 0.007, "soundMetal62", 0.007, "soundMetal63", 0.007, "soundMetal64", 0.007, "soundMetal65", 0.007, "soundMetal66", 0.007, "soundMetal67", 0.007, "soundMetal68", 0.007, "soundMetal69", 0.007, "soundMetal70", 0.007, "soundMetal71", 0.007};
		hitMetalInt[] = {"soundMetalInt1", 0.02454, "soundMetalInt2", 0.02454, "soundMetalInt3", 0.02454, "soundMetalInt4", 0.02454, "soundMetalInt5", 0.02454, "soundMetalInt6", 0.02454, "soundMetalInt7", 0.02454, "soundMetalInt8", 0.02454, "soundMetalInt9", 0.02454, "soundMetalInt10", 0.02454, "soundMetalInt11", 0.02454, "soundMetalInt12", 0.02454, "soundMetalInt13", 0.02454, "soundMetalInt14", 0.02454, "soundMetalInt15", 0.02454, "soundMetalInt16", 0.017, "soundMetalInt17", 0.017, "soundMetalInt18", 0.017, "soundMetalInt19", 0.017, "soundMetalInt20", 0.017, "soundMetalInt21", 0.017, "soundMetalInt22", 0.017, "soundMetalInt23", 0.017, "soundMetalInt24", 0.017, "soundMetalInt25", 0.017, "soundMetalInt26", 0.017, "soundMetalInt27", 0.017, "soundMetalInt28", 0.017, "soundMetalInt29", 0.017, "soundMetalInt30", 0.017, "soundMetalInt31", 0.017, "soundMetalInt32", 0.017, "soundMetalInt33", 0.017, "soundMetalInt34", 0.017, "soundMetalInt35", 0.017, "soundMetalInt36", 0.017, "soundMetalInt37", 0.017, "soundMetalInt38", 0.017, "soundMetalInt39", 0.007, "soundMetalInt40", 0.007, "soundMetalInt41", 0.007, "soundMetalInt42", 0.007, "soundMetalInt43", 0.007, "soundMetalInt44", 0.007, "soundMetalInt45", 0.007, "soundMetalInt46", 0.007, "soundMetalInt47", 0.007, "soundMetalInt48", 0.007, "soundMetalInt49", 0.007, "soundMetalInt50", 0.007, "soundMetalInt51", 0.007, "soundMetalInt52", 0.007, "soundMetalInt53", 0.007, "soundMetalInt54", 0.007, "soundMetalInt55", 0.007, "soundMetalInt56", 0.007, "soundMetalInt57", 0.007, "soundMetalInt58", 0.007, "soundMetalInt59", 0.007, "soundMetalInt60", 0.007, "soundMetalInt61", 0.007, "soundMetalInt62", 0.007, "soundMetalInt63", 0.007, "soundMetalInt64", 0.007, "soundMetalInt65", 0.007, "soundMetalInt66", 0.007, "soundMetalInt67", 0.007, "soundMetalInt68", 0.007, "soundMetalInt69", 0.007, "soundMetalInt70", 0.007, "soundMetalInt71", 0.007};
		hitMetalplate[] = {"soundVehiclePlate1", 0.0199, "soundVehiclePlate2", 0.0199, "soundVehiclePlate3", 0.0199, "soundVehiclePlate4", 0.0199, "soundVehiclePlate5", 0.0199, "soundVehiclePlate6", 0.0199, "soundVehiclePlate7", 0.0199, "soundVehiclePlate8", 0.0199, "soundVehiclePlate9", 0.0199, "soundVehiclePlate10", 0.0199, "soundVehiclePlate11", 0.0199, "soundVehiclePlate12", 0.0199, "soundVehiclePlate13", 0.0199, "soundVehiclePlate14", 0.0199, "soundVehiclePlate15", 0.0199, "soundVehiclePlate16", 0.0199, "soundVehiclePlate17", 0.0199, "soundVehiclePlate18", 0.0199, "soundVehiclePlate19", 0.0199, "soundVehiclePlate20", 0.0199, "soundVehiclePlate21", 0.0199, "soundVehiclePlate22", 0.0199, "soundVehiclePlate23", 0.0199, "soundVehiclePlate24", 0.0199, "soundVehiclePlate25", 0.0199, "soundVehiclePlate26", 0.0199, "soundVehiclePlate27", 0.0199, "soundVehiclePlate28", 0.0199, "soundVehiclePlate29", 0.0199, "soundVehiclePlate30", 0.0199, "soundVehiclePlate31", 0.0199, "soundVehiclePlate32", 0.0199, "soundVehiclePlate33", 0.0199, "soundVehiclePlate34", 0.0199, "soundVehiclePlate35", 0.0199, "soundVehiclePlate36", 0.0199, "soundVehiclePlate37", 0.0199, "soundVehiclePlate38", 0.0199, "soundVehiclePlate39", 0.007, "soundVehiclePlate40", 0.007, "soundVehiclePlate41", 0.007, "soundVehiclePlate42", 0.007, "soundVehiclePlate43", 0.007, "soundVehiclePlate44", 0.007, "soundVehiclePlate45", 0.007, "soundVehiclePlate46", 0.007, "soundVehiclePlate47", 0.007, "soundVehiclePlate48", 0.007, "soundVehiclePlate49", 0.007, "soundVehiclePlate50", 0.007, "soundVehiclePlate51", 0.007, "soundVehiclePlate52", 0.007, "soundVehiclePlate53", 0.007, "soundVehiclePlate54", 0.007, "soundVehiclePlate55", 0.007, "soundVehiclePlate56", 0.007, "soundVehiclePlate57", 0.007, "soundVehiclePlate58", 0.007, "soundVehiclePlate59", 0.007, "soundVehiclePlate60", 0.007, "soundVehiclePlate61", 0.007, "soundVehiclePlate62", 0.007, "soundVehiclePlate63", 0.007, "soundVehiclePlate64", 0.007, "soundVehiclePlate65", 0.007, "soundVehiclePlate66", 0.007, "soundVehiclePlate67", 0.007, "soundVehiclePlate68", 0.007, "soundVehiclePlate69", 0.007, "soundVehiclePlate70", 0.007, "soundVehiclePlate71", 0.007};
		hitPlastic[] = {"soundPlastic1", 0.125, "soundPlastic2", 0.125, "soundPlastic3", 0.125, "soundPlastic4", 0.125, "soundPlastic5", 0.125, "soundPlastic6", 0.125, "soundPlastic7", 0.125, "soundPlastic8", 0.125};
		hitRubber[] = {"soundRubber1", 0.125, "soundRubber2", 0.125, "soundRubber3", 0.125, "soundRubber4", 0.125, "soundRubber5", 0.125, "soundRubber6", 0.125};
		hitTyre[] = {"soundTyre1", 0.125, "soundTyre2", 0.125, "soundTyre3", 0.125, "soundTyre4", 0.125, "soundTyre5", 0.125, "soundTyre6", 0.125, "soundTyre7", 0.125, "soundTyre8", 0.125};
		hitWater[] = {"soundWater1", 0.125, "soundWater2", 0.125, "soundWater3", 0.125, "soundWater4", 0.125, "soundWater5", 0.125, "soundWater6", 0.125, "soundWater7", 0.125, "soundWater8", 0.125};
		hitWood[] = {"soundWood1", 0.01596, "soundWood2", 0.01596, "soundWood3", 0.01596, "soundWood4", 0.01596, "soundWood5", 0.01596, "soundWood6", 0.01596, "soundWood7", 0.01596, "soundWood8", 0.01596, "soundWood9", 0.01596, "soundWood10", 0.01596, "soundWood11", 0.01596, "soundWood12", 0.01596, "soundWood13", 0.01596, "soundWood14", 0.01596, "soundWood15", 0.01596, "soundWood16", 0.01596, "soundWood17", 0.01596, "soundWood18", 0.01596, "soundWood19", 0.01596, "soundWood20", 0.01596, "soundWood21", 0.01596, "soundWood22", 0.01596, "soundWood23", 0.01596, "soundWood24", 0.01596, "soundWood25", 0.01596, "soundWood26", 0.01596, "soundWood27", 0.01596, "soundWood28", 0.01596, "soundWood29", 0.01596, "soundWood30", 0.01596, "soundWood31", 0.01596, "soundWood32", 0.01596, "soundWood33", 0.01596, "soundWood34", 0.01596, "soundWood35", 0.01596, "soundWood36", 0.01596, "soundWood37", 0.01596, "soundWood38", 0.01596, "soundWood39", 0.01596, "soundWood40", 0.01596, "soundWood41", 0.01596, "soundWood42", 0.01596, "soundWood43", 0.01596, "soundWood44", 0.01596, "soundWood45", 0.01596, "soundWood46", 0.01596, "soundWood47", 0.01596, "soundWood48", 0.01596, "soundWood49", 0.01596, "soundWood50", 0.01596, "soundWood51", 0.006, "soundWood52", 0.006, "soundWood53", 0.006, "soundWood54", 0.006, "soundWood55", 0.006, "soundWood56", 0.006, "soundWood58", 0.006, "soundWood59", 0.006, "soundWood60", 0.006, "soundWood62", 0.006, "soundWood63", 0.006, "soundWood64", 0.006, "soundWood65", 0.006, "soundWood66", 0.006, "soundWood67", 0.006, "soundWood68", 0.006, "soundWood69", 0.006, "soundWood70", 0.006, "soundWood72", 0.006, "soundWood74", 0.006, "soundWood75", 0.006, "soundWood76", 0.006, "soundWood77", 0.006, "soundWood78", 0.006, "soundWood79", 0.006, "soundWood80", 0.006, "soundWood81", 0.006, "soundWood82", 0.006, "soundWood83", 0.006};
		impactArmor[] = {"soundImpactDefault1", 1};
		impactBuilding[] = {"soundImpactDefault1", 1};
		impactConcrete[] = {"soundImpactDefault1", 1};
		impactDefault[] = {"soundImpactDefault1", 1};
		impactFoliage[] = {"soundImpactDefault1", 1};
		impactGlass[] = {"soundImpactDefault1", 1};
		impactGlassArmored[] = {"soundImpactDefault1", 1};
		impactGroundHard[] = {"soundImpactDefault1", 1};
		impactGroundSoft[] = {"soundImpactDefault1", 1};
		impactIron[] = {"soundImpactDefault1", 1};
		impactMan[] = {"soundImpactDefault1", 1};
		impactMetal[] = {"soundImpactDefault1", 1};
		impactMetalplate[] = {"soundImpactDefault1", 1};
		impactPlastic[] = {"soundImpactDefault1", 1};
		impactRubber[] = {"soundImpactDefault1", 1};
		impactTyre[] = {"soundImpactDefault1", 1};
		impactWater[] = {"soundImpactDefault1", 1};
		impactWood[] = {"soundImpactDefault1", 1};
		indirectHit = 0;
		indirectHitRange = 0;
		model = "\A3\Weapons_f\ammo\shell";
		muzzleEffect = "";
		soundBell1[] = {"A3\Sounds_F\ambient\objects\bell_small", 1.41254, 1, 500};
		soundConcrete1[] = {"A3\Sounds_F\arsenal\sfx\bullet_hits\concrete_01", 1.99526, 1, 75};
		soundConcrete10[] = {"A3\Sounds_F_Enoch\Assets\Arsenal\Bullet_Impacts\Ricochet_Generic_Distant_02", 1, 1, 75};
		soundConcrete11[] = {"A3\Sounds_F_Enoch\Assets\Arsenal\Bullet_Impacts\Ricochet_Generic_Distant_03", 1, 1, 75};
		soundConcrete12[] = {"A3\Sounds_F_Enoch\Assets\Arsenal\Bullet_Impacts\Ricochet_Generic_Distant_04", 1, 1, 75};
		soundConcrete13[] = {"A3\Sounds_F_Enoch\Assets\Arsenal\Bullet_Impacts\Ricochet_Generic_Distant_05", 1, 1, 75};
		soundConcrete14[] = {"A3\Sounds_F_Enoch\Assets\Arsenal\Bullet_Impacts\Ricochet_Generic_Distant_06", 1, 1, 75};
		soundConcrete15[] = {"A3\Sounds_F_Enoch\Assets\Arsenal\Bullet_Impacts\Ricochet_Generic_Distant_07", 1, 1, 75};
		soundConcrete16[] = {"A3\Sounds_F_Enoch\Assets\Arsenal\Bullet_Impacts\Ricochet_Generic_Distant_08", 1, 1, 75};
		soundConcrete17[] = {"A3\Sounds_F_Enoch\Assets\Arsenal\Bullet_Impacts\Ricochet_Generic_Distant_09", 1, 1, 75};
		soundConcrete18[] = {"A3\Sounds_F_Enoch\Assets\Arsenal\Bullet_Impacts\Ricochet_Generic_Distant_10", 1, 1, 75};
		soundConcrete19[] = {"A3\Sounds_F_Enoch\Assets\Arsenal\Bullet_Impacts\Ricochet_Generic_Distant_11", 1, 1, 75};
		soundConcrete2[] = {"A3\Sounds_F\arsenal\sfx\bullet_hits\concrete_02", 1.99526, 1, 75};
		soundConcrete20[] = {"A3\Sounds_F_Enoch\Assets\Arsenal\Bullet_Impacts\Ricochet_Generic_Distant_12", 1, 1, 75};
		soundConcrete21[] = {"A3\Sounds_F_Enoch\Assets\Arsenal\Bullet_Impacts\Ricochet_Generic_Distant_13", 1, 1, 75};
		soundConcrete22[] = {"A3\Sounds_F_Enoch\Assets\Arsenal\Bullet_Impacts\Ricochet_Generic_Distant_14", 1, 1, 75};
		soundConcrete23[] = {"A3\Sounds_F_Enoch\Assets\Arsenal\Bullet_Impacts\Ricochet_Generic_Distant_15", 1, 1, 75};
		soundConcrete24[] = {"A3\Sounds_F_Enoch\Assets\Arsenal\Bullet_Impacts\Ricochet_Generic_Distant_16", 1, 1, 75};
		soundConcrete25[] = {"A3\Sounds_F_Enoch\Assets\Arsenal\Bullet_Impacts\Ricochet_Generic_Distant_17", 1, 1, 75};
		soundConcrete26[] = {"A3\Sounds_F_Enoch\Assets\Arsenal\Bullet_Impacts\Ricochet_Generic_Distant_18", 1, 1, 75};
		soundConcrete27[] = {"A3\Sounds_F_Enoch\Assets\Arsenal\Bullet_Impacts\Ricochet_Generic_Distant_19", 1, 1, 75};
		soundConcrete28[] = {"A3\Sounds_F_Enoch\Assets\Arsenal\Bullet_Impacts\Ricochet_Generic_01", 1, 1, 75};
		soundConcrete29[] = {"A3\Sounds_F_Enoch\Assets\Arsenal\Bullet_Impacts\Ricochet_Generic_02", 1, 1, 75};
		soundConcrete3[] = {"A3\Sounds_F\arsenal\sfx\bullet_hits\concrete_03", 1.99526, 1, 75};
		soundConcrete30[] = {"A3\Sounds_F_Enoch\Assets\Arsenal\Bullet_Impacts\Ricochet_Generic_03", 1, 1, 75};
		soundConcrete31[] = {"A3\Sounds_F_Enoch\Assets\Arsenal\Bullet_Impacts\Ricochet_Generic_04", 1, 1, 75};
		soundConcrete32[] = {"A3\Sounds_F_Enoch\Assets\Arsenal\Bullet_Impacts\Ricochet_Generic_05", 1, 1, 75};
		soundConcrete33[] = {"A3\Sounds_F_Enoch\Assets\Arsenal\Bullet_Impacts\Ricochet_Generic_06", 1, 1, 75};
		soundConcrete34[] = {"A3\Sounds_F_Enoch\Assets\Arsenal\Bullet_Impacts\Ricochet_Generic_07", 1, 1, 75};
		soundConcrete35[] = {"A3\Sounds_F_Enoch\Assets\Arsenal\Bullet_Impacts\Ricochet_Generic_08", 1, 1, 75};
		soundConcrete36[] = {"A3\Sounds_F_Enoch\Assets\Arsenal\Bullet_Impacts\Ricochet_Generic_09", 1, 1, 75};
		soundConcrete37[] = {"A3\Sounds_F_Enoch\Assets\Arsenal\Bullet_Impacts\Ricochet_Generic_10", 1, 1, 75};
		soundConcrete38[] = {"A3\Sounds_F_Enoch\Assets\Arsenal\Bullet_Impacts\Ricochet_Generic_11", 1, 1, 75};
		soundConcrete39[] = {"A3\Sounds_F_Enoch\Assets\Arsenal\Bullet_Impacts\Ricochet_Generic_12", 1, 1, 75};
		soundConcrete4[] = {"A3\Sounds_F\arsenal\sfx\bullet_hits\concrete_04", 1.99526, 1, 75};
		soundConcrete40[] = {"A3\Sounds_F_Enoch\Assets\Arsenal\Bullet_Impacts\Ricochet_Generic_13", 1, 1, 75};
		soundConcrete41[] = {"A3\Sounds_F_Enoch\Assets\Arsenal\Bullet_Impacts\Ricochet_Generic_14", 1, 1, 75};
		soundConcrete5[] = {"A3\Sounds_F\arsenal\sfx\bullet_hits\concrete_05", 1.99526, 1, 75};
		soundConcrete6[] = {"A3\Sounds_F\arsenal\sfx\bullet_hits\concrete_06", 1.99526, 1, 75};
		soundConcrete7[] = {"A3\Sounds_F\arsenal\sfx\bullet_hits\concrete_07", 1.99526, 1, 75};
		soundConcrete8[] = {"A3\Sounds_F\arsenal\sfx\bullet_hits\concrete_08", 1.99526, 1, 75};
		soundConcrete9[] = {"A3\Sounds_F_Enoch\Assets\Arsenal\Bullet_Impacts\Ricochet_Generic_Distant_01", 1, 1, 75};
		soundDefault1[] = {"A3\Sounds_F\arsenal\sfx\bullet_hits\concrete_01", 2.81838, 1, 75};
		soundDefault2[] = {"A3\Sounds_F\arsenal\sfx\bullet_hits\concrete_02", 2.81838, 1, 75};
		soundDefault3[] = {"A3\Sounds_F\arsenal\sfx\bullet_hits\concrete_03", 2.81838, 1, 75};
		soundDefault4[] = {"A3\Sounds_F\arsenal\sfx\bullet_hits\concrete_04", 2.81838, 1, 75};
		soundDefault5[] = {"A3\Sounds_F\arsenal\sfx\bullet_hits\concrete_05", 2.81838, 1, 75};
		soundDefault6[] = {"A3\Sounds_F\arsenal\sfx\bullet_hits\concrete_06", 2.81838, 1, 75};
		soundDefault7[] = {"A3\Sounds_F\arsenal\sfx\bullet_hits\concrete_07", 2.81838, 1, 75};
		soundDefault8[] = {"A3\Sounds_F\arsenal\sfx\bullet_hits\concrete_08", 2.81838, 1, 75};
		soundGlass1[] = {"A3\Sounds_F\arsenal\sfx\bullet_hits\glass_01", 1.25893, 1, 75};
		soundGlass2[] = {"A3\Sounds_F\arsenal\sfx\bullet_hits\glass_02", 1.25893, 1, 75};
		soundGlass3[] = {"A3\Sounds_F\arsenal\sfx\bullet_hits\glass_03", 1.25893, 1, 75};
		soundGlass4[] = {"A3\Sounds_F\arsenal\sfx\bullet_hits\glass_04", 1.25893, 1, 75};
		soundGlass5[] = {"A3\Sounds_F\arsenal\sfx\bullet_hits\glass_05", 1.25893, 1, 75};
		soundGlass6[] = {"A3\Sounds_F\arsenal\sfx\bullet_hits\glass_06", 1.25893, 1, 75};
		soundGlass7[] = {"A3\Sounds_F\arsenal\sfx\bullet_hits\glass_07", 1.25893, 1, 75};
		soundGlass8[] = {"A3\Sounds_F\arsenal\sfx\bullet_hits\glass_08", 1.25893, 1, 75};
		soundGlassArmored1[] = {"A3\Sounds_F\arsenal\sfx\bullet_hits\glass_arm_01", 2.23872, 1, 75};
		soundGlassArmored2[] = {"A3\Sounds_F\arsenal\sfx\bullet_hits\glass_arm_02", 2.23872, 1, 75};
		soundGlassArmored3[] = {"A3\Sounds_F\arsenal\sfx\bullet_hits\glass_arm_03", 2.23872, 1, 75};
		soundGlassArmored4[] = {"A3\Sounds_F\arsenal\sfx\bullet_hits\glass_arm_04", 2.23872, 1, 75};
		soundGlassArmored5[] = {"A3\Sounds_F\arsenal\sfx\bullet_hits\glass_arm_05", 2.23872, 1, 75};
		soundGlassArmored6[] = {"A3\Sounds_F\arsenal\sfx\bullet_hits\glass_arm_06", 2.23872, 1, 75};
		soundGlassArmored7[] = {"A3\Sounds_F\arsenal\sfx\bullet_hits\glass_arm_07", 2.23872, 1, 75};
		soundGlassArmored8[] = {"A3\Sounds_F\arsenal\sfx\bullet_hits\glass_arm_08", 2.23872, 1, 75};
		soundGroundHard1[] = {"A3\Sounds_F\arsenal\sfx\bullet_hits\hard_ground_01", 2.81838, 1, 75};
		soundGroundHard10[] = {"A3\Sounds_F_Enoch\Assets\Arsenal\Bullet_Impacts\Impact_Dirt_02", 2.81838, 1, 75};
		soundGroundHard11[] = {"A3\Sounds_F_Enoch\Assets\Arsenal\Bullet_Impacts\Impact_Dirt_03", 2.81838, 1, 75};
		soundGroundHard12[] = {"A3\Sounds_F_Enoch\Assets\Arsenal\Bullet_Impacts\Impact_Dirt_04", 2.81838, 1, 75};
		soundGroundHard13[] = {"A3\Sounds_F_Enoch\Assets\Arsenal\Bullet_Impacts\Impact_Dirt_05", 2.81838, 1, 75};
		soundGroundHard14[] = {"A3\Sounds_F_Enoch\Assets\Arsenal\Bullet_Impacts\Impact_Dirt_06", 2.81838, 1, 75};
		soundGroundHard15[] = {"A3\Sounds_F_Enoch\Assets\Arsenal\Bullet_Impacts\Impact_Dirt_07", 2.81838, 1, 75};
		soundGroundHard16[] = {"A3\Sounds_F_Enoch\Assets\Arsenal\Bullet_Impacts\Impact_Dirt_08", 2.81838, 1, 75};
		soundGroundHard17[] = {"A3\Sounds_F_Enoch\Assets\Arsenal\Bullet_Impacts\Impact_Dirt_09", 2.81838, 1, 75};
		soundGroundHard18[] = {"A3\Sounds_F_Enoch\Assets\Arsenal\Bullet_Impacts\Impact_Dirt_10", 2.81838, 1, 75};
		soundGroundHard19[] = {"A3\Sounds_F_Enoch\Assets\Arsenal\Bullet_Impacts\Impact_Dirt_11", 2.81838, 1, 75};
		soundGroundHard2[] = {"A3\Sounds_F\arsenal\sfx\bullet_hits\hard_ground_02", 2.81838, 1, 75};
		soundGroundHard20[] = {"A3\Sounds_F_Enoch\Assets\Arsenal\Bullet_Impacts\Impact_Dirt_12", 2.81838, 1, 75};
		soundGroundHard21[] = {"A3\Sounds_F_Enoch\Assets\Arsenal\Bullet_Impacts\Impact_Dirt_13", 2.81838, 1, 75};
		soundGroundHard22[] = {"A3\Sounds_F_Enoch\Assets\Arsenal\Bullet_Impacts\Impact_Dirt_14", 2.81838, 1, 75};
		soundGroundHard23[] = {"A3\Sounds_F_Enoch\Assets\Arsenal\Bullet_Impacts\Impact_Dirt_15", 2.81838, 1, 75};
		soundGroundHard24[] = {"A3\Sounds_F_Enoch\Assets\Arsenal\Bullet_Impacts\Impact_Dirt_16", 2.81838, 1, 75};
		soundGroundHard25[] = {"A3\Sounds_F_Enoch\Assets\Arsenal\Bullet_Impacts\Impact_Dirt_17", 2.81838, 1, 75};
		soundGroundHard26[] = {"A3\Sounds_F_Enoch\Assets\Arsenal\Bullet_Impacts\Impact_Dirt_18", 2.81838, 1, 75};
		soundGroundHard27[] = {"A3\Sounds_F_Enoch\Assets\Arsenal\Bullet_Impacts\Impact_Dirt_19", 2.81838, 1, 75};
		soundGroundHard28[] = {"A3\Sounds_F_Enoch\Assets\Arsenal\Bullet_Impacts\Impact_Dirt_20", 2.81838, 1, 75};
		soundGroundHard3[] = {"A3\Sounds_F\arsenal\sfx\bullet_hits\hard_ground_03", 2.81838, 1, 75};
		soundGroundHard4[] = {"A3\Sounds_F\arsenal\sfx\bullet_hits\hard_ground_04", 2.81838, 1, 75};
		soundGroundHard5[] = {"A3\Sounds_F\arsenal\sfx\bullet_hits\hard_ground_05", 2.81838, 1, 75};
		soundGroundHard6[] = {"A3\Sounds_F\arsenal\sfx\bullet_hits\hard_ground_06", 2.81838, 1, 75};
		soundGroundHard7[] = {"A3\Sounds_F\arsenal\sfx\bullet_hits\hard_ground_07", 2.81838, 1, 75};
		soundGroundHard8[] = {"A3\Sounds_F\arsenal\sfx\bullet_hits\hard_ground_08", 2.81838, 1, 75};
		soundGroundHard9[] = {"A3\Sounds_F_Enoch\Assets\Arsenal\Bullet_Impacts\Impact_Dirt_01", 2.81838, 1, 75};
		soundGroundSoft1[] = {"A3\Sounds_F\arsenal\sfx\bullet_hits\soft_ground_01", 2.81838, 1, 75};
		soundGroundSoft10[] = {"A3\Sounds_F_Enoch\Assets\Arsenal\Bullet_Impacts\Impact_Dirt_02", 2.81838, 1, 75};
		soundGroundSoft11[] = {"A3\Sounds_F_Enoch\Assets\Arsenal\Bullet_Impacts\Impact_Dirt_03", 2.81838, 1, 75};
		soundGroundSoft12[] = {"A3\Sounds_F_Enoch\Assets\Arsenal\Bullet_Impacts\Impact_Dirt_04", 2.81838, 1, 75};
		soundGroundSoft13[] = {"A3\Sounds_F_Enoch\Assets\Arsenal\Bullet_Impacts\Impact_Dirt_05", 2.81838, 1, 75};
		soundGroundSoft14[] = {"A3\Sounds_F_Enoch\Assets\Arsenal\Bullet_Impacts\Impact_Dirt_06", 2.81838, 1, 75};
		soundGroundSoft15[] = {"A3\Sounds_F_Enoch\Assets\Arsenal\Bullet_Impacts\Impact_Dirt_07", 2.81838, 1, 75};
		soundGroundSoft16[] = {"A3\Sounds_F_Enoch\Assets\Arsenal\Bullet_Impacts\Impact_Dirt_08", 2.81838, 1, 75};
		soundGroundSoft17[] = {"A3\Sounds_F_Enoch\Assets\Arsenal\Bullet_Impacts\Impact_Dirt_09", 2.81838, 1, 75};
		soundGroundSoft18[] = {"A3\Sounds_F_Enoch\Assets\Arsenal\Bullet_Impacts\Impact_Dirt_10", 2.81838, 1, 75};
		soundGroundSoft19[] = {"A3\Sounds_F_Enoch\Assets\Arsenal\Bullet_Impacts\Impact_Dirt_11", 2.81838, 1, 75};
		soundGroundSoft2[] = {"A3\Sounds_F\arsenal\sfx\bullet_hits\soft_ground_02", 2.81838, 1, 75};
		soundGroundSoft20[] = {"A3\Sounds_F_Enoch\Assets\Arsenal\Bullet_Impacts\Impact_Dirt_12", 2.81838, 1, 75};
		soundGroundSoft21[] = {"A3\Sounds_F_Enoch\Assets\Arsenal\Bullet_Impacts\Impact_Dirt_13", 2.81838, 1, 75};
		soundGroundSoft22[] = {"A3\Sounds_F_Enoch\Assets\Arsenal\Bullet_Impacts\Impact_Dirt_14", 2.81838, 1, 75};
		soundGroundSoft23[] = {"A3\Sounds_F_Enoch\Assets\Arsenal\Bullet_Impacts\Impact_Dirt_15", 2.81838, 1, 75};
		soundGroundSoft24[] = {"A3\Sounds_F_Enoch\Assets\Arsenal\Bullet_Impacts\Impact_Dirt_16", 2.81838, 1, 75};
		soundGroundSoft25[] = {"A3\Sounds_F_Enoch\Assets\Arsenal\Bullet_Impacts\Impact_Dirt_17", 2.81838, 1, 75};
		soundGroundSoft26[] = {"A3\Sounds_F_Enoch\Assets\Arsenal\Bullet_Impacts\Impact_Dirt_18", 2.81838, 1, 75};
		soundGroundSoft27[] = {"A3\Sounds_F_Enoch\Assets\Arsenal\Bullet_Impacts\Impact_Dirt_19", 2.81838, 1, 75};
		soundGroundSoft28[] = {"A3\Sounds_F_Enoch\Assets\Arsenal\Bullet_Impacts\Impact_Dirt_20", 2.81838, 1, 75};
		soundGroundSoft3[] = {"A3\Sounds_F\arsenal\sfx\bullet_hits\soft_ground_03", 2.81838, 1, 75};
		soundGroundSoft4[] = {"A3\Sounds_F\arsenal\sfx\bullet_hits\soft_ground_04", 2.81838, 1, 75};
		soundGroundSoft5[] = {"A3\Sounds_F\arsenal\sfx\bullet_hits\soft_ground_05", 2.81838, 1, 75};
		soundGroundSoft6[] = {"A3\Sounds_F\arsenal\sfx\bullet_hits\soft_ground_06", 2.81838, 1, 75};
		soundGroundSoft7[] = {"A3\Sounds_F\arsenal\sfx\bullet_hits\soft_ground_07", 2.81838, 1, 75};
		soundGroundSoft8[] = {"A3\Sounds_F\arsenal\sfx\bullet_hits\soft_ground_08", 2.81838, 1, 75};
		soundGroundSoft9[] = {"A3\Sounds_F_Enoch\Assets\Arsenal\Bullet_Impacts\Impact_Dirt_01", 2.81838, 1, 75};
		soundHitBody1[] = {"A3\Sounds_F\arsenal\sfx\bullet_hits\body_01", 1, 1, 75};
		soundHitBody2[] = {"A3\Sounds_F\arsenal\sfx\bullet_hits\body_02", 1, 1, 75};
		soundHitBody3[] = {"A3\Sounds_F\arsenal\sfx\bullet_hits\body_03", 1, 1, 75};
		soundHitBody4[] = {"A3\Sounds_F\arsenal\sfx\bullet_hits\body_04", 1, 1, 75};
		soundHitBody5[] = {"A3\Sounds_F\arsenal\sfx\bullet_hits\body_05", 1, 1, 75};
		soundHitBody6[] = {"A3\Sounds_F\arsenal\sfx\bullet_hits\body_06", 1, 1, 75};
		soundHitBody7[] = {"A3\Sounds_F\arsenal\sfx\bullet_hits\body_07", 1, 1, 75};
		soundHitBody8[] = {"A3\Sounds_F\arsenal\sfx\bullet_hits\body_08", 1, 1, 75};
		soundHitBuilding1[] = {"A3\Sounds_F\arsenal\sfx\bullet_hits\building_01", 3.98107, 1, 75};
		soundHitBuilding10[] = {"A3\Sounds_F_Enoch\Assets\Arsenal\Bullet_Impacts\Ricochet_Generic_Distant_02", 2.81838, 1, 75};
		soundHitBuilding11[] = {"A3\Sounds_F_Enoch\Assets\Arsenal\Bullet_Impacts\Ricochet_Generic_Distant_03", 2.81838, 1, 75};
		soundHitBuilding12[] = {"A3\Sounds_F_Enoch\Assets\Arsenal\Bullet_Impacts\Ricochet_Generic_Distant_04", 2.81838, 1, 75};
		soundHitBuilding13[] = {"A3\Sounds_F_Enoch\Assets\Arsenal\Bullet_Impacts\Ricochet_Generic_Distant_05", 2.81838, 1, 75};
		soundHitBuilding14[] = {"A3\Sounds_F_Enoch\Assets\Arsenal\Bullet_Impacts\Ricochet_Generic_Distant_06", 2.81838, 1, 75};
		soundHitBuilding15[] = {"A3\Sounds_F_Enoch\Assets\Arsenal\Bullet_Impacts\Ricochet_Generic_Distant_07", 2.81838, 1, 75};
		soundHitBuilding16[] = {"A3\Sounds_F_Enoch\Assets\Arsenal\Bullet_Impacts\Ricochet_Generic_Distant_08", 2.81838, 1, 75};
		soundHitBuilding17[] = {"A3\Sounds_F_Enoch\Assets\Arsenal\Bullet_Impacts\Ricochet_Generic_Distant_09", 2.81838, 1, 75};
		soundHitBuilding18[] = {"A3\Sounds_F_Enoch\Assets\Arsenal\Bullet_Impacts\Ricochet_Generic_Distant_10", 2.81838, 1, 75};
		soundHitBuilding19[] = {"A3\Sounds_F_Enoch\Assets\Arsenal\Bullet_Impacts\Ricochet_Generic_Distant_11", 2.81838, 1, 75};
		soundHitBuilding2[] = {"A3\Sounds_F\arsenal\sfx\bullet_hits\building_02", 3.98107, 1, 75};
		soundHitBuilding20[] = {"A3\Sounds_F_Enoch\Assets\Arsenal\Bullet_Impacts\Ricochet_Generic_Distant_12", 2.81838, 1, 75};
		soundHitBuilding21[] = {"A3\Sounds_F_Enoch\Assets\Arsenal\Bullet_Impacts\Ricochet_Generic_Distant_13", 2.81838, 1, 75};
		soundHitBuilding22[] = {"A3\Sounds_F_Enoch\Assets\Arsenal\Bullet_Impacts\Ricochet_Generic_Distant_14", 2.81838, 1, 75};
		soundHitBuilding23[] = {"A3\Sounds_F_Enoch\Assets\Arsenal\Bullet_Impacts\Ricochet_Generic_Distant_15", 2.81838, 1, 75};
		soundHitBuilding24[] = {"A3\Sounds_F_Enoch\Assets\Arsenal\Bullet_Impacts\Ricochet_Generic_Distant_16", 2.81838, 1, 75};
		soundHitBuilding25[] = {"A3\Sounds_F_Enoch\Assets\Arsenal\Bullet_Impacts\Ricochet_Generic_Distant_17", 2.81838, 1, 75};
		soundHitBuilding26[] = {"A3\Sounds_F_Enoch\Assets\Arsenal\Bullet_Impacts\Ricochet_Generic_Distant_18", 2.81838, 1, 75};
		soundHitBuilding27[] = {"A3\Sounds_F_Enoch\Assets\Arsenal\Bullet_Impacts\Ricochet_Generic_Distant_19", 2.81838, 1, 75};
		soundHitBuilding28[] = {"A3\Sounds_F_Enoch\Assets\Arsenal\Bullet_Impacts\Ricochet_Generic_01", 2.81838, 1, 75};
		soundHitBuilding29[] = {"A3\Sounds_F_Enoch\Assets\Arsenal\Bullet_Impacts\Ricochet_Generic_02", 2.81838, 1, 75};
		soundHitBuilding3[] = {"A3\Sounds_F\arsenal\sfx\bullet_hits\building_03", 3.98107, 1, 75};
		soundHitBuilding30[] = {"A3\Sounds_F_Enoch\Assets\Arsenal\Bullet_Impacts\Ricochet_Generic_03", 2.81838, 1, 75};
		soundHitBuilding31[] = {"A3\Sounds_F_Enoch\Assets\Arsenal\Bullet_Impacts\Ricochet_Generic_04", 2.81838, 1, 75};
		soundHitBuilding32[] = {"A3\Sounds_F_Enoch\Assets\Arsenal\Bullet_Impacts\Ricochet_Generic_05", 2.81838, 1, 75};
		soundHitBuilding33[] = {"A3\Sounds_F_Enoch\Assets\Arsenal\Bullet_Impacts\Ricochet_Generic_06", 2.81838, 1, 75};
		soundHitBuilding34[] = {"A3\Sounds_F_Enoch\Assets\Arsenal\Bullet_Impacts\Ricochet_Generic_07", 2.81838, 1, 75};
		soundHitBuilding35[] = {"A3\Sounds_F_Enoch\Assets\Arsenal\Bullet_Impacts\Ricochet_Generic_08", 2.81838, 1, 75};
		soundHitBuilding36[] = {"A3\Sounds_F_Enoch\Assets\Arsenal\Bullet_Impacts\Ricochet_Generic_09", 2.81838, 1, 75};
		soundHitBuilding37[] = {"A3\Sounds_F_Enoch\Assets\Arsenal\Bullet_Impacts\Ricochet_Generic_10", 2.81838, 1, 75};
		soundHitBuilding38[] = {"A3\Sounds_F_Enoch\Assets\Arsenal\Bullet_Impacts\Ricochet_Generic_11", 2.81838, 1, 75};
		soundHitBuilding39[] = {"A3\Sounds_F_Enoch\Assets\Arsenal\Bullet_Impacts\Ricochet_Generic_12", 2.81838, 1, 75};
		soundHitBuilding4[] = {"A3\Sounds_F\arsenal\sfx\bullet_hits\building_04", 3.98107, 1, 75};
		soundHitBuilding40[] = {"A3\Sounds_F_Enoch\Assets\Arsenal\Bullet_Impacts\Ricochet_Generic_13", 2.81838, 1, 75};
		soundHitBuilding41[] = {"A3\Sounds_F_Enoch\Assets\Arsenal\Bullet_Impacts\Ricochet_Generic_14", 2.81838, 1, 75};
		soundHitBuilding5[] = {"A3\Sounds_F\arsenal\sfx\bullet_hits\building_05", 3.98107, 1, 75};
		soundHitBuilding6[] = {"A3\Sounds_F\arsenal\sfx\bullet_hits\building_06", 3.98107, 1, 75};
		soundHitBuilding7[] = {"A3\Sounds_F\arsenal\sfx\bullet_hits\building_07", 3.98107, 1, 75};
		soundHitBuilding8[] = {"A3\Sounds_F\arsenal\sfx\bullet_hits\building_08", 3.98107, 1, 75};
		soundHitBuilding9[] = {"A3\Sounds_F_Enoch\Assets\Arsenal\Bullet_Impacts\Ricochet_Generic_Distant_01", 2.81838, 1, 75};
		soundHitFoliage1[] = {"A3\Sounds_F\arsenal\sfx\bullet_hits\foliage_01", 1, 1, 75};
		soundHitFoliage2[] = {"A3\Sounds_F\arsenal\sfx\bullet_hits\foliage_02", 1, 1, 75};
		soundHitFoliage3[] = {"A3\Sounds_F\arsenal\sfx\bullet_hits\foliage_03", 1, 1, 75};
		soundHitFoliage4[] = {"A3\Sounds_F\arsenal\sfx\bullet_hits\foliage_04", 1, 1, 75};
		soundHitFoliage5[] = {"A3\Sounds_F\arsenal\sfx\bullet_hits\foliage_05", 1, 1, 75};
		soundHitFoliage6[] = {"A3\Sounds_F\arsenal\sfx\bullet_hits\foliage_06", 1, 1, 75};
		soundHitFoliage7[] = {"A3\Sounds_F\arsenal\sfx\bullet_hits\foliage_07", 1, 1, 75};
		soundHitFoliage8[] = {"A3\Sounds_F\arsenal\sfx\bullet_hits\foliage_08", 1, 1, 75};
		soundImpactDefault1[] = {"A3\Sounds_F\weapons\Grenades\Grenade_Roll", 2.51189, 1, 200};
		soundMetal1[] = {"A3\Sounds_F\arsenal\sfx\bullet_hits\metal_01", 2.23872, 1, 75};
		soundMetal10[] = {"A3\Sounds_F_Enoch\Assets\Arsenal\Bullet_Impacts\Impact_Metal_02", 2.81838, 1, 75};
		soundMetal11[] = {"A3\Sounds_F_Enoch\Assets\Arsenal\Bullet_Impacts\Impact_Metal_03", 2.81838, 1, 75};
		soundMetal12[] = {"A3\Sounds_F_Enoch\Assets\Arsenal\Bullet_Impacts\Impact_Metal_04", 2.81838, 1, 75};
		soundMetal13[] = {"A3\Sounds_F_Enoch\Assets\Arsenal\Bullet_Impacts\Impact_Metal_05", 2.81838, 1, 75};
		soundMetal14[] = {"A3\Sounds_F_Enoch\Assets\Arsenal\Bullet_Impacts\Impact_Metal_06", 2.81838, 1, 75};
		soundMetal15[] = {"A3\Sounds_F_Enoch\Assets\Arsenal\Bullet_Impacts\Impact_Metal_07", 2.81838, 1, 75};
		soundMetal16[] = {"A3\Sounds_F_Enoch\Assets\Arsenal\Bullet_Impacts\Impact_Metal_08", 2.81838, 1, 75};
		soundMetal17[] = {"A3\Sounds_F_Enoch\Assets\Arsenal\Bullet_Impacts\Impact_Metal_09", 2.81838, 1, 75};
		soundMetal18[] = {"A3\Sounds_F_Enoch\Assets\Arsenal\Bullet_Impacts\Impact_Metal_10", 2.81838, 1, 75};
		soundMetal19[] = {"A3\Sounds_F_Enoch\Assets\Arsenal\Bullet_Impacts\Impact_Metal_11", 2.81838, 1, 75};
		soundMetal2[] = {"A3\Sounds_F\arsenal\sfx\bullet_hits\metal_02", 2.23872, 1, 75};
		soundMetal20[] = {"A3\Sounds_F_Enoch\Assets\Arsenal\Bullet_Impacts\Impact_Metal_12", 2.81838, 1, 75};
		soundMetal21[] = {"A3\Sounds_F_Enoch\Assets\Arsenal\Bullet_Impacts\Impact_Metal_13", 2.81838, 1, 75};
		soundMetal22[] = {"A3\Sounds_F_Enoch\Assets\Arsenal\Bullet_Impacts\Impact_Metal_14", 2.81838, 1, 75};
		soundMetal23[] = {"A3\Sounds_F_Enoch\Assets\Arsenal\Bullet_Impacts\Impact_Metal_15", 2.81838, 1, 75};
		soundMetal24[] = {"A3\Sounds_F_Enoch\Assets\Arsenal\Bullet_Impacts\Impact_Metal_16", 2.81838, 1, 75};
		soundMetal25[] = {"A3\Sounds_F_Enoch\Assets\Arsenal\Bullet_Impacts\Impact_Metal_18", 2.81838, 1, 75};
		soundMetal26[] = {"A3\Sounds_F_Enoch\Assets\Arsenal\Bullet_Impacts\Impact_Metal_19", 2.81838, 1, 75};
		soundMetal27[] = {"A3\Sounds_F_Enoch\Assets\Arsenal\Bullet_Impacts\Impact_Metal_20", 2.81838, 1, 75};
		soundMetal28[] = {"A3\Sounds_F_Enoch\Assets\Arsenal\Bullet_Impacts\Impact_Metal_21", 2.81838, 1, 75};
		soundMetal29[] = {"A3\Sounds_F_Enoch\Assets\Arsenal\Bullet_Impacts\Impact_Metal_22", 2.81838, 1, 75};
		soundMetal3[] = {"A3\Sounds_F\arsenal\sfx\bullet_hits\metal_03", 2.23872, 1, 75};
		soundMetal30[] = {"A3\Sounds_F_Enoch\Assets\Arsenal\Bullet_Impacts\Impact_Metal_23", 2.81838, 1, 75};
		soundMetal31[] = {"A3\Sounds_F_Enoch\Assets\Arsenal\Bullet_Impacts\Impact_Metal_24", 2.81838, 1, 75};
		soundMetal32[] = {"A3\Sounds_F_Enoch\Assets\Arsenal\Bullet_Impacts\Impact_Metal_25", 2.81838, 1, 75};
		soundMetal33[] = {"A3\Sounds_F_Enoch\Assets\Arsenal\Bullet_Impacts\Impact_Metal_26", 2.81838, 1, 75};
		soundMetal34[] = {"A3\Sounds_F_Enoch\Assets\Arsenal\Bullet_Impacts\Impact_Metal_27", 2.81838, 1, 75};
		soundMetal35[] = {"A3\Sounds_F_Enoch\Assets\Arsenal\Bullet_Impacts\Impact_Metal_28", 2.81838, 1, 75};
		soundMetal36[] = {"A3\Sounds_F_Enoch\Assets\Arsenal\Bullet_Impacts\Impact_Metal_29", 2.81838, 1, 75};
		soundMetal37[] = {"A3\Sounds_F_Enoch\Assets\Arsenal\Bullet_Impacts\Impact_Metal_30", 2.81838, 1, 75};
		soundMetal38[] = {"A3\Sounds_F_Enoch\Assets\Arsenal\Bullet_Impacts\Impact_Metal_31", 2.81838, 1, 75};
		soundMetal39[] = {"A3\Sounds_F_Enoch\Assets\Arsenal\Bullet_Impacts\Ricochet_Generic_Distant_01", 2.81838, 1, 75};
		soundMetal4[] = {"A3\Sounds_F\arsenal\sfx\bullet_hits\metal_04", 2.23872, 1, 75};
		soundMetal40[] = {"A3\Sounds_F_Enoch\Assets\Arsenal\Bullet_Impacts\Ricochet_Generic_Distant_02", 2.81838, 1, 75};
		soundMetal41[] = {"A3\Sounds_F_Enoch\Assets\Arsenal\Bullet_Impacts\Ricochet_Generic_Distant_03", 2.81838, 1, 75};
		soundMetal42[] = {"A3\Sounds_F_Enoch\Assets\Arsenal\Bullet_Impacts\Ricochet_Generic_Distant_04", 2.81838, 1, 75};
		soundMetal43[] = {"A3\Sounds_F_Enoch\Assets\Arsenal\Bullet_Impacts\Ricochet_Generic_Distant_05", 2.81838, 1, 75};
		soundMetal44[] = {"A3\Sounds_F_Enoch\Assets\Arsenal\Bullet_Impacts\Ricochet_Generic_Distant_06", 2.81838, 1, 75};
		soundMetal45[] = {"A3\Sounds_F_Enoch\Assets\Arsenal\Bullet_Impacts\Ricochet_Generic_Distant_07", 2.81838, 1, 75};
		soundMetal46[] = {"A3\Sounds_F_Enoch\Assets\Arsenal\Bullet_Impacts\Ricochet_Generic_Distant_08", 2.81838, 1, 75};
		soundMetal47[] = {"A3\Sounds_F_Enoch\Assets\Arsenal\Bullet_Impacts\Ricochet_Generic_Distant_09", 2.81838, 1, 75};
		soundMetal48[] = {"A3\Sounds_F_Enoch\Assets\Arsenal\Bullet_Impacts\Ricochet_Generic_Distant_10", 2.81838, 1, 75};
		soundMetal49[] = {"A3\Sounds_F_Enoch\Assets\Arsenal\Bullet_Impacts\Ricochet_Generic_Distant_11", 2.81838, 1, 75};
		soundMetal5[] = {"A3\Sounds_F\arsenal\sfx\bullet_hits\metal_05", 2.23872, 1, 75};
		soundMetal50[] = {"A3\Sounds_F_Enoch\Assets\Arsenal\Bullet_Impacts\Ricochet_Generic_Distant_12", 2.81838, 1, 75};
		soundMetal51[] = {"A3\Sounds_F_Enoch\Assets\Arsenal\Bullet_Impacts\Ricochet_Generic_Distant_13", 2.81838, 1, 75};
		soundMetal52[] = {"A3\Sounds_F_Enoch\Assets\Arsenal\Bullet_Impacts\Ricochet_Generic_Distant_14", 2.81838, 1, 75};
		soundMetal53[] = {"A3\Sounds_F_Enoch\Assets\Arsenal\Bullet_Impacts\Ricochet_Generic_Distant_15", 2.81838, 1, 75};
		soundMetal54[] = {"A3\Sounds_F_Enoch\Assets\Arsenal\Bullet_Impacts\Ricochet_Generic_Distant_16", 2.81838, 1, 75};
		soundMetal55[] = {"A3\Sounds_F_Enoch\Assets\Arsenal\Bullet_Impacts\Ricochet_Generic_Distant_17", 2.81838, 1, 75};
		soundMetal56[] = {"A3\Sounds_F_Enoch\Assets\Arsenal\Bullet_Impacts\Ricochet_Generic_Distant_18", 2.81838, 1, 75};
		soundMetal57[] = {"A3\Sounds_F_Enoch\Assets\Arsenal\Bullet_Impacts\Ricochet_Generic_Distant_19", 2.81838, 1, 75};
		soundMetal58[] = {"A3\Sounds_F_Enoch\Assets\Arsenal\Bullet_Impacts\Ricochet_Metal_01", 2.81838, 1, 75};
		soundMetal59[] = {"A3\Sounds_F_Enoch\Assets\Arsenal\Bullet_Impacts\Ricochet_Metal_02", 2.81838, 1, 75};
		soundMetal6[] = {"A3\Sounds_F\arsenal\sfx\bullet_hits\metal_06", 2.23872, 1, 75};
		soundMetal60[] = {"A3\Sounds_F_Enoch\Assets\Arsenal\Bullet_Impacts\Ricochet_Metal_03", 2.81838, 1, 75};
		soundMetal61[] = {"A3\Sounds_F_Enoch\Assets\Arsenal\Bullet_Impacts\Ricochet_Metal_04", 2.81838, 1, 75};
		soundMetal62[] = {"A3\Sounds_F_Enoch\Assets\Arsenal\Bullet_Impacts\Ricochet_Metal_05", 2.81838, 1, 75};
		soundMetal63[] = {"A3\Sounds_F_Enoch\Assets\Arsenal\Bullet_Impacts\Ricochet_Metal_06", 2.81838, 1, 75};
		soundMetal64[] = {"A3\Sounds_F_Enoch\Assets\Arsenal\Bullet_Impacts\Ricochet_Metal_07", 2.81838, 1, 75};
		soundMetal65[] = {"A3\Sounds_F_Enoch\Assets\Arsenal\Bullet_Impacts\Ricochet_Metal_08", 2.81838, 1, 75};
		soundMetal66[] = {"A3\Sounds_F_Enoch\Assets\Arsenal\Bullet_Impacts\Ricochet_Metal_09", 2.81838, 1, 75};
		soundMetal67[] = {"A3\Sounds_F_Enoch\Assets\Arsenal\Bullet_Impacts\Ricochet_Metal_10", 2.81838, 1, 75};
		soundMetal68[] = {"A3\Sounds_F_Enoch\Assets\Arsenal\Bullet_Impacts\Ricochet_Metal_11", 2.81838, 1, 75};
		soundMetal69[] = {"A3\Sounds_F_Enoch\Assets\Arsenal\Bullet_Impacts\Ricochet_Metal_12", 2.81838, 1, 75};
		soundMetal7[] = {"A3\Sounds_F\arsenal\sfx\bullet_hits\metal_07", 2.23872, 1, 75};
		soundMetal70[] = {"A3\Sounds_F_Enoch\Assets\Arsenal\Bullet_Impacts\Ricochet_Metal_13", 2.81838, 1, 75};
		soundMetal71[] = {"A3\Sounds_F_Enoch\Assets\Arsenal\Bullet_Impacts\Ricochet_Metal_14", 2.81838, 1, 75};
		soundMetal8[] = {"A3\Sounds_F\arsenal\sfx\bullet_hits\metal_08", 2.23872, 1, 75};
		soundMetal9[] = {"A3\Sounds_F_Enoch\Assets\Arsenal\Bullet_Impacts\Impact_Metal_01", 2.81838, 1, 75};
		soundMetalInt1[] = {"A3\Sounds_F\arsenal\sfx\bullet_hitsInt\metal_01", 2.23872, 1, 35};
		soundMetalInt10[] = {"A3\Sounds_F_Enoch\Assets\Arsenal\Bullet_Impacts\Impact_Metal_02", 1.41254, 1, 35};
		soundMetalInt11[] = {"A3\Sounds_F_Enoch\Assets\Arsenal\Bullet_Impacts\Impact_Metal_03", 1.41254, 1, 35};
		soundMetalInt12[] = {"A3\Sounds_F_Enoch\Assets\Arsenal\Bullet_Impacts\Impact_Metal_04", 1.41254, 1, 35};
		soundMetalInt13[] = {"A3\Sounds_F_Enoch\Assets\Arsenal\Bullet_Impacts\Impact_Metal_05", 1.41254, 1, 35};
		soundMetalInt14[] = {"A3\Sounds_F_Enoch\Assets\Arsenal\Bullet_Impacts\Impact_Metal_06", 1.41254, 1, 35};
		soundMetalInt15[] = {"A3\Sounds_F_Enoch\Assets\Arsenal\Bullet_Impacts\Impact_Metal_07", 1.41254, 1, 35};
		soundMetalInt16[] = {"A3\Sounds_F_Enoch\Assets\Arsenal\Bullet_Impacts\Impact_Metal_08", 1.41254, 1, 35};
		soundMetalInt17[] = {"A3\Sounds_F_Enoch\Assets\Arsenal\Bullet_Impacts\Impact_Metal_09", 1.41254, 1, 35};
		soundMetalInt18[] = {"A3\Sounds_F_Enoch\Assets\Arsenal\Bullet_Impacts\Impact_Metal_10", 1.41254, 1, 35};
		soundMetalInt19[] = {"A3\Sounds_F_Enoch\Assets\Arsenal\Bullet_Impacts\Impact_Metal_11", 1.41254, 1, 35};
		soundMetalInt2[] = {"A3\Sounds_F\arsenal\sfx\bullet_hitsInt\metal_02", 2.23872, 1, 35};
		soundMetalInt20[] = {"A3\Sounds_F_Enoch\Assets\Arsenal\Bullet_Impacts\Impact_Metal_12", 1.41254, 1, 35};
		soundMetalInt21[] = {"A3\Sounds_F_Enoch\Assets\Arsenal\Bullet_Impacts\Impact_Metal_13", 1.41254, 1, 35};
		soundMetalInt22[] = {"A3\Sounds_F_Enoch\Assets\Arsenal\Bullet_Impacts\Impact_Metal_14", 1.41254, 1, 35};
		soundMetalInt23[] = {"A3\Sounds_F_Enoch\Assets\Arsenal\Bullet_Impacts\Impact_Metal_15", 1.41254, 1, 35};
		soundMetalInt24[] = {"A3\Sounds_F_Enoch\Assets\Arsenal\Bullet_Impacts\Impact_Metal_16", 1.41254, 1, 35};
		soundMetalInt25[] = {"A3\Sounds_F_Enoch\Assets\Arsenal\Bullet_Impacts\Impact_Metal_18", 1.41254, 1, 35};
		soundMetalInt26[] = {"A3\Sounds_F_Enoch\Assets\Arsenal\Bullet_Impacts\Impact_Metal_19", 1.41254, 1, 35};
		soundMetalInt27[] = {"A3\Sounds_F_Enoch\Assets\Arsenal\Bullet_Impacts\Impact_Metal_20", 1.41254, 1, 35};
		soundMetalInt28[] = {"A3\Sounds_F_Enoch\Assets\Arsenal\Bullet_Impacts\Impact_Metal_21", 1.41254, 1, 35};
		soundMetalInt29[] = {"A3\Sounds_F_Enoch\Assets\Arsenal\Bullet_Impacts\Impact_Metal_22", 1.41254, 1, 35};
		soundMetalInt3[] = {"A3\Sounds_F\arsenal\sfx\bullet_hitsInt\metal_03", 2.23872, 1, 35};
		soundMetalInt30[] = {"A3\Sounds_F_Enoch\Assets\Arsenal\Bullet_Impacts\Impact_Metal_23", 1.41254, 1, 35};
		soundMetalInt31[] = {"A3\Sounds_F_Enoch\Assets\Arsenal\Bullet_Impacts\Impact_Metal_24", 1.41254, 1, 35};
		soundMetalInt32[] = {"A3\Sounds_F_Enoch\Assets\Arsenal\Bullet_Impacts\Impact_Metal_25", 1.41254, 1, 35};
		soundMetalInt33[] = {"A3\Sounds_F_Enoch\Assets\Arsenal\Bullet_Impacts\Impact_Metal_26", 1.41254, 1, 35};
		soundMetalInt34[] = {"A3\Sounds_F_Enoch\Assets\Arsenal\Bullet_Impacts\Impact_Metal_27", 1.41254, 1, 35};
		soundMetalInt35[] = {"A3\Sounds_F_Enoch\Assets\Arsenal\Bullet_Impacts\Impact_Metal_28", 1.41254, 1, 35};
		soundMetalInt36[] = {"A3\Sounds_F_Enoch\Assets\Arsenal\Bullet_Impacts\Impact_Metal_29", 1.41254, 1, 35};
		soundMetalInt37[] = {"A3\Sounds_F_Enoch\Assets\Arsenal\Bullet_Impacts\Impact_Metal_30", 1.41254, 1, 35};
		soundMetalInt38[] = {"A3\Sounds_F_Enoch\Assets\Arsenal\Bullet_Impacts\Impact_Metal_31", 1.41254, 1, 35};
		soundMetalInt39[] = {"A3\Sounds_F_Enoch\Assets\Arsenal\Bullet_Impacts\Ricochet_Generic_Distant_01", 1, 1, 35};
		soundMetalInt4[] = {"A3\Sounds_F\arsenal\sfx\bullet_hitsInt\metal_04", 2.23872, 1, 35};
		soundMetalInt40[] = {"A3\Sounds_F_Enoch\Assets\Arsenal\Bullet_Impacts\Ricochet_Generic_Distant_02", 1, 1, 35};
		soundMetalInt41[] = {"A3\Sounds_F_Enoch\Assets\Arsenal\Bullet_Impacts\Ricochet_Generic_Distant_03", 1, 1, 35};
		soundMetalInt42[] = {"A3\Sounds_F_Enoch\Assets\Arsenal\Bullet_Impacts\Ricochet_Generic_Distant_04", 1, 1, 35};
		soundMetalInt43[] = {"A3\Sounds_F_Enoch\Assets\Arsenal\Bullet_Impacts\Ricochet_Generic_Distant_05", 1, 1, 35};
		soundMetalInt44[] = {"A3\Sounds_F_Enoch\Assets\Arsenal\Bullet_Impacts\Ricochet_Generic_Distant_06", 1, 1, 35};
		soundMetalInt45[] = {"A3\Sounds_F_Enoch\Assets\Arsenal\Bullet_Impacts\Ricochet_Generic_Distant_07", 1, 1, 35};
		soundMetalInt46[] = {"A3\Sounds_F_Enoch\Assets\Arsenal\Bullet_Impacts\Ricochet_Generic_Distant_08", 1, 1, 35};
		soundMetalInt47[] = {"A3\Sounds_F_Enoch\Assets\Arsenal\Bullet_Impacts\Ricochet_Generic_Distant_09", 1, 1, 35};
		soundMetalInt48[] = {"A3\Sounds_F_Enoch\Assets\Arsenal\Bullet_Impacts\Ricochet_Generic_Distant_10", 1, 1, 35};
		soundMetalInt49[] = {"A3\Sounds_F_Enoch\Assets\Arsenal\Bullet_Impacts\Ricochet_Generic_Distant_11", 1, 1, 35};
		soundMetalInt5[] = {"A3\Sounds_F\arsenal\sfx\bullet_hitsInt\metal_05", 2.23872, 1, 35};
		soundMetalInt50[] = {"A3\Sounds_F_Enoch\Assets\Arsenal\Bullet_Impacts\Ricochet_Generic_Distant_12", 1, 1, 35};
		soundMetalInt51[] = {"A3\Sounds_F_Enoch\Assets\Arsenal\Bullet_Impacts\Ricochet_Generic_Distant_13", 1, 1, 35};
		soundMetalInt52[] = {"A3\Sounds_F_Enoch\Assets\Arsenal\Bullet_Impacts\Ricochet_Generic_Distant_14", 1, 1, 35};
		soundMetalInt53[] = {"A3\Sounds_F_Enoch\Assets\Arsenal\Bullet_Impacts\Ricochet_Generic_Distant_15", 1, 1, 35};
		soundMetalInt54[] = {"A3\Sounds_F_Enoch\Assets\Arsenal\Bullet_Impacts\Ricochet_Generic_Distant_16", 1, 1, 35};
		soundMetalInt55[] = {"A3\Sounds_F_Enoch\Assets\Arsenal\Bullet_Impacts\Ricochet_Generic_Distant_17", 1, 1, 35};
		soundMetalInt56[] = {"A3\Sounds_F_Enoch\Assets\Arsenal\Bullet_Impacts\Ricochet_Generic_Distant_18", 1, 1, 35};
		soundMetalInt57[] = {"A3\Sounds_F_Enoch\Assets\Arsenal\Bullet_Impacts\Ricochet_Generic_Distant_19", 1, 1, 35};
		soundMetalInt58[] = {"A3\Sounds_F_Enoch\Assets\Arsenal\Bullet_Impacts\Ricochet_Metal_01", "", 1, 35};
		soundMetalInt59[] = {"A3\Sounds_F_Enoch\Assets\Arsenal\Bullet_Impacts\Ricochet_Metal_02", "", 1, 35};
		soundMetalInt6[] = {"A3\Sounds_F\arsenal\sfx\bullet_hitsInt\metal_06", 2.23872, 1, 35};
		soundMetalInt60[] = {"A3\Sounds_F_Enoch\Assets\Arsenal\Bullet_Impacts\Ricochet_Metal_03", "", 1, 35};
		soundMetalInt61[] = {"A3\Sounds_F_Enoch\Assets\Arsenal\Bullet_Impacts\Ricochet_Metal_04", "", 1, 35};
		soundMetalInt62[] = {"A3\Sounds_F_Enoch\Assets\Arsenal\Bullet_Impacts\Ricochet_Metal_05", "", 1, 35};
		soundMetalInt63[] = {"A3\Sounds_F_Enoch\Assets\Arsenal\Bullet_Impacts\Ricochet_Metal_06", "", 1, 35};
		soundMetalInt64[] = {"A3\Sounds_F_Enoch\Assets\Arsenal\Bullet_Impacts\Ricochet_Metal_07", "", 1, 35};
		soundMetalInt65[] = {"A3\Sounds_F_Enoch\Assets\Arsenal\Bullet_Impacts\Ricochet_Metal_08", "", 1, 35};
		soundMetalInt66[] = {"A3\Sounds_F_Enoch\Assets\Arsenal\Bullet_Impacts\Ricochet_Metal_09", "", 1, 35};
		soundMetalInt67[] = {"A3\Sounds_F_Enoch\Assets\Arsenal\Bullet_Impacts\Ricochet_Metal_10", "", 1, 35};
		soundMetalInt68[] = {"A3\Sounds_F_Enoch\Assets\Arsenal\Bullet_Impacts\Ricochet_Metal_11", "", 1, 35};
		soundMetalInt69[] = {"A3\Sounds_F_Enoch\Assets\Arsenal\Bullet_Impacts\Ricochet_Metal_12", "", 1, 35};
		soundMetalInt7[] = {"A3\Sounds_F\arsenal\sfx\bullet_hits\metal_07", 1.12202, 1, 35};
		soundMetalInt70[] = {"A3\Sounds_F_Enoch\Assets\Arsenal\Bullet_Impacts\Ricochet_Metal_13", "", 1, 35};
		soundMetalInt71[] = {"A3\Sounds_F_Enoch\Assets\Arsenal\Bullet_Impacts\Ricochet_Metal_14", "", 1, 35};
		soundMetalInt8[] = {"A3\Sounds_F\arsenal\sfx\bullet_hits\metal_08", 1.12202, 1, 35};
		soundMetalInt9[] = {"A3\Sounds_F_Enoch\Assets\Arsenal\Bullet_Impacts\Impact_Metal_01", 1.41254, 1, 35};
		soundPlastic1[] = {"A3\Sounds_F\arsenal\sfx\bullet_hits\plastic_01", 1.41254, 1, 75};
		soundPlastic2[] = {"A3\Sounds_F\arsenal\sfx\bullet_hits\plastic_02", 1.41254, 1, 75};
		soundPlastic3[] = {"A3\Sounds_F\arsenal\sfx\bullet_hits\plastic_03", 1.41254, 1, 75};
		soundPlastic4[] = {"A3\Sounds_F\arsenal\sfx\bullet_hits\plastic_04", 1.41254, 1, 75};
		soundPlastic5[] = {"A3\Sounds_F\arsenal\sfx\bullet_hits\plastic_05", 1.41254, 1, 75};
		soundPlastic6[] = {"A3\Sounds_F\arsenal\sfx\bullet_hits\plastic_06", 1.41254, 1, 75};
		soundPlastic7[] = {"A3\Sounds_F\arsenal\sfx\bullet_hits\plastic_07", 1.41254, 1, 75};
		soundPlastic8[] = {"A3\Sounds_F\arsenal\sfx\bullet_hits\plastic_08", 1.41254, 1, 75};
		soundRubber1[] = {"A3\Sounds_F\arsenal\sfx\bullet_hits\rubber_01", 0.891251, 1, 75};
		soundRubber2[] = {"A3\Sounds_F\arsenal\sfx\bullet_hits\rubber_02", 0.891251, 1, 75};
		soundRubber3[] = {"A3\Sounds_F\arsenal\sfx\bullet_hits\rubber_03", 0.891251, 1, 75};
		soundRubber4[] = {"A3\Sounds_F\arsenal\sfx\bullet_hits\rubber_04", 0.891251, 1, 75};
		soundRubber5[] = {"A3\Sounds_F\arsenal\sfx\bullet_hits\rubber_05", 0.891251, 1, 75};
		soundRubber6[] = {"A3\Sounds_F\arsenal\sfx\bullet_hits\rubber_06", 0.891251, 1, 75};
		soundSetBulletFly[] = {"bulletFlyBy_SoundSet"};
		soundSetSonicCrack[] = {"bulletSonicCrack_SoundSet", "bulletSonicCrackTail_SoundSet"};
		soundTyre1[] = {"A3\Sounds_F\arsenal\sfx\bullet_hits\tyre_01", 1.77828, 1, 75};
		soundTyre2[] = {"A3\Sounds_F\arsenal\sfx\bullet_hits\tyre_02", 1.77828, 1, 75};
		soundTyre3[] = {"A3\Sounds_F\arsenal\sfx\bullet_hits\tyre_03", 1.77828, 1, 75};
		soundTyre4[] = {"A3\Sounds_F\arsenal\sfx\bullet_hits\tyre_04", 1.77828, 1, 75};
		soundTyre5[] = {"A3\Sounds_F\arsenal\sfx\bullet_hits\tyre_05", 1.77828, 1, 75};
		soundTyre6[] = {"A3\Sounds_F\arsenal\sfx\bullet_hits\tyre_06", 1.77828, 1, 75};
		soundTyre7[] = {"A3\Sounds_F\arsenal\sfx\bullet_hits\tyre_07", 1.77828, 1, 75};
		soundTyre8[] = {"A3\Sounds_F\arsenal\sfx\bullet_hits\tyre_08", 1.77828, 1, 75};
		soundVehiclePlate1[] = {"A3\Sounds_F\arsenal\sfx\bullet_hits\metal_plate_01", 2.23872, 1, 75};
		soundVehiclePlate10[] = {"A3\Sounds_F_Enoch\Assets\Arsenal\Bullet_Impacts\Impact_Metal_02", 1, 1, 75};
		soundVehiclePlate11[] = {"A3\Sounds_F_Enoch\Assets\Arsenal\Bullet_Impacts\Impact_Metal_03", 1, 1, 75};
		soundVehiclePlate12[] = {"A3\Sounds_F_Enoch\Assets\Arsenal\Bullet_Impacts\Impact_Metal_04", 1, 1, 75};
		soundVehiclePlate13[] = {"A3\Sounds_F_Enoch\Assets\Arsenal\Bullet_Impacts\Impact_Metal_05", 1, 1, 75};
		soundVehiclePlate14[] = {"A3\Sounds_F_Enoch\Assets\Arsenal\Bullet_Impacts\Impact_Metal_06", 1, 1, 75};
		soundVehiclePlate15[] = {"A3\Sounds_F_Enoch\Assets\Arsenal\Bullet_Impacts\Impact_Metal_07", 1, 1, 75};
		soundVehiclePlate16[] = {"A3\Sounds_F_Enoch\Assets\Arsenal\Bullet_Impacts\Impact_Metal_08", 1, 1, 75};
		soundVehiclePlate17[] = {"A3\Sounds_F_Enoch\Assets\Arsenal\Bullet_Impacts\Impact_Metal_09", 1, 1, 75};
		soundVehiclePlate18[] = {"A3\Sounds_F_Enoch\Assets\Arsenal\Bullet_Impacts\Impact_Metal_10", 1, 1, 75};
		soundVehiclePlate19[] = {"A3\Sounds_F_Enoch\Assets\Arsenal\Bullet_Impacts\Impact_Metal_11", 1, 1, 75};
		soundVehiclePlate2[] = {"A3\Sounds_F\arsenal\sfx\bullet_hits\metal_plate_02", 2.23872, 1, 75};
		soundVehiclePlate20[] = {"A3\Sounds_F_Enoch\Assets\Arsenal\Bullet_Impacts\Impact_Metal_12", 1, 1, 75};
		soundVehiclePlate21[] = {"A3\Sounds_F_Enoch\Assets\Arsenal\Bullet_Impacts\Impact_Metal_13", 1, 1, 75};
		soundVehiclePlate22[] = {"A3\Sounds_F_Enoch\Assets\Arsenal\Bullet_Impacts\Impact_Metal_14", 1, 1, 75};
		soundVehiclePlate23[] = {"A3\Sounds_F_Enoch\Assets\Arsenal\Bullet_Impacts\Impact_Metal_15", 1, 1, 75};
		soundVehiclePlate24[] = {"A3\Sounds_F_Enoch\Assets\Arsenal\Bullet_Impacts\Impact_Metal_16", 1, 1, 75};
		soundVehiclePlate25[] = {"A3\Sounds_F_Enoch\Assets\Arsenal\Bullet_Impacts\Impact_Metal_18", 1, 1, 75};
		soundVehiclePlate26[] = {"A3\Sounds_F_Enoch\Assets\Arsenal\Bullet_Impacts\Impact_Metal_19", 1, 1, 75};
		soundVehiclePlate27[] = {"A3\Sounds_F_Enoch\Assets\Arsenal\Bullet_Impacts\Impact_Metal_20", 1, 1, 75};
		soundVehiclePlate28[] = {"A3\Sounds_F_Enoch\Assets\Arsenal\Bullet_Impacts\Impact_Metal_21", 1, 1, 75};
		soundVehiclePlate29[] = {"A3\Sounds_F_Enoch\Assets\Arsenal\Bullet_Impacts\Impact_Metal_22", 1, 1, 75};
		soundVehiclePlate3[] = {"A3\Sounds_F\arsenal\sfx\bullet_hits\metal_plate_03", 2.23872, 1, 75};
		soundVehiclePlate30[] = {"A3\Sounds_F_Enoch\Assets\Arsenal\Bullet_Impacts\Impact_Metal_23", 1, 1, 75};
		soundVehiclePlate31[] = {"A3\Sounds_F_Enoch\Assets\Arsenal\Bullet_Impacts\Impact_Metal_24", 1, 1, 75};
		soundVehiclePlate32[] = {"A3\Sounds_F_Enoch\Assets\Arsenal\Bullet_Impacts\Impact_Metal_25", 1, 1, 75};
		soundVehiclePlate33[] = {"A3\Sounds_F_Enoch\Assets\Arsenal\Bullet_Impacts\Impact_Metal_26", 1, 1, 75};
		soundVehiclePlate34[] = {"A3\Sounds_F_Enoch\Assets\Arsenal\Bullet_Impacts\Impact_Metal_27", 1, 1, 75};
		soundVehiclePlate35[] = {"A3\Sounds_F_Enoch\Assets\Arsenal\Bullet_Impacts\Impact_Metal_28", 1, 1, 75};
		soundVehiclePlate36[] = {"A3\Sounds_F_Enoch\Assets\Arsenal\Bullet_Impacts\Impact_Metal_29", 1, 1, 75};
		soundVehiclePlate37[] = {"A3\Sounds_F_Enoch\Assets\Arsenal\Bullet_Impacts\Impact_Metal_30", 1, 1, 75};
		soundVehiclePlate38[] = {"A3\Sounds_F_Enoch\Assets\Arsenal\Bullet_Impacts\Impact_Metal_31", 1, 1, 75};
		soundVehiclePlate39[] = {"A3\Sounds_F_Enoch\Assets\Arsenal\Bullet_Impacts\Ricochet_Generic_Distant_01", 1, 1, 75};
		soundVehiclePlate4[] = {"A3\Sounds_F\arsenal\sfx\bullet_hits\metal_plate_04", 2.23872, 1, 75};
		soundVehiclePlate40[] = {"A3\Sounds_F_Enoch\Assets\Arsenal\Bullet_Impacts\Ricochet_Generic_Distant_02", 1, 1, 75};
		soundVehiclePlate41[] = {"A3\Sounds_F_Enoch\Assets\Arsenal\Bullet_Impacts\Ricochet_Generic_Distant_03", 1, 1, 75};
		soundVehiclePlate42[] = {"A3\Sounds_F_Enoch\Assets\Arsenal\Bullet_Impacts\Ricochet_Generic_Distant_04", 1, 1, 75};
		soundVehiclePlate43[] = {"A3\Sounds_F_Enoch\Assets\Arsenal\Bullet_Impacts\Ricochet_Generic_Distant_05", 1, 1, 75};
		soundVehiclePlate44[] = {"A3\Sounds_F_Enoch\Assets\Arsenal\Bullet_Impacts\Ricochet_Generic_Distant_06", 1, 1, 75};
		soundVehiclePlate45[] = {"A3\Sounds_F_Enoch\Assets\Arsenal\Bullet_Impacts\Ricochet_Generic_Distant_07", 1, 1, 75};
		soundVehiclePlate46[] = {"A3\Sounds_F_Enoch\Assets\Arsenal\Bullet_Impacts\Ricochet_Generic_Distant_08", 1, 1, 75};
		soundVehiclePlate47[] = {"A3\Sounds_F_Enoch\Assets\Arsenal\Bullet_Impacts\Ricochet_Generic_Distant_09", 1, 1, 75};
		soundVehiclePlate48[] = {"A3\Sounds_F_Enoch\Assets\Arsenal\Bullet_Impacts\Ricochet_Generic_Distant_10", 1, 1, 75};
		soundVehiclePlate49[] = {"A3\Sounds_F_Enoch\Assets\Arsenal\Bullet_Impacts\Ricochet_Generic_Distant_11", 1, 1, 75};
		soundVehiclePlate5[] = {"A3\Sounds_F\arsenal\sfx\bullet_hits\metal_plate_05", 2.23872, 1, 75};
		soundVehiclePlate50[] = {"A3\Sounds_F_Enoch\Assets\Arsenal\Bullet_Impacts\Ricochet_Generic_Distant_12", 1, 1, 75};
		soundVehiclePlate51[] = {"A3\Sounds_F_Enoch\Assets\Arsenal\Bullet_Impacts\Ricochet_Generic_Distant_13", 1, 1, 75};
		soundVehiclePlate52[] = {"A3\Sounds_F_Enoch\Assets\Arsenal\Bullet_Impacts\Ricochet_Generic_Distant_14", 1, 1, 75};
		soundVehiclePlate53[] = {"A3\Sounds_F_Enoch\Assets\Arsenal\Bullet_Impacts\Ricochet_Generic_Distant_15", 1, 1, 75};
		soundVehiclePlate54[] = {"A3\Sounds_F_Enoch\Assets\Arsenal\Bullet_Impacts\Ricochet_Generic_Distant_16", 1, 1, 75};
		soundVehiclePlate55[] = {"A3\Sounds_F_Enoch\Assets\Arsenal\Bullet_Impacts\Ricochet_Generic_Distant_17", 1, 1, 75};
		soundVehiclePlate56[] = {"A3\Sounds_F_Enoch\Assets\Arsenal\Bullet_Impacts\Ricochet_Generic_Distant_18", 1, 1, 75};
		soundVehiclePlate57[] = {"A3\Sounds_F_Enoch\Assets\Arsenal\Bullet_Impacts\Ricochet_Generic_Distant_19", 1, 1, 75};
		soundVehiclePlate58[] = {"A3\Sounds_F_Enoch\Assets\Arsenal\Bullet_Impacts\Ricochet_Metal_01", 1, 1, 75};
		soundVehiclePlate59[] = {"A3\Sounds_F_Enoch\Assets\Arsenal\Bullet_Impacts\Ricochet_Metal_02", 1, 1, 75};
		soundVehiclePlate6[] = {"A3\Sounds_F\arsenal\sfx\bullet_hits\metal_plate_06", 2.23872, 1, 75};
		soundVehiclePlate60[] = {"A3\Sounds_F_Enoch\Assets\Arsenal\Bullet_Impacts\Ricochet_Metal_03", 1, 1, 75};
		soundVehiclePlate61[] = {"A3\Sounds_F_Enoch\Assets\Arsenal\Bullet_Impacts\Ricochet_Metal_04", 1, 1, 75};
		soundVehiclePlate62[] = {"A3\Sounds_F_Enoch\Assets\Arsenal\Bullet_Impacts\Ricochet_Metal_05", 1, 1, 75};
		soundVehiclePlate63[] = {"A3\Sounds_F_Enoch\Assets\Arsenal\Bullet_Impacts\Ricochet_Metal_06", 1, 1, 75};
		soundVehiclePlate64[] = {"A3\Sounds_F_Enoch\Assets\Arsenal\Bullet_Impacts\Ricochet_Metal_07", 1, 1, 75};
		soundVehiclePlate65[] = {"A3\Sounds_F_Enoch\Assets\Arsenal\Bullet_Impacts\Ricochet_Metal_08", 1, 1, 75};
		soundVehiclePlate66[] = {"A3\Sounds_F_Enoch\Assets\Arsenal\Bullet_Impacts\Ricochet_Metal_09", 1, 1, 75};
		soundVehiclePlate67[] = {"A3\Sounds_F_Enoch\Assets\Arsenal\Bullet_Impacts\Ricochet_Metal_10", 1, 1, 75};
		soundVehiclePlate68[] = {"A3\Sounds_F_Enoch\Assets\Arsenal\Bullet_Impacts\Ricochet_Metal_11", 1, 1, 75};
		soundVehiclePlate69[] = {"A3\Sounds_F_Enoch\Assets\Arsenal\Bullet_Impacts\Ricochet_Metal_12", 1, 1, 75};
		soundVehiclePlate7[] = {"A3\Sounds_F\arsenal\sfx\bullet_hits\metal_plate_07", 2.23872, 1, 75};
		soundVehiclePlate70[] = {"A3\Sounds_F_Enoch\Assets\Arsenal\Bullet_Impacts\Ricochet_Metal_13", 1, 1, 75};
		soundVehiclePlate71[] = {"A3\Sounds_F_Enoch\Assets\Arsenal\Bullet_Impacts\Ricochet_Metal_14", 1, 1, 75};
		soundVehiclePlate8[] = {"A3\Sounds_F\arsenal\sfx\bullet_hits\metal_plate_08", 2.23872, 1, 75};
		soundVehiclePlate9[] = {"A3\Sounds_F_Enoch\Assets\Arsenal\Bullet_Impacts\Impact_Metal_01", 1, 1, 75};
		soundVehiclePlateInt1[] = {"A3\Sounds_F\arsenal\sfx\bullet_hitsInt\metal_plate_01", 1.4, 1, 35};
		soundVehiclePlateInt10[] = {"A3\Sounds_F\arsenal\sfx\bullet_hitsInt\metal_plate_10", 1.4, 1, 35};
		soundVehiclePlateInt11[] = {"A3\Sounds_F\arsenal\sfx\bullet_hitsInt\metal_plate_11", 1.4, 1, 35};
		soundVehiclePlateInt12[] = {"A3\Sounds_F\arsenal\sfx\bullet_hitsInt\metal_plate_12", 1.4, 1, 35};
		soundVehiclePlateInt13[] = {"A3\Sounds_F\arsenal\sfx\bullet_hitsInt\metal_plate_13", 1.4, 1, 35};
		soundVehiclePlateInt14[] = {"A3\Sounds_F\arsenal\sfx\bullet_hitsInt\metal_plate_14", 1.4, 1, 35};
		soundVehiclePlateInt15[] = {"A3\Sounds_F\arsenal\sfx\bullet_hitsInt\metal_plate_15", 1.4, 1, 35};
		soundVehiclePlateInt16[] = {"A3\Sounds_F_Enoch\Assets\Arsenal\Bullet_Impacts\Impact_Metal_08", 1.2, 1, 35};
		soundVehiclePlateInt17[] = {"A3\Sounds_F_Enoch\Assets\Arsenal\Bullet_Impacts\Impact_Metal_09", 1.2, 1, 35};
		soundVehiclePlateInt18[] = {"A3\Sounds_F_Enoch\Assets\Arsenal\Bullet_Impacts\Impact_Metal_10", 1.2, 1, 35};
		soundVehiclePlateInt19[] = {"A3\Sounds_F_Enoch\Assets\Arsenal\Bullet_Impacts\Impact_Metal_11", 1.2, 1, 35};
		soundVehiclePlateInt2[] = {"A3\Sounds_F\arsenal\sfx\bullet_hitsInt\metal_plate_02", 1.4, 1, 35};
		soundVehiclePlateInt20[] = {"A3\Sounds_F_Enoch\Assets\Arsenal\Bullet_Impacts\Impact_Metal_12", 1.2, 1, 35};
		soundVehiclePlateInt21[] = {"A3\Sounds_F_Enoch\Assets\Arsenal\Bullet_Impacts\Impact_Metal_13", 1.2, 1, 35};
		soundVehiclePlateInt22[] = {"A3\Sounds_F_Enoch\Assets\Arsenal\Bullet_Impacts\Impact_Metal_14", 1.2, 1, 35};
		soundVehiclePlateInt23[] = {"A3\Sounds_F_Enoch\Assets\Arsenal\Bullet_Impacts\Impact_Metal_15", 1.2, 1, 35};
		soundVehiclePlateInt24[] = {"A3\Sounds_F_Enoch\Assets\Arsenal\Bullet_Impacts\Impact_Metal_16", 1.2, 1, 35};
		soundVehiclePlateInt25[] = {"A3\Sounds_F_Enoch\Assets\Arsenal\Bullet_Impacts\Impact_Metal_18", 1.2, 1, 35};
		soundVehiclePlateInt26[] = {"A3\Sounds_F_Enoch\Assets\Arsenal\Bullet_Impacts\Impact_Metal_19", 1.2, 1, 35};
		soundVehiclePlateInt27[] = {"A3\Sounds_F_Enoch\Assets\Arsenal\Bullet_Impacts\Impact_Metal_20", 1.2, 1, 35};
		soundVehiclePlateInt28[] = {"A3\Sounds_F_Enoch\Assets\Arsenal\Bullet_Impacts\Impact_Metal_21", 1.2, 1, 35};
		soundVehiclePlateInt29[] = {"A3\Sounds_F_Enoch\Assets\Arsenal\Bullet_Impacts\Impact_Metal_22", 1.2, 1, 35};
		soundVehiclePlateInt3[] = {"A3\Sounds_F\arsenal\sfx\bullet_hitsInt\metal_plate_03", 1.4, 1, 35};
		soundVehiclePlateInt30[] = {"A3\Sounds_F_Enoch\Assets\Arsenal\Bullet_Impacts\Impact_Metal_23", 1.2, 1, 35};
		soundVehiclePlateInt31[] = {"A3\Sounds_F_Enoch\Assets\Arsenal\Bullet_Impacts\Impact_Metal_24", 1.2, 1, 35};
		soundVehiclePlateInt32[] = {"A3\Sounds_F_Enoch\Assets\Arsenal\Bullet_Impacts\Impact_Metal_25", 1.2, 1, 35};
		soundVehiclePlateInt33[] = {"A3\Sounds_F_Enoch\Assets\Arsenal\Bullet_Impacts\Impact_Metal_26", 1.2, 1, 35};
		soundVehiclePlateInt34[] = {"A3\Sounds_F_Enoch\Assets\Arsenal\Bullet_Impacts\Impact_Metal_27", 1.2, 1, 35};
		soundVehiclePlateInt35[] = {"A3\Sounds_F_Enoch\Assets\Arsenal\Bullet_Impacts\Impact_Metal_28", 1.2, 1, 35};
		soundVehiclePlateInt36[] = {"A3\Sounds_F_Enoch\Assets\Arsenal\Bullet_Impacts\Impact_Metal_29", 1.2, 1, 35};
		soundVehiclePlateInt37[] = {"A3\Sounds_F_Enoch\Assets\Arsenal\Bullet_Impacts\Impact_Metal_30", 1.2, 1, 35};
		soundVehiclePlateInt38[] = {"A3\Sounds_F_Enoch\Assets\Arsenal\Bullet_Impacts\Impact_Metal_31", 1.2, 1, 35};
		soundVehiclePlateInt39[] = {"A3\Sounds_F_Enoch\Assets\Arsenal\Bullet_Impacts\Ricochet_Generic_Distant_01", 1.2, 1, 35};
		soundVehiclePlateInt4[] = {"A3\Sounds_F\arsenal\sfx\bullet_hitsInt\metal_plate_04", 1.4, 1, 35};
		soundVehiclePlateInt40[] = {"A3\Sounds_F_Enoch\Assets\Arsenal\Bullet_Impacts\Ricochet_Generic_Distant_02", 1.2, 1, 35};
		soundVehiclePlateInt41[] = {"A3\Sounds_F_Enoch\Assets\Arsenal\Bullet_Impacts\Ricochet_Generic_Distant_03", 1.2, 1, 35};
		soundVehiclePlateInt42[] = {"A3\Sounds_F_Enoch\Assets\Arsenal\Bullet_Impacts\Ricochet_Generic_Distant_04", 1.2, 1, 35};
		soundVehiclePlateInt43[] = {"A3\Sounds_F_Enoch\Assets\Arsenal\Bullet_Impacts\Ricochet_Generic_Distant_05", 1.2, 1, 35};
		soundVehiclePlateInt44[] = {"A3\Sounds_F_Enoch\Assets\Arsenal\Bullet_Impacts\Ricochet_Generic_Distant_06", 1.2, 1, 35};
		soundVehiclePlateInt45[] = {"A3\Sounds_F_Enoch\Assets\Arsenal\Bullet_Impacts\Ricochet_Generic_Distant_07", 1.2, 1, 35};
		soundVehiclePlateInt46[] = {"A3\Sounds_F_Enoch\Assets\Arsenal\Bullet_Impacts\Ricochet_Generic_Distant_08", 1.2, 1, 35};
		soundVehiclePlateInt47[] = {"A3\Sounds_F_Enoch\Assets\Arsenal\Bullet_Impacts\Ricochet_Generic_Distant_09", 1.2, 1, 35};
		soundVehiclePlateInt48[] = {"A3\Sounds_F_Enoch\Assets\Arsenal\Bullet_Impacts\Ricochet_Generic_Distant_10", 1.2, 1, 35};
		soundVehiclePlateInt49[] = {"A3\Sounds_F_Enoch\Assets\Arsenal\Bullet_Impacts\Ricochet_Generic_Distant_11", 1.2, 1, 35};
		soundVehiclePlateInt5[] = {"A3\Sounds_F\arsenal\sfx\bullet_hitsInt\metal_plate_05", 1.4, 1, 35};
		soundVehiclePlateInt50[] = {"A3\Sounds_F_Enoch\Assets\Arsenal\Bullet_Impacts\Ricochet_Generic_Distant_12", 1.2, 1, 35};
		soundVehiclePlateInt51[] = {"A3\Sounds_F_Enoch\Assets\Arsenal\Bullet_Impacts\Ricochet_Generic_Distant_13", 1.2, 1, 35};
		soundVehiclePlateInt52[] = {"A3\Sounds_F_Enoch\Assets\Arsenal\Bullet_Impacts\Ricochet_Generic_Distant_14", 1.2, 1, 35};
		soundVehiclePlateInt53[] = {"A3\Sounds_F_Enoch\Assets\Arsenal\Bullet_Impacts\Ricochet_Generic_Distant_15", 1.2, 1, 35};
		soundVehiclePlateInt54[] = {"A3\Sounds_F_Enoch\Assets\Arsenal\Bullet_Impacts\Ricochet_Generic_Distant_16", 1.2, 1, 35};
		soundVehiclePlateInt55[] = {"A3\Sounds_F_Enoch\Assets\Arsenal\Bullet_Impacts\Ricochet_Generic_Distant_17", 1.2, 1, 35};
		soundVehiclePlateInt56[] = {"A3\Sounds_F_Enoch\Assets\Arsenal\Bullet_Impacts\Ricochet_Generic_Distant_18", 1.2, 1, 35};
		soundVehiclePlateInt57[] = {"A3\Sounds_F_Enoch\Assets\Arsenal\Bullet_Impacts\Ricochet_Generic_Distant_19", 1.2, 1, 35};
		soundVehiclePlateInt58[] = {"A3\Sounds_F_Enoch\Assets\Arsenal\Bullet_Impacts\Ricochet_Metal_01", 1.2, 1, 35};
		soundVehiclePlateInt59[] = {"A3\Sounds_F_Enoch\Assets\Arsenal\Bullet_Impacts\Ricochet_Metal_02", 1.2, 1, 35};
		soundVehiclePlateInt6[] = {"A3\Sounds_F\arsenal\sfx\bullet_hitsInt\metal_plate_06", 1.4, 1, 35};
		soundVehiclePlateInt60[] = {"A3\Sounds_F_Enoch\Assets\Arsenal\Bullet_Impacts\Ricochet_Metal_03", 1.2, 1, 35};
		soundVehiclePlateInt61[] = {"A3\Sounds_F_Enoch\Assets\Arsenal\Bullet_Impacts\Ricochet_Metal_04", 1.2, 1, 35};
		soundVehiclePlateInt62[] = {"A3\Sounds_F_Enoch\Assets\Arsenal\Bullet_Impacts\Ricochet_Metal_05", 1.2, 1, 35};
		soundVehiclePlateInt63[] = {"A3\Sounds_F_Enoch\Assets\Arsenal\Bullet_Impacts\Ricochet_Metal_06", 1.2, 1, 35};
		soundVehiclePlateInt64[] = {"A3\Sounds_F_Enoch\Assets\Arsenal\Bullet_Impacts\Ricochet_Metal_07", 1.2, 1, 35};
		soundVehiclePlateInt65[] = {"A3\Sounds_F_Enoch\Assets\Arsenal\Bullet_Impacts\Ricochet_Metal_08", 1.2, 1, 35};
		soundVehiclePlateInt66[] = {"A3\Sounds_F_Enoch\Assets\Arsenal\Bullet_Impacts\Ricochet_Metal_09", 1.2, 1, 35};
		soundVehiclePlateInt67[] = {"A3\Sounds_F_Enoch\Assets\Arsenal\Bullet_Impacts\Ricochet_Metal_10", 1.2, 1, 35};
		soundVehiclePlateInt68[] = {"A3\Sounds_F_Enoch\Assets\Arsenal\Bullet_Impacts\Ricochet_Metal_11", 1.2, 1, 35};
		soundVehiclePlateInt69[] = {"A3\Sounds_F_Enoch\Assets\Arsenal\Bullet_Impacts\Ricochet_Metal_12", 1.2, 1, 35};
		soundVehiclePlateInt7[] = {"A3\Sounds_F\arsenal\sfx\bullet_hitsInt\metal_plate_07", 1.4, 1, 35};
		soundVehiclePlateInt70[] = {"A3\Sounds_F_Enoch\Assets\Arsenal\Bullet_Impacts\Ricochet_Metal_13", 1.2, 1, 35};
		soundVehiclePlateInt71[] = {"A3\Sounds_F_Enoch\Assets\Arsenal\Bullet_Impacts\Ricochet_Metal_14", 1.2, 1, 35};
		soundVehiclePlateInt8[] = {"A3\Sounds_F\arsenal\sfx\bullet_hitsInt\metal_plate_08", 1.4, 1, 35};
		soundVehiclePlateInt9[] = {"A3\Sounds_F\arsenal\sfx\bullet_hitsInt\metal_plate_09", 1.4, 1, 35};
		soundWater1[] = {"A3\Sounds_F\arsenal\sfx\bullet_hits\water_01", 1.41254, 1, 75};
		soundWater2[] = {"A3\Sounds_F\arsenal\sfx\bullet_hits\water_02", 1.41254, 1, 75};
		soundWater3[] = {"A3\Sounds_F\arsenal\sfx\bullet_hits\water_03", 1.41254, 1, 75};
		soundWater4[] = {"A3\Sounds_F\arsenal\sfx\bullet_hits\water_04", 1.41254, 1, 75};
		soundWater5[] = {"A3\Sounds_F\arsenal\sfx\bullet_hits\water_05", 1.41254, 1, 75};
		soundWater6[] = {"A3\Sounds_F\arsenal\sfx\bullet_hits\water_06", 1.41254, 1, 75};
		soundWater7[] = {"A3\Sounds_F\arsenal\sfx\bullet_hits\water_07", 1.41254, 1, 75};
		soundWater8[] = {"A3\Sounds_F\arsenal\sfx\bullet_hits\water_08", 1.41254, 1, 75};
		soundWood1[] = {"A3\Sounds_F\arsenal\sfx\bullet_hits\wood_01", 2.81838, 1, 75};
		soundWood10[] = {"A3\Sounds_F_Enoch\Assets\Arsenal\Bullet_Impacts\Impact_Wood_02", 0.501187, 1, 75};
		soundWood11[] = {"A3\Sounds_F_Enoch\Assets\Arsenal\Bullet_Impacts\Impact_Wood_03", 0.501187, 1, 75};
		soundWood12[] = {"A3\Sounds_F_Enoch\Assets\Arsenal\Bullet_Impacts\Impact_Wood_04", 1.77828, 1, 75};
		soundWood13[] = {"A3\Sounds_F_Enoch\Assets\Arsenal\Bullet_Impacts\Impact_Wood_05", 1.41254, 1, 75};
		soundWood14[] = {"A3\Sounds_F_Enoch\Assets\Arsenal\Bullet_Impacts\Impact_Wood_18", 2.23872, 0.8, 75};
		soundWood15[] = {"A3\Sounds_F_Enoch\Assets\Arsenal\Bullet_Impacts\Impact_Wood_19", 2.23872, 0.8, 75};
		soundWood16[] = {"A3\Sounds_F_Enoch\Assets\Arsenal\Bullet_Impacts\Impact_Wood_20", 2.23872, 0.8, 75};
		soundWood17[] = {"A3\Sounds_F_Enoch\Assets\Arsenal\Bullet_Impacts\Impact_Wood_09", 2.81838, 1, 75};
		soundWood18[] = {"A3\Sounds_F_Enoch\Assets\Arsenal\Bullet_Impacts\Impact_Wood_10", 2.81838, 1, 75};
		soundWood19[] = {"A3\Sounds_F_Enoch\Assets\Arsenal\Bullet_Impacts\Impact_Wood_11", 2.81838, 1, 75};
		soundWood2[] = {"A3\Sounds_F\arsenal\sfx\bullet_hits\wood_02", 2.81838, 1, 75};
		soundWood20[] = {"A3\Sounds_F_Enoch\Assets\Arsenal\Bullet_Impacts\Impact_Wood_12", 2.81838, 1, 90};
		soundWood21[] = {"A3\Sounds_F_Enoch\Assets\Arsenal\Bullet_Impacts\Impact_Wood_13", 2.81838, 1, 75};
		soundWood22[] = {"A3\Sounds_F_Enoch\Assets\Arsenal\Bullet_Impacts\Impact_Wood_14", 2.81838, 1, 75};
		soundWood23[] = {"A3\Sounds_F_Enoch\Assets\Arsenal\Bullet_Impacts\Impact_Wood_15", 2.81838, 1, 87};
		soundWood24[] = {"A3\Sounds_F_Enoch\Assets\Arsenal\Bullet_Impacts\Impact_Wood_16", 2.81838, 1, 75};
		soundWood25[] = {"A3\Sounds_F_Enoch\Assets\Arsenal\Bullet_Impacts\Impact_Wood_17", 2.81838, 1, 75};
		soundWood26[] = {"A3\Sounds_F_Enoch\Assets\Arsenal\Bullet_Impacts\Impact_Wood_18", 2.81838, 1, 85};
		soundWood27[] = {"A3\Sounds_F_Enoch\Assets\Arsenal\Bullet_Impacts\Impact_Wood_19", 2.81838, 1, 75};
		soundWood28[] = {"A3\Sounds_F_Enoch\Assets\Arsenal\Bullet_Impacts\Impact_Wood_20", 2.81838, 1, 75};
		soundWood29[] = {"A3\Sounds_F_Enoch\Assets\Arsenal\Bullet_Impacts\Impact_Wood_21", 2.81838, 1, 75};
		soundWood3[] = {"A3\Sounds_F\arsenal\sfx\bullet_hits\wood_03", 2.81838, 1, 75};
		soundWood30[] = {"A3\Sounds_F_Enoch\Assets\Arsenal\Bullet_Impacts\Impact_Wood_22", 2.81838, 1, 75};
		soundWood31[] = {"A3\Sounds_F_Enoch\Assets\Arsenal\Bullet_Impacts\Impact_Wood_23", 0.501187, 1, 75};
		soundWood32[] = {"A3\Sounds_F_Enoch\Assets\Arsenal\Bullet_Impacts\Impact_Wood_24", 0.501187, 1, 75};
		soundWood33[] = {"A3\Sounds_F_Enoch\Assets\Arsenal\Bullet_Impacts\Impact_Wood_25", 0.501187, 1, 75};
		soundWood34[] = {"A3\Sounds_F_Enoch\Assets\Arsenal\Bullet_Impacts\Impact_Wood_26", 0.501187, 1, 75};
		soundWood35[] = {"A3\Sounds_F_Enoch\Assets\Arsenal\Bullet_Impacts\Impact_Wood_27", 2.81838, 1, 75};
		soundWood36[] = {"A3\Sounds_F_Enoch\Assets\Arsenal\Bullet_Impacts\Impact_Wood_28", 2.81838, 1, 75};
		soundWood37[] = {"A3\Sounds_F_Enoch\Assets\Arsenal\Bullet_Impacts\Impact_Wood_29", 2.81838, 1, 75};
		soundWood38[] = {"A3\Sounds_F_Enoch\Assets\Arsenal\Bullet_Impacts\Impact_Wood_30", 2.81838, 1, 75};
		soundWood39[] = {"A3\Sounds_F_Enoch\Assets\Arsenal\Bullet_Impacts\Impact_Wood_31", 2.81838, 1, 75};
		soundWood4[] = {"A3\Sounds_F\arsenal\sfx\bullet_hits\wood_04", 2.81838, 1, 75};
		soundWood40[] = {"A3\Sounds_F_Enoch\Assets\Arsenal\Bullet_Impacts\Impact_Wood_32", 2.81838, 1, 75};
		soundWood41[] = {"A3\Sounds_F_Enoch\Assets\Arsenal\Bullet_Impacts\Impact_Wood_33", 2.81838, 1, 90};
		soundWood42[] = {"A3\Sounds_F_Enoch\Assets\Arsenal\Bullet_Impacts\Impact_Wood_34", 2.81838, 1, 75};
		soundWood43[] = {"A3\Sounds_F_Enoch\Assets\Arsenal\Bullet_Impacts\Impact_Wood_35", 2.81838, 1, 95};
		soundWood44[] = {"A3\Sounds_F_Enoch\Assets\Arsenal\Bullet_Impacts\Impact_Wood_36", 2.81838, 1, 75};
		soundWood45[] = {"A3\Sounds_F_Enoch\Assets\Arsenal\Bullet_Impacts\Impact_Wood_37", 2.81838, 1, 75};
		soundWood46[] = {"A3\Sounds_F_Enoch\Assets\Arsenal\Bullet_Impacts\Impact_Wood_38", 1.77828, 1, 75};
		soundWood47[] = {"A3\Sounds_F_Enoch\Assets\Arsenal\Bullet_Impacts\Impact_Wood_39", 1.77828, 1, 75};
		soundWood48[] = {"A3\Sounds_F_Enoch\Assets\Arsenal\Bullet_Impacts\Impact_Wood_40", 2.81838, 1, 75};
		soundWood49[] = {"A3\Sounds_F_Enoch\Assets\Arsenal\Bullet_Impacts\Impact_Wood_41", 2.81838, 1, 76};
		soundWood5[] = {"A3\Sounds_F\arsenal\sfx\bullet_hits\wood_05", 2.81838, 1, 75};
		soundWood50[] = {"A3\Sounds_F_Enoch\Assets\Arsenal\Bullet_Impacts\Impact_Wood_42", 2.81838, 1, 75};
		soundWood51[] = {"A3\Sounds_F_Enoch\Assets\Arsenal\Bullet_Impacts\Ricochet_Generic_Distant_01", 2.81838, 1, 75};
		soundWood52[] = {"A3\Sounds_F_Enoch\Assets\Arsenal\Bullet_Impacts\Ricochet_Generic_Distant_02", 2.81838, 1, 93};
		soundWood53[] = {"A3\Sounds_F_Enoch\Assets\Arsenal\Bullet_Impacts\Ricochet_Generic_Distant_03", 2.81838, 1, 75};
		soundWood54[] = {"A3\Sounds_F_Enoch\Assets\Arsenal\Bullet_Impacts\Ricochet_Generic_Distant_04", 2.81838, 1, 75};
		soundWood55[] = {"A3\Sounds_F_Enoch\Assets\Arsenal\Bullet_Impacts\Ricochet_Generic_Distant_05", 2.81838, 1, 95};
		soundWood56[] = {"A3\Sounds_F_Enoch\Assets\Arsenal\Bullet_Impacts\Ricochet_Generic_Distant_06", 2.81838, 1, 75};
		soundWood58[] = {"A3\Sounds_F_Enoch\Assets\Arsenal\Bullet_Impacts\Ricochet_Generic_Distant_08", 2.81838, 1, 75};
		soundWood59[] = {"A3\Sounds_F_Enoch\Assets\Arsenal\Bullet_Impacts\Ricochet_Generic_Distant_09", 2.81838, 1, 75};
		soundWood6[] = {"A3\Sounds_F\arsenal\sfx\bullet_hits\wood_06", 2.81838, 1, 75};
		soundWood60[] = {"A3\Sounds_F_Enoch\Assets\Arsenal\Bullet_Impacts\Ricochet_Generic_Distant_10", 2.81838, 1, 75};
		soundWood62[] = {"A3\Sounds_F_Enoch\Assets\Arsenal\Bullet_Impacts\Ricochet_Generic_Distant_12", 2.81838, 1, 91};
		soundWood63[] = {"A3\Sounds_F_Enoch\Assets\Arsenal\Bullet_Impacts\Ricochet_Generic_Distant_13", 2.81838, 1, 75};
		soundWood64[] = {"A3\Sounds_F_Enoch\Assets\Arsenal\Bullet_Impacts\Ricochet_Generic_Distant_14", 2.81838, 1, 75};
		soundWood65[] = {"A3\Sounds_F_Enoch\Assets\Arsenal\Bullet_Impacts\Ricochet_Generic_Distant_15", 2.81838, 1, 75};
		soundWood66[] = {"A3\Sounds_F_Enoch\Assets\Arsenal\Bullet_Impacts\Ricochet_Generic_Distant_16", 2.81838, 1, 89};
		soundWood67[] = {"A3\Sounds_F_Enoch\Assets\Arsenal\Bullet_Impacts\Ricochet_Generic_Distant_17", 2.81838, 1, 75};
		soundWood68[] = {"A3\Sounds_F_Enoch\Assets\Arsenal\Bullet_Impacts\Ricochet_Generic_Distant_18", 2.81838, 1, 75};
		soundWood69[] = {"A3\Sounds_F_Enoch\Assets\Arsenal\Bullet_Impacts\Ricochet_Generic_Distant_19", 2.81838, 1, 75};
		soundWood7[] = {"A3\Sounds_F\arsenal\sfx\bullet_hits\wood_07", 2.81838, 1, 75};
		soundWood70[] = {"A3\Sounds_F_Enoch\Assets\Arsenal\Bullet_Impacts\Ricochet_Generic_01", 2.81838, 1, 89};
		soundWood72[] = {"A3\Sounds_F_Enoch\Assets\Arsenal\Bullet_Impacts\Ricochet_Generic_03", 2.81838, 1, 75};
		soundWood74[] = {"A3\Sounds_F_Enoch\Assets\Arsenal\Bullet_Impacts\Ricochet_Generic_05", 2.81838, 1, 75};
		soundWood75[] = {"A3\Sounds_F_Enoch\Assets\Arsenal\Bullet_Impacts\Ricochet_Generic_06", 2.81838, 1, 85};
		soundWood76[] = {"A3\Sounds_F_Enoch\Assets\Arsenal\Bullet_Impacts\Ricochet_Generic_07", 2.81838, 1, 75};
		soundWood77[] = {"A3\Sounds_F_Enoch\Assets\Arsenal\Bullet_Impacts\Ricochet_Generic_08", 2.81838, 1, 75};
		soundWood78[] = {"A3\Sounds_F_Enoch\Assets\Arsenal\Bullet_Impacts\Ricochet_Generic_09", 1.41254, 1, 75};
		soundWood79[] = {"A3\Sounds_F_Enoch\Assets\Arsenal\Bullet_Impacts\Ricochet_Generic_10", 1.41254, 1, 75};
		soundWood8[] = {"A3\Sounds_F\arsenal\sfx\bullet_hits\wood_08", 2.81838, 1, 75};
		soundWood80[] = {"A3\Sounds_F_Enoch\Assets\Arsenal\Bullet_Impacts\Ricochet_Generic_11", 2.81838, 1, 75};
		soundWood81[] = {"A3\Sounds_F_Enoch\Assets\Arsenal\Bullet_Impacts\Ricochet_Generic_12", 2.81838, 1, 99};
		soundWood82[] = {"A3\Sounds_F_Enoch\Assets\Arsenal\Bullet_Impacts\Ricochet_Generic_13", 2.81838, 1, 75};
		soundWood83[] = {"A3\Sounds_F_Enoch\Assets\Arsenal\Bullet_Impacts\Ricochet_Generic_14", 2.81838, 1, 75};
		soundWood9[] = {"A3\Sounds_F_Enoch\Assets\Arsenal\Bullet_Impacts\Impact_Wood_01", 0.501187, 1, 75};
		supersonicCrackFar[] = {"A3\sounds_f\arsenal\sfx\supersonic_crack\scrack_middle", 3.16228, 1, 200};
		supersonicCrackNear[] = {"A3\sounds_f\arsenal\sfx\supersonic_crack\scrack_close", 3.16228, 1, 200};
		suppressionRadiusBulletClose = 2;
		suppressionRadiusHit = 4;
		timeToLive = 6;
		tracerStartTime = -1;
		visibleFire = 3;
		visibleFireTime = 2;
		waterEffectOffset = 0.8;
		class CamShakeExplode
		{
			distance = 5.19615;
			duration = 0.4;
			frequency = 20;
			power = 1.73205;
		};
		class CamShakeFire
		{
			distance = 0;
			duration = 0;
			frequency = 0;
			power = 0;
		};
		class CamShakeHit
		{
			distance = 1;
			duration = 0.2;
			frequency = 20;
			power = 3;
		};
		class CamShakePlayerFire
		{
			distance = 0;
			duration = 0;
			frequency = 0;
			power = 0;
		};
		class HitEffects
		{
			Hit_Foliage_Dead = "ImpactLeavesDead";
			Hit_Foliage_green = "ImpactLeavesGreen";
			Hit_Foliage_Green_big = "ImpactLeavesGreenBig";
			Hit_Foliage_Palm = "ImpactLeavesPalm";
			Hit_Foliage_Pine = "ImpactLeavesPine";
			hitAlienArmour = "ImpactAlienArmour";
			hitAlienMatterBall_01 = "ImpactEffectsRed";
			hitAlienWeakPoint_01 = "ImpactAlienWeakPoint_01";
			hitBuilding = "ImpactPlaster";
			hitConcrete = "ImpactConcrete";
			hitFoliage = "ImpactLeaves";
			hitGlass = "ImpactGlass";
			hitGlassArmored = "ImpactGlassThin";
			hitGroundHard = "ImpactEffectsHardGround";
			hitGroundRed = "ImpactEffectsRed";
			hitGroundSoft = "ImpactEffectsSmall";
			hitHay = "ImpactHay";
			hitMan = "ImpactEffectsBlood";
			hitMetal = "ImpactMetal";
			hitMetalPlate = "ImpactMetal";
			hitPlastic = "ImpactPlastic";
			hitProbeCoreShell = "ImpactProbeCoreShell";
			hitProbeTipCore = "ImpactProbeTipCore";
			hitProbeTipShell = "ImpactProbeTipShell";
			hitRubber = "ImpactRubber";
			hitTyre = "ImpactTyre";
			hitVirtual = "ImpactMetal";
			hitWater = "ImpactEffectsWater";
			hitWood = "ImpactWood";
		};
		class SuperSonicCrack
		{
			superSonicCrack[] = {"A3\sounds_f\arsenal\sfx\supersonic_crack\sc_meadow1", 3.16228, 1, 200};
			class SCrackForest
			{
				frequency = "((speed factor [330, 930]) * 0.1) + 1.05";
				range[] = {0, 500};
				sound1[] = {"A3\sounds_f\arsenal\sfx\supersonic_crack\sc_forest1", 1, 1, 500};
				sound2[] = {"A3\sounds_f\arsenal\sfx\supersonic_crack\sc_forest2", 1, 1, 500};
				sound3[] = {"A3\sounds_f\arsenal\sfx\supersonic_crack\sc_forest3", 1, 1, 500};
				sounds[] = {"sound1", 0.333, "sound2", 0.333, "sound3", 0.333};
				trigger = "forest";
			};
			class SCrackHouses
			{
				frequency = "((speed factor [330, 930]) * 0.1) + 1.05";
				range[] = {0, 500};
				sound1[] = {"A3\sounds_f\arsenal\sfx\supersonic_crack\sc_houses1", 1, 1, 500};
				sound2[] = {"A3\sounds_f\arsenal\sfx\supersonic_crack\sc_houses2", 1, 1, 500};
				sound3[] = {"A3\sounds_f\arsenal\sfx\supersonic_crack\sc_houses3", 1, 1, 500};
				sounds[] = {"sound1", 0.333, "sound2", 0.333, "sound3", 0.333};
				trigger = "houses max interior";
			};
			class SCrackMeadow
			{
				frequency = "((speed factor [330, 930]) * 0.1) + 1.05";
				range[] = {0, 500};
				sound1[] = {"A3\sounds_f\arsenal\sfx\supersonic_crack\sc_meadow1", 1, 1, 500};
				sound2[] = {"A3\sounds_f\arsenal\sfx\supersonic_crack\sc_meadow2", 1, 1, 500};
				sound3[] = {"A3\sounds_f\arsenal\sfx\supersonic_crack\sc_meadow3", 1, 1, 500};
				sounds[] = {"sound1", 0.333, "sound2", 0.333, "sound3", 0.333};
				trigger = "meadow max sea";
			};
			class SCrackTrees
			{
				frequency = "((speed factor [330, 930]) * 0.1) + 1.05";
				range[] = {0, 500};
				sound1[] = {"A3\sounds_f\arsenal\sfx\supersonic_crack\sc_trees1", 1, 1, 500};
				sound2[] = {"A3\sounds_f\arsenal\sfx\supersonic_crack\sc_trees2", 1, 1, 500};
				sound3[] = {"A3\sounds_f\arsenal\sfx\supersonic_crack\sc_trees3", 1, 1, 500};
				sounds[] = {"sound1", 0.333, "sound2", 0.333, "sound3", 0.333};
				trigger = "trees";
			};
		};
	};
	class BulletCore: Default
	{
		audibleFire = 16;
		cost = 0.7;
		explosive = 0;
		hitArmor[] = {"soundHitArmor1", 0.7, "soundHitArmor2", 0.3};
		hitBuilding[] = {"soundHitBuilding1", 0.5, "soundHitBuilding2", 0.5};
		hitGround[] = {"soundHit1", 0.33, "soundHit2", 0.33, "soundHit3", 0.33};
		hitMan[] = {"soundHitMan1", 0.5, "soundHitMan2", 0.5};
		simulation = "shotBullet";
		simulationStep = 0.05;
		soundFly[] = {"", 0.251189, 0.7};
		soundHit1[] = {"", 0.0316228, 1};
		soundHit2[] = {"", 0.0316228, 1};
		soundHit3[] = {"", 0.0316228, 1};
		soundHitArmor1[] = {"", 0.0316228, 1};
		soundHitArmor2[] = {"", 0.0316228, 1};
		soundHitBuilding1[] = {"", 0.0316228, 1};
		soundHitBuilding2[] = {"", 0.0316228, 1};
		soundHitMan1[] = {"", 0.0125893, 1};
		soundHitMan2[] = {"", 0.0125893, 1};
		timeToLive = 3;
		visibleFire = 16;
		visibleFireTime = 3;
	};
	class Cannon_30mm_HE_Plane_CAS_02_F: Gatling_30mm_HE_Plane_CAS_01_F
	{
		caliber = 3;
		explosive = 0.6;
		hit = 150;
		indirectHit = 4;
		indirectHitRange = 4;
		missileLockMaxDistance = 1000;
		missileLockMinDistance = 350;
		model = "\A3\Weapons_f\Data\bullettracer\tracer_green.p3d";
	};
	class Chemlight_base: SmokeShell
	{
		aiAmmoUsageFlags = "2 + 1";
		grenadeBurningSound[] = {};
		grenadeFireSound[] = {};
		timeToLive = 900;
	};
	class Chemlight_blue: Chemlight_base
	{
		effectsSmoke = "ChemlightLight_blue";
		model = "\A3\Weapons_f\chemlight\chemlight_blue_lit";
	};
	class Chemlight_blue_Contact: Chemlight_blue
	{
		explosionTime = 0.01;
		timeToLive = 180;
	};
	class Chemlight_blue_Infinite: Chemlight_blue
	{
		timeToLive = 1e+010;
	};
	class Chemlight_green: Chemlight_base
	{
		effectsSmoke = "ChemlightLight_green";
		model = "\A3\Weapons_f\chemlight\chemlight_green_lit";
		typicalspeed = 14;
	};
	class Chemlight_green_Infinite: Chemlight_green
	{
		timeToLive = 1e+010;
	};
	class Chemlight_red: Chemlight_base
	{
		effectsSmoke = "ChemlightLight_red";
		model = "\A3\Weapons_f\chemlight\chemlight_red_lit";
	};
	class Chemlight_red_Infinite: Chemlight_red
	{
		timeToLive = 1e+010;
	};
	class Chemlight_yellow: Chemlight_base
	{
		effectsSmoke = "ChemlightLight_yellow";
		model = "\A3\Weapons_f\chemlight\chemlight_yellow_lit";
	};
	class Chemlight_yellow_Infinite: Chemlight_yellow
	{
		timeToLive = 1e+010;
	};
	class ClaymoreDirectionalMine_Remote_Ammo: DirectionalBombBase
	{
		cost = 400;
		CraterEffects = "";
		craterShape = "\A3\weapons_f\empty.p3d";
		defaultMagazine = "ClaymoreDirectionalMine_Remote_Mag";
		explosionAngle = 60;
		explosionEffects = "DirectionalMineExplosion";
		hit = 40;
		indirectHit = 40;
		indirectHitRange = 30;
		mineInconspicuousness = 20;
		mineModelDisabled = "\A3\Weapons_F\explosives\mine_AP_miniclaymore_d";
		mineTrigger = "RemoteTrigger";
		model = "\A3\Weapons_F\explosives\mine_AP_miniclaymore";
		soundActivation[] = {"A3\Sounds_F_Orange\arsenal\explosives\Handling\Claymore_Placement_01", 2.81838, 1, 20};
		soundDeactivation[] = {"A3\Sounds_F_Orange\arsenal\explosives\Handling\Claymore_Deactivate_01", 2.81838, 1, 20};
		soundHit[] = {"A3\Sounds_F\arsenal\explosives\mines\Explosion_claymore", 2.23872, 1, 1500};
		SoundSetExplosion[] = {"ClaymoreMine_Exp_SoundSet", "ClaymoreMine_Tail_SoundSet", "Explosion_Debris_SoundSet"};
		soundTrigger[] = {"A3\Sounds_F_Orange\arsenal\explosives\Handling\Claymore_TouchOff_01", 1, 1, 20};
		whistleDist = 100;
	};
	class ClaymoreDirectionalMine_Remote_Ammo_Scripted: ClaymoreDirectionalMine_Remote_Ammo {};
	class Cluster_155mm_AMOS: SubmunitionBase
	{
		airFriction = 0;
		cost = 200;
		hit = 300;
		multiSoundHit[] = {"soundHit1", 0.125, "soundHit2", 0.125, "soundHit3", 0.125, "soundHit4", 0.125, "soundHit5", 0.125, "soundHit6", 0.125, "soundHit7", 0.125, "soundHit8", 0.125};
		muzzleEffect = "";
		soundHit1[] = {"A3\Sounds_F\arsenal\explosives\shells\Artillery_shell_explosion_01", 1.77828, 1, 2000};
		soundHit2[] = {"A3\Sounds_F\arsenal\explosives\shells\Artillery_shell_explosion_02", 1.77828, 1, 2000};
		soundHit3[] = {"A3\Sounds_F\arsenal\explosives\shells\Artillery_shell_explosion_03", 1.77828, 1, 2000};
		soundHit4[] = {"A3\Sounds_F\arsenal\explosives\shells\Artillery_shell_explosion_04", 1.77828, 1, 2000};
		soundHit5[] = {"A3\Sounds_F\arsenal\explosives\shells\Artillery_shell_explosion_05", 1.77828, 1, 2000};
		soundHit6[] = {"A3\Sounds_F\arsenal\explosives\shells\Artillery_shell_explosion_06", 1.77828, 1, 2000};
		soundHit7[] = {"A3\Sounds_F\arsenal\explosives\shells\Artillery_shell_explosion_07", 1.77828, 1, 2000};
		soundHit8[] = {"A3\Sounds_F\arsenal\explosives\shells\Artillery_shell_explosion_08", 1.77828, 1, 2000};
		SoundSetExplosion[] = {"GrenadeHe_Exp_SoundSet", "GrenadeHe_Tail_SoundSet", "Explosion_Debris_SoundSet"};
		submunitionAmmo[] = {"Mo_cluster_AP", 0.93, "Mo_cluster_AP_UXO_deploy", 0.07};
		submunitionConeAngle = 15;
		submunitionConeType[] = {"randomcenter", 35};
		triggerDistance = 200;
		triggerSpeedCoef[] = {0.5, 1};
		class CamShakeFire
		{
			distance = 99.5992;
			duration = 2.4;
			frequency = 20;
			power = 3.52844;
		};
		class CamShakePlayerFire
		{
			distance = 1;
			duration = 0.1;
			frequency = 20;
			power = 0.02;
		};
	};
	class CM_AntiMissile_Ammo: CM_Base_Ammo
	{
		effectsSmoke = "CounterMeasureSmokeGrenade";
		maneuvrability = 15;
		maxControlRange = 1500;
		maxSpeed = 300;
		model = "\A3\Weapons_f\ammo\Missile_AT_02_F";
		timeToLive = 15;
		weaponLockSystem = 0;
	};
	class CM_Base_Ammo: CMflareAmmo
	{
		aiAmmoUsageFlags = 8;
		airFriction = -0.01;
		effectsSmoke = "CounterMeasureSmokeGrenade2";
		hit = 1;
		indirectHit = 0;
		indirectHitRange = 0;
		initTime = 0;
		maxControlRange = -1;
		model = "\A3\Weapons_f\ammo\smokegrenade_white";
		simulation = "shotCM";
		thrustTime = 32;
		timeToLive = 55;
		weaponLockSystem = 2;
	};
	class CM_Decoy_Ammo: CM_Base_Ammo
	{
		airFriction = 0.005;
		effectsSmoke = "CounterMeasureRefract";
		model = "\a3\Air_F_Contact\Heli_CM_01\Heli_CM_01_F";
		weaponLockSystem = "2 + 8 + 1";
	};
	class CM_GravityBurst_Ammo: CM_Base_Ammo
	{
		airFriction = 0.005;
		effectsSmoke = "GravityBurst_Stage_01";
		model = "\A3\Weapons_f\empty";
		sideAirFriction = 0.03;
		thrustTime = 12;
		timeToLive = 8;
		weaponLockSystem = "2 + 8 + 1";
	};
	class CM_GravityBurst_Debris: BulletBase
	{
		hit = 1;
		indirectHit = 0.1;
		indirectHitRange = 0.5;
		soundSetBulletFly[] = {"Debris_FlyBy_SoundSet"};
		soundSetSonicCrack[] = {};
		timetolive = 5;
		class CamShakeExplode
		{
			distance = 50.8712;
			duration = 0.8;
			frequency = 20;
			power = 3.8;
		};
		class CamShakeFire
		{
			distance = 34.8712;
			duration = 0.8;
			frequency = 20;
			power = 2.0878;
		};
		class CamShakeHit
		{
			distance = 1;
			duration = 0.4;
			frequency = 20;
			power = 19;
		};
		class CamShakePlayerFire
		{
			distance = 1;
			duration = 0.1;
			frequency = 20;
			power = 0.01;
		};
	};
	class CM_GravityBurst_Hit: MissileBase
	{
		CraterEffects = "";
		explosionEffects = "";
		explosive = 1;
		hit = 1;
		Hit01[] = {"A3\Sounds_F_Contact\Assets\Arsenal\Drone_01\GravityWeapons\Gravity_Burst\Gravity_Burst_Particle_Player_Hit_01", 1, 1, 25};
		Hit02[] = {"A3\Sounds_F_Contact\Assets\Arsenal\Drone_01\GravityWeapons\Gravity_Burst\Gravity_Burst_Particle_Player_Hit_02", 1, 1, 25};
		Hit03[] = {"A3\Sounds_F_Contact\Assets\Arsenal\Drone_01\GravityWeapons\Gravity_Burst\Gravity_Burst_Particle_Player_Hit_03", 1, 1, 25};
		Hit04[] = {"A3\Sounds_F_Contact\Assets\Arsenal\Drone_01\GravityWeapons\Gravity_Burst\Gravity_Burst_Particle_Player_Hit_04", 1, 1, 25};
		Hit05[] = {"A3\Sounds_F_Contact\Assets\Arsenal\Drone_01\GravityWeapons\Gravity_Burst\Gravity_Burst_Particle_Player_Hit_05", 1, 1, 25};
		Hit06[] = {"A3\Sounds_F_Contact\Assets\Arsenal\Drone_01\GravityWeapons\Gravity_Burst\Gravity_Burst_Particle_Player_Hit_06", 1, 1, 25};
		Hit07[] = {"A3\Sounds_F_Contact\Assets\Arsenal\Drone_01\GravityWeapons\Gravity_Burst\Gravity_Burst_Particle_Player_Hit_07", 1, 1, 25};
		Hit08[] = {"A3\Sounds_F_Contact\Assets\Arsenal\Drone_01\GravityWeapons\Gravity_Burst\Gravity_Burst_Particle_Player_Hit_08", 1, 1, 25};
		Hit09[] = {"A3\Sounds_F_Contact\Assets\Arsenal\Drone_01\GravityWeapons\Gravity_Burst\Gravity_Burst_Particle_Player_Hit_09", 1, 1, 25};
		Hit10[] = {"A3\Sounds_F_Contact\Assets\Arsenal\Drone_01\GravityWeapons\Gravity_Burst\Gravity_Burst_Particle_Player_Hit_10", 1, 1, 25};
		Hit11[] = {"A3\Sounds_F_Contact\Assets\Arsenal\Drone_01\GravityWeapons\Gravity_Burst\Gravity_Burst_Particle_Player_Hit_11", 1, 1, 25};
		Hit12[] = {"A3\Sounds_F_Contact\Assets\Arsenal\Drone_01\GravityWeapons\Gravity_Burst\Gravity_Burst_Particle_Player_Hit_12", 1, 1, 25};
		Hit13[] = {"A3\Sounds_F_Contact\Assets\Arsenal\Drone_01\GravityWeapons\Gravity_Burst\Gravity_Burst_Particle_Player_Hit_13", 1, 1, 25};
		Hit14[] = {"A3\Sounds_F_Contact\Assets\Arsenal\Drone_01\GravityWeapons\Gravity_Burst\Gravity_Burst_Particle_Player_Hit_14", 1, 1, 25};
		Hit15[] = {"A3\Sounds_F_Contact\Assets\Arsenal\Drone_01\GravityWeapons\Gravity_Burst\Gravity_Burst_Particle_Player_Hit_15", 1, 1, 25};
		Hit16[] = {"A3\Sounds_F_Contact\Assets\Arsenal\Drone_01\GravityWeapons\Gravity_Burst\Gravity_Burst_Particle_Player_Hit_16", 1, 1, 25};
		Hit17[] = {"A3\Sounds_F_Contact\Assets\Arsenal\Drone_01\GravityWeapons\Gravity_Burst\Gravity_Burst_Particle_Player_Hit_17", 1, 1, 25};
		Hit18[] = {"A3\Sounds_F_Contact\Assets\Arsenal\Drone_01\GravityWeapons\Gravity_Burst\Gravity_Burst_Particle_Player_Hit_18", 1, 1, 25};
		Hit19[] = {"A3\Sounds_F_Contact\Assets\Arsenal\Drone_01\GravityWeapons\Gravity_Burst\Gravity_Burst_Particle_Player_Hit_16", 1, 0.95, 25};
		Hit20[] = {"A3\Sounds_F_Contact\Assets\Arsenal\Drone_01\GravityWeapons\Gravity_Burst\Gravity_Burst_Particle_Player_Hit_17", 1, 0.95, 25};
		indirectHit = 1.1;
		indirectHitRange = 0.5;
		model = "\A3\weapons_f\launchers\RPG32\pg32v_rocket.p3d";
		multiSoundHit[] = {"Hit01", 0.05, "Hit02", 0.05, "Hit03", 0.05, "Hit04", 0.05, "Hit05", 0.05, "Hit06", 0.05, "Hit07", 0.05, "Hit08", 0.05, "Hit09", 0.05, "Hit10", 0.05, "Hit11", 0.05, "Hit12", 0.05, "Hit13", 0.05, "Hit14", 0.05, "Hit15", 0.05, "Hit16", 0.05, "Hit17", 0.05, "Hit18", 0.05, "Hit19", 0.05, "Hit20", 0.05};
		soundSetBulletFly[] = {};
		soundSetExplosion[] = {};
		soundSetSonicCrack[] = {};
		class CamShakeExplode
		{
			distance = 50.8712;
			duration = 0.8;
			frequency = 20;
			power = 3.8;
		};
		class CamShakeFire
		{
			distance = 34.8712;
			duration = 0.8;
			frequency = 20;
			power = 2.0878;
		};
		class CamShakeHit
		{
			distance = 1;
			duration = 0.4;
			frequency = 20;
			power = 19;
		};
		class CamShakePlayerFire
		{
			distance = 1;
			duration = 0.1;
			frequency = 20;
			power = 0.01;
		};
	};
	class CM_GrenadeDefence_Ammo: CM_Base_Ammo
	{
		airFriction = 0.005;
		effectsSmoke = "";
		model = "\A3\Weapons_f\empty";
		sideAirFriction = 0.03;
		thrustTime = 0;
		timeToLive = 0.05;
		weaponLockSystem = 0;
	};
	class CM_Light_Ammo: CM_Base_Ammo
	{
		effectsSmoke = "CounterMeasureLight";
		weaponLockSystem = 1;
	};
	class CM_Light_Fake_Ammo: CM_Base_Ammo
	{
		effectsSmoke = "";
		model = "\A3\Weapons_f\empty";
		weaponLockSystem = 1;
	};
	class CM_Refract_Ammo: CM_Base_Ammo
	{
		airFriction = 0.005;
		effectsSmoke = "CounterMeasureRefract";
		model = "\A3\Weapons_f\empty";
		sideAirFriction = 0.03;
		thrustTime = 12;
		timeToLive = 15;
		weaponLockSystem = "2 + 8 + 1";
	};
	class CM_Smoke_Ammo: CM_Base_Ammo
	{
		effectsSmoke = "CounterMeasureSmokeGrenade";
		weaponLockSystem = 1;
	};
	class CM_SmokeExp_Ammo: CM_Base_Ammo
	{
		effectsSmoke = "CounterMeasureSmokeGrenade";
		weaponLockSystem = 1;
	};
	class CM_Universal_Ammo: CM_Base_Ammo
	{
		effectsSmoke = "CounterMeasureChaff";
		weaponLockSystem = "2 + 8 + 1 + 16 + 4";
	};
	class CM_Visual_Ammo: CM_Base_Ammo
	{
		effectsSmoke = "CounterMeasureFlareAlien";
		weaponLockSystem = 1;
	};
	class CMflare_Chaff_Ammo: CMflareAmmo
	{
		effectsSmoke = "CounterMeasureChaff";
		weaponLockSystem = "2 + 8";
	};
	class CMflareAmmo: BulletBase
	{
		aiAmmoUsageFlags = 8;
		airFriction = -0.01;
		effectsSmoke = "CounterMeasureFlare";
		hit = 1;
		indirectHit = 0;
		indirectHitRange = 0;
		initTime = 0;
		maxControlRange = -1;
		model = "\A3\weapons_f\empty";
		simulation = "shotCM";
		thrustTime = 4;
		timeToLive = 15;
		weaponLockSystem = 2;
	};
	class Default
	{
		access = 3;
		airFriction = -0.0005;
		airLock = 0;
		animated = 0;
		artilleryCharge = 1;
		artilleryDispersion = 1;
		artilleryLock = 0;
		audibleFire = 0;
		autoSeekTarget = 0;
		caliber = 1;
		cartridge = "";
		cmImmunity = 1;
		cost = 0;
		craterEffects = "ImpactEffectsMedium";
		craterShape = "";
		craterWaterEffects = "ImpactEffectsWater";
		dangerRadiusBulletClose = -1;
		dangerRadiusHit = -1;
		deflecting = 0;
		deflectionSlowDown = 0.8;
		directionalExplosion = 0;
		effectFlare = "FlareShell";
		effectFly = "";
		effectsFire = "CannonFire";
		effectsMissile = "ExplosionEffects";
		effectsMissileInit = "";
		effectsSmoke = "SmokeShellWhite";
		explosionAngle = 60;
		explosionDir = "explosionDir";
		explosionEffects = "ExplosionEffects";
		explosionEffectsDir = "explosionDir";
		explosionForceCoef = 1;
		explosionPos = "explosionPos";
		explosionSoundEffect = "";
		explosionTime = 0;
		explosionType = "explosive";
		explosive = 1;
		fuseDistance = 0;
		grenadeBurningSound[] = {};
		grenadeFireSound[] = {};
		hit = 0;
		hitArmor[] = {"soundHit", 1};
		hitBuilding[] = {"soundHit", 1};
		hitConcrete[] = {"soundHit", 1};
		hitDefault[] = {"soundHit", 1};
		hitFoliage[] = {"soundHit", 1};
		hitGlass[] = {"soundHit", 1};
		hitGlassArmored[] = {"soundHit", 1};
		hitGroundHard[] = {"soundHit", 1};
		hitGroundSoft[] = {"soundHit", 1};
		hitIron[] = {"soundHit", 1};
		hitMan[] = {"soundHit", 1};
		hitMetal[] = {"soundHit", 1};
		hitMetalplate[] = {"soundHit", 1};
		hitOnWater = 0;
		hitPlastic[] = {"soundHit", 1};
		hitRubber[] = {"soundHit", 1};
		hitTyre[] = {"soundHit", 1};
		hitWater[] = {"soundHit", 1};
		hitWood[] = {"soundHit", 1};
		icon = "";
		impactArmor[] = {"soundImpact", 1};
		impactBuilding[] = {"soundImpact", 1};
		impactConcrete[] = {"soundImpact", 1};
		impactDefault[] = {"soundImpact", 1};
		impactFoliage[] = {"soundImpact", 1};
		impactGlass[] = {"soundImpact", 1};
		impactGlassArmored[] = {"soundImpact", 1};
		impactGroundHard[] = {"soundImpact", 1};
		impactGroundSoft[] = {"soundImpact", 1};
		impactIron[] = {"soundImpact", 1};
		impactMan[] = {"soundImpact", 1};
		impactMetal[] = {"soundImpact", 1};
		impactMetalplate[] = {"soundImpact", 1};
		impactPlastic[] = {"soundImpact", 1};
		impactRubber[] = {"soundImpact", 1};
		impactTyre[] = {"soundImpact", 1};
		impactWater[] = {"soundImpact", 1};
		impactWood[] = {"soundImpact", 1};
		indirectHit = 0;
		indirectHitRange = 1;
		initTime = 0;
		irLock = 0;
		isCraterOriented = 0;
		laserLock = 0;
		lockSeekRadius = 100;
		lockType = 0;
		maneuvrability = 1;
		manualControl = 0;
		maverickweaponIndexOffset = 0;
		maxControlRange = 350;
		maxSpeed = 0;
		minDamageForCamShakeHit = 0.55;
		mineBoundingDist = 3;
		mineBoundingTime = 3;
		mineDiveSpeed = 1;
		mineFloating = -1;
		mineInconspicuousness = 10;
		mineJumpEffects = "";
		minePlaceDist = 0.5;
		mineTrigger = "RangeTrigger";
		minimumSafeZone = 0.1;
		minTimeToLive = 0;
		missileLockCone = 0;
		model = "";
		nvLock = 0;
		proxyShape = "";
		shadow = 0;
		shootDistraction = -1;
		sideAirFriction = 1;
		simulation = "";
		simulationStep = 0.05;
		soundActivation[] = {};
		soundDeactivation[] = {};
		soundEngine[] = {"", 1, 1};
		soundFakeFall[] = {"soundFall", 1};
		soundFall[] = {"", 1, 1};
		soundFly[] = {"", 1, 1};
		soundHit[] = {"", 1, 1};
		soundImpact[] = {"", 1, 1};
		soundTrigger[] = {};
		submunitionAmmo = "";
		supersonicCrackFar[] = {"", 1, 1};
		supersonicCrackNear[] = {"", 1, 1};
		suppressionRadiusBulletClose = -1;
		suppressionRadiusHit = -1;
		thrust = 210;
		thrustTime = 1.5;
		timeToLive = 10;
		tracerColor[] = {0.7, 0.7, 0.5, 0.04};
		tracerColorR[] = {0.7, 0.7, 0.5, 0.04};
		trackLead = 1;
		trackOversteer = 1;
		typicalSpeed = 900;
		underwaterHitRangeCoef = 1;
		visibleFire = 0;
		visibleFireTime = 0;
		waterEffectOffset = 0.45;
		weaponLockSystem = 0;
		weaponType = "Default";
		whistleDist = 0;
		whistleOnFire = 0;
		class EventHandlers {};
		class HitEffects
		{
			object = "ImpactConcrete";
			vehicle = "ImpactMetal";
		};
		class NVGMarkers {};
	};
	class DemoCharge_Remote_Ammo: PipeBombBase
	{
		CraterEffects = "MineNondirectionalCraterSmall";
		defaultMagazine = "DemoCharge_Remote_Mag";
		ExplosionEffects = "MineNondirectionalExplosionSmall";
		hit = 1000;
		indirectHit = 1000;
		indirectHitRange = 3;
		mineInconspicuousness = 5;
		mineModelDisabled = "\A3\Weapons_F\explosives\c4_charge_small_d";
		mineTrigger = "RemoteTrigger";
		model = "\A3\Weapons_F\explosives\c4_charge_small";
		soundActivation[] = {"A3\Sounds_F_Orange\arsenal\explosives\Handling\ExplosiveCharge_Placement_01", 1.58489, 1, 20};
		soundDeactivation[] = {"A3\Sounds_F_Orange\arsenal\explosives\Handling\ExplosiveCharge_Deactivate_01", 1.58489, 1, 20};
		soundHit[] = {"A3\Sounds_F\arsenal\explosives\bombs\Explosive_Charge", 3.16228, 1, 1500};
		SoundSetExplosion[] = {"ExplosiveCharge_Exp_SoundSet", "ExplosiveCharge_Tail_SoundSet", "Explosion_Debris_SoundSet"};
		soundTrigger[] = {"A3\Sounds_F_Orange\arsenal\explosives\Handling\ExplosiveCharge_TouchOff_01", 1, 1, 20};
		whistleDist = 32;
	};
	class DemoCharge_Remote_Ammo_Scripted: DemoCharge_Remote_Ammo {};
	class DirectionalBombBase: DirectionalBombCore
	{
		craterShape = "\A3\weapons_f\empty.p3d";
		directionalExplosion = 1;
		explosionAngle = 60;
		explosionDir = "explosionDir";
		explosionPos = "explosionPos";
		explosionType = "mine";
		icon = "iconExplosiveAPDirectional";
		mapsize = 1;
		minimumSafeZone = 1;
		simulation = "shotDirectionalBomb";
		soundActivation[] = {"A3\Sounds_F\weapons\mines\electron_activate_mine_1", 0.562341, 1, 30};
		soundDeactivation[] = {"A3\Sounds_F_Orange\arsenal\explosives\Handling\ApersMine_Deactivate_02", 1, 1, 20};
		soundTrigger[] = {"A3\Sounds_F\weapons\mines\electron_trigger_1", 0.562341, 1, 30};
		triggerWhenDestroyed = 1;
		underwaterHitRangeCoef = 0.1;
	};
	class DirectionalBombCore: TimeBombCore
	{
		directionalExplosion = 1;
		explosionAngle = 80;
		hit = 750;
		indirectHit = 750;
		indirectHitRange = 10;
		simulation = "shotDirectionalBomb";
	};
	class F_20mm_Green: F_20mm_White
	{
		lightColor[] = {0.25, 0.5, 0.25, 0};
		model = "\A3\weapons_f\ammo\flare_green";
	};
	class F_20mm_Green_Infinite: F_20mm_Green
	{
		timeToLive = 1e+010;
	};
	class F_20mm_Red: F_20mm_White
	{
		lightColor[] = {0.5, 0.25, 0.25, 0};
		model = "\A3\weapons_f\ammo\flare_red";
	};
	class F_20mm_Red_Infinite: F_20mm_Red
	{
		timeToLive = 1e+010;
	};
	class F_20mm_White: FlareBase
	{
		brightness = 8;
		deflecting = 30;
		flareSize = 3;
		lightColor[] = {0.5, 0.5, 0.5, 0.5};
		model = "\A3\weapons_f\ammo\flare_white";
		size = 1;
		smokeColor[] = {1, 1, 1, 0.5};
		triggerSpeedCoef = 1;
		triggerTime = 3;
		useFlare = 1;
	};
	class F_20mm_White_Infinite: F_20mm_White
	{
		timeToLive = 1e+010;
	};
	class F_20mm_Yellow: F_20mm_White
	{
		lightColor[] = {0.5, 0.5, 0.25, 0};
		model = "\A3\weapons_f\ammo\flare_yellow";
	};
	class F_20mm_Yellow_Infinite: F_20mm_Yellow
	{
		timeToLive = 1e+010;
	};
	class F_40mm_Cir: F_40mm_White
	{
		lightColor[] = {0.5, 0.5, 0.25, 0};
		model = "\A3\Weapons_F\Ammo\UGL_Flare";
	};
	class F_40mm_Cir_Infinite: F_40mm_Cir
	{
		timeToLive = 1e+010;
	};
	class F_40mm_Green: F_40mm_White
	{
		lightColor[] = {0.25, 0.5, 0.25, 0};
		model = "\A3\Weapons_F\Ammo\UGL_Flare";
	};
	class F_40mm_Green_Infinite: F_40mm_Green
	{
		timeToLive = 1e+010;
	};
	class F_40mm_Red: F_40mm_White
	{
		lightColor[] = {0.5, 0.25, 0.25, 0};
		model = "\A3\Weapons_F\Ammo\UGL_Flare";
	};
	class F_40mm_Red_Infinite: F_40mm_Red
	{
		timeToLive = 1e+010;
	};
	class F_40mm_White: FlareBase
	{
		audibleFire = 20;
		brightness = 12;
		deflecting = 30;
		lightColor[] = {0.5, 0.5, 0.5, 0.5};
		model = "\A3\Weapons_F\Ammo\UGL_Flare";
		size = 1;
		smokeColor[] = {1, 1, 1, 0.5};
		triggerSpeedCoef = 1;
		triggerTime = 3;
		useFlare = 1;
	};
	class F_40mm_White_Infinite: F_40mm_White
	{
		timeToLive = 1e+010;
	};
	class F_40mm_Yellow: F_40mm_White
	{
		lightColor[] = {0.5, 0.5, 0.25, 0};
		model = "\A3\Weapons_F\Ammo\UGL_Flare";
	};
	class F_40mm_Yellow_Infinite: F_40mm_Yellow
	{
		timeToLive = 1e+010;
	};
	class F_Signal_Green: FlareBase
	{
		brightness = 12;
		deflecting = 30;
		effectFlare = "CounterMeasureFlare";
		hit = 0;
		lightColor[] = {0.25, 0.5, 0.25, 0};
		model = "\A3\Weapons_f\empty";
		size = 1;
		smokeColor[] = {1, 1, 1, 0.5};
		timeToLive = 10;
		triggerSpeedCoef = 1;
		triggerTime = 0.5;
		useFlare = 1;
	};
	class F_Signal_Red: F_Signal_Green
	{
		lightColor[] = {0.5, 0.25, 0.25, 0};
		model = "\A3\Weapons_f\empty";
	};
	class FakeAmmo: BulletCore
	{
		airlock = 1;
		audibleFire = 16;
		cost = 6;
		explosive = 0;
		hit = 13;
		indirectHit = 4;
		indirectHitRange = 0.2;
		visibleFire = 16;
		visibleFireTime = 3;
	};
	class Fire_82mm_AMOS: ShotDeployBase
	{
		hit = 165;
		model = "\A3\weapons_f\ammo\shell";
		submunitionAmmo = "IncinerateShell";
	};
	class Flare_82mm_AMOS_White: FlareCore
	{
		aimAboveDefault = 4;
		aimAboveTarget[] = {30, 60, 120, 180, 240, 300, 360};
		effectFlare = "CounterMeasureFlare";
		intensity = 10000;
		lightColor[] = {0.95, 0.95, 1, 0.5};
		model = "\A3\weapons_f\ammo\shell";
		smokeColor[] = {1, 1, 1, 0.5};
		timeToLive = 45;
		triggerSpeedCoef = 1;
		triggerTime = -1;
	};
	class FlareBase: FlareCore
	{
		intensity = 10000;
		muzzleEffect = "BIS_fnc_effectFiredRifle";
		timeToLive = 25;
	};
	class FlareCore: GrenadeCore
	{
		airFriction = 0;
		artilleryLock = 1;
		brightness = 2;
		cost = 100;
		deflecting = 60;
		explosive = 0;
		hit = 5;
		indirectHit = 2;
		indirectHitRange = 0.2;
		lightColor[] = {1, 1, 1, 0};
		sideairFriction = 0;
		simulation = "shotIlluminating";
		simulationStep = 0.05;
		size = 1;
		soundHit[] = {"", 0, 1};
		thrust = 0;
		timeToLive = 30;
	};
	class FlareCountermeasure: SmokeShellVehicle
	{
		airFriction = -0.05;
		deflecting = 30;
		model = "\A3\Weapons_f\empty";
	};
	class FlareLauncherAmmo: SmokeLauncherAmmo
	{
		muzzleEffect = "BIS_fnc_effectFiredFlares";
	};
	class FuelExplosion: Default
	{
		cost = 1;
		explosionEffects = "VehicleExplosionEffects";
		explosionSoundEffect = "DefaultExplosion";
		hit = 100;
		indirectHit = 100;
		indirectHitRange = 2.5;
		model = "";
		simulation = "";
		soundEngine[] = {"", 1, 4};
		soundFly[] = {"", 1, 1};
		SoundSetExplosion[] = {"ExplosiveCharge_Exp_SoundSet", "ExplosiveCharge_Tail_SoundSet", "Explosion_Debris_SoundSet"};
	};
	class FuelExplosionBig: FuelExplosion
	{
		explosionEffects = "VehicleExplosionEffectsBig";
	};
	class G_20mm_HE: G_40mm_HE
	{
		caliber = 1;
		hit = 40;
		indirectHit = 6;
		indirectHitRange = 4;
		whistleDist = 20;
		class CamShakeExplode
		{
			distance = 75.7771;
			duration = 0.8;
			frequency = 20;
			power = 4;
		};
		class CamShakeHit
		{
			distance = 1;
			duration = 0.4;
			frequency = 20;
			power = 20;
		};
	};
	class G_40mm_HE: GrenadeBase
	{
		airFriction = -0.001;
		audibleFire = 30;
		caliber = 2;
		cost = 10;
		dangerRadiusHit = 60;
		deflecting = 5;
		explosionSoundEffect = "DefaultExplosion";
		explosive = 1;
		fuseDistance = 15;
		hit = 80;
		indirectHit = 8;
		indirectHitRange = 6;
		model = "\A3\weapons_f\ammo\UGL_slug";
		multiSoundHit[] = {"soundHit1", 0.25, "soundHit2", 0.25, "soundHit3", 0.25, "soundHit4", 0.25};
		simulation = "shotShell";
		soundHit1[] = {"A3\Sounds_F\arsenal\explosives\Grenades\Explosion_gng_grenades_01", 3.16228, 1, 1500};
		soundHit2[] = {"A3\Sounds_F\arsenal\explosives\Grenades\Explosion_gng_grenades_02", 3.16228, 1, 1500};
		soundHit3[] = {"A3\Sounds_F\arsenal\explosives\Grenades\Explosion_gng_grenades_03", 3.16228, 1, 1500};
		soundHit4[] = {"A3\Sounds_F\arsenal\explosives\Grenades\Explosion_gng_grenades_04", 3.16228, 1, 1500};
		SoundSetExplosion[] = {"GrenadeHe_Exp_SoundSet", "GrenadeHe_Tail_SoundSet", "Explosion_Debris_SoundSet"};
		suppressionRadiusHit = 24;
		typicalSpeed = 185;
		visibleFire = 1;
		visibleFireTime = 3;
		warheadName = "HE";
		whistleDist = 16;
		class CamShakeExplode
		{
			distance = 74.5964;
			duration = 1.2;
			frequency = 20;
			power = 8;
		};
		class CamShakeFire
		{
			distance = 0;
			duration = 0.2;
			frequency = 20;
			power = 0;
		};
		class CamShakeHit
		{
			distance = 1;
			duration = 0.4;
			frequency = 20;
			power = 20;
		};
		class CamShakePlayerFire
		{
			distance = 1;
			duration = 0.1;
			frequency = 20;
			power = 0;
		};
	};
	class G_40mm_HEDP: G_40mm_HE
	{
		caliber = 3;
		hit = 100;
		indirectHit = 6;
		indirectHitRange = 4;
		warheadName = "HEAT";
		class CamShakeHit
		{
			distance = 1;
			duration = 0.4;
			frequency = 20;
			power = 30;
		};
	};
	class G_40mm_HEDP_Bullet: G_40mm_HEDP
	{
		simulation = "shotBullet";
	};
	class G_40mm_Smoke: SmokeShell
	{
		model = "\A3\weapons_f\Ammo\UGL_slug";
	};
	class G_40mm_Smoke_Infinite: G_40mm_Smoke
	{
		timeToLive = 1e+010;
	};
	class G_40mm_SmokeBlue: G_40mm_Smoke
	{
		effectsSmoke = "SmokeShellBlueEffect";
		smokeColor[] = {0.1183, 0.1867, 1, 1};
	};
	class G_40mm_SmokeBlue_Infinite: G_40mm_SmokeBlue
	{
		timeToLive = 1e+010;
	};
	class G_40mm_SmokeGreen: G_40mm_Smoke
	{
		effectsSmoke = "SmokeShellGreenEffect";
		smokeColor[] = {0.2125, 0.6258, 0.4891, 1};
	};
	class G_40mm_SmokeGreen_Infinite: G_40mm_SmokeGreen
	{
		timeToLive = 1e+010;
	};
	class G_40mm_SmokeOrange: G_40mm_Smoke
	{
		effectsSmoke = "SmokeShellOrangeEffect";
		smokeColor[] = {0.6697, 0.2275, 0.10053, 1};
	};
	class G_40mm_SmokeOrange_Infinite: G_40mm_SmokeOrange
	{
		timeToLive = 1e+010;
	};
	class G_40mm_SmokePurple: G_40mm_Smoke
	{
		effectsSmoke = "SmokeShellPurpleEffect";
		smokeColor[] = {0.4341, 0.1388, 0.4144, 1};
	};
	class G_40mm_SmokePurple_Contact: G_40mm_SmokePurple
	{
		effectsSmoke = "SmokeShellPurpleEffectLarge";
		timeToLive = 300;
	};
	class G_40mm_SmokePurple_Infinite: G_40mm_SmokePurple
	{
		timeToLive = 1e+010;
	};
	class G_40mm_SmokeRed: G_40mm_Smoke
	{
		effectsSmoke = "SmokeShellRedEffect";
		smokeColor[] = {0.8438, 0.1383, 0.1353, 1};
	};
	class G_40mm_SmokeRed_Infinite: G_40mm_SmokeRed
	{
		timeToLive = 1e+010;
	};
	class G_40mm_SmokeYellow: G_40mm_Smoke
	{
		effectsSmoke = "SmokeShellYellowEffect";
		smokeColor[] = {0.9883, 0.8606, 0.0719, 1};
	};
	class G_40mm_SmokeYellow_Infinite: G_40mm_SmokeYellow
	{
		timeToLive = 1e+010;
	};
	class Gatling_30mm_HE_Plane_CAS_01_F: BulletBase
	{
		airFriction = -0.00036;
		airlock = 1;
		audibleFire = 250;
		caliber = 5;
		cost = 20;
		craterEffects = "ExploAmmoCrater";
		dangerRadiusBulletClose = 20;
		dangerRadiusHit = 60;
		deflecting = 5;
		explosionEffects = "ExploAmmoExplosionPlaneCAS";
		explosionSoundEffect = "DefaultExplosion";
		explosive = 0.4;
		fuseDistance = 10;
		hit = 180;
		indirectHit = 4;
		indirectHitRange = 3;
		model = "\A3\Weapons_f\Data\bullettracer\tracer_red.p3d";
		multiSoundHit[] = {"soundHit1", 0.25, "soundHit2", 0.25, "soundHit3", 0.25, "soundHit4", 0.25};
		soundFly[] = {"", 1, 1, 50};
		soundHit1[] = {"A3\Sounds_F\arsenal\explosives\Grenades\Explosion_gng_grenades_01", 3.16228, 1, 1300};
		soundHit2[] = {"A3\Sounds_F\arsenal\explosives\Grenades\Explosion_gng_grenades_02", 3.16228, 1, 1300};
		soundHit3[] = {"A3\Sounds_F\arsenal\explosives\Grenades\Explosion_gng_grenades_03", 3.16228, 1, 1300};
		soundHit4[] = {"A3\Sounds_F\arsenal\explosives\Grenades\Explosion_gng_grenades_04", 3.16228, 1, 1300};
		SoundSetExplosion[] = {"Shell19mm25mm_Exp_SoundSet"};
		soundSetSonicCrack[] = {"BulletSonicCrack_Gatling_SoundSet"};
		suppressionRadiusBulletClose = 12;
		suppressionRadiusHit = 24;
		tracerEndTime = 4.7;
		tracerScale = 2.5;
		tracerStartTime = 0.1;
		typicalSpeed = 960;
		visibleFire = 32;
		visibleFireTime = 3;
		warheadName = "AP";
		class CamShakeExplode
		{
			distance = 67.8178;
			duration = 1;
			frequency = 20;
			power = 6;
		};
		class CamShakeFire
		{
			distance = 40;
			duration = 1;
			frequency = 20;
			power = 2.23607;
		};
		class CamShakeHit
		{
			distance = 1;
			duration = 0.4;
			frequency = 20;
			power = 30;
		};
		class CamShakePlayerFire
		{
			distance = 1;
			duration = 0.1;
			frequency = 20;
			power = 0.01;
		};
		class HitEffects
		{
			Hit_Foliage_Dead = "ImpactLeavesDead";
			Hit_Foliage_green = "ImpactLeavesGreen";
			Hit_Foliage_Green_big = "ImpactLeavesGreenBig";
			Hit_Foliage_Palm = "ImpactLeavesPalm";
			Hit_Foliage_Pine = "ImpactLeavesPine";
			hitBuilding = "";
			hitConcrete = "";
			hitFoliage = "ImpactLeaves";
			hitGlass = "";
			hitGlassArmored = "";
			hitGroundHard = "";
			hitGroundSoft = "";
			hitHay = "ImpactHay";
			hitMan = "";
			hitMetal = "";
			hitMetalPlate = "";
			hitPlastic = "";
			hitRubber = "";
			hitVirtual = "";
			hitWater = "ImpactEffectsWater";
			hitWood = "ImpactWood";
		};
	};
	class GravityCannon_Projectile_01_AI_F: GravityCannon_Projectile_01_F
	{
		EffectFly = "";
		simulation = "shotBullet";
		simulationStep = 0.001;
		submunitionAmmo = "AlienDrone_01_Sounds_DummyAmmo_Fake";
		submunitionConeAngle = 1;
		submunitionConeType[] = {"randomcenter", 1};
		triggerDistance = 0.0001;
		triggerSpeedCoef[] = {1e-005};
		triggerTime = 0.0001;
	};
	class GravityCannon_Projectile_01_F: BulletBase
	{
		aiAmmoUsageFlags = 0;
		allowAgainstInfantry = 0;
		caliber = 3;
		coefGravity = 0;
		cost = 500000;
		CraterEffects = "ImpactGravityWeapon_Exp";
		deleteParentWhenTriggered = 0;
		EffectFly = "BulletTrace_02_FX1";
		explosionEffects = "ImpactGravityWeapon_Exp";
		explosionForceCoef = 100;
		hit = 10000;
		indirectHit = 10;
		indirectHitRange = 1;
		model = "\a3\Weapons_F_Contact\Ammo\TracerBall_02_Large_F.p3d";
		simulation = "shotShell";
		simulationStep = 0.001;
		soundSetBulletFly[] = {"Gravity_Projectile_FlyBy_SoundSet"};
		soundSetSonicCrack[] = {};
		submunitionAmmo = "GravityCannon_SmallProjectile_01_nosound_F";
		submunitionConeAngle = 30;
		submunitionConeType[] = {"randomcenter", 25};
		submunitionDirectionType = "SubmunitionAutoLeveling";
		submunitionInitialOffset[] = {0, 0.1, 0};
		timetolive = 5;
		triggerOnImpact = 1;
		class CamShakeExplode
		{
			distance = 133.79;
			duration = 2.2;
			frequency = 20;
			power = 23;
		};
		class CamShakeHit
		{
			distance = 1;
			duration = 0.6;
			frequency = 20;
			power = 115;
		};
		class HitEffects: HitEffects
		{
			Hit_Foliage_Dead = "ImpactLeavesDead";
			Hit_Foliage_green = "ImpactLeavesGreen";
			Hit_Foliage_Green_big = "ImpactLeavesGreenBig";
			Hit_Foliage_Palm = "ImpactLeavesPalm";
			Hit_Foliage_Pine = "ImpactLeavesPine";
			hitAlienArmour = "ImpactAlienArmour";
			hitAlienMatterBall_01 = "ImpactEffectsRed";
			hitAlienWeakPoint_01 = "ImpactAlienWeakPoint_01";
			hitBuilding = "ImpactGravityWeapon";
			hitConcrete = "ImpactConcrete";
			hitFoliage = "ImpactLeaves";
			hitGlass = "ImpactGlass";
			hitGlassArmored = "ImpactGlassThin";
			hitGroundHard = "ImpactEffectsHardGround";
			hitGroundRed = "ImpactEffectsRed";
			hitGroundSoft = "ImpactEffectsSmall";
			hitHay = "ImpactHay";
			hitMan = "ImpactEffectsBloodLaser";
			hitMetal = "ImpactGravityWeapon";
			hitMetalPlate = "ImpactGravityWeapon";
			hitPlastic = "ImpactPlastic";
			hitProbeCoreShell = "ImpactProbeCoreShell";
			hitProbeTipCore = "ImpactProbeTipCore";
			hitProbeTipShell = "ImpactProbeTipShell";
			hitRubber = "ImpactRubber";
			hitTyre = "ImpactTyre";
			hitVirtual = "ImpactGravityWeapon";
			hitWater = "ImpactEffectsWater";
			hitWood = "ImpactWood";
		};
	};
	class GravityCannon_SmallProjectile_01_F: BulletBase
	{
		caliber = 3;
		coefGravity = 0.2;
		cost = 500000;
		CraterEffects = "ImpactGravityWeapon_Exp";
		EffectFly = "BulletTrace_02_FX1";
		explosionEffects = "ImpactGravityWeapon_Exp";
		explosionForceCoef = 10;
		hit = 10;
		indirectHit = 10;
		indirectHitRange = 1;
		model = "\a3\Weapons_F_Contact\Ammo\TracerBall_01_F.p3d";
		simulation = "shotShell";
		simulationStep = 0.001;
		soundSetBulletFly[] = {"Gravity_Projectile_FlyBy_SoundSet"};
		soundSetSonicCrack[] = {};
		timetolive = 5;
		class CamShakeExplode
		{
			distance = 96.4981;
			duration = 1.6;
			frequency = 20;
			power = 13;
		};
		class CamShakeHit
		{
			distance = 1;
			duration = 0.6;
			frequency = 20;
			power = 65;
		};
		class HitEffects: HitEffects
		{
			Hit_Foliage_Dead = "ImpactLeavesDead";
			Hit_Foliage_green = "ImpactLeavesGreen";
			Hit_Foliage_Green_big = "ImpactLeavesGreenBig";
			Hit_Foliage_Palm = "ImpactLeavesPalm";
			Hit_Foliage_Pine = "ImpactLeavesPine";
			hitAlienArmour = "ImpactAlienArmour";
			hitAlienMatterBall_01 = "ImpactEffectsRed";
			hitAlienWeakPoint_01 = "ImpactAlienWeakPoint_01";
			hitBuilding = "ImpactGravityWeapon";
			hitConcrete = "ImpactConcrete";
			hitFoliage = "ImpactLeaves";
			hitGlass = "ImpactGlass";
			hitGlassArmored = "ImpactGlassThin";
			hitGroundHard = "ImpactEffectsHardGround";
			hitGroundRed = "ImpactEffectsRed";
			hitGroundSoft = "ImpactEffectsSmall";
			hitHay = "ImpactHay";
			hitMan = "ImpactEffectsBloodLaser";
			hitMetal = "ImpactGravityWeapon";
			hitMetalPlate = "ImpactGravityWeapon";
			hitPlastic = "ImpactPlastic";
			hitProbeCoreShell = "ImpactProbeCoreShell";
			hitProbeTipCore = "ImpactProbeTipCore";
			hitProbeTipShell = "ImpactProbeTipShell";
			hitRubber = "ImpactRubber";
			hitTyre = "ImpactTyre";
			hitVirtual = "ImpactGravityWeapon";
			hitWater = "ImpactEffectsWater";
			hitWood = "ImpactWood";
		};
	};
	class GravityCannon_SmallProjectile_01_nosound_F: GravityCannon_SmallProjectile_01_F
	{
		hitArmor[] = {"soundHit", 1};
		hitBuilding[] = {"soundHit", 1};
		hitConcrete[] = {"soundHit", 1};
		hitDefault[] = {"soundHit", 1};
		hitFoliage[] = {"soundHit", 1};
		hitGlass[] = {"soundHit", 1};
		hitGlassArmored[] = {"soundHit", 1};
		hitGroundHard[] = {"soundHit", 1};
		hitGroundSoft[] = {"soundHit", 1};
		hitIron[] = {"soundHit", 1};
		hitMan[] = {"soundHit", 1};
		hitMetal[] = {"soundHit", 1};
		hitMetalplate[] = {"soundHit", 1};
		hitPlastic[] = {"soundHit", 1};
		hitRubber[] = {"soundHit", 1};
		hitTyre[] = {"soundHit", 1};
		hitWater[] = {"soundHit", 1};
		hitWood[] = {"soundHit", 1};
		impactArmor[] = {"soundImpact", 1};
		impactBuilding[] = {"soundImpact", 1};
		impactConcrete[] = {"soundImpact", 1};
		impactDefault[] = {"soundImpact", 1};
		impactFoliage[] = {"soundImpact", 1};
		impactGlass[] = {"soundImpact", 1};
		impactGlassArmored[] = {"soundImpact", 1};
		impactGroundHard[] = {"soundImpact", 1};
		impactGroundSoft[] = {"soundImpact", 1};
		impactIron[] = {"soundImpact", 1};
		impactMan[] = {"soundImpact", 1};
		impactMetal[] = {"soundImpact", 1};
		impactMetalplate[] = {"soundImpact", 1};
		impactPlastic[] = {"soundImpact", 1};
		impactRubber[] = {"soundImpact", 1};
		impactTyre[] = {"soundImpact", 1};
		impactWater[] = {"soundImpact", 1};
		impactWood[] = {"soundImpact", 1};
		soundEngine[] = {"", 1, 1};
		soundFakeFall[] = {"soundFall", 1};
		soundFall[] = {"", 1, 1};
		soundFly[] = {"", 1, 1};
		soundHit[] = {"", 1, 1};
		soundImpact[] = {"", 1, 1};
		submunitionAmmo = "GravityCannon_SmallProjectile_01_F";
		submunitionDirectionType = "SubmunitionModelDirection";
		submunitionInitSpeed = 0;
		submunitionParentSpeedCoef = 1;
		supersonicCrackFar[] = {"", 1, 1};
		supersonicCrackNear[] = {"", 1, 1};
		triggerSpeedCoef[] = {1};
		triggerTime = 0.1;
	};
	class Grenade: Default
	{
		audibleFire = 0.25;
		cost = 40;
		CraterEffects = "GrenadeCrater";
		CraterWaterEffects = "ImpactEffectsWaterExplosion";
		deflecting = 15;
		explosionEffects = "GrenadeExplosion";
		explosionEffectsRadius = 5;
		explosionSoundEffect = "DefaultExplosion";
		explosionTime = 5;
		explosive = 1;
		hit = 10;
		impactArmor[] = {"soundImpactIron1", 0.2, "soundImpactIron2", 0.2, "soundImpactIron3", 0.2, "soundImpactIron4", 0.2, "soundImpactIron5", 0.2};
		impactBuilding[] = {"soundImpactHard1", 0.2, "soundImpactHard2", 0.2, "soundImpactHard3", 0.2, "soundImpactHard4", 0.1, "soundImpactHard5", 0.1, "soundImpactHard6", 0.1, "soundImpactHard7", 0.1};
		impactConcrete[] = {"soundImpactHard1", 0.2, "soundImpactHard2", 0.2, "soundImpactHard3", 0.2, "soundImpactHard4", 0.1, "soundImpactHard5", 0.1, "soundImpactHard6", 0.1, "soundImpactHard7", 0.1};
		impactDefault[] = {"soundImpactHard1", 0.2, "soundImpactHard2", 0.2, "soundImpactHard3", 0.2, "soundImpactHard4", 0.1, "soundImpactHard5", 0.1, "soundImpactHard6", 0.1, "soundImpactHard7", 0.1};
		impactFoliage[] = {"soundImpactSoft1", 0.2, "soundImpactSoft2", 0.2, "soundImpactSoft3", 0.2, "soundImpactSoft4", 0.1, "soundImpactSoft5", 0.1, "soundImpactSoft6", 0.1, "soundImpactSoft7", 0.1};
		impactGlass[] = {"soundImpactHard1", 0.2, "soundImpactHard2", 0.2, "soundImpactHard3", 0.2, "soundImpactHard4", 0.1, "soundImpactHard5", 0.1, "soundImpactHard6", 0.1, "soundImpactHard7", 0.1};
		impactGlassArmored[] = {"soundImpactHard1", 0.2, "soundImpactHard2", 0.2, "soundImpactHard3", 0.2, "soundImpactHard4", 0.1, "soundImpactHard5", 0.1, "soundImpactHard6", 0.1, "soundImpactHard7", 0.1};
		impactGroundHard[] = {"soundImpactHard1", 0.2, "soundImpactHard2", 0.2, "soundImpactHard3", 0.2, "soundImpactHard4", 0.1, "soundImpactHard5", 0.1, "soundImpactHard6", 0.1, "soundImpactHard7", 0.1};
		impactGroundSoft[] = {"soundImpactSoft1", 0.2, "soundImpactSoft2", 0.2, "soundImpactSoft3", 0.2, "soundImpactSoft4", 0.1, "soundImpactSoft5", 0.1, "soundImpactSoft6", 0.1, "soundImpactSoft7", 0.1};
		impactIron[] = {"soundImpactIron1", 0.2, "soundImpactIron2", 0.2, "soundImpactIron3", 0.2, "soundImpactIron4", 0.2, "soundImpactIron5", 0.2};
		impactMetal[] = {"soundImpactIron1", 0.2, "soundImpactIron2", 0.2, "soundImpactIron3", 0.2, "soundImpactIron4", 0.2, "soundImpactIron5", 0.2};
		impactMetalplate[] = {"soundImpactIron1", 0.2, "soundImpactIron2", 0.2, "soundImpactIron3", 0.2, "soundImpactIron4", 0.2, "soundImpactIron5", 0.2};
		impactPlastic[] = {"soundImpactSoft1", 0.2, "soundImpactSoft2", 0.2, "soundImpactSoft3", 0.2, "soundImpactSoft4", 0.1, "soundImpactSoft5", 0.1, "soundImpactSoft6", 0.1, "soundImpactSoft7", 0.1};
		impactRubber[] = {"soundImpactSoft1", 0.2, "soundImpactSoft2", 0.2, "soundImpactSoft3", 0.2, "soundImpactSoft4", 0.1, "soundImpactSoft5", 0.1, "soundImpactSoft6", 0.1, "soundImpactSoft7", 0.1};
		impactTyre[] = {"soundImpactSoft1", 0.2, "soundImpactSoft2", 0.2, "soundImpactSoft3", 0.2, "soundImpactSoft4", 0.1, "soundImpactSoft5", 0.1, "soundImpactSoft6", 0.1, "soundImpactSoft7", 0.1};
		impactWater[] = {"soundImpactWater1", 0.35, "soundImpactWater2", 0.35, "soundImpactWater3", 0.3};
		impactWood[] = {"soundImpactWoodExt1", 0.25, "soundImpactWoodExt2", 0.25, "soundImpactWoodExt3", 0.25, "soundImpactWoodExt4", 0.25};
		indirectHit = 8;
		indirectHitRange = 6;
		model = "\A3\Weapons_f\ammo\Handgrenade";
		multiSoundHit[] = {"soundHit1", 0.25, "soundHit2", 0.25, "soundHit3", 0.25, "soundHit4", 0.25};
		shadow = 1;
		simulation = "shotGrenade";
		simulationStep = 0.05;
		soundEngine[] = {"", 1, 1};
		soundFly[] = {"", 0.1, 1, 20};
		soundHit1[] = {"A3\Sounds_F\arsenal\explosives\grenades\Explosion_HE_grenade_01", 2.51189, 1, 1500};
		soundHit2[] = {"A3\Sounds_F\arsenal\explosives\grenades\Explosion_HE_grenade_02", 2.51189, 1, 1500};
		soundHit3[] = {"A3\Sounds_F\arsenal\explosives\grenades\Explosion_HE_grenade_03", 2.51189, 1, 1500};
		soundHit4[] = {"A3\Sounds_F\arsenal\explosives\grenades\Explosion_HE_grenade_04", 2.51189, 1, 1500};
		soundImpactHard1[] = {"A3\Sounds_F\weapons\Grenades\handgrenade_drops\handg_drop_concrete_1", 1.41254, 1, 65};
		soundImpactHard2[] = {"A3\Sounds_F\weapons\Grenades\handgrenade_drops\handg_drop_concrete_2", 1.41254, 1, 65};
		soundImpactHard3[] = {"A3\Sounds_F\weapons\Grenades\handgrenade_drops\handg_drop_concrete_3", 1.41254, 1, 65};
		soundImpactHard4[] = {"A3\Sounds_F\weapons\Grenades\handgrenade_drops\handg_drop_concrete_4", 1.41254, 1, 65};
		soundImpactHard5[] = {"A3\Sounds_F\weapons\Grenades\handgrenade_drops\handg_drop_concrete_5", 1.41254, 1, 65};
		soundImpactHard6[] = {"A3\Sounds_F\weapons\Grenades\handgrenade_drops\handg_drop_concrete_6", 1.41254, 1, 65};
		soundImpactHard7[] = {"A3\Sounds_F\weapons\Grenades\handgrenade_drops\handg_drop_concrete_7", 1.41254, 1, 65};
		soundImpactIron1[] = {"A3\Sounds_F\weapons\Grenades\handgrenade_drops\handg_drop_Metal_1", 1.25893, 1, 95};
		soundImpactIron2[] = {"A3\Sounds_F\weapons\Grenades\handgrenade_drops\handg_drop_Metal_2", 1.25893, 1, 95};
		soundImpactIron3[] = {"A3\Sounds_F\weapons\Grenades\handgrenade_drops\handg_drop_Metal_3", 1.25893, 1, 95};
		soundImpactIron4[] = {"A3\Sounds_F\weapons\Grenades\handgrenade_drops\handg_drop_Metal_4", 1.25893, 1, 95};
		soundImpactIron5[] = {"A3\Sounds_F\weapons\Grenades\handgrenade_drops\handg_drop_Metal_5", 1.25893, 1, 95};
		soundImpactSoft1[] = {"A3\Sounds_F\weapons\Grenades\handgrenade_drops\handg_drop_grass_1", 1.41254, 1, 45};
		soundImpactSoft2[] = {"A3\Sounds_F\weapons\Grenades\handgrenade_drops\handg_drop_grass_2", 1.41254, 1, 45};
		soundImpactSoft3[] = {"A3\Sounds_F\weapons\Grenades\handgrenade_drops\handg_drop_grass_3", 1.41254, 1, 45};
		soundImpactSoft4[] = {"A3\Sounds_F\weapons\Grenades\handgrenade_drops\handg_drop_grass_4", 1.41254, 1, 45};
		soundImpactSoft5[] = {"A3\Sounds_F\weapons\Grenades\handgrenade_drops\handg_drop_grass_5", 1.41254, 1, 45};
		soundImpactSoft6[] = {"A3\Sounds_F\weapons\Grenades\handgrenade_drops\handg_drop_grass_6", 1.41254, 1, 45};
		soundImpactSoft7[] = {"A3\Sounds_F\weapons\Grenades\handgrenade_drops\handg_drop_grass_7", 1.41254, 1, 45};
		soundImpactWater1[] = {"A3\Sounds_F\weapons\Grenades\handgrenade_drops\handg_drop_water_1", 1.41254, 1, 55};
		soundImpactWater2[] = {"A3\Sounds_F\weapons\Grenades\handgrenade_drops\handg_drop_water_2", 1.41254, 1, 55};
		soundImpactWater3[] = {"A3\Sounds_F\weapons\Grenades\handgrenade_drops\handg_drop_water_3", 1.41254, 1, 55};
		soundImpactWoodExt1[] = {"A3\Sounds_F\weapons\Grenades\handgrenade_drops\handg_drop_wood_ext_1", 1.41254, 1, 75};
		soundImpactWoodExt2[] = {"A3\Sounds_F\weapons\Grenades\handgrenade_drops\handg_drop_wood_ext_2", 1.41254, 1, 75};
		soundImpactWoodExt3[] = {"A3\Sounds_F\weapons\Grenades\handgrenade_drops\handg_drop_wood_ext_3", 1.41254, 1, 75};
		soundImpactWoodExt4[] = {"A3\Sounds_F\weapons\Grenades\handgrenade_drops\handg_drop_wood_ext_4", 1.41254, 1, 75};
		SoundSetExplosion[] = {"GrenadeHe_Exp_SoundSet", "GrenadeHe_Tail_SoundSet", "Explosion_Debris_SoundSet"};
		timeToLive = 6;
		typicalspeed = 60;
		visibleFire = 1;
		visibleFireTime = 0;
		whistleDist = 28;
		class CamShakeExplode
		{
			distance = 99.8178;
			duration = 1;
			frequency = 20;
			power = 6;
		};
		class HitEffects
		{
			hitWater = "ImpactEffectsWaterRocket";
		};
	};
	class GrenadeBase: GrenadeCore
	{
		CraterEffects = "GrenadeCrater";
		explosionEffects = "GrenadeExplosion";
		explosionForceCoef = 4;
		explosionSoundEffect = "DefaultExplosion";
		multiSoundHit[] = {"soundHit1", 0.2, "soundHit2", 0.2, "soundHit3", 0.2, "soundHit4", 0.1, "soundHit5", 0.15, "soundHit6", 0.15};
		muzzleEffect = "";
		shadow = 1;
		soundHit1[] = {"A3\Sounds_F\weapons\Explosion\gr_explosion_1", 3.16228, 1, 1400};
		soundHit2[] = {"A3\Sounds_F\weapons\Explosion\gr_explosion_2", 3.16228, 1, 1400};
		soundHit3[] = {"A3\Sounds_F\weapons\Explosion\gr_explosion_3", 3.16228, 1, 1400};
		soundHit4[] = {"A3\Sounds_F\weapons\Explosion\gr_explosion_4", 3.16228, 1, 1400};
		soundHit5[] = {"A3\Sounds_F\weapons\Explosion\gr_explosion_5", 3.16228, 1, 1400};
		soundHit6[] = {"A3\Sounds_F\weapons\Explosion\gr_explosion_6", 3.16228, 1, 1400};
		supersonicCrackFar[] = {"A3\Sounds_F\weapons\Explosion\supersonic_crack_50meters", 0.223872, 1, 75};
		supersonicCrackNear[] = {"A3\Sounds_F\weapons\Explosion\supersonic_crack_close", 0.316228, 1, 50};
	};
	class GrenadeCore: Default
	{
		audibleFire = 0.25;
		cost = 40;
		deflecting = 60;
		explosive = 1;
		hit = 20;
		indirectHit = 18;
		indirectHitRange = 7;
		simulation = "shotShell";
		simulationStep = 0.05;
		soundEngine[] = {"", 0.0001, 4};
		soundFly[] = {"", 3.16228e-005, 1};
		soundHit[] = {"", 10, 1};
		timeToLive = 20;
		visibleFire = 2;
		visibleFireTime = 0;
	};
	class GrenadeHand: Grenade
	{
		audibleFire = 0.05;
		dangerRadiusHit = 60;
		fuseDistance = 0;
		hit = 8;
		indirectHit = 8;
		indirectHitRange = 6;
		model = "\A3\Weapons_f\ammo\Handgrenade_throw";
		suppressionRadiusHit = 24;
		typicalspeed = 18;
		visibleFire = 0.5;
		visibleFireTime = 1;
	};
	class GrenadeHand_stone: GrenadeHand
	{
		cost = 1;
		CraterEffects = "NoCrater";
		dangerRadiusHit = 6;
		explosionEffects = "NoExplosion";
		explosive = 0;
		hit = 0.5;
		indirectHit = 0.2;
		indirectHitRange = 1;
		model = "\A3\Weapons_f\ammo\stone_2";
		soundHit[] = {"", 1, 1};
		SoundSetExplosion[] = {"GrenadeHe_Exp_SoundSet", "GrenadeHe_Tail_SoundSet", "Explosion_Debris_SoundSet"};
		suppressionRadiusHit = -1;
		whistleDist = 0;
		class CamShakeExplode
		{
			distance = 0;
			duration = 0.2;
			frequency = 20;
			power = 0;
		};
		class CamShakeHit
		{
			distance = 1;
			duration = 0.2;
			frequency = 20;
			power = 5;
		};
	};
	class HelicopterExploBig: HelicopterExploSmall
	{
		explosionEffects = "HelicopterExplosionEffects2";
		explosionSoundEffect = "DefaultExplosion";
		hit = 10000;
		indirectHit = 200;
		indirectHitRange = 7.5;
		SoundSetExplosion[] = {"BigIED_Exp_SoundSet", "BigIED_Tail_SoundSet", "Explosion_Debris_SoundSet"};
	};
	class HelicopterExploSmall: ShellBase
	{
		airFriction = 0;
		cost = 300;
		explosionEffects = "HelicopterExplosionEffects";
		explosionTime = 0.001;
		explosive = 1;
		hit = 2500;
		indirectHit = 500;
		indirectHitRange = 5;
		model = "\A3\Weapons_f\empty";
		soundEngine[] = {"", 1, 4};
		soundFly[] = {"", 1, 1};
		SoundSetExplosion[] = {"SmallIED_Exp_SoundSet", "SmallIED_Tail_SoundSet", "Explosion_Debris_SoundSet"};
		timeToLive = 1;
		typicalSpeed = 100;
	};
	class I_IRStrobe: IRStrobeBase
	{
		model = "\A3\Weapons_F_EPB\Ammo\I_IRstrobe_F.p3d";
		class NVGMarkers
		{
			class Blinking1 {};
		};
	};
	class IEDLandBig_Remote_Ammo: PipeBombBase
	{
		cost = 2000;
		CraterEffects = "IEDMineBigLandCrater";
		defaultMagazine = "IEDLandBig_Remote_Mag";
		explosionEffects = "IEDMineBigExplosion";
		hit = 2000;
		indirectHit = 2000;
		indirectHitRange = 5;
		mineInconspicuousness = 30;
		mineModelDisabled = "\A3\Weapons_F\Explosives\IED_land_big_d";
		mineTrigger = "RemoteTrigger";
		model = "\A3\Weapons_F\Explosives\IED_land_big";
		multiSoundHit[] = {"soundHit1", 0.5, "soundHit2", 0.5};
		soundActivation[] = {"A3\Sounds_F_Orange\arsenal\explosives\Handling\Ied_Large_DugIn_Placement_01", 3.16228, 1, 20};
		soundDeactivation[] = {"A3\Sounds_F_Orange\arsenal\explosives\Handling\Ied_Large_DugIn_Deactivate_01", 3.16228, 1, 20};
		soundHit1[] = {"A3\Sounds_F\arsenal\explosives\bombs\Explosion_IED_bigBomb_01", 2.51189, 1, 1500};
		soundHit2[] = {"A3\Sounds_F\arsenal\explosives\bombs\Explosion_IED_bigBomb_02", 2.51189, 1, 1500};
		SoundSetExplosion[] = {"BigIED_Exp_SoundSet", "BigIED_Tail_SoundSet", "Explosion_Debris_SoundSet"};
		soundTrigger[] = {"A3\Sounds_F\weapons\mines\mech_trigger_1", 0.562341, 1, 30};
		whistleDist = 8;
	};
	class IEDLandSmall_Remote_Ammo: PipeBombBase
	{
		cost = 200;
		CraterEffects = "IEDMineSmallLandCrater";
		defaultMagazine = "IEDLandSmall_Remote_Mag";
		explosionEffects = "IEDMineSmallExplosion";
		hit = 1000;
		indirectHit = 1000;
		indirectHitRange = 3;
		mineInconspicuousness = 50;
		mineModelDisabled = "\A3\Weapons_F\Explosives\IED_land_small_d";
		mineTrigger = "RemoteTrigger";
		model = "\A3\Weapons_F\Explosives\IED_land_small";
		multiSoundHit[] = {"soundHit1", 0.5, "soundHit2", 0.5};
		soundActivation[] = {"A3\Sounds_F_Orange\arsenal\explosives\Handling\Ied_Small_DugIn_Placement_01", 3.16228, 1, 20};
		soundDeactivation[] = {"A3\Sounds_F_Orange\arsenal\explosives\Handling\Ied_Small_DugIn_Deactivate_01", 3.16228, 1, 20};
		soundHit1[] = {"A3\sounds_f\arsenal\explosives\bombs\Explosion_IED_smallBomb_01", 2.51189, 1, 1500};
		soundHit2[] = {"A3\sounds_f\arsenal\explosives\bombs\Explosion_IED_smallBomb_02", 2.51189, 1, 1500};
		SoundSetExplosion[] = {"SmallIED_Exp_SoundSet", "SmallIED_Tail_SoundSet", "Explosion_Debris_SoundSet"};
		soundTrigger[] = {"A3\Sounds_F\weapons\mines\mech_trigger_1", 0.562341, 1, 40};
		whistleDist = 6;
	};
	class IEDUrbanBig_Remote_Ammo: PipeBombBase
	{
		cost = 2000;
		CraterEffects = "IEDMineBigGarbageCrater";
		defaultMagazine = "IEDUrbanBig_Remote_Mag";
		explosionEffects = "IEDMineBigExplosion";
		hit = 2000;
		indirectHit = 2000;
		indirectHitRange = 5;
		mineInconspicuousness = 20;
		mineModelDisabled = "\A3\Weapons_F\Explosives\IED_urban_big_d";
		mineTrigger = "RemoteTrigger";
		model = "\A3\Weapons_F\Explosives\IED_urban_big";
		multiSoundHit[] = {"soundHit1", 0.5, "soundHit2", 0.5};
		soundActivation[] = {"A3\Sounds_F_Orange\arsenal\explosives\Handling\Ied_Large_Urban_Placement_01", 3.16228, 1, 20};
		soundDeactivation[] = {"A3\Sounds_F_Orange\arsenal\explosives\Handling\Ied_Large_Urban_Deactivate_01", 3.16228, 1, 20};
		soundHit1[] = {"A3\Sounds_F\arsenal\explosives\bombs\Explosion_IED_bigBomb_01", 3.16228, 1, 2000};
		soundHit2[] = {"A3\Sounds_F\arsenal\explosives\bombs\Explosion_IED_bigBomb_02", 3.16228, 1, 2000};
		SoundSetExplosion[] = {"BigIED_Exp_SoundSet", "BigIED_Tail_SoundSet", "Explosion_Debris_SoundSet"};
		whistleDist = 20;
	};
	class IEDUrbanSmall_Remote_Ammo: PipeBombBase
	{
		cost = 200;
		CraterEffects = "IEDMineSmallGarbageCrater";
		defaultMagazine = "IEDUrbanSmall_Remote_Mag";
		explosionEffects = "IEDMineSmallExplosion";
		hit = 1000;
		indirectHit = 1000;
		indirectHitRange = 3;
		mineInconspicuousness = 40;
		mineModelDisabled = "\A3\Weapons_F\Explosives\IED_urban_small_d";
		mineTrigger = "RemoteTrigger";
		model = "\A3\Weapons_F\Explosives\IED_urban_small";
		multiSoundHit[] = {"soundHit1", 0.5, "soundHit2", 0.5};
		soundActivation[] = {"A3\Sounds_F_Orange\arsenal\explosives\Handling\Ied_Small_Urban_Placement_01", 3.16228, 1, 20};
		soundDeactivation[] = {"A3\Sounds_F_Orange\arsenal\explosives\Handling\Ied_Small_Urban_Deactivate_01", 3.16228, 1, 20};
		soundHit1[] = {"A3\sounds_f\arsenal\explosives\bombs\Explosion_IED_smallBomb_01", 2.51189, 1, 1600};
		soundHit2[] = {"A3\sounds_f\arsenal\explosives\bombs\Explosion_IED_smallBomb_02", 2.51189, 1, 1600};
		SoundSetExplosion[] = {"SmallIED_Exp_SoundSet", "SmallIED_Tail_SoundSet", "Explosion_Debris_SoundSet"};
		whistleDist = 12;
	};
	class IncinerateShell: SmokeShellArty
	{
		effectsSmoke = "IncinerateShell";
		model = "\A3\Weapons_f\ammo\smokegrenade_orange";
	};
	class IRStrobeBase: GrenadeCore
	{
		cost = 5000;
		deflecting = 30;
		explosionTime = 310;
		explosive = 0;
		hit = 5;
		impactArmor[] = {"soundImpactIron1", 0.2, "soundImpactIron2", 0.2, "soundImpactIron3", 0.2, "soundImpactIron4", 0.2, "soundImpactIron5", 0.2};
		impactBuilding[] = {"soundImpactHard1", 0.2, "soundImpactHard2", 0.2, "soundImpactHard3", 0.2, "soundImpactHard4", 0.1, "soundImpactHard5", 0.1, "soundImpactHard6", 0.1, "soundImpactHard7", 0.1};
		impactConcrete[] = {"soundImpactHard1", 0.2, "soundImpactHard2", 0.2, "soundImpactHard3", 0.2, "soundImpactHard4", 0.1, "soundImpactHard5", 0.1, "soundImpactHard6", 0.1, "soundImpactHard7", 0.1};
		impactDefault[] = {"soundImpactHard1", 0.2, "soundImpactHard2", 0.2, "soundImpactHard3", 0.2, "soundImpactHard4", 0.1, "soundImpactHard5", 0.1, "soundImpactHard6", 0.1, "soundImpactHard7", 0.1};
		impactFoliage[] = {"soundImpactSoft1", 0.2, "soundImpactSoft2", 0.2, "soundImpactSoft3", 0.2, "soundImpactSoft4", 0.1, "soundImpactSoft5", 0.1, "soundImpactSoft6", 0.1, "soundImpactSoft7", 0.1};
		impactGlass[] = {"soundImpactHard1", 0.2, "soundImpactHard2", 0.2, "soundImpactHard3", 0.2, "soundImpactHard4", 0.1, "soundImpactHard5", 0.1, "soundImpactHard6", 0.1, "soundImpactHard7", 0.1};
		impactGlassArmored[] = {"soundImpactHard1", 0.2, "soundImpactHard2", 0.2, "soundImpactHard3", 0.2, "soundImpactHard4", 0.1, "soundImpactHard5", 0.1, "soundImpactHard6", 0.1, "soundImpactHard7", 0.1};
		impactGroundHard[] = {"soundImpactHard1", 0.2, "soundImpactHard2", 0.2, "soundImpactHard3", 0.2, "soundImpactHard4", 0.1, "soundImpactHard5", 0.1, "soundImpactHard6", 0.1, "soundImpactHard7", 0.1};
		impactGroundSoft[] = {"soundImpactSoft1", 0.2, "soundImpactSoft2", 0.2, "soundImpactSoft3", 0.2, "soundImpactSoft4", 0.1, "soundImpactSoft5", 0.1, "soundImpactSoft6", 0.1, "soundImpactSoft7", 0.1};
		impactIron[] = {"soundImpactIron1", 0.2, "soundImpactIron2", 0.2, "soundImpactIron3", 0.2, "soundImpactIron4", 0.2, "soundImpactIron5", 0.2};
		impactMetal[] = {"soundImpactIron1", 0.2, "soundImpactIron2", 0.2, "soundImpactIron3", 0.2, "soundImpactIron4", 0.2, "soundImpactIron5", 0.2};
		impactMetalplate[] = {"soundImpactIron1", 0.2, "soundImpactIron2", 0.2, "soundImpactIron3", 0.2, "soundImpactIron4", 0.2, "soundImpactIron5", 0.2};
		impactPlastic[] = {"soundImpactSoft1", 0.2, "soundImpactSoft2", 0.2, "soundImpactSoft3", 0.2, "soundImpactSoft4", 0.1, "soundImpactSoft5", 0.1, "soundImpactSoft6", 0.1, "soundImpactSoft7", 0.1};
		impactRubber[] = {"soundImpactSoft1", 0.2, "soundImpactSoft2", 0.2, "soundImpactSoft3", 0.2, "soundImpactSoft4", 0.1, "soundImpactSoft5", 0.1, "soundImpactSoft6", 0.1, "soundImpactSoft7", 0.1};
		impactTyre[] = {"soundImpactSoft1", 0.2, "soundImpactSoft2", 0.2, "soundImpactSoft3", 0.2, "soundImpactSoft4", 0.1, "soundImpactSoft5", 0.1, "soundImpactSoft6", 0.1, "soundImpactSoft7", 0.1};
		impactWater[] = {"soundImpactWater1", 0.35, "soundImpactWater2", 0.35, "soundImpactWater3", 0.3};
		impactWood[] = {"soundImpactWoodExt1", 0.25, "soundImpactWoodExt2", 0.25, "soundImpactWoodExt3", 0.25, "soundImpactWoodExt4", 0.25};
		indirectHit = 2;
		indirectHitRange = 0.2;
		irLock = 1;
		muzzleEffect = "BIS_Effects_Rifle";
		shadow = 1;
		simulation = "shotNVGMarker";
		simulationStep = 0.05;
		soundHit[] = {"A3\Sounds_F\weapons\Grenades\handgrenade_drops\handg_drop_grass_1", 1, 1, 45};
		soundImpactHard1[] = {"A3\Sounds_F\weapons\Grenades\handgrenade_drops\handg_drop_concrete_1", 1.41254, 1, 65};
		soundImpactHard2[] = {"A3\Sounds_F\weapons\Grenades\handgrenade_drops\handg_drop_concrete_2", 1.41254, 1, 65};
		soundImpactHard3[] = {"A3\Sounds_F\weapons\Grenades\handgrenade_drops\handg_drop_concrete_3", 1.41254, 1, 65};
		soundImpactHard4[] = {"A3\Sounds_F\weapons\Grenades\handgrenade_drops\handg_drop_concrete_4", 1.41254, 1, 65};
		soundImpactHard5[] = {"A3\Sounds_F\weapons\Grenades\handgrenade_drops\handg_drop_concrete_5", 1.41254, 1, 65};
		soundImpactHard6[] = {"A3\Sounds_F\weapons\Grenades\handgrenade_drops\handg_drop_concrete_6", 1.41254, 1, 65};
		soundImpactHard7[] = {"A3\Sounds_F\weapons\Grenades\handgrenade_drops\handg_drop_concrete_7", 1.41254, 1, 65};
		soundImpactIron1[] = {"A3\Sounds_F\weapons\Grenades\handgrenade_drops\handg_drop_Metal_1", 1.25893, 1, 95};
		soundImpactIron2[] = {"A3\Sounds_F\weapons\Grenades\handgrenade_drops\handg_drop_Metal_2", 1.25893, 1, 95};
		soundImpactIron3[] = {"A3\Sounds_F\weapons\Grenades\handgrenade_drops\handg_drop_Metal_3", 1.25893, 1, 95};
		soundImpactIron4[] = {"A3\Sounds_F\weapons\Grenades\handgrenade_drops\handg_drop_Metal_4", 1.25893, 1, 95};
		soundImpactIron5[] = {"A3\Sounds_F\weapons\Grenades\handgrenade_drops\handg_drop_Metal_5", 1.25893, 1, 95};
		soundImpactSoft1[] = {"A3\Sounds_F\weapons\Grenades\handgrenade_drops\handg_drop_grass_1", 1.41254, 1, 45};
		soundImpactSoft2[] = {"A3\Sounds_F\weapons\Grenades\handgrenade_drops\handg_drop_grass_2", 1.41254, 1, 45};
		soundImpactSoft3[] = {"A3\Sounds_F\weapons\Grenades\handgrenade_drops\handg_drop_grass_3", 1.41254, 1, 45};
		soundImpactSoft4[] = {"A3\Sounds_F\weapons\Grenades\handgrenade_drops\handg_drop_grass_4", 1.41254, 1, 45};
		soundImpactSoft5[] = {"A3\Sounds_F\weapons\Grenades\handgrenade_drops\handg_drop_grass_5", 1.41254, 1, 45};
		soundImpactSoft6[] = {"A3\Sounds_F\weapons\Grenades\handgrenade_drops\handg_drop_grass_6", 1.41254, 1, 45};
		soundImpactSoft7[] = {"A3\Sounds_F\weapons\Grenades\handgrenade_drops\handg_drop_grass_7", 1.41254, 1, 45};
		soundImpactWater1[] = {"A3\Sounds_F\weapons\Grenades\handgrenade_drops\handg_drop_water_1", 1.41254, 1, 55};
		soundImpactWater2[] = {"A3\Sounds_F\weapons\Grenades\handgrenade_drops\handg_drop_water_2", 1.41254, 1, 55};
		soundImpactWater3[] = {"A3\Sounds_F\weapons\Grenades\handgrenade_drops\handg_drop_water_3", 1.41254, 1, 55};
		soundImpactWoodExt1[] = {"A3\Sounds_F\weapons\Grenades\handgrenade_drops\handg_drop_wood_ext_1", 1.41254, 1, 75};
		soundImpactWoodExt2[] = {"A3\Sounds_F\weapons\Grenades\handgrenade_drops\handg_drop_wood_ext_2", 1.41254, 1, 75};
		soundImpactWoodExt3[] = {"A3\Sounds_F\weapons\Grenades\handgrenade_drops\handg_drop_wood_ext_3", 1.41254, 1, 75};
		soundImpactWoodExt4[] = {"A3\Sounds_F\weapons\Grenades\handgrenade_drops\handg_drop_wood_ext_4", 1.41254, 1, 75};
		timeToLive = 300;
		typicalspeed = 18;
		class NVGMarkers
		{
			class Blinking1
			{
				ambient[] = {0.005, 0.005, 0.005, 1};
				blinking = 1;
				brightness = 0.002;
				color[] = {0.01, 0.01, 0.01, 1};
				name = "cerveny pozicni blik";
				onlyInNvg = 1;
			};
		};
	};
	class Laserbeam: Default
	{
		airLock = 1;
		cost = 5000;
		hit = 500;
		indirectHit = 150;
		indirectHitRange = 2.5;
		initTime = 0;
		maneuvrability = 0;
		manualControl = 1;
		maxControlRange = 0;
		maxSpeed = 350;
		model = "\A3\weapons_f\empty";
		simulation = "laserDesignate";
		simulationStep = 0.1;
		soundFly[] = {"", 0.0001, 4};
		soundHit[] = {"", 19.9526, 1, 1500};
		timeToLive = 0;
	};
	class LaserBombCore: BombCore
	{
		cost = 20000;
		hit = 5000;
		indirectHit = 3500;
		indirectHitRange = 15;
		initTime = 0;
		irLock = 0;
		laserLock = 1;
		maneuvrability = 16;
		maxControlRange = 100000;
		maxSpeed = 100;
		missileLockCone = 50;
		sideAirFriction = 0.1;
		simulation = "shotMissile";
		thrust = 0;
		thrustTime = 0;
		timeToLive = 120;
	};
	class LaserCore: Default
	{
		audibleFire = 32;
		cost = 0.7;
		explosive = 0;
		hitArmor[] = {"soundHitArmor1", 0.7, "soundHitArmor2", 0.3};
		hitBuilding[] = {"soundHitBuilding1", 0.5, "soundHitBuilding2", 0.5};
		hitGround[] = {"soundHit1", 0.33, "soundHit2", 0.33, "soundHit3", 0.33};
		hitMan[] = {"soundHitMan1", 0.5, "soundHitMan2", 0.5};
		recoil = "Empty";
		recoilProne = "Empty";
		simulation = "shotLaser";
		simulationStep = 0.05;
		soundFly[] = {"", 0.251189, 0.7};
		soundHit1[] = {"", 0.0316228, 1};
		soundHit2[] = {"", 0.0316228, 1};
		soundHit3[] = {"", 0.0316228, 1};
		soundHitArmor1[] = {"", 0.0316228, 1};
		soundHitArmor2[] = {"", 0.0316228, 1};
		soundHitBuilding1[] = {"", 0.0316228, 1};
		soundHitBuilding2[] = {"", 0.0316228, 1};
		soundHitMan1[] = {"", 0.0125893, 1};
		soundHitMan2[] = {"", 0.0125893, 1};
		timeToLive = 1;
		visibleFire = 32;
		visibleFireTime = 1;
	};
	class LightningBolt: ShellBase
	{
		craterEffects = "ExploAmmoCrater";
		explosionEffects = "ExploAmmoExplosion";
		explosive = 0.8;
		hit = 10000;
		indirectHit = 10000;
		indirectHitRange = 0.1;
		mineTrigger = "RemoteTrigger";
		model = "\A3\Weapons_f\empty";
		multiSoundHit[] = {"soundHit1", 0.33, "soundHit2", 0.33, "soundHit3", 0.34};
		simulation = "shotMine";
		soundHit[] = {"", 1, 1};
		soundHit1[] = {"\A3\Sounds_F\ambient\thunder\thunder_02", 10, 1, 3000};
		soundHit2[] = {"\A3\Sounds_F\ambient\thunder\thunder_03", 10, 1, 3000};
		soundHit3[] = {"\A3\Sounds_F\ambient\thunder\thunder_06", 10, 1, 3000};
		triggerWhenDestroyed = 1;
		class CamShakeHit
		{
			duration = 1;
			frequency = 20;
			power = 100;
		};
	};
	class M_120mm_cannon_ATGM: ammo_Missile_CannonLaunchedBase
	{
		deleteParentWhenTriggered = 0;
		hit = 150;
		model = "\A3\Weapons_F_Tank\Ammo\Missile_ATGM_01_fly_F";
		submunitionAmmo = "ammo_Penetrator_120mm_missile";
		submunitionDirectionType = "SubmunitionModelDirection";
		submunitionInitialOffset[] = {0, 0, -0.2};
		submunitionInitSpeed = 1000;
		submunitionParentSpeedCoef = 0;
		triggerOnImpact = 1;
		warheadName = "TandemHEAT";
	};
	class M_120mm_cannon_ATGM_LG: M_120mm_cannon_ATGM
	{
		autoSeekTarget = 1;
		flightProfiles[] = {"TopDown"};
		lockSeekRadius = 100;
		lockType = 0;
		manualControl = 0;
		missileKeepLockedCone = 180;
		missileLockCone = 180;
		missileLockMaxDistance = 8000;
		missileLockMaxSpeed = 35;
		missileLockMinDistance = 100;
		thrust = 40;
		thrustTime = 6;
		weaponLockSystem = "4 + 16";
		class Components: Components
		{
			class SensorsManagerComponent
			{
				class Components
				{
					class LaserSensorComponent: SensorTemplateLaser
					{
						angleRangeHorizontal = 40;
						angleRangeVertical = 25;
						maxTrackableSpeed = 35;
						class AirTarget
						{
							maxRange = 8000;
							minRange = 8000;
							objectDistanceLimitCoef = -1;
							viewDistanceLimitCoef = -1;
						};
						class GroundTarget
						{
							maxRange = 8000;
							minRange = 8000;
							objectDistanceLimitCoef = -1;
							viewDistanceLimitCoef = -1;
						};
					};
				};
			};
		};
		class TopDown
		{
			ascendAngle = 25;
			ascendHeight = 250;
			descendDistance = 400;
			minDistance = 400;
		};
	};
	class M_125mm_cannon_ATGM: ammo_Missile_CannonLaunchedBase
	{
		deleteParentWhenTriggered = 0;
		hit = 150;
		indirectHit = 20;
		maxSpeed = 350;
		model = "\A3\Weapons_F_Tank\Launchers\Vorona\Vorona_missile_heat_fly";
		submunitionAmmo = "ammo_Penetrator_125mm_missile";
		submunitionDirectionType = "SubmunitionModelDirection";
		submunitionInitialOffset[] = {0, 0, -0.2};
		submunitionInitSpeed = 1000;
		submunitionParentSpeedCoef = 0;
		thrust = 60;
		thrustTime = 5;
		timeToLive = 20;
		triggerOnImpact = 1;
		warheadName = "TandemHEAT";
	};
	class M_127mm_Firefist_AT: MissileBase
	{
		aiAmmoUsageFlags = "128 + 512";
		airFriction = 0.05;
		airLock = 1;
		cmImmunity = 0.3;
		cost = 500;
		deleteParentWhenTriggered = 0;
		effectsMissile = "missile2";
		effectsMissileInit = "PylonBackEffects";
		explosionSoundEffect = "DefaultExplosion";
		explosive = 0.8;
		flightProfiles[] = {"Direct", "TopDown"};
		fuseDistance = 50;
		hit = 150;
		indirectHit = 25;
		indirectHitRange = 4;
		initTime = 0.05;
		maneuvrability = 10;
		manualControl = 0;
		maxControlRange = 4500;
		maxSpeed = 200;
		missileKeepLockedCone = 90;
		missileLockCone = 4;
		missileLockMaxDistance = 4500;
		missileLockMaxSpeed = 41.6667;
		missileLockMinDistance = 65;
		model = "\A3\Weapons_F_Tank\Ammo\Missile_Firefist_AT_01_fly_F.p3d";
		muzzleEffect = "";
		sideAirFriction = 0.8;
		simulationStep = 0.002;
		submunitionAmmo = "ammo_Penetrator_Firefist";
		submunitionDirectionType = "SubmunitionModelDirection";
		submunitionInitialOffset[] = {0, 0, -0.2};
		submunitionInitSpeed = 1000;
		submunitionParentSpeedCoef = 0;
		thrust = 40;
		thrustTime = 6;
		timeToLive = 35;
		trackLead = 0.8;
		trackOversteer = 2;
		triggerOnImpact = 1;
		typicalSpeed = 170;
		warheadName = "TandemHEAT";
		weaponLockSystem = "2 + 16";
		whistleDist = 4;
		class CamShakeExplode
		{
			distance = 91.3296;
			duration = 1.4;
			frequency = 20;
			power = 11;
		};
		class CamShakeFire
		{
			distance = 61.9677;
			duration = 1.6;
			frequency = 20;
			power = 2.78316;
		};
		class CamShakeHit
		{
			distance = 1;
			duration = 0.6;
			frequency = 20;
			power = 110;
		};
		class CamShakePlayerFire
		{
			distance = 1;
			duration = 0.1;
			frequency = 20;
			power = 3;
		};
		class Components: Components
		{
			class SensorsManagerComponent
			{
				class Components
				{
					class IRSensorComponent: SensorTemplateIR
					{
						angleRangeHorizontal = 3.3;
						angleRangeVertical = 2;
						maxTrackableATL = 50;
						maxTrackableSpeed = 41.6667;
						class AirTarget
						{
							maxRange = 4500;
							minRange = 500;
							objectDistanceLimitCoef = -1;
							viewDistanceLimitCoef = 1;
						};
						class GroundTarget
						{
							maxRange = 4500;
							minRange = 500;
							objectDistanceLimitCoef = 1;
							viewDistanceLimitCoef = 1;
						};
					};
				};
			};
		};
		class Direct {};
		class TopDown
		{
			ascendAngle = 30;
			ascendHeight = 160;
			descendDistance = 160;
			minDistance = 150;
		};
	};
	class M_70mm_SAAMI: MissileBase
	{
		aiAmmoUsageFlags = 256;
		airFriction = 0.145;
		airLock = 2;
		cmImmunity = 0.9;
		cost = 1000;
		CraterEffects = "AAMissileCrater";
		effectsMissile = "missile3";
		effectsMissileInit = "RocketBackEffectsRPG";
		explosionEffects = "AAMissileExplosion";
		fuseDistance = 50;
		hit = 80;
		indirectHit = 60;
		indirectHitRange = 6;
		initTime = 0.25;
		irLock = 1;
		maneuvrability = 15;
		maxSpeed = 850;
		missileKeepLockedCone = 75;
		missileLockCone = 4;
		missileLockMaxDistance = 8000;
		missileLockMaxSpeed = 250;
		missileLockMinDistance = 200;
		model = "\A3\Weapons_F_Tank\Ammo\Missile_SAAMI_AA_01_fly_F.p3d";
		proximityExplosionDistance = 10;
		sideAirFriction = 0.1;
		simulationStep = 0.002;
		thrust = 380;
		thrustTime = 2.25;
		timeToLive = 15;
		trackLead = 0.95;
		trackOversteer = 1;
		warheadName = "HE";
		weaponLockSystem = "2 + 16";
		class CamShakeExplode
		{
			distance = 147.905;
			duration = 2;
			frequency = 20;
			power = 22;
		};
		class CamShakeFire
		{
			distance = 61.9677;
			duration = 1.6;
			frequency = 20;
			power = 2.78316;
		};
		class CamShakeHit
		{
			distance = 1;
			duration = 0.6;
			frequency = 20;
			power = 110;
		};
		class CamShakePlayerFire
		{
			distance = 1;
			duration = 0.1;
			frequency = 20;
			power = 3;
		};
	};
	class M_Air_AA: MissileBase
	{
		aiAmmoUsageFlags = 256;
		airFriction = 0.14;
		airLock = 2;
		cmImmunity = 0.92;
		cost = 1000;
		CraterEffects = "AAMissileCrater";
		effectsMissile = "missile3";
		explosionEffects = "AAMissileExplosion";
		fuseDistance = 300;
		hit = 200;
		indirectHit = 100;
		indirectHitRange = 7;
		initTime = 0;
		irLock = 1;
		maneuvrability = 42;
		manualControl = 0;
		maxControlRange = 6000;
		maxSpeed = 1020;
		missileKeepLockedCone = 120;
		missileLockCone = 90;
		missileLockMaxDistance = 6000;
		missileLockMaxSpeed = 600;
		missileLockMinDistance = 200;
		model = "\A3\Weapons_F\Ammo\Missile_AT_02_fly_F";
		multiSoundHit[] = {"soundHit1", 0.34, "soundHit2", 0.33, "soundHit3", 0.33};
		muzzleEffect = "BIS_fnc_effectFiredHeliRocket";
		proxyShape = "\A3\Weapons_F\Ammo\Missile_AT_02_F";
		sideAirFriction = 0.18;
		simulationStep = 0.002;
		soundFly[] = {"A3\Sounds_F\weapons\Rockets\rocket_fly_2", 0.562341, 1.1, 700};
		soundHit1[] = {"A3\Sounds_F\arsenal\weapons\Launchers\Titan\Explosion_titan_missile_01", 2.51189, 1, 1900};
		soundHit2[] = {"A3\Sounds_F\arsenal\weapons\Launchers\Titan\Explosion_titan_missile_02", 2.51189, 1, 1900};
		soundHit3[] = {"A3\Sounds_F\arsenal\weapons\Launchers\Titan\Explosion_titan_missile_03", 2.51189, 1, 1900};
		SoundSetExplosion[] = {"RocketsHeavy_Exp_SoundSet", "RocketsHeavy_Tail_SoundSet", "Explosion_Debris_SoundSet"};
		thrust = 250;
		thrustTime = 5;
		timeToLive = 30;
		trackLead = 1;
		trackOversteer = 1;
		warheadName = "HE";
		weaponLockSystem = "2 + 16";
		whistleDist = 20;
		class CamShakeExplode
		{
			distance = 163.905;
			duration = 2;
			frequency = 20;
			power = 22;
		};
		class CamShakeFire
		{
			distance = 71.5542;
			duration = 1.8;
			frequency = 20;
			power = 2.9907;
		};
		class CamShakeHit
		{
			distance = 1;
			duration = 0.6;
			frequency = 20;
			power = 110;
		};
		class CamShakePlayerFire
		{
			distance = 1;
			duration = 0.1;
			frequency = 20;
			power = 4;
		};
		class Components: Components
		{
			class SensorsManagerComponent
			{
				class Components
				{
					class IRSensorComponent: SensorTemplateIR
					{
						angleRangeHorizontal = 120;
						angleRangeVertical = 90;
						class AirTarget
						{
							maxRange = 6000;
							minRange = 500;
							objectDistanceLimitCoef = -1;
							viewDistanceLimitCoef = 1;
						};
						class GroundTarget
						{
							maxRange = 5000;
							minRange = 500;
							objectDistanceLimitCoef = 1;
							viewDistanceLimitCoef = 1;
						};
					};
				};
			};
		};
	};
	class M_Air_AA_MI02: M_Air_AA
	{
		maverickWeaponIndexOffset = 2;
	};
	class M_Air_AA_MI06: M_Air_AA
	{
		maverickWeaponIndexOffset = 6;
	};
	class M_Air_AT: M_Titan_AT {};
	class M_AT: M_PG_AT
	{
		cost = 100;
		explosionSoundEffect = "DefaultExplosion";
		hit = 300;
		indirectHit = 50;
		indirectHitRange = 8;
		irLock = 0;
		laserLock = 0;
		maneuvrability = 0;
		manualControl = 0;
		maxControlRange = 0;
		multiSoundHit[] = {"soundHit1", 0.34, "soundHit2", 0.33, "soundHit3", 0.33};
		muzzleEffect = "";
		sideAirFriction = 0.005;
		simulation = "shotRocket";
		simulationStep = 0.05;
		soundFly[] = {"\A3\Sounds_F\weapons\Rockets\rocket_fly_2", 0.562341, 1.2, 700};
		soundHit1[] = {"A3\Sounds_F\arsenal\weapons\Launchers\Titan\Explosion_titan_missile_01", 2.51189, 1, 1900};
		soundHit2[] = {"A3\Sounds_F\arsenal\weapons\Launchers\Titan\Explosion_titan_missile_02", 2.51189, 1, 1900};
		soundHit3[] = {"A3\Sounds_F\arsenal\weapons\Launchers\Titan\Explosion_titan_missile_03", 2.51189, 1, 1900};
		SoundSetExplosion[] = {"RocketsLight_Exp_SoundSet", "RocketsLight_Tail_SoundSet", "Explosion_Debris_SoundSet"};
		submunitionAmmo = "";
		submunitionDirectionType = "";
		submunitionInitialOffset[] = {0, 0, 0};
		submunitionInitSpeed = 0;
		submunitionParentSpeedCoef = 0;
		triggerOnImpact = 0;
		weaponLockSystem = 0;
	};
	class M_Jian_AT: Missile_AGM_01_F
	{
		airLock = 0;
		cmImmunity = 0.45;
		deleteParentWhenTriggered = 0;
		hit = 150;
		indirectHit = 70;
		indirectHitRange = 5;
		initSpeed = 40;
		initTime = 0.2;
		irLock = 1;
		laserLock = 1;
		manualControl = 1;
		maverickWeaponIndexOffset = 0;
		maxControlRange = 8000;
		missileKeepLockedCone = 30;
		missileLockCone = 30;
		missileLockMaxDistance = 8000;
		missileLockMaxSpeed = 35;
		missileLockMinDistance = 350;
		model = "\A3\Weapons_F_Exp\Ammo\Missile_AT_04_fly_F.p3d";
		nvLock = 1;
		proxyShape = "\A3\Weapons_F_Exp\Ammo\Missile_AT_04_F.p3d";
		submunitionAmmo = "ammo_Penetrator_Jian";
		submunitionDirectionType = "SubmunitionModelDirection";
		submunitionInitialOffset[] = {0, 0, -0.2};
		submunitionInitSpeed = 1000;
		submunitionParentSpeedCoef = 0;
		triggerOnImpact = 1;
		warheadName = "TandemHEAT";
		weaponLockSystem = "2 + 4 + 16";
		class Components: Components
		{
			class SensorsManagerComponent
			{
				class Components
				{
					class IRSensorComponent: SensorTemplateIR
					{
						angleRangeHorizontal = 30;
						angleRangeVertical = 30;
						maxTrackableSpeed = 35;
						class AirTarget
						{
							maxRange = 6000;
							minRange = 500;
							objectDistanceLimitCoef = -1;
							viewDistanceLimitCoef = 1;
						};
						class GroundTarget
						{
							maxRange = 6000;
							minRange = 500;
							objectDistanceLimitCoef = 1;
							viewDistanceLimitCoef = 1;
						};
					};
					class LaserSensorComponent: SensorTemplateLaser
					{
						angleRangeHorizontal = 60;
						angleRangeVertical = 60;
						maxTrackableSpeed = 35;
						class AirTarget
						{
							maxRange = 6000;
							minRange = 6000;
							objectDistanceLimitCoef = -1;
							viewDistanceLimitCoef = -1;
						};
						class GroundTarget
						{
							maxRange = 6000;
							minRange = 6000;
							objectDistanceLimitCoef = -1;
							viewDistanceLimitCoef = -1;
						};
					};
				};
			};
		};
	};
	class M_Mo_120mm_AT: M_Mo_82mm_AT
	{
		cameraViewAvailable = 1;
		EffectFly = "ArtilleryTrails";
		hit = 800;
		indirectHit = 50;
		indirectHitRange = 3;
	};
	class M_Mo_120mm_AT_LG: M_Mo_120mm_AT
	{
		weaponLockSystem = 4;
		class Components: Components
		{
			class SensorsManagerComponent
			{
				class Components
				{
					class LaserSensorComponent: SensorTemplateLaser
					{
						angleRangeHorizontal = 40;
						angleRangeVertical = 40;
						class AirTarget
						{
							maxRange = 800;
							minRange = 800;
							objectDistanceLimitCoef = -1;
							viewDistanceLimitCoef = -1;
						};
						class GroundTarget
						{
							maxRange = 800;
							minRange = 800;
							objectDistanceLimitCoef = -1;
							viewDistanceLimitCoef = -1;
						};
					};
				};
			};
		};
	};
	class M_Mo_155mm_AT: M_Mo_120mm_AT
	{
		hit = 1200;
		indirectHit = 200;
		indirectHitRange = 4;
	};
	class M_Mo_155mm_AT_LG: M_Mo_120mm_AT_LG
	{
		hit = 1200;
		indirectHit = 200;
		indirectHitRange = 4;
	};
	class M_Mo_230mm_AT: M_Mo_155mm_AT
	{
		airFriction = 0;
		audibleFire = 64;
		cost = 1000;
		dangerRadiusHit = 1250;
		deflecting = 0;
		effectFly = "ArtilleryTrails";
		hit = 1200;
		indirectHit = 800;
		indirectHitRange = 30;
		model = "\A3\Weapons_F_Delta\Ammo\Rocket_230mm_F";
		muzzleEffect = "";
		suppressionRadiusHit = 120;
		class CamShakeExplode
		{
			distance = 361.326;
			duration = 3;
			frequency = 20;
			power = 46;
		};
		class CamShakeFire
		{
			distance = 121.326;
			duration = 3;
			frequency = 20;
			power = 3.89432;
		};
		class CamShakeHit
		{
			distance = 1;
			duration = 0.8;
			frequency = 20;
			power = 230;
		};
		class CamShakePlayerFire
		{
			distance = 1;
			duration = 0.1;
			frequency = 20;
			power = 5;
		};
	};
	class M_Mo_230mm_AT_LG: M_Mo_155mm_AT_LG
	{
		airFriction = 0;
		audibleFire = 64;
		cost = 1000;
		dangerRadiusHit = 1250;
		deflecting = 0;
		effectFly = "ArtilleryTrails";
		hit = 1200;
		indirectHit = 800;
		indirectHitRange = 30;
		model = "\A3\Weapons_F_Delta\Ammo\Rocket_230mm_F";
		muzzleEffect = "";
		suppressionRadiusHit = 120;
		class CamShakeExplode
		{
			distance = 361.326;
			duration = 3;
			frequency = 20;
			power = 46;
		};
		class CamShakeFire
		{
			distance = 121.326;
			duration = 3;
			frequency = 20;
			power = 3.89432;
		};
		class CamShakeHit
		{
			distance = 1;
			duration = 0.8;
			frequency = 20;
			power = 230;
		};
		class CamShakePlayerFire
		{
			distance = 1;
			duration = 0.1;
			frequency = 20;
			power = 5;
		};
	};
	class M_Mo_230mm_guided: R_230mm_HE
	{
		hit = 300;
		muzzleEffect = "";
		submunitionAmmo = "M_Mo_230mm_AT";
		triggerDistance = 500;
	};
	class M_Mo_82mm_AT: MissileBase
	{
		airFriction = 0.01;
		airLock = 0;
		autoSeekTarget = 1;
		fuseDistance = 0;
		hit = 160;
		indirectHit = 50;
		indirectHitRange = 8;
		maneuvrability = 6;
		missileKeepLockedCone = 40;
		missileLockCone = 40;
		model = "\A3\weapons_f\ammo\shell";
		sideAirFriction = 0.03;
		simulationStep = 0.002;
		weaponLockSystem = 2;
		class Components: Components
		{
			class SensorsManagerComponent
			{
				class Components
				{
					class IRSensorComponent: SensorTemplateIR
					{
						angleRangeHorizontal = 40;
						angleRangeVertical = 40;
						class AirTarget
						{
							maxRange = 800;
							minRange = 500;
							objectDistanceLimitCoef = -1;
							viewDistanceLimitCoef = 1;
						};
						class GroundTarget
						{
							maxRange = 800;
							minRange = 500;
							objectDistanceLimitCoef = 1;
							viewDistanceLimitCoef = 1;
						};
					};
				};
			};
		};
	};
	class M_Mo_82mm_AT_LG: M_Mo_82mm_AT
	{
		hit = 240;
		simulationStep = 0.002;
		weaponLockSystem = 4;
		class Components: Components
		{
			class SensorsManagerComponent
			{
				class Components
				{
					class LaserSensorComponent: SensorTemplateLaser
					{
						angleRangeHorizontal = 40;
						angleRangeVertical = 40;
						class AirTarget
						{
							maxRange = 800;
							minRange = 800;
							objectDistanceLimitCoef = -1;
							viewDistanceLimitCoef = -1;
						};
						class GroundTarget
						{
							maxRange = 800;
							minRange = 800;
							objectDistanceLimitCoef = -1;
							viewDistanceLimitCoef = -1;
						};
					};
				};
			};
		};
	};
	class M_NLAW_AT_F: MissileBase
	{
		aiAmmoUsageFlags = "128 + 512";
		airFriction = 0.09;
		airLock = 1;
		allowAgainstInfantry = 0;
		cmImmunity = 0.2;
		cost = 400;
		CraterEffects = "ATRocketCrater";
		deleteParentWhenTriggered = 0;
		effectsMissile = "missile3";
		effectsMissileInit = "";
		explosionEffects = "ATRocketExplosion";
		explosive = 0.5;
		flightProfiles[] = {"Direct", "Overfly"};
		fuseDistance = 20;
		hit = 50;
		indirectHit = 25;
		indirectHitRange = 2.4;
		initTime = 0.2;
		irLock = 1;
		maneuvrability = 2;
		maxControlRange = 11;
		maxSpeed = 180;
		missileKeepLockedCone = 300;
		missileLockCone = 5;
		missileLockMaxDistance = 800;
		missileLockMaxSpeed = 35;
		missileLockMinDistance = 20;
		model = "\A3\weapons_f\launchers\nlaw\nlaw_rocket";
		proximityExplosionDistance = 5;
		sideAirFriction = 0.5;
		simulationStep = 0.002;
		soundFly[] = {"A3\Sounds_F\arsenal\weapons\Launchers\NLAW\Fly_NLAW", 0.562341, 1.5, 700};
		soundHit[] = {"A3\Sounds_F\arsenal\weapons\Launchers\NLAW\NLAW_Hit", 1.77828, 1, 1500};
		SoundSetExplosion[] = {"RocketsMedium_Exp_SoundSet", "RocketsMedium_Tail_SoundSet", "Explosion_Debris_SoundSet"};
		submunitionAmmo = "ammo_Penetrator_NLAW";
		submunitionDirectionType = "SubmunitionTargetDirection";
		submunitionInitialOffset[] = {0, 0, -0.5};
		submunitionInitSpeed = 1000;
		submunitionParentSpeedCoef = 0;
		thrust = 200;
		thrustTime = 0.8;
		timeToLive = 8;
		trackLead = 1;
		trackOversteer = 0.8;
		triggerDistance = 2.5;
		triggerOnImpact = 1;
		weaponLockSystem = "1 + 16";
		whistleDist = 16;
		class CamShakeExplode
		{
			distance = 91.3296;
			duration = 1.4;
			frequency = 20;
			power = 11;
		};
		class CamShakeFire
		{
			distance = 50.5964;
			duration = 1.2;
			frequency = 20;
			power = 2.51487;
		};
		class CamShakeHit
		{
			distance = 1;
			duration = 0.6;
			frequency = 20;
			power = 110;
		};
		class CamShakePlayerFire
		{
			distance = 1;
			duration = 0.1;
			frequency = 20;
			power = 2;
		};
		class Components: Components
		{
			class SensorsManagerComponent
			{
				class Components
				{
					class VisualSensorComponent: SensorTemplateVisual
					{
						angleRangeHorizontal = 5;
						angleRangeVertical = 5;
						maxTrackableATL = 20;
						maxTrackableSpeed = 35;
						nightRangeCoef = 0.8;
						class AirTarget
						{
							maxRange = 800;
							minRange = 500;
							objectDistanceLimitCoef = -1;
							viewDistanceLimitCoef = 1;
						};
						class GroundTarget
						{
							maxRange = 800;
							minRange = 500;
							objectDistanceLimitCoef = 1;
							viewDistanceLimitCoef = 1;
						};
					};
				};
			};
		};
		class Direct {};
		class Overfly: Direct
		{
			overflyElevation = 2.5;
		};
	};
	class M_PG_AT: MissileBase
	{
		aiAmmoUsageFlags = "128 + 64";
		airFriction = 0.1;
		airLock = 0;
		cmImmunity = 0.3;
		cost = 200;
		deleteParentWhenTriggered = 0;
		effectsMissile = "missile2";
		effectsMissileInit = "MissileDAR1";
		fuseDistance = 50;
		hit = 95;
		indirectHit = 40;
		indirectHitRange = 3.2;
		initTime = 0;
		irLock = 1;
		laserLock = 1;
		maneuvrability = 8;
		manualControl = 1;
		maxControlRange = 5000;
		maxSpeed = 720;
		missileKeepLockedCone = 60;
		missileLockCone = 30;
		missileLockMaxDistance = 5000;
		missileLockMaxSpeed = 35;
		missileLockMinDistance = 100;
		missileManualControlCone = 240;
		model = "\A3\Weapons_F\Ammo\Rocket_01_fly_F";
		muzzleEffect = "";
		proxyShape = "\A3\Weapons_F\Ammo\Rocket_01_F";
		sideAirFriction = 0.16;
		simulationStep = 0.002;
		soundFly[] = {"A3\Sounds_F\weapons\Rockets\rocket_fly_1", 0.562341, 1.2, 700};
		SoundSetExplosion[] = {"RocketsLight_Exp_SoundSet", "RocketsLight_Tail_SoundSet", "Explosion_Debris_SoundSet"};
		submunitionAmmo = "ammo_Penetrator_PG_AT";
		submunitionDirectionType = "SubmunitionModelDirection";
		submunitionInitialOffset[] = {0, 0, -0.2};
		submunitionInitSpeed = 1000;
		submunitionParentSpeedCoef = 0;
		thrust = 825;
		thrustTime = 1.07;
		timeToLive = 20;
		trackLead = 1;
		trackOversteer = 1;
		triggerOnImpact = 1;
		warheadName = "HE";
		weaponLockSystem = "2 + 4 + 16";
		whistleDist = 4;
		class Components: Components
		{
			class SensorsManagerComponent
			{
				class Components
				{
					class IRSensorComponent: SensorTemplateIR
					{
						angleRangeHorizontal = 45;
						angleRangeVertical = 35;
						maxTrackableSpeed = 35;
						class AirTarget
						{
							maxRange = 4000;
							minRange = 500;
							objectDistanceLimitCoef = -1;
							viewDistanceLimitCoef = 1;
						};
						class GroundTarget
						{
							maxRange = 4000;
							minRange = 500;
							objectDistanceLimitCoef = 1;
							viewDistanceLimitCoef = 1;
						};
					};
					class LaserSensorComponent: SensorTemplateLaser
					{
						angleRangeHorizontal = 90;
						angleRangeVertical = 70;
						maxTrackableSpeed = 35;
						class AirTarget
						{
							maxRange = 4000;
							minRange = 4000;
							objectDistanceLimitCoef = -1;
							viewDistanceLimitCoef = -1;
						};
						class GroundTarget
						{
							maxRange = 4000;
							minRange = 4000;
							objectDistanceLimitCoef = -1;
							viewDistanceLimitCoef = -1;
						};
					};
				};
			};
		};
	};
	class M_Scalpel_AT: MissileBase
	{
		aiAmmoUsageFlags = "128 + 512";
		airFriction = 0.103;
		airLock = 0;
		cameraViewAvailable = 1;
		cmImmunity = 0.45;
		cost = 300;
		CraterEffects = "ATRocketCrater";
		deleteParentWhenTriggered = 0;
		explosionEffects = "ATRocketExplosion";
		flightProfiles[] = {"TopDown"};
		fuseDistance = 500;
		hit = 150;
		indirectHit = 50;
		indirectHitRange = 4;
		initTime = 0;
		irLock = 1;
		laserLock = 1;
		maneuvrability = 15;
		manualControl = 1;
		maxControlRange = 6000;
		maxSpeed = 450;
		missileKeepLockedCone = 60;
		missileLockCone = 30;
		missileLockMaxDistance = 6000;
		missileLockMaxSpeed = 55;
		missileLockMinDistance = 250;
		missileManualControlCone = 120;
		model = "\A3\Weapons_F\Ammo\Missile_AT_03_fly_F";
		muzzleEffect = "BIS_fnc_effectFiredHeliRocket";
		nvLock = 1;
		proxyShape = "\A3\Weapons_F\Ammo\Missile_AT_03_F";
		sideAirFriction = 0.18;
		simulationStep = 0.002;
		soundFly[] = {"A3\Sounds_F\weapons\Rockets\rocket_fly_1", 0.562341, 1.5, 700};
		soundHit[] = {"A3\Sounds_F\weapons\Rockets\explosion_missile_02", 0.891251, 1, 1900};
		SoundSetExplosion[] = {"RocketsMedium_Exp_SoundSet", "RocketsMedium_Tail_SoundSet", "Explosion_Debris_SoundSet"};
		submunitionAmmo = "ammo_Penetrator_Scalpel";
		submunitionDirectionType = "SubmunitionModelDirection";
		submunitionInitialOffset[] = {0, 0, -0.2};
		submunitionInitSpeed = 1000;
		submunitionParentSpeedCoef = 0;
		thrust = 168;
		thrustTime = 3.5;
		timeToLive = 28;
		trackLead = 1;
		trackOversteer = 1.5;
		triggerOnImpact = 1;
		warheadName = "TandemHEAT";
		weaponLockSystem = "2 + 4 + 16";
		whistleDist = 8;
		class Components: Components
		{
			class SensorsManagerComponent
			{
				class Components
				{
					class IRSensorComponent: SensorTemplateIR
					{
						angleRangeHorizontal = 45;
						angleRangeVertical = 35;
						maxTrackableSpeed = 55;
						class AirTarget
						{
							maxRange = 6000;
							minRange = 500;
							objectDistanceLimitCoef = -1;
							viewDistanceLimitCoef = 1;
						};
						class GroundTarget
						{
							maxRange = 6000;
							minRange = 500;
							objectDistanceLimitCoef = 1;
							viewDistanceLimitCoef = 1;
						};
					};
					class LaserSensorComponent: SensorTemplateLaser
					{
						angleRangeHorizontal = 90;
						angleRangeVertical = 70;
						maxTrackableSpeed = 55;
						class AirTarget
						{
							maxRange = 6000;
							minRange = 6000;
							objectDistanceLimitCoef = -1;
							viewDistanceLimitCoef = -1;
						};
						class GroundTarget
						{
							maxRange = 6000;
							minRange = 6000;
							objectDistanceLimitCoef = -1;
							viewDistanceLimitCoef = -1;
						};
					};
				};
			};
		};
		class Hiteffects
		{
			hitWater = "ImpactEffectsSmall";
		};
		class TopDown
		{
			ascendAngle = 20;
			ascendHeight = 400;
			descendDistance = 800;
			minDistance = 800;
		};
	};
	class M_Scalpel_AT_hidden: M_Scalpel_AT
	{
		proxyShape = "\A3\weapons_f\empty";
	};
	class M_SPG9_HE: M_SPG9_HEAT
	{
		aiAmmoUsageFlags = "64 + 128";
		allowAgainstInfantry = 1;
		cost = 30;
		explosive = 0.8;
		hit = 100;
		indirectHit = 100;
		indirectHitRange = 3.5;
		model = "\a3\Weapons_F_Tank\Ammo\rocket_spg9.p3d";
		submunitionAmmo = "";
		submunitionDirectionType = "";
		submunitionInitialOffset[] = {0, 0, 0};
		submunitionInitSpeed = 0;
		submunitionParentSpeedCoef = 0;
		triggerOnImpact = 0;
		warheadName = "HE";
	};
	class M_SPG9_HEAT: RocketBase
	{
		aiAmmoUsageFlags = "128 + 512";
		airfriction = 0.45;
		allowAgainstInfantry = 0;
		cost = 30;
		deleteParentWhenTriggered = 0;
		effectsMissile = "missile2";
		effectsMissileInit = "RocketBackEffectsRPG";
		explosionSoundEffect = "DefaultExplosion";
		explosive = 0.8;
		fuseDistance = 50;
		hit = 95;
		indirectHit = 16;
		indirectHitRange = 3.5;
		initTime = 0.03;
		maxSpeed = 700;
		model = "\a3\Weapons_F_Tank\Ammo\rocket_spg9.p3d";
		sideAirFriction = 0.01;
		simulationStep = 0.02;
		submunitionAmmo = "ammo_Penetrator_SPG9";
		submunitionDirectionType = "SubmunitionModelDirection";
		submunitionInitialOffset[] = {0, 0, -0.2};
		submunitionInitSpeed = 1000;
		submunitionParentSpeedCoef = 0;
		thrust = 1050;
		thrustTime = 0.45;
		timeToLive = 8;
		triggerOnImpact = 1;
		typicalspeed = 700;
		warheadName = "HE";
		whistleDist = 4;
		class CamShakeExplode
		{
			distance = 91.3296;
			duration = 1.4;
			frequency = 20;
			power = 11;
		};
		class CamShakeFire
		{
			distance = 61.9677;
			duration = 1.6;
			frequency = 20;
			power = 2.78316;
		};
		class CamShakeHit
		{
			distance = 1;
			duration = 0.6;
			frequency = 20;
			power = 110;
		};
		class CamShakePlayerFire
		{
			distance = 1;
			duration = 0.1;
			frequency = 20;
			power = 3;
		};
	};
	class M_Titan_AA: MissileBase
	{
		aiAmmoUsageFlags = 256;
		airFriction = 0.145;
		airLock = 2;
		cmImmunity = 0.9;
		cost = 1000;
		CraterEffects = "AAMissileCrater";
		effectsMissile = "missile3";
		effectsMissileInit = "";
		explosionEffects = "AAMissileExplosion";
		fuseDistance = 50;
		hit = 80;
		indirectHit = 60;
		indirectHitRange = 6;
		initTime = 0.25;
		irLock = 1;
		maneuvrability = 15;
		maxSpeed = 850;
		missileKeepLockedCone = 75;
		missileLockCone = 4;
		missileLockMaxDistance = 3500;
		missileLockMaxSpeed = 250;
		missileLockMinDistance = 100;
		model = "\A3\Weapons_F_beta\Launchers\titan\titan_missile_atl_fly.p3d";
		multiSoundHit[] = {"soundHit1", 0.34, "soundHit2", 0.33, "soundHit3", 0.33};
		proximityExplosionDistance = 10;
		sideAirFriction = 0.1;
		simulationStep = 0.002;
		soundHit1[] = {"A3\Sounds_F\arsenal\weapons\Launchers\Titan\Explosion_titan_missile_01", 2.51189, 1, 1900};
		soundHit2[] = {"A3\Sounds_F\arsenal\weapons\Launchers\Titan\Explosion_titan_missile_02", 2.51189, 1, 1900};
		soundHit3[] = {"A3\Sounds_F\arsenal\weapons\Launchers\Titan\Explosion_titan_missile_03", 2.51189, 1, 1900};
		SoundSetExplosion[] = {"RocketsHeavy_Exp_SoundSet", "RocketsHeavy_Tail_SoundSet", "Explosion_Debris_SoundSet"};
		thrust = 380;
		thrustTime = 2.25;
		timeToLive = 15;
		trackLead = 0.95;
		trackOversteer = 1;
		warheadName = "HE";
		weaponLockSystem = "2 + 16";
		class CamShakeExplode
		{
			distance = 147.905;
			duration = 2;
			frequency = 20;
			power = 22;
		};
		class CamShakeFire
		{
			distance = 61.9677;
			duration = 1.6;
			frequency = 20;
			power = 2.78316;
		};
		class CamShakeHit
		{
			distance = 1;
			duration = 0.6;
			frequency = 20;
			power = 110;
		};
		class CamShakePlayerFire
		{
			distance = 1;
			duration = 0.1;
			frequency = 20;
			power = 3;
		};
		class Components: Components
		{
			class SensorsManagerComponent
			{
				class Components
				{
					class IRSensorComponent: SensorTemplateIR
					{
						angleRangeHorizontal = 7;
						angleRangeVertical = 4.5;
						groundNoiseDistanceCoef = 0.2;
						maxGroundNoiseDistance = 50;
						maxTrackableSpeed = 250;
						class AirTarget
						{
							maxRange = 3500;
							minRange = 500;
							objectDistanceLimitCoef = -1;
							viewDistanceLimitCoef = 1;
						};
						class GroundTarget
						{
							maxRange = 2500;
							minRange = 500;
							objectDistanceLimitCoef = 1;
							viewDistanceLimitCoef = 1;
						};
					};
				};
			};
		};
	};
	class M_Titan_AA_long: M_Titan_AA
	{
		missileKeepLockedCone = 40;
		missileLockCone = 30;
		missileLockMaxDistance = 4500;
		missileLockMaxSpeed = 500;
		model = "\A3\Weapons_F_Beta\Launchers\Titan\titan_missile_atl_fly.p3d";
		thrustTime = 3;
		class Components: Components
		{
			class SensorsManagerComponent
			{
				class Components
				{
					class IRSensorComponent: SensorTemplateIR
					{
						angleRangeHorizontal = 40;
						angleRangeVertical = 25;
						groundNoiseDistanceCoef = 0.2;
						maxGroundNoiseDistance = 50;
						maxTrackableSpeed = 500;
						class AirTarget
						{
							maxRange = 4500;
							minRange = 500;
							objectDistanceLimitCoef = -1;
							viewDistanceLimitCoef = 1;
						};
						class GroundTarget
						{
							maxRange = 3500;
							minRange = 500;
							objectDistanceLimitCoef = 1;
							viewDistanceLimitCoef = 1;
						};
					};
				};
			};
		};
	};
	class M_Titan_AA_static: M_Titan_AA
	{
		effectsMissileInit = "RocketBackEffectsStaticRPG";
	};
	class M_Titan_AP: M_Titan_AT
	{
		aiAmmoUsageFlags = "64 + 128";
		cost = 300;
		CraterEffects = "ATMissileCrater";
		effectsMissile = "missile3";
		explosive = 1;
		flightProfiles[] = {"Direct"};
		hit = 100;
		indirectHit = 25;
		indirectHitRange = 10;
		irLock = 0;
		lockType = 1;
		manualControl = 1;
		manualControlOffset = 100;
		missileManualControlCone = 60;
		model = "\A3\Weapons_F_beta\Launchers\titan\titan_missile_ap_fly";
		submunitionAmmo = "";
		submunitionDirectionType = "";
		submunitionInitialOffset[] = {0, 0, 0};
		submunitionInitSpeed = 0;
		submunitionParentSpeedCoef = 0;
		triggerOnImpact = 0;
		warheadName = "HE";
		class CamShakeExplode
		{
			distance = 123.33;
			duration = 1.4;
			frequency = 20;
			power = 11;
		};
		class CamShakeHit
		{
			distance = 1;
			duration = 0.6;
			frequency = 20;
			power = 55;
		};
		class Components: Components
		{
			class SensorsManagerComponent {};
		};
	};
	class M_Titan_AT: MissileBase
	{
		aiAmmoUsageFlags = "128 + 512";
		airFriction = 0.085;
		airLock = 1;
		cmImmunity = 0.4;
		cost = 500;
		deleteParentWhenTriggered = 0;
		effectsMissile = "missile2";
		effectsMissileInit = "";
		explosionSoundEffect = "DefaultExplosion";
		explosive = 1;
		flightProfiles[] = {"Direct", "TopDown"};
		fuseDistance = 50;
		hit = 95;
		indirectHit = 20;
		indirectHitRange = 3.3;
		initTime = 0.25;
		lockType = 0;
		maneuvrability = 20;
		manualControl = 1;
		maxControlRange = 2000;
		maxSpeed = 180;
		missileKeepLockedCone = 160;
		missileLockCone = 4.5;
		missileLockMaxDistance = 2000;
		missileLockMaxSpeed = 35;
		missileLockMinDistance = 50;
		missileManualControlCone = 45;
		model = "\A3\Weapons_F_beta\Launchers\titan\titan_missile_at_fly";
		muzzleEffect = "";
		sideAirFriction = 1;
		simulationStep = 0.002;
		soundFly[] = {"A3\Sounds_F\arsenal\weapons\Launchers\Titan\Fly_Titan", 0.630957, 1.5, 300};
		SoundSetExplosion[] = {"RocketsHeavy_Exp_SoundSet", "RocketsHeavy_Tail_SoundSet", "Explosion_Debris_SoundSet"};
		submunitionAmmo = "ammo_Penetrator_Titan_AT";
		submunitionDirectionType = "SubmunitionModelDirection";
		submunitionInitialOffset[] = {0, 0, -0.2};
		submunitionInitSpeed = 1000;
		submunitionParentSpeedCoef = 0;
		thrust = 45;
		thrustTime = 5;
		timeToLive = 22;
		trackLead = 0.9;
		trackOversteer = 1.5;
		triggerOnImpact = 1;
		typicalSpeed = 160;
		warheadName = "HE";
		weaponLockSystem = "2 + 16";
		whistleDist = 4;
		class CamShakeExplode
		{
			distance = 91.3296;
			duration = 1.4;
			frequency = 20;
			power = 11;
		};
		class CamShakeFire
		{
			distance = 61.9677;
			duration = 1.6;
			frequency = 20;
			power = 2.78316;
		};
		class CamShakeHit
		{
			distance = 1;
			duration = 0.6;
			frequency = 20;
			power = 110;
		};
		class CamShakePlayerFire
		{
			distance = 1;
			duration = 0.1;
			frequency = 20;
			power = 3;
		};
		class Components: Components
		{
			class SensorsManagerComponent
			{
				class Components
				{
					class IRSensorComponent: SensorTemplateIR
					{
						angleRangeHorizontal = 3.7;
						angleRangeVertical = 2.3;
						maxTrackableATL = 50;
						maxTrackableSpeed = 35;
						class AirTarget
						{
							maxRange = 2000;
							minRange = 500;
							objectDistanceLimitCoef = -1;
							viewDistanceLimitCoef = 1;
						};
						class GroundTarget
						{
							maxRange = 2000;
							minRange = 500;
							objectDistanceLimitCoef = 1;
							viewDistanceLimitCoef = 1;
						};
					};
				};
			};
		};
		class Direct {};
		class TopDown
		{
			ascendAngle = 30;
			ascendHeight = 150;
			descendDistance = 180;
			minDistance = 180;
		};
	};
	class M_Titan_AT_long: M_Titan_AT
	{
		cmImmunity = 0.5;
		deleteParentWhenTriggered = 0;
		flightProfiles[] = {"Direct", "TopDown"};
		hit = 150;
		indirectHit = 40;
		indirectHitRange = 4;
		initTime = 0.15;
		maxControlRange = 5000;
		maxSpeed = 180;
		missileLockCone = 12;
		missileLockMaxDistance = 5000;
		missileLockMaxSpeed = 35;
		missileLockMinDistance = 200;
		submunitionAmmo = "ammo_Penetrator_Titan_AT_long";
		submunitionDirectionType = "SubmunitionModelDirection";
		submunitionInitialOffset[] = {0, 0, -0.2};
		submunitionInitSpeed = 1000;
		submunitionParentSpeedCoef = 0;
		thrust = 35;
		thrustTime = 8;
		timeToLive = 35;
		triggerOnImpact = 1;
		typicalSpeed = 1660;
		warheadName = "TandemHEAT";
		weaponLockSystem = "2 + 16";
		class Components: Components
		{
			class SensorsManagerComponent
			{
				class Components
				{
					class IRSensorComponent: SensorTemplateIR
					{
						angleRangeHorizontal = 9.5;
						angleRangeVertical = 6;
						maxTrackableATL = 50;
						maxTrackableSpeed = 35;
						class AirTarget
						{
							maxRange = 5000;
							minRange = 500;
							objectDistanceLimitCoef = -1;
							viewDistanceLimitCoef = 1;
						};
						class GroundTarget
						{
							maxRange = 5000;
							minRange = 500;
							objectDistanceLimitCoef = 1;
							viewDistanceLimitCoef = 1;
						};
					};
				};
			};
		};
		class Direct {};
		class TopDown
		{
			ascendAngle = 30;
			ascendHeight = 200;
			descendDistance = 240;
			minDistance = 240;
		};
	};
	class M_Titan_AT_static: M_Titan_AT
	{
		effectsMissileInit = "RocketBackEffectsStaticRPG";
		initTime = 0.1;
	};
	class M_Vorona_HE: M_Vorona_HEAT
	{
		cost = 30;
		explosive = 0.8;
		hit = 220;
		indirectHit = 45;
		indirectHitRange = 8;
		model = "\A3\Weapons_F_Tank\Launchers\Vorona\Vorona_missile_he_fly";
		submunitionAmmo = "";
		submunitionDirectionType = "";
		submunitionInitialOffset[] = {0, 0, 0};
		submunitionInitSpeed = 0;
		submunitionParentSpeedCoef = 0;
		triggerOnImpact = 0;
		warheadName = "HE";
	};
	class M_Vorona_HEAT: MissileBase
	{
		aiAmmoUsageFlags = "128 + 512";
		airFriction = 0.06;
		cost = 500;
		deleteParentWhenTriggered = 0;
		effectsMissile = "missile2";
		effectsMissileInit = "RocketBackEffectsRPG";
		explosionSoundEffect = "DefaultExplosion";
		explosive = 0.8;
		fuseDistance = 50;
		hit = 150;
		indirectHit = 25;
		indirectHitRange = 3.5;
		initTime = 0.05;
		lockType = 1;
		maneuvrability = 6;
		manualControl = 1;
		manualControlOffset = 80;
		maxControlRange = 2000;
		maxSpeed = 200;
		missileManualControlCone = 60;
		model = "\A3\Weapons_F_Tank\Launchers\Vorona\Vorona_missile_heat_fly";
		sideAirFriction = 0.09;
		simulationStep = 0.002;
		submunitionAmmo = "ammo_Penetrator_Vorona";
		submunitionDirectionType = "SubmunitionModelDirection";
		submunitionInitialOffset[] = {0, 0, -0.2};
		submunitionInitSpeed = 1000;
		submunitionParentSpeedCoef = 0;
		thrust = 70;
		thrustTime = 1;
		timeToLive = 30;
		trackLead = 0.85;
		trackOversteer = 0.5;
		triggerOnImpact = 1;
		warheadName = "TandemHEAT";
		weaponLockSystem = 0;
		whistleDist = 4;
		class CamShakeExplode
		{
			distance = 91.3296;
			duration = 1.4;
			frequency = 20;
			power = 11;
		};
		class CamShakeFire
		{
			distance = 0;
			duration = 0.2;
			frequency = 20;
			power = 0;
		};
		class CamShakeHit
		{
			distance = 1;
			duration = 0.6;
			frequency = 20;
			power = 110;
		};
		class CamShakePlayerFire
		{
			distance = 1;
			duration = 0.1;
			frequency = 20;
			power = 0;
		};
	};
	class M_Zephyr: M_Titan_AA
	{
		activeSensorAlwaysOn = 0;
		airFriction = 0.078;
		cmImmunity = 0.94;
		cost = 1500;
		effectsMissileInit = "PylonBackEffects_InitDelay";
		fuseDistance = 500;
		hit = 170;
		indirectHit = 115;
		indirectHitRange = 12;
		initTime = 0.6;
		maneuvrability = 22;
		maxSpeed = 850;
		missileKeepLockedCone = 75;
		missileLockCone = 40;
		missileLockMaxDistance = 10000;
		missileLockMaxSpeed = 835;
		missileLockMinDistance = 500;
		model = "\A3\Weapons_F\Ammo\Missile_AA_02_fly_F.p3d";
		muzzleEffect = "";
		proximityExplosionDistance = 25;
		proxyShape = "\A3\Weapons_F\Ammo\Missile_AA_02_F.p3d";
		sideAirFriction = 0.18;
		soundFly[] = {"A3\Sounds_F\weapons\Rockets\rocket_fly_1", 0.562341, 1.1, 700};
		thrust = 200;
		thrustTime = 7;
		timeToLive = 30;
		trackLead = 1.05;
		trackOversteer = 1.1;
		weaponLockSystem = "8 + 16";
		class CamShakeFire
		{
			distance = 71.5542;
			duration = 1.8;
			frequency = 20;
			power = 2.9907;
		};
		class CamShakePlayerFire
		{
			distance = 1;
			duration = 0.1;
			frequency = 20;
			power = 4;
		};
		class Components: Components
		{
			class SensorsManagerComponent
			{
				class Components
				{
					class RadarSensorComponent: SensorTemplateActiveRadar
					{
						angleRangeHorizontal = 60;
						angleRangeVertical = 60;
						class AirTarget
						{
							maxRange = 10000;
							minRange = 10000;
							objectDistanceLimitCoef = -1;
							viewDistanceLimitCoef = -1;
						};
						class GroundTarget
						{
							maxRange = 5000;
							minRange = 5000;
							objectDistanceLimitCoef = -1;
							viewDistanceLimitCoef = -1;
						};
					};
				};
			};
		};
	};
	class M_Zephyr_air: M_Zephyr
	{
		effectsMissile = "missile3";
	};
	class M_Zephyr_Mi06: M_Zephyr
	{
		maverickWeaponIndexOffset = 6;
	};
	class Mine_155mm_AMOS_range: SubmunitionBase
	{
		airFriction = 0;
		cost = 500;
		hit = 300;
		muzzleEffect = "";
		submunitionAmmo = "Mo_ClassicMineRange";
		submunitionConeAngle = 30;
		submunitionConeType[] = {"randomcenter", 24};
		triggerDistance = 100;
		class CamShakeFire
		{
			distance = 99.5992;
			duration = 2.4;
			frequency = 20;
			power = 3.52844;
		};
		class CamShakePlayerFire
		{
			distance = 1;
			duration = 0.1;
			frequency = 20;
			power = 0.02;
		};
	};
	class MineBase: MineCore
	{
		aiAmmoUsageFlags = 16;
		explosionType = "mine";
		icon = "iconExplosiveAT";
		mapsize = 1;
		soundActivation[] = {"A3\Sounds_F\ApersMine_Placement_01", 1, 1, 20};
		soundDeactivation[] = {"A3\Sounds_F\ApersMine_Deactivate_01", 1, 1, 20};
		soundTrigger[] = {"A3\Sounds_F\ApersMine_Trigger_01", 1, 1, 20};
		triggerWhenDestroyed = 1;
		underwaterHitRangeCoef = 2;
	};
	class MineCore: TimeBombCore
	{
		defaultMagazine = "";
		hit = 750;
		indirectHit = 750;
		indirectHitRange = 5;
		model = "";
		simulation = "shotMine";
	};
	class mini_Grenade: GrenadeHand
	{
		dangerRadiusHit = 50;
		deflecting = 30;
		explosionEffectsRadius = 1.5;
		hit = 6;
		indirectHit = 6;
		indirectHitRange = 4;
		model = "\A3\Weapons_f\ammo\mini_frag_throw";
		multiSoundHit[] = {"soundHit1", 0.25, "soundHit2", 0.25, "soundHit3", 0.25, "soundHit4", 0.25};
		soundHit1[] = {"A3\Sounds_F\arsenal\explosives\grenades\Explosion_mini_grenade_01", 3.16228, 1, 1300};
		soundHit2[] = {"A3\Sounds_F\arsenal\explosives\grenades\Explosion_mini_grenade_02", 3.16228, 1, 1300};
		soundHit3[] = {"A3\Sounds_F\arsenal\explosives\grenades\Explosion_mini_grenade_03", 3.16228, 1, 1300};
		soundHit4[] = {"A3\Sounds_F\arsenal\explosives\grenades\Explosion_mini_grenade_04", 3.16228, 1, 1300};
		SoundSetExplosion[] = {"MiniGrenade_Exp_SoundSet", "MiniGrenade_Tail_SoundSet", "Explosion_Debris_SoundSet"};
		suppressionRadiusHit = 18;
		typicalspeed = 26;
		whistleDist = 12;
		class CamShakeExplode
		{
			distance = 56;
			duration = 0.8;
			frequency = 20;
			power = 3.2;
		};
	};
	class Missile_AA_03_F: Missile_AA_04_F
	{
		airFriction = 0.13;
		cmImmunity = 0.9;
		fuseDistance = 300;
		hit = 140;
		indirectHit = 90;
		indirectHitRange = 8;
		maneuvrability = 30;
		maverickWeaponIndexOffset = 0;
		maxSpeed = 850;
		missileKeepLockedCone = 120;
		missileLockCone = 45;
		missileLockMaxDistance = 6000;
		missileLockMaxSpeed = 700;
		missileLockMinDistance = 150;
		model = "\A3\Weapons_F_EPC\Ammo\Missile_AA_03_fly_F.p3d";
		proximityExplosionDistance = 15;
		proxyShape = "\A3\Weapons_F_EPC\Ammo\Missile_AA_03_F.p3d";
		thrust = 200;
		thrustTime = 7;
		weaponLockSystem = "2 + 16";
		class Components: Components
		{
			class SensorsManagerComponent
			{
				class Components
				{
					class IRSensorComponent: SensorTemplateIR
					{
						angleRangeHorizontal = 45;
						angleRangeVertical = 45;
						maxTrackableSpeed = 700;
						class AirTarget
						{
							maxRange = 6000;
							minRange = 500;
							objectDistanceLimitCoef = -1;
							viewDistanceLimitCoef = 1;
						};
						class GroundTarget
						{
							maxRange = 4000;
							minRange = 500;
							objectDistanceLimitCoef = 1;
							viewDistanceLimitCoef = 1;
						};
					};
				};
			};
		};
	};
	class Missile_AA_04_F: MissileBase
	{
		aiAmmoUsageFlags = 256;
		airFriction = 0.14;
		airLock = 2;
		cmImmunity = 0.9;
		cost = 1000;
		craterEffects = "ATRocketCrater";
		effectsMissileInit = "PylonBackEffects";
		explosionEffects = "ATRocketExplosion";
		fuseDistance = 500;
		hit = 100;
		indirectHit = 75;
		indirectHitRange = 9;
		initTime = 0;
		irLock = 1;
		laserLock = 0;
		maneuvrability = 36;
		manualControl = 0;
		maverickWeaponIndexOffset = 0;
		maxControlRange = 4500;
		maxSpeed = 920;
		missileKeepLockedCone = 45;
		missileLockCone = 30;
		missileLockMaxDistance = 4500;
		missileLockMaxSpeed = 445;
		missileLockMinDistance = 150;
		model = "\A3\Weapons_F_EPC\Ammo\Missile_AA_04_fly_F.p3d";
		multiSoundHit[] = {"soundHit1", 0.34, "soundHit2", 0.33, "soundHit3", 0.33};
		muzzleEffect = "";
		nvLock = 0;
		proximityExplosionDistance = 15;
		proxyShape = "\A3\Weapons_F_EPC\Ammo\Missile_AA_04_F.p3d";
		sideAirFriction = 0.2;
		simulationStep = 0.002;
		soundFly[] = {"A3\Sounds_F\weapons\Rockets\rocket_fly_1", 0.562341, 1, 1500};
		soundHit1[] = {"A3\Sounds_F\arsenal\weapons\Launchers\Titan\Explosion_titan_missile_01", 2.51189, 1, 2000};
		soundHit2[] = {"A3\Sounds_F\arsenal\weapons\Launchers\Titan\Explosion_titan_missile_02", 2.51189, 1, 2000};
		soundHit3[] = {"A3\Sounds_F\arsenal\weapons\Launchers\Titan\Explosion_titan_missile_03", 2.51189, 1, 2000};
		SoundSetExplosion[] = {"RocketsMedium_Exp_SoundSet", "RocketsMedium_Tail_SoundSet", "Explosion_Debris_SoundSet"};
		thrust = 220;
		thrustTime = 5;
		timeToLive = 20;
		trackLead = 0.9;
		trackOversteer = 1;
		warheadName = "HE";
		weaponLockSystem = "2 + 16";
		whistleDist = 8;
		class Components: Components
		{
			class SensorsManagerComponent
			{
				class Components
				{
					class IRSensorComponent: SensorTemplateIR
					{
						angleRangeHorizontal = 30;
						angleRangeVertical = 30;
						class AirTarget
						{
							maxRange = 5000;
							minRange = 500;
							objectDistanceLimitCoef = -1;
							viewDistanceLimitCoef = 1;
						};
						class GroundTarget
						{
							maxRange = 4000;
							minRange = 500;
							objectDistanceLimitCoef = 1;
							viewDistanceLimitCoef = 1;
						};
					};
				};
			};
		};
		class Hiteffects
		{
			hitWater = "ImpactEffectsSmall";
		};
	};
	class Missile_AGM_01_F: Missile_AGM_02_F
	{
		cameraViewAvailable = 1;
		cmImmunity = 0.5;
		deleteParentWhenTriggered = 0;
		flightProfiles[] = {"Direct"};
		hit = 1200;
		indirectHit = 90;
		indirectHitRange = 8;
		maverickWeaponIndexOffset = 2;
		missileKeepLockedCone = 20;
		missileLockCone = 20;
		missileLockMaxDistance = 6000;
		missileLockMaxSpeed = 40;
		missileLockMinDistance = 300;
		model = "\A3\Weapons_F_EPC\Ammo\Missile_AGM_01_fly_F.p3d";
		proxyShape = "\A3\Weapons_F_EPC\Ammo\Missile_AGM_01_F.p3d";
		submunitionAmmo = "ammo_Penetrator_AGM_01";
		submunitionDirectionType = "SubmunitionModelDirection";
		submunitionInitialOffset[] = {0, 0, -0.2};
		submunitionInitSpeed = 1000;
		submunitionParentSpeedCoef = 0;
		thrustTime = 6;
		triggerOnImpact = 1;
		warheadName = "HE";
		weaponLockSystem = "2 + 16";
		class Components: Components
		{
			class SensorsManagerComponent
			{
				class Components
				{
					class IRSensorComponent: SensorTemplateIR
					{
						angleRangeHorizontal = 20;
						angleRangeVertical = 20;
						maxTrackableSpeed = 40;
						class AirTarget
						{
							maxRange = 8000;
							minRange = 500;
							objectDistanceLimitCoef = -1;
							viewDistanceLimitCoef = 1;
						};
						class GroundTarget
						{
							maxRange = 8000;
							minRange = 500;
							objectDistanceLimitCoef = 1;
							viewDistanceLimitCoef = 1;
						};
					};
				};
			};
		};
		class Direct {};
	};
	class Missile_AGM_02_F: MissileBase
	{
		aiAmmoUsageFlags = "128 + 512";
		airFriction = 0.05;
		airLock = 0;
		cameraViewAvailable = 1;
		cmImmunity = 0.5;
		cost = 800;
		craterEffects = "AAMissileCrater";
		deleteParentWhenTriggered = 0;
		effectsMissile = "missile3";
		effectsMissileInit = "PylonBackEffects";
		explosionEffects = "AAMissileExplosion";
		flightProfiles[] = {"TopDown"};
		fuseDistance = 350;
		hit = 1100;
		indirectHit = 85;
		indirectHitRange = 8;
		initTime = 0;
		maneuvrability = 27;
		maverickWeaponIndexOffset = 2;
		maxSpeed = 320;
		missileKeepLockedCone = 30;
		missileLockCone = 50;
		missileLockMaxDistance = 6000;
		missileLockMaxSpeed = 55;
		missileLockMinDistance = 350;
		model = "\A3\Weapons_F_EPC\Ammo\Missile_AGM_02_fly_F.p3d";
		muzzleEffect = "";
		proxyShape = "\A3\Weapons_F_EPC\Ammo\Missile_AGM_02_F.p3d";
		sideAirFriction = 0.15;
		simulationStep = 0.002;
		soundFly[] = {"A3\Sounds_F\weapons\Rockets\rocket_fly_2", 0.501187, 1, 1700};
		SoundSetExplosion[] = {"RocketsLight_Exp_SoundSet", "RocketsLight_Tail_SoundSet", "Explosion_Debris_SoundSet"};
		submunitionAmmo = "ammo_Penetrator_AGM_02";
		submunitionDirectionType = "SubmunitionModelDirection";
		submunitionInitialOffset[] = {0, 0, -0.2};
		submunitionInitSpeed = 1000;
		submunitionParentSpeedCoef = 0;
		thrust = 95;
		thrustTime = 4;
		timeToLive = 40;
		trackLead = 1;
		trackOversteer = 4;
		triggerOnImpact = 1;
		typicalSpeed = 270;
		warheadName = "HE";
		weaponLockSystem = "2 + 16";
		whistleDist = 20;
		class CamShakeExplode
		{
			distance = 163.905;
			duration = 2;
			frequency = 20;
			power = 22;
		};
		class CamShakeFire
		{
			distance = 71.5542;
			duration = 1.8;
			frequency = 20;
			power = 2.9907;
		};
		class CamShakeHit
		{
			distance = 1;
			duration = 0.6;
			frequency = 20;
			power = 110;
		};
		class CamShakePlayerFire
		{
			distance = 1;
			duration = 0.1;
			frequency = 20;
			power = 4;
		};
		class Components: Components
		{
			class SensorsManagerComponent
			{
				class Components
				{
					class IRSensorComponent: SensorTemplateIR
					{
						angleRangeHorizontal = 35;
						angleRangeVertical = 35;
						maxTrackableSpeed = 55;
						class AirTarget
						{
							maxRange = 8000;
							minRange = 500;
							objectDistanceLimitCoef = -1;
							viewDistanceLimitCoef = 1;
						};
						class GroundTarget
						{
							maxRange = 8000;
							minRange = 500;
							objectDistanceLimitCoef = 1;
							viewDistanceLimitCoef = 1;
						};
					};
				};
			};
		};
		class TopDown
		{
			ascendAngle = 0.01;
			ascendHeight = 400;
			descendDistance = 1000;
			minDistance = 400;
		};
	};
	class MissileBase: MissileCore
	{
		afMax = 200;
		airFriction = 0.2;
		cmImmunity = 0.9;
		CraterEffects = "ATMissileCrater";
		dangerRadiusHit = -1;
		deflecting = 0;
		effectsMissile = "missile4";
		explosionEffects = "ATMissileExplosion";
		explosionSoundEffect = "DefaultExplosion";
		htMax = 1800;
		htMin = 60;
		maneuvrability = 20;
		manualControl = 0;
		maverickWeaponIndexOffset = 0;
		maxControlRange = 4000;
		maxSpeed = 500;
		mFact = 0;
		mfMax = 100;
		multiSoundHit[] = {"soundHit1", 0.34, "soundHit2", 0.33, "soundHit3", 0.33};
		muzzleEffect = "BIS_fnc_effectFiredRocket";
		sideAirFriction = 0.001;
		simulationStep = 0.01;
		soundEngine[] = {"", 1, 1, 50};
		soundFly[] = {"", 1, 1, 400};
		soundHit1[] = {"A3\Sounds_F\arsenal\weapons\Launchers\Titan\Explosion_titan_missile_01", 2.51189, 1, 2000};
		soundHit2[] = {"A3\Sounds_F\arsenal\weapons\Launchers\Titan\Explosion_titan_missile_02", 2.51189, 1, 2000};
		soundHit3[] = {"A3\Sounds_F\arsenal\weapons\Launchers\Titan\Explosion_titan_missile_03", 2.51189, 1, 2000};
		supersonicCrackFar[] = {"A3\Sounds_F\weapons\Explosion\supersonic_crack_50meters", 0.316228, 1, 50};
		supersonicCrackNear[] = {"A3\Sounds_F\weapons\Explosion\supersonic_crack_close", 0.398107, 1, 20};
		suppressionRadiusHit = 30;
		tBody = 0;
		weaponLockSystem = "2 + 16";
		class Components {};
		class HitEffects
		{
			hitWater = "ImpactEffectsWaterRocket";
		};
	};
	class MissileCore: Default
	{
		audibleFire = 32;
		cost = 10000;
		deflecting = 5;
		initTime = 0.15;
		maneuvrability = 3;
		manualControl = 1;
		maxControlRange = 250;
		missileLockCone = 50;
		simulation = "shotMissile";
		simulationStep = 0.05;
		soundEngine[] = {"", 0.001, 1};
		soundFly[] = {"", 0.01, 2};
		soundHit[] = {"", 100, 1};
		thrust = 350;
		thrustTime = 2.5;
		timeToLive = 20;
		visibleFire = 32;
		visibleFireTime = 20;
	};
	class Mo_ATMineRange: ShotDeployBase
	{
		airFriction = 0;
		EffectFly = "ArtilleryTrails";
		hit = 300;
		submunitionAmmo = "ATMine_Range_Ammo";
	};
	class Mo_ClassicMineRange: ShotDeployBase
	{
		airFriction = 0;
		EffectFly = "ArtilleryTrails";
		hit = 300;
		submunitionAmmo = "APERSMine_Range_Ammo";
	};
	class Mo_cluster_AP: ShellBase
	{
		CraterEffects = "ClusterCraterEffects";
		CraterWaterEffects = "ClusterCraterWaterEffects";
		EffectFly = "ClusterEffectFly";
		effectsSmoke = "";
		ExplosionEffects = "ClusterExplosionEffects";
		hit = 35;
		indirectHit = 25;
		indirectHitRange = 8;
		initTime = 0.025;
		model = "\A3\weapons_f\ammo\shell";
		multiSoundHit[] = {"soundHit1", 0.125, "soundHit2", 0.125, "soundHit3", 0.125, "soundHit4", 0.125, "soundHit5", 0.125, "soundHit6", 0.125, "soundHit7", 0.125, "soundHit8", 0.125};
		soundHit1[] = {"A3\Sounds_F\arsenal\explosives\shells\Artillery_shell_explosion_01", 1.77828, 1, 2000};
		soundHit2[] = {"A3\Sounds_F\arsenal\explosives\shells\Artillery_shell_explosion_02", 1.77828, 1, 2000};
		soundHit3[] = {"A3\Sounds_F\arsenal\explosives\shells\Artillery_shell_explosion_03", 1.77828, 1, 2000};
		soundHit4[] = {"A3\Sounds_F\arsenal\explosives\shells\Artillery_shell_explosion_04", 1.77828, 1, 2000};
		soundHit5[] = {"A3\Sounds_F\arsenal\explosives\shells\Artillery_shell_explosion_05", 1.77828, 1, 2000};
		soundHit6[] = {"A3\Sounds_F\arsenal\explosives\shells\Artillery_shell_explosion_06", 1.77828, 1, 2000};
		soundHit7[] = {"A3\Sounds_F\arsenal\explosives\shells\Artillery_shell_explosion_07", 1.77828, 1, 2000};
		soundHit8[] = {"A3\Sounds_F\arsenal\explosives\shells\Artillery_shell_explosion_08", 1.77828, 1, 2000};
		SoundSetExplosion[] = {"ClusterBomb_Exp_SoundSet", "ClusterBomb_Debris_SoundSet"};
		timeToLive = 20;
		class CamShakeExplode
		{
			distance = 287.329;
			duration = 1.2;
			frequency = 20;
			power = 7;
		};
		class CamShakeFire
		{
			distance = 47.3286;
			duration = 1.2;
			frequency = 20;
			power = 2.4323;
		};
		class CamShakeHit
		{
			distance = 1;
			duration = 0.4;
			frequency = 20;
			power = 35;
		};
		class CamShakePlayerFire
		{
			distance = 1;
			duration = 0.1;
			frequency = 20;
			power = 0.01;
		};
	};
	class Mo_cluster_AP_UXO1_Ammo_F: UXO1_Ammo_Base_F
	{
		model = "\A3\Weapons_F_Orange\Explosives\BombCluster_01_UXO1_F";
	};
	class Mo_cluster_AP_UXO1_deployMine: UXO_deployMine_base_F
	{
		submunitionAmmo = "Mo_cluster_AP_UXO1_Ammo_F";
	};
	class Mo_cluster_AP_UXO2_Ammo_F: UXO2_Ammo_Base_F
	{
		model = "\A3\Weapons_F_Orange\Explosives\BombCluster_01_UXO1_F";
	};
	class Mo_cluster_AP_UXO2_deployMine: UXO_deployMine_base_F
	{
		submunitionAmmo = "Mo_cluster_AP_UXO2_Ammo_F";
	};
	class Mo_cluster_AP_UXO3_Ammo_F: UXO3_Ammo_Base_F
	{
		model = "\A3\Weapons_F_Orange\Explosives\BombCluster_01_UXO1_F";
	};
	class Mo_cluster_AP_UXO3_deployMine: UXO_deployMine_base_F
	{
		submunitionAmmo = "Mo_cluster_AP_UXO3_Ammo_F";
	};
	class Mo_cluster_AP_UXO4_Ammo_F: UXO4_Ammo_Base_F
	{
		model = "\A3\Weapons_F_Orange\Explosives\BombCluster_01_UXO1_F";
	};
	class Mo_cluster_AP_UXO4_deployMine: UXO_deployMine_base_F
	{
		submunitionAmmo = "Mo_cluster_AP_UXO4_Ammo_F";
	};
	class Mo_cluster_AP_UXO_deploy: UXO_deploy_base_f
	{
		submunitionAmmo[] = {"Mo_cluster_AP_UXO1_deployMine", 0.25, "Mo_cluster_AP_UXO2_deployMine", 0.25, "Mo_cluster_AP_UXO3_deployMine", 0.25, "Mo_cluster_AP_UXO4_deployMine", 0.25};
	};
	class Mo_cluster_Bomb_01_F: Mo_cluster_AP
	{
		hit = 70;
		indirectHit = 15;
		indirectHitRange = 6;
		model = "\a3\Weapons_F_Orange\Ammo\BombCluster_01_sub_F";
		soundFakeFall[] = {"soundFakeFall0", 1};
		soundFakeFall0[] = {"", 1, 1, 1};
		soundFly[] = {"A3\Sounds_F_Orange\arsenal\explosives\clusterbomb\Cluster_Trajectory", 1, 1, 50};
		SoundSetExplosion[] = {"ClusterBomb_Exp_SoundSet", "ClusterBomb_Debris_SoundSet"};
		thrust = 0;
		thrustTime = 0;
	};
	class Mo_cluster_Bomb_02_F: Mo_cluster_Bomb_01_F
	{
		hit = 30;
		indirectHit = 25;
		indirectHitRange = 9;
		model = "\a3\Weapons_F_Orange\Ammo\BombCluster_02_sub_F";
	};
	class Mo_cluster_Bomb_03_F: Mo_cluster_Bomb_01_F
	{
		hit = 70;
		indirectHit = 12;
		indirectHitRange = 6;
		model = "\a3\Weapons_F_Orange\Ammo\BombCluster_03_sub_F";
	};
	class Mo_UnderwaterMineRange: Mo_ClassicMineRange
	{
		airFriction = 0;
		hit = 300;
		submunitionAmmo = "UnderwaterMine_Range_Ammo";
	};
	class ModuleOrdnanceHowitzer_F_ammo: Sh_155mm_AMOS
	{
		hit = 500;
		indirectHit = 300;
		soundHit[] = {"A3\Sounds_F\weapons\Explosion\expl_shell_2", 1.99526, 1, 1800};
	};
	class ModuleOrdnanceMortar_F_ammo: Sh_82mm_AMOS
	{
		explosionEffects = "HEShellExplosion";
	};
	class ModuleOrdnanceRocket_F_ammo: R_230mm_HE
	{
		submunitionAmmo[] = {"Mo_cluster_AP", 0.93, "Mo_cluster_AP_UXO_deploy", 0.07};
		submunitionConeAngle = 25;
		submunitionConeType[] = {"poissonDisc", 50};
		triggerDistance = 100;
		triggerSpeedCoef[] = {0.75, 1.25};
	};
	class ModuleOrdnanceRocket_F_subammo: R_230mm_fly
	{
		indirectHit = 600;
		indirectHitRange = 27;
		soundHit[] = {"A3\Sounds_F\weapons\Explosion\expl_big_1", 1.99526, 1, 1800};
	};
	class O_IRStrobe: IRStrobeBase
	{
		model = "\A3\Weapons_F_EPB\Ammo\O_IRstrobe_F.p3d";
		class NVGMarkers
		{
			class Blinking1 {};
		};
	};
	class PipeBombBase: PipeBombCore
	{
		explosionType = "bomb";
		icon = "iconExplosiveGP";
		mapsize = 1;
		soundActivation[] = {"A3\Sounds_F\weapons\mines\electron_activate_mine_1", 0.562341, 1, 30};
		soundDeactivation[] = {"A3\Sounds_F\weapons\Mines\deactivate_mine_3a", 1.99526, 1, 20};
		soundTrigger[] = {"A3\Sounds_F\weapons\mines\electron_trigger_1", 0.562341, 1, 30};
		triggerWhenDestroyed = 1;
		underwaterHitRangeCoef = 1;
	};
	class PipeBombCore: TimeBombCore
	{
		mineTrigger = "RemoteTrigger";
		simulation = "shotMine";
	};
	class ProbingBeam_01_F: BulletBase
	{
		caliber = 0;
		craterEffects = "";
		craterWaterEffects = "";
		explosionEffects = "";
		hit = 0;
		hitArmor[] = {};
		hitArmorInt[] = {};
		hitBell[] = {};
		hitBuilding[] = {};
		hitConcrete[] = {};
		hitDefault[] = {};
		hitFoliage[] = {};
		hitGlass[] = {};
		hitGlassArmored[] = {};
		hitGroundHard[] = {};
		hitGroundSoft[] = {};
		hitIron[] = {};
		hitMan[] = {};
		hitMetal[] = {};
		hitMetalInt[] = {};
		hitMetalplate[] = {};
		hitMetalplateInt[] = {};
		hitPlastic[] = {};
		hitRubber[] = {};
		hitTyre[] = {};
		hitWater[] = {};
		hitWood[] = {};
		impactArmor[] = {};
		impactBuilding[] = {};
		impactConcrete[] = {};
		impactDefault[] = {};
		impactFoliage[] = {};
		impactGlass[] = {};
		impactGlassArmored[] = {};
		impactGroundHard[] = {};
		impactGroundSoft[] = {};
		impactIron[] = {};
		impactMan[] = {};
		impactMetal[] = {};
		impactMetalplate[] = {};
		impactPlastic[] = {};
		impactRubber[] = {};
		impactTyre[] = {};
		impactWater[] = {};
		impactWood[] = {};
		indirectHit = 0;
		simulationStep = 0.001;
		soundFakeFall[] = {};
		soundSetBulletFly[] = {};
		soundSetSonicCrack[] = {};
		timeToLive = 0.15;
		weaponType = "cannon";
		class CamShakeHit
		{
			distance = 1;
			duration = 0.2;
			frequency = 20;
			power = 0;
		};
		class HitEffects
		{
			Hit_Foliage_Dead = "ProbingBeam_Foliage_Dead";
			Hit_Foliage_green = "ProbingBeam_Foliage_green";
			Hit_Foliage_Green_big = "ProbingBeam_Foliage_Green_big";
			Hit_Foliage_Palm = "ProbingBeam_Foliage_Palm";
			Hit_Foliage_Pine = "ProbingBeam_Foliage_Pine";
			hitAlienArmour = "ProbingBeam_AlienArmour";
			hitAlienMatterBall_01 = "ProbingBeam_AlienArmour";
			hitAlienWeakPoint_01 = "ProbingBeam_AlienWeakPoint";
			hitBuilding = "ProbingBeam_Building";
			hitConcrete = "ProbingBeam_Concrete";
			hitFoliage = "ProbingBeam_Foliage";
			hitGlass = "ProbingBeam_Glass";
			hitGlassArmored = "ProbingBeam_GlassArmored";
			hitGround = "ProbingBeam_GroundSoft";
			hitGroundHard = "ProbingBeam_GroundHard";
			hitGroundRed = "ProbingBeam_GroundRed";
			hitGroundSoft = "ProbingBeam_GroundSoft";
			hitHay = "ProbingBeam_Wood";
			hitMan = "ProbingBeam_Man";
			hitMetal = "ProbingBeam_Metal";
			hitMetalPlate = "ProbingBeam_MetalPlate";
			hitPlastic = "ProbingBeam_Plastic";
			hitProbeCoreShell = "ProbingBeam_AlienWeakPoint";
			hitProbeTipCore = "ProbingBeam_AlienWeakPoint";
			hitProbeTipShell = "ProbingBeam_AlienWeakPoint";
			hitRubber = "ProbingBeam_Rubber";
			hitTyre = "ProbingBeam_Tyre";
			hitVirtual = "ProbingBeam_Virtual";
			hitWater = "ProbingBeam_Water";
			hitWood = "ProbingBeam_Wood";
		};
	};
	class ProbingBeam_02_F: ProbingBeam_01_F
	{
		hit = 4;
		hitArmor[] = {"soundhitGroundHard1", 0.25, "soundhitGroundHard2", 0.25, "soundhitGroundHard3", 0.25, "soundhitGroundHard4", 0.25};
		hitArmorInt[] = {"soundhitMetal1", 0.25, "soundhitMetal2", 0.25, "soundhitMetal3", 0.25, "soundhitMetal4", 0.25};
		hitBuilding[] = {"soundhitGroundHard1", 0.25, "soundhitGroundHard2", 0.25, "soundhitGroundHard3", 0.25, "soundhitGroundHard4", 0.25};
		hitConcrete[] = {"soundhitGroundHard1", 0.25, "soundhitGroundHard2", 0.25, "soundhitGroundHard3", 0.25, "soundhitGroundHard4", 0.25};
		hitDefault[] = {"soundDefault1", 0.2, "soundDefault2", 0.2, "soundDefault3", 0.1, "soundDefault4", 0.1, "soundDefault5", 0.1, "soundDefault6", 0.1, "soundDefault7", 0.1, "soundDefault8", 0.1};
		hitGlass[] = {"soundhitGlass1", 0.25, "soundhitGlass2", 0.25, "soundhitGlass3", 0.25, "soundhitGlass4", 0.25};
		hitGlassArmored[] = {"soundhitGlass1", 0.25, "soundhitGlass2", 0.25, "soundhitGlass3", 0.25, "soundhitGlass4", 0.25};
		hitGroundHard[] = {"soundhitGroundHard1", 0.25, "soundhitGroundHard2", 0.25, "soundhitGroundHard3", 0.25, "soundhitGroundHard4", 0.25};
		hitGroundSoft[] = {"soundhitGroundSoft1", 0.25, "soundhitGroundSoft2", 0.25, "soundhitGroundSoft3", 0.25, "soundhitGroundSoft4", 0.25};
		hitMan[] = {"soundhitMan1", 0.2, "soundhitMan2", 0.2, "soundhitMan3", 0.2, "soundhitMan4", 0.2, "soundhitMan5", 0.2};
		hitMetal[] = {"soundhitGroundHard1", 0.25, "soundhitGroundHard2", 0.25, "soundhitGroundHard3", 0.25, "soundhitGroundHard4", 0.25};
		hitMetalInt[] = {"soundhitMetal1", 0.25, "soundhitMetal2", 0.25, "soundhitMetal3", 0.25, "soundhitMetal4", 0.25};
		hitMetalplate[] = {"soundhitMetal1", 0.25, "soundhitMetal2", 0.25, "soundhitMetal3", 0.25, "soundhitMetal4", 0.25};
		hitPlastic[] = {"soundhitPlastic1", 0.25, "soundhitPlastic2", 0.25, "soundhitPlastic3", 0.25, "soundhitPlastic4", 0.25};
		hitRubber[] = {"soundhitRubber1", 0.25, "soundhitRubber2", 0.25, "soundhitRubber3", 0.25, "soundhitRubber4", 0.25};
		hitTyre[] = {"soundhitRubber1", 0.25, "soundhitRubber2", 0.25, "soundhitRubber3", 0.25, "soundhitRubber4", 0.25};
		hitWater[] = {"soundWater1", 0.125, "soundWater2", 0.125, "soundWater3", 0.125, "soundWater4", 0.125, "soundWater5", 0.125, "soundWater6", 0.125, "soundWater7", 0.125, "soundWater8", 0.125};
		hitWood[] = {"soundhitGroundHard1", 0.25, "soundhitGroundHard2", 0.25, "soundhitGroundHard3", 0.25, "soundhitGroundHard4", 0.25};
		indirectHit = 0;
		simulationStep = 0.001;
		soundhitGlass1[] = {"A3\Sounds_F_Enoch\Assets\Arsenal\Ugv_02\ProbingWeapon_01\Ugv_Lance_Impact_Glass_01", 1.5, 1, 30};
		soundhitGlass2[] = {"A3\Sounds_F_Enoch\Assets\Arsenal\Ugv_02\ProbingWeapon_01\Ugv_Lance_Impact_Glass_02", 1.5, 1, 30};
		soundhitGlass3[] = {"A3\Sounds_F_Enoch\Assets\Arsenal\Ugv_02\ProbingWeapon_01\Ugv_Lance_Impact_Glass_03", 1.5, 1, 30};
		soundhitGlass4[] = {"A3\Sounds_F_Enoch\Assets\Arsenal\Ugv_02\ProbingWeapon_01\Ugv_Lance_Impact_Glass_04", 1.5, 1, 30};
		soundhitGroundHard1[] = {"A3\Sounds_F_Enoch\Assets\Arsenal\Ugv_02\ProbingWeapon_01\Ugv_Lance_Impact_Hard_01", 1.5, 1, 30};
		soundhitGroundHard2[] = {"A3\Sounds_F_Enoch\Assets\Arsenal\Ugv_02\ProbingWeapon_01\Ugv_Lance_Impact_Hard_02", 1.5, 1, 30};
		soundhitGroundHard3[] = {"A3\Sounds_F_Enoch\Assets\Arsenal\Ugv_02\ProbingWeapon_01\Ugv_Lance_Impact_Hard_03", 1.5, 1, 30};
		soundhitGroundHard4[] = {"A3\Sounds_F_Enoch\Assets\Arsenal\Ugv_02\ProbingWeapon_01\Ugv_Lance_Impact_Hard_04", 1.5, 1, 30};
		soundhitGroundSoft1[] = {"A3\Sounds_F_Enoch\Assets\Arsenal\Ugv_02\ProbingWeapon_01\Ugv_Lance_Impact_Soft_01", 1, 1, 30};
		soundhitGroundSoft2[] = {"A3\Sounds_F_Enoch\Assets\Arsenal\Ugv_02\ProbingWeapon_01\Ugv_Lance_Impact_Soft_02", 1, 1, 30};
		soundhitGroundSoft3[] = {"A3\Sounds_F_Enoch\Assets\Arsenal\Ugv_02\ProbingWeapon_01\Ugv_Lance_Impact_Soft_03", 1, 1, 30};
		soundhitGroundSoft4[] = {"A3\Sounds_F_Enoch\Assets\Arsenal\Ugv_02\ProbingWeapon_01\Ugv_Lance_Impact_Soft_03", 1, 0.8, 30};
		soundhitMan1[] = {"A3\Sounds_F_Enoch\Assets\Arsenal\Ugv_02\ProbingWeapon_01\Ugv_Lance_Impact_Organic_01", 1.9, 1, 30};
		soundhitMan2[] = {"A3\Sounds_F_Enoch\Assets\Arsenal\Ugv_02\ProbingWeapon_01\Ugv_Lance_Impact_Organic_02", 1.9, 1, 30};
		soundhitMan3[] = {"A3\Sounds_F_Enoch\Assets\Arsenal\Ugv_02\ProbingWeapon_01\Ugv_Lance_Impact_Organic_03", 1.9, 1, 30};
		soundhitMan4[] = {"A3\Sounds_F_Enoch\Assets\Arsenal\Ugv_02\ProbingWeapon_01\Ugv_Lance_Impact_Organic_04", 1.9, 1, 30};
		soundhitMan5[] = {"A3\Sounds_F_Enoch\Assets\Arsenal\Ugv_02\ProbingWeapon_01\Ugv_Lance_Impact_Organic_05", 1.9, 1, 30};
		soundhitMetal1[] = {"A3\Sounds_F_Enoch\Assets\Arsenal\Ugv_02\ProbingWeapon_01\Ugv_Lance_Impact_Metal_01", 1.5, 1, 30};
		soundhitMetal2[] = {"A3\Sounds_F_Enoch\Assets\Arsenal\Ugv_02\ProbingWeapon_01\Ugv_Lance_Impact_Metal_02", 1.5, 1, 30};
		soundhitMetal3[] = {"A3\Sounds_F_Enoch\Assets\Arsenal\Ugv_02\ProbingWeapon_01\Ugv_Lance_Impact_Metal_03", 1.5, 1, 30};
		soundhitMetal4[] = {"A3\Sounds_F_Enoch\Assets\Arsenal\Ugv_02\ProbingWeapon_01\Ugv_Lance_Impact_Metal_04", 1.5, 1, 30};
		soundhitPlastic1[] = {"A3\Sounds_F_Enoch\Assets\Arsenal\Ugv_02\ProbingWeapon_01\Ugv_Lance_Impact_Plastic_01", 1.5, 1, 30};
		soundhitPlastic2[] = {"A3\Sounds_F_Enoch\Assets\Arsenal\Ugv_02\ProbingWeapon_01\Ugv_Lance_Impact_Plastic_02", 1.5, 1, 30};
		soundhitPlastic3[] = {"A3\Sounds_F_Enoch\Assets\Arsenal\Ugv_02\ProbingWeapon_01\Ugv_Lance_Impact_Plastic_03", 1.5, 1, 30};
		soundhitPlastic4[] = {"A3\Sounds_F_Enoch\Assets\Arsenal\Ugv_02\ProbingWeapon_01\Ugv_Lance_Impact_Plastic_04", 1.5, 1, 30};
		soundhitRubber1[] = {"A3\Sounds_F_Enoch\Assets\Arsenal\Ugv_02\ProbingWeapon_01\Ugv_Lance_Impact_Rubber_01", 1.5, 1, 30};
		soundhitRubber2[] = {"A3\Sounds_F_Enoch\Assets\Arsenal\Ugv_02\ProbingWeapon_01\Ugv_Lance_Impact_Rubber_02", 1.5, 1, 30};
		soundhitRubber3[] = {"A3\Sounds_F_Enoch\Assets\Arsenal\Ugv_02\ProbingWeapon_01\Ugv_Lance_Impact_Rubber_03", 1.5, 1, 30};
		soundhitRubber4[] = {"A3\Sounds_F_Enoch\Assets\Arsenal\Ugv_02\ProbingWeapon_01\Ugv_Lance_Impact_Rubber_04", 1.5, 1, 30};
		timeToLive = 0.007;
		weaponType = "mgun";
		class HitEffects
		{
			Hit_Foliage_Dead = "ProbingBeam_Foliage_Dead";
			Hit_Foliage_green = "ProbingBeam_Foliage_green";
			Hit_Foliage_Green_big = "ProbingBeam_Foliage_Green_big";
			Hit_Foliage_Palm = "ProbingBeam_Foliage_Palm";
			Hit_Foliage_Pine = "ProbingBeam_Foliage_Pine";
			hitAlienArmour = "ProbingBeam_AlienArmour";
			hitAlienMatterBall_01 = "ProbingBeam_AlienArmour";
			hitAlienWeakPoint_01 = "ProbingBeam_AlienWeakPoint";
			hitBuilding = "ImpactPlaster";
			hitConcrete = "ImpactConcrete";
			hitFoliage = "ProbingBeam_Foliage";
			hitGlass = "ImpactGlass";
			hitGlassArmored = "ImpactGlassThin";
			hitGround = "ProbingBeam_GroundSoft";
			hitGroundHard = "ImpactEffectsHardGround";
			hitGroundRed = "ImpactEffectsRed";
			hitGroundSoft = "ImpactEffectsSmall";
			hitHay = "ImpactHay";
			hitMan = "ProbingBeam_Man";
			hitMetal = "ImpactMetal";
			hitMetalPlate = "ImpactMetal";
			hitPlastic = "ProbingBeam_Plastic";
			hitProbeCoreShell = "ProbingBeam_AlienWeakPoint";
			hitProbeTipCore = "ProbingBeam_AlienWeakPoint";
			hitProbeTipShell = "ImpactMetal";
			hitRubber = "ProbingBeam_Rubber";
			hitTyre = "ProbingBeam_Tyre";
			hitVirtual = "ProbingBeam_Virtual";
			hitWater = "ProbingBeam_Water";
			hitWood = "ImpactWood";
		};
	};
	class R_230mm_Cluster: R_230mm_HE
	{
		submunitionAmmo[] = {"Mo_cluster_AP", 0.93, "Mo_cluster_AP_UXO_deploy", 0.07};
		submunitionConeAngle = 19;
		submunitionConeType[] = {"randomcenter", 50};
		triggerDistance = 250;
		triggerSpeedCoef[] = {0.5, 1};
	};
	class R_230mm_fly: ShellBase
	{
		airFriction = 0;
		artilleryLock = 1;
		audibleFire = 64;
		cost = 1000;
		dangerRadiusHit = 1250;
		deflecting = 0;
		effectFly = "ArtilleryTrails";
		hit = 1200;
		indirectHit = 800;
		indirectHitRange = 30;
		model = "\A3\Weapons_F\Ammo\Rocket_230mm_Fly_F";
		multiSoundHit[] = {"soundHit1", 0.34, "soundHit2", 0.33, "soundHit3", 0.33};
		muzzleEffect = "";
		soundHit1[] = {"A3\Sounds_F\arsenal\weapons\Launchers\Titan\Explosion_titan_missile_01", 2.51189, 1, 1900};
		soundHit2[] = {"A3\Sounds_F\arsenal\weapons\Launchers\Titan\Explosion_titan_missile_02", 2.51189, 1, 1900};
		soundHit3[] = {"A3\Sounds_F\arsenal\weapons\Launchers\Titan\Explosion_titan_missile_03", 2.51189, 1, 1900};
		SoundSetExplosion[] = {"RocketsHeavy_Exp_SoundSet", "RocketsHeavy_Tail_SoundSet", "Explosion_Debris_SoundSet"};
		suppressionRadiusHit = 120;
		warheadName = "HE";
		class CamShakeExplode
		{
			distance = 361.326;
			duration = 3;
			frequency = 20;
			power = 46;
		};
		class CamShakeFire
		{
			distance = 121.326;
			duration = 3;
			frequency = 20;
			power = 3.89432;
		};
		class CamShakeHit
		{
			distance = 1;
			duration = 0.8;
			frequency = 20;
			power = 230;
		};
		class CamShakePlayerFire
		{
			distance = 1;
			duration = 0.1;
			frequency = 20;
			power = 5;
		};
	};
	class R_230mm_HE: SubmunitionBase
	{
		airFriction = 0;
		artilleryLock = 1;
		cost = 1000;
		effectFly = "Missile0";
		hit = 300;
		model = "\A3\Weapons_F\Ammo\Rocket_230mm_F";
		muzzleEffect = "";
		soundFly[] = {"A3\Sounds_F\weapons\Rockets\rocket_fly_1", 0.562341, 1.9, 500};
		SoundSetExplosion[] = {"RocketsHeavy_Exp_SoundSet", "RocketsHeavy_Tail_SoundSet", "Explosion_Debris_SoundSet"};
		submunitionAmmo = "R_230mm_fly";
		triggerDistance = 500;
		class CamShakeExplode
		{
			distance = 361.326;
			duration = 3;
			frequency = 20;
			power = 46;
		};
		class CamShakeFire
		{
			distance = 121.326;
			duration = 3;
			frequency = 20;
			power = 3.89432;
		};
		class CamShakeHit
		{
			distance = 1;
			duration = 0.8;
			frequency = 20;
			power = 230;
		};
		class CamShakePlayerFire
		{
			distance = 1;
			duration = 0.1;
			frequency = 20;
			power = 5;
		};
	};
	class R_230mm_LG: R_230mm_HE
	{
		muzzleEffect = "";
		submunitionAmmo = "M_Mo_230mm_AT_LG";
		triggerDistance = 500;
	};
	class R_60mm_HE: R_80mm_HE
	{
		airFriction = 0.2;
		cost = 100;
		hit = 200;
		indirectHit = 40;
		indirectHitRange = 10;
		maxSpeed = 490;
		model = "\A3\Weapons_F\Ammo\Rocket_01_fly_F";
		thrust = 620;
		thrustTime = 1.1;
		timeToLive = 10;
		class CamShakeExplode
		{
			distance = 141.968;
			duration = 1.6;
			frequency = 20;
			power = 12;
		};
		class CamShakeFire
		{
			distance = 61.9677;
			duration = 1.6;
			frequency = 20;
			power = 2.78316;
		};
		class CamShakeHit
		{
			distance = 1;
			duration = 0.6;
			frequency = 20;
			power = 60;
		};
		class CamShakePlayerFire
		{
			distance = 1;
			duration = 0.1;
			frequency = 20;
			power = 2;
		};
	};
	class R_80mm_HE: RocketBase
	{
		airFriction = 0.09;
		cost = 100;
		effectsMissileInit = "PylonBackEffectsRockets";
		fuseDistance = 50;
		hit = 400;
		indirectHit = 60;
		indirectHitRange = 15;
		initTime = 0.002;
		maxSpeed = 590;
		model = "\A3\Weapons_F\Ammo\Rocket_02_fly_F";
		muzzleEffect = "";
		sideAirFriction = 0.005;
		simulation = "shotMissile";
		soundFly[] = {"A3\Sounds_F\weapons\Rockets\rocket_fly_1", 0.562341, 1.9, 700};
		SoundSetExplosion[] = {"RocketsMedium_Exp_SoundSet", "RocketsMedium_Tail_SoundSet", "Explosion_Debris_SoundSet"};
		thrust = 1060;
		thrustTime = 0.69;
		timeToLive = 15;
		warheadName = "HE";
		whistleDist = 30;
		class CamShakeExplode
		{
			distance = 191.554;
			duration = 1.8;
			frequency = 20;
			power = 16;
		};
		class CamShakeFire
		{
			distance = 71.5542;
			duration = 1.8;
			frequency = 20;
			power = 2.9907;
		};
		class CamShakeHit
		{
			distance = 1;
			duration = 0.6;
			frequency = 20;
			power = 80;
		};
		class CamShakePlayerFire
		{
			distance = 1;
			duration = 0.1;
			frequency = 20;
			power = 2;
		};
	};
	class R_MRAAWS_HE_F: R_MRAAWS_HEAT_F
	{
		allowAgainstInfantry = 1;
		CraterEffects = "ArtyShellCrater";
		ExplosionEffects = "MortarExplosion";
		explosive = 1;
		hit = 200;
		indirectHit = 50;
		indirectHitRange = 6;
		model = "\A3\Weapons_F_Tank\Launchers\MRAWS\rocket_MRAWS_HE_F.p3d";
		submunitionAmmo = "";
		submunitionDirectionType = "";
		submunitionInitialOffset[] = {0, 0, 0};
		submunitionInitSpeed = 0;
		submunitionParentSpeedCoef = 0;
		triggerOnImpact = 0;
		warheadName = "HE";
		class CamShakeExplode
		{
			distance = 123.905;
			duration = 2;
			frequency = 20;
			power = 22;
		};
	};
	class R_MRAAWS_HEAT55_F: R_MRAAWS_HEAT_F
	{
		deleteParentWhenTriggered = 0;
		hit = 95;
		model = "\A3\Weapons_F_Tank\Launchers\MRAWS\rocket_MRAWS_HEAT55_F.p3d";
		submunitionAmmo = "ammo_Penetrator_MRAAWS_HEAT55";
		submunitionDirectionType = "SubmunitionModelDirection";
		submunitionInitialOffset[] = {0, 0, -0.2};
		submunitionInitSpeed = 1000;
		submunitionParentSpeedCoef = 0;
		triggerOnImpact = 1;
		warheadName = "HEAT";
	};
	class R_MRAAWS_HEAT_F: RocketBase
	{
		aiAmmoUsageFlags = "128 + 512";
		airFriction = 0.05;
		airLock = 0;
		allowAgainstInfantry = 1;
		cost = 100;
		CraterEffects = "ATMissileCrater";
		deleteParentWhenTriggered = 0;
		effectsMissile = "EmptyEffect";
		effectsMissileInit = "";
		explosionEffects = "ATMissileExplosion";
		explosive = 0.8;
		fuseDistance = 15;
		hit = 150;
		indirectHit = 14;
		indirectHitRange = 3;
		initTime = 0;
		irLock = 0;
		maneuvrability = 0;
		maxSpeed = 350;
		model = "\A3\Weapons_F_Tank\Launchers\MRAWS\rocket_MRAWS_HEAT_F.p3d";
		multiSoundHit[] = {"soundHit1", 0.34, "soundHit2", 0.33, "soundHit3", 0.33};
		sideAirFriction = 0;
		simulationStep = 0.02;
		soundHit1[] = {"A3\Sounds_F\arsenal\weapons\Launchers\Titan\Explosion_titan_missile_01", 2.51189, 1, 1800};
		soundHit2[] = {"A3\Sounds_F\arsenal\weapons\Launchers\Titan\Explosion_titan_missile_02", 2.51189, 1, 1800};
		soundHit3[] = {"A3\Sounds_F\arsenal\weapons\Launchers\Titan\Explosion_titan_missile_03", 2.51189, 1, 1800};
		submunitionAmmo = "ammo_Penetrator_MRAAWS";
		submunitionDirectionType = "SubmunitionModelDirection";
		submunitionInitialOffset[] = {0, 0, -0.2};
		submunitionInitSpeed = 1000;
		submunitionParentSpeedCoef = 0;
		thrust = 0.1;
		thrustTime = 0.1;
		timeToLive = 25;
		triggerOnImpact = 1;
		warheadName = "TandemHEAT";
		class CamShakeExplode
		{
			distance = 99.3296;
			duration = 1.4;
			frequency = 20;
			power = 11;
		};
		class CamShakeFire
		{
			distance = 35.7771;
			duration = 0.8;
			frequency = 20;
			power = 2.11474;
		};
		class CamShakeHit
		{
			distance = 1;
			duration = 0.6;
			frequency = 20;
			power = 110;
		};
		class CamShakePlayerFire
		{
			distance = 1;
			duration = 0.1;
			frequency = 20;
			power = 1;
		};
	};
	class R_PG32V_F: RocketBase
	{
		aiAmmoUsageFlags = "128 + 512";
		airFriction = 0.075;
		airLock = 0;
		allowAgainstInfantry = 0;
		cost = 100;
		CraterEffects = "ATMissileCrater";
		deleteParentWhenTriggered = 0;
		effectsMissile = "EmptyEffect";
		effectsMissileInit = "";
		explosionEffects = "ATMissileExplosion";
		explosive = 1;
		fuseDistance = 10;
		hit = 150;
		indirectHit = 28;
		indirectHitRange = 3;
		initTime = 0;
		irLock = 0;
		maneuvrability = 0;
		maxSpeed = 140;
		model = "\A3\weapons_f\launchers\RPG32\pg32v_rocket.p3d";
		multiSoundHit[] = {"soundHit1", 0.34, "soundHit2", 0.33, "soundHit3", 0.33};
		sideAirFriction = 0.075;
		simulationStep = 0.02;
		soundFly[] = {"A3\Sounds_F\arsenal\weapons\Launchers\RPG32\Fly_RPG32", 0.316228, 1.5, 900};
		soundHit1[] = {"A3\Sounds_F\arsenal\weapons\Launchers\Titan\Explosion_titan_missile_01", 2.51189, 1, 1800};
		soundHit2[] = {"A3\Sounds_F\arsenal\weapons\Launchers\Titan\Explosion_titan_missile_02", 2.51189, 1, 1800};
		soundHit3[] = {"A3\Sounds_F\arsenal\weapons\Launchers\Titan\Explosion_titan_missile_03", 2.51189, 1, 1800};
		SoundSetExplosion[] = {"RocketsLight_Exp_SoundSet", "RocketsLight_Tail_SoundSet", "Explosion_Debris_SoundSet"};
		submunitionAmmo = "ammo_Penetrator_RPG32V";
		submunitionDirectionType = "SubmunitionModelDirection";
		submunitionInitialOffset[] = {0, 0, -0.2};
		submunitionInitSpeed = 1000;
		submunitionParentSpeedCoef = 0;
		thrust = 500;
		thrustTime = 0.1;
		timeToLive = 10;
		triggerOnImpact = 1;
		warheadName = "TandemHEAT";
		class CamShakeExplode
		{
			distance = 99.3296;
			duration = 1.4;
			frequency = 20;
			power = 11;
		};
		class CamShakeFire
		{
			distance = 35.7771;
			duration = 0.8;
			frequency = 20;
			power = 2.11474;
		};
		class CamShakeHit
		{
			distance = 1;
			duration = 0.6;
			frequency = 20;
			power = 110;
		};
		class CamShakePlayerFire
		{
			distance = 1;
			duration = 0.1;
			frequency = 20;
			power = 1;
		};
	};
	class R_PG7_F: RocketBase
	{
		aiAmmoUsageFlags = "128 + 512";
		airFriction = 0.65;
		airLock = 0;
		allowAgainstInfantry = 0;
		cost = 200;
		CraterEffects = "ATMissileCrater";
		deleteParentWhenTriggered = 0;
		effectsMissile = "EmptyEffect";
		effectsMissileInit = "";
		explosionEffects = "ATMissileExplosion";
		explosive = 0.8;
		fuseDistance = 5;
		hit = 95;
		indirectHit = 13;
		indirectHitRange = 3.6;
		initTime = 0.1;
		irLock = 0;
		maneuvrability = 0;
		maxSpeed = 300;
		model = "\A3\Weapons_F_Exp\Launchers\RPG7\rocket_rpg7.p3d";
		multiSoundHit[] = {"soundHit1", 0.34, "soundHit2", 0.33, "soundHit3", 0.33};
		sideAirFriction = 0.15;
		simulationStep = 0.02;
		soundFly[] = {"A3\Sounds_F\arsenal\weapons\Launchers\RPG32\Fly_RPG32", 0.316228, 1.5, 900};
		soundHit1[] = {"A3\Sounds_F\arsenal\weapons\Launchers\Titan\Explosion_titan_missile_01", 2.51189, 1, 1800};
		soundHit2[] = {"A3\Sounds_F\arsenal\weapons\Launchers\Titan\Explosion_titan_missile_02", 2.51189, 1, 1800};
		soundHit3[] = {"A3\Sounds_F\arsenal\weapons\Launchers\Titan\Explosion_titan_missile_03", 2.51189, 1, 1800};
		submunitionAmmo = "ammo_Penetrator_PG7";
		submunitionDirectionType = "SubmunitionModelDirection";
		submunitionInitialOffset[] = {0, 0, -0.2};
		submunitionInitSpeed = 1000;
		submunitionParentSpeedCoef = 0;
		thrust = 4000;
		thrustTime = 0.05;
		timeToLive = 6.1;
		triggerOnImpact = 1;
		warheadName = "HE";
		class CamShakeExplode
		{
			distance = 79.3286;
			duration = 1.2;
			frequency = 20;
			power = 7;
		};
		class CamShakeFire
		{
			distance = 30.9839;
			duration = 0.8;
			frequency = 20;
			power = 1.96799;
		};
		class CamShakeHit
		{
			distance = 1;
			duration = 0.6;
			frequency = 20;
			power = 85;
		};
		class CamShakePlayerFire
		{
			distance = 1;
			duration = 0.1;
			frequency = 20;
			power = 1;
		};
	};
	class R_TBG32V_F: R_PG32V_F
	{
		aiAmmoUsageFlags = "64 + 128";
		CraterEffects = "ArtyShellCrater";
		ExplosionEffects = "MortarExplosion";
		explosive = 1;
		hit = 200;
		indirectHit = 50;
		indirectHitRange = 6;
		model = "\A3\weapons_f\launchers\RPG32\tbg32v_rocket.p3d";
		submunitionAmmo = "";
		submunitionDirectionType = "";
		submunitionInitialOffset[] = {0, 0, 0};
		submunitionInitSpeed = 0;
		submunitionParentSpeedCoef = 0;
		triggerOnImpact = 0;
		warheadName = "HE";
		class CamShakeExplode
		{
			distance = 123.905;
			duration = 2;
			frequency = 20;
			power = 22;
		};
	};
	class Rocket_03_AP_F: Rocket_04_AP_F
	{
		deleteParentWhenTriggered = 0;
		hit = 95;
		indirectHit = 25;
		indirectHitRange = 3;
		maverickWeaponIndexOffset = 28;
		model = "\A3\Weapons_F_EPC\Ammo\Rocket_03_AP_fly_F.p3d";
		proxyShape = "\A3\Weapons_F_EPC\Ammo\Rocket_03_AP_F.p3d";
		submunitionAmmo = "ammo_Penetrator_Rocket_03_AP";
		submunitionDirectionType = "SubmunitionModelDirection";
		submunitionInitialOffset[] = {0, 0, -0.2};
		submunitionInitSpeed = 1000;
		submunitionParentSpeedCoef = 0;
		triggerOnImpact = 1;
	};
	class Rocket_03_HE_F: Rocket_04_HE_F
	{
		maverickWeaponIndexOffset = 8;
		model = "\A3\Weapons_F_EPC\Ammo\Rocket_03_HE_fly_F.p3d";
		proxyShape = "\A3\Weapons_F_EPC\Ammo\Rocket_03_HE_F.p3d";
	};
	class Rocket_04_AP_F: Rocket_04_HE_F
	{
		aiAmmoUsageFlags = 128;
		deleteParentWhenTriggered = 0;
		hit = 95;
		indirectHit = 25;
		indirectHitRange = 2.5;
		maverickWeaponIndexOffset = 19;
		model = "\A3\Weapons_F_EPC\Ammo\Rocket_04_AP_fly_F.p3d";
		proxyShape = "\A3\Weapons_F_EPC\Ammo\Rocket_04_AP_F.p3d";
		submunitionAmmo = "ammo_Penetrator_Rocket_04_AP";
		submunitionDirectionType = "SubmunitionModelDirection";
		submunitionInitialOffset[] = {0, 0, -0.2};
		submunitionInitSpeed = 1000;
		submunitionParentSpeedCoef = 0;
		triggerOnImpact = 1;
		warheadName = "HE";
	};
	class Rocket_04_HE_F: MissileBase
	{
		aiAmmoUsageFlags = "64 + 128";
		airFriction = 0.09;
		airLock = 0;
		cost = 100;
		effectsMissileInit = "PylonBackEffectsFFAR";
		fuseDistance = 50;
		hit = 210;
		indirectHit = 55;
		indirectHitRange = 15;
		initTime = 0.002;
		irLock = 0;
		laserLock = 0;
		maneuvrability = 0;
		manualControl = 0;
		maverickweapon = 1;
		maverickWeaponIndexOffset = 12;
		maxControlRange = 0;
		maxSpeed = 590;
		missileLockMaxDistance = 3000;
		missileLockMinDistance = 500;
		model = "\A3\Weapons_F_EPC\Ammo\Rocket_04_HE_fly_F.p3d";
		muzzleEffect = "";
		nvLock = 0;
		proxyShape = "\A3\Weapons_F_EPC\Ammo\Rocket_04_HE_F.p3d";
		sideAirFriction = 0.005;
		soundFly[] = {"A3\Sounds_F\weapons\Rockets\rocket_fly_1", 0.630957, 1.2, 1700};
		SoundSetExplosion[] = {"RocketsLight_Exp_SoundSet", "RocketsLight_Tail_SoundSet", "Explosion_Debris_SoundSet"};
		thrust = 1060;
		thrustTime = 0.69;
		timeToLive = 60;
		warheadName = "HE";
		weaponLockSystem = 0;
		whistleDist = 30;
		class CamShakeExplode
		{
			distance = 191.554;
			duration = 1.8;
			frequency = 20;
			power = 16;
		};
		class CamShakeFire
		{
			distance = 71.5542;
			duration = 1.8;
			frequency = 20;
			power = 2.9907;
		};
		class CamShakeHit
		{
			distance = 1;
			duration = 0.6;
			frequency = 20;
			power = 80;
		};
		class CamShakePlayerFire
		{
			distance = 1;
			duration = 0.1;
			frequency = 20;
			power = 2;
		};
	};
	class RocketBase: RocketCore
	{
		airFriction = 0.1;
		CraterEffects = "HERocketCrater";
		dangerRadiusHit = -1;
		effectsMissile = "missile1";
		explosionEffects = "HERocketExplosion";
		explosionSoundEffect = "DefaultExplosion";
		hit = 500;
		indirectHit = 150;
		indirectHitRange = 2;
		initTime = 0;
		maxSpeed = 1;
		model = "\A3\Weapons_F\Ammo\Rocket_01_fly_F.p3d";
		muzzleEffect = "BIS_fnc_effectFiredRocket";
		sideAirFriction = 0.001;
		soundEngine[] = {"", 1, 1, 20};
		soundFly[] = {"", 1, 1, 400};
		soundHit[] = {"A3\Sounds_F\weapons\Rockets\explosion_missile_02", 2.51189, 1, 2500};
		supersonicCrackFar[] = {"", 1, 1, 150};
		supersonicCrackNear[] = {"", 1, 1, 50};
		suppressionRadiusHit = 30;
		thrust = 2000;
		thrustTime = 0.2;
		class HitEffects
		{
			hitWater = "ImpactEffectsWaterRocket";
		};
	};
	class RocketCore: Default
	{
		audibleFire = 32;
		cost = 2000;
		deflecting = 5;
		initTime = 0.05;
		maneuvrability = 0;
		maxControlRange = 0;
		simulation = "shotRocket";
		simulationStep = 0.05;
		thrust = 1500;
		thrustTime = 1;
		timeToLive = 20;
		visibleFire = 32;
		visibleFireTime = 20;
	};
	class SatchelCharge_Remote_Ammo: PipeBombBase
	{
		CraterEffects = "MineNondirectionalCrater";
		defaultMagazine = "SatchelCharge_Remote_Mag";
		ExplosionEffects = "MineNondirectionalExplosion";
		hit = 3000;
		indirectHit = 3000;
		indirectHitRange = 5;
		mineInconspicuousness = 3;
		mineModelDisabled = "\A3\Weapons_F\Explosives\satchel_d";
		mineTrigger = "RemoteTrigger";
		model = "\A3\Weapons_F\Explosives\satchel";
		multiSoundHit[] = {"soundHit1", 0.5, "soundHit2", 0.5};
		soundActivation[] = {"A3\Sounds_F_Orange\arsenal\explosives\Handling\ExplosiveSatchel_Placement_01", 1, 1, 20};
		soundDeactivation[] = {"A3\Sounds_F_Orange\arsenal\explosives\Handling\ExplosiveSatchel_Deactivate_01", 1.99526, 1, 20};
		soundHit1[] = {"A3\Sounds_F\arsenal\explosives\bombs\Explosion_satchel_01", 3.16228, 1, 1500};
		soundHit2[] = {"A3\Sounds_F\arsenal\explosives\bombs\Explosion_satchel_02", 3.16228, 1, 1500};
		SoundSetExplosion[] = {"ClaymoreMine_Exp_SoundSet", "ClaymoreMine_Tail_SoundSet", "Explosion_Debris_SoundSet"};
		soundTrigger[] = {"A3\Sounds_F_Orange\arsenal\explosives\Handling\ExplosiveSatchel_TouchOff_01", 0.630957, 1, 20};
		whistleDist = 10;
	};
	class SatchelCharge_Remote_Ammo_Scripted: SatchelCharge_Remote_Ammo {};
	class Sh_105mm_APFSDS: Sh_120mm_APFSDS
	{
		airFriction = -3.48e-005;
		caliber = 28.5714;
		hit = 450;
		indirectHit = 10;
		indirectHitRange = 0.5;
		tracerEndTime = 2.5;
	};
	class Sh_105mm_APFSDS_T_Green: Sh_105mm_APFSDS
	{
		model = "\A3\Weapons_f\Data\bullettracer\shell_tracer_green";
	};
	class Sh_105mm_APFSDS_T_Red: Sh_105mm_APFSDS
	{
		model = "\A3\Weapons_f\Data\bullettracer\shell_tracer_red";
	};
	class Sh_105mm_APFSDS_T_Yellow: Sh_105mm_APFSDS
	{
		model = "\A3\Weapons_f\Data\bullettracer\shell_tracer_yellow";
	};
	class Sh_105mm_HEAT_MP: Sh_125mm_HEAT
	{
		airFriction = -0.000308;
		deleteParentWhenTriggered = 0;
		hit = 95;
		indirectHit = 26;
		indirectHitRange = 4.2;
		submunitionAmmo = "ammo_Penetrator_105mm";
		submunitionDirectionType = "SubmunitionModelDirection";
		submunitionInitialOffset[] = {0, 0, -0.2};
		submunitionInitSpeed = 1000;
		submunitionParentSpeedCoef = 0;
		triggerOnImpact = 1;
	};
	class Sh_105mm_HEAT_MP_T_Green: Sh_105mm_HEAT_MP
	{
		model = "\A3\Weapons_f\Data\bullettracer\shell_tracer_green";
	};
	class Sh_105mm_HEAT_MP_T_Red: Sh_105mm_HEAT_MP
	{
		model = "\A3\Weapons_f\Data\bullettracer\shell_tracer_red";
	};
	class Sh_105mm_HEAT_MP_T_Yellow: Sh_105mm_HEAT_MP
	{
		model = "\A3\Weapons_f\Data\bullettracer\shell_tracer_yellow";
	};
	class Sh_120mm_APFSDS: ShellBase
	{
		aiAmmoUsageFlags = "128 + 512";
		airFriction = -3.96e-005;
		caliber = 35.2688;
		cost = 500;
		CraterEffects = "ExploAmmoCrater";
		dangerRadiusHit = 100;
		deflecting = 15;
		explosionEffects = "ExploAmmoExplosion";
		explosive = 0;
		hit = 500;
		indirectHit = 15;
		indirectHitRange = 0.5;
		model = "\A3\Weapons_f\Data\bullettracer\shell_tracer_white";
		multiSoundHit[] = {"soundHit1", 0.25, "soundHit2", 0.25, "soundHit3", 0.25, "soundHit4", 0.25};
		muzzleEffect = "";
		soundHit1[] = {"A3\Sounds_F\arsenal\explosives\shells\Tank_shell_explosion_01", 1.77828, 1, 1800};
		soundHit2[] = {"A3\Sounds_F\arsenal\explosives\shells\Tank_shell_explosion_02", 1.77828, 1, 1800};
		soundHit3[] = {"A3\Sounds_F\arsenal\explosives\shells\Tank_shell_explosion_03", 1.77828, 1, 1800};
		soundHit4[] = {"A3\Sounds_F\arsenal\explosives\shells\Tank_shell_explosion_04", 1.77828, 1, 1800};
		SoundSetExplosion[] = {"Shell105mm130mm_Exp_SoundSet", "Shell105mm130mm_Tail_SoundSet", "Explosion_Debris_SoundSet"};
		suppressionRadiusHit = 18;
		timeToLive = 15;
		tracerEndTime = 3;
		tracerScale = 3;
		tracerStartTime = 0.1;
		typicalSpeed = 1550;
		warheadName = "AP";
		whistleDist = 14;
		whistleOnFire = 1;
		class CamShakeExplode
		{
			distance = 40.2492;
			duration = 2.6;
			frequency = 20;
			power = 13.4164;
		};
		class CamShakeFire
		{
			distance = 87.6356;
			duration = 2.2;
			frequency = 20;
			power = 3.30975;
		};
		class CamShakeHit
		{
			distance = 1;
			duration = 0.8;
			frequency = 20;
			power = 180;
		};
		class CamShakePlayerFire
		{
			distance = 1;
			duration = 0.1;
			frequency = 20;
			power = 0.02;
		};
		class HitEffects
		{
			default_mat = "ImpactEffectsGroundSabot";
			hitBuilding = "ImpactConcreteSabot";
			hitConcrete = "ImpactConcreteSabot";
			hitGroundHard = "ImpactEffectsGroundSabot";
			hitGroundSoft = "ImpactEffectsGroundSabot";
			hitMetal = "ImpactMetalSabotBig";
			hitMetalPlate = "ImpactMetalSabotBig";
			hitWater = "ImpactEffectsWater";
		};
	};
	class Sh_120mm_APFSDS_Tracer_Green: Sh_120mm_APFSDS
	{
		model = "\A3\Weapons_f\Data\bullettracer\shell_tracer_green";
	};
	class Sh_120mm_APFSDS_Tracer_Red: Sh_120mm_APFSDS
	{
		model = "\A3\Weapons_f\Data\bullettracer\shell_tracer_red";
	};
	class Sh_120mm_APFSDS_Tracer_Yellow: Sh_120mm_APFSDS
	{
		model = "\A3\Weapons_f\Data\bullettracer\shell_tracer_yellow";
	};
	class Sh_120mm_HE: ShellBase
	{
		airFriction = -0.000275;
		caliber = 10;
		cost = 300;
		dangerRadiusHit = 160;
		deflecting = 4;
		explosive = 0.8;
		hit = 250;
		indirectHit = 60;
		indirectHitRange = 6;
		model = "\A3\Weapons_f\Data\bullettracer\shell_tracer_white";
		multiSoundHit[] = {"soundHit1", 0.25, "soundHit2", 0.25, "soundHit3", 0.25, "soundHit4", 0.25};
		muzzleEffect = "";
		soundHit1[] = {"A3\Sounds_F\arsenal\explosives\shells\Tank_shell_explosion_01", 1.77828, 1, 1800};
		soundHit2[] = {"A3\Sounds_F\arsenal\explosives\shells\Tank_shell_explosion_02", 1.77828, 1, 1800};
		soundHit3[] = {"A3\Sounds_F\arsenal\explosives\shells\Tank_shell_explosion_03", 1.77828, 1, 1800};
		soundHit4[] = {"A3\Sounds_F\arsenal\explosives\shells\Tank_shell_explosion_04", 1.77828, 1, 1800};
		SoundSetExplosion[] = {"Shell105mm130mm_Exp_SoundSet", "Shell105mm130mm_Tail_SoundSet", "Explosion_Debris_SoundSet"};
		suppressionRadiusHit = 32;
		timeToLive = 15;
		tracerEndTime = 3;
		tracerScale = 1;
		tracerStartTime = 0.1;
		typicalSpeed = 1400;
		warheadName = "HE";
		whistleDist = 14;
		whistleOnFire = 1;
		class CamShakeExplode
		{
			distance = 143.636;
			duration = 2.2;
			frequency = 20;
			power = 24;
		};
		class CamShakeFire
		{
			distance = 87.6356;
			duration = 2.2;
			frequency = 20;
			power = 3.30975;
		};
		class CamShakeHit
		{
			distance = 1;
			duration = 0.6;
			frequency = 20;
			power = 120;
		};
		class CamShakePlayerFire
		{
			distance = 1;
			duration = 0.1;
			frequency = 20;
			power = 0.02;
		};
	};
	class Sh_120mm_HE_Tracer_Green: Sh_120mm_HE
	{
		model = "\A3\Weapons_f\Data\bullettracer\shell_tracer_green";
	};
	class Sh_120mm_HE_Tracer_Red: Sh_120mm_HE
	{
		model = "\A3\Weapons_f\Data\bullettracer\shell_tracer_red";
	};
	class Sh_120mm_HE_Tracer_Yellow: Sh_120mm_HE
	{
		model = "\A3\Weapons_f\Data\bullettracer\shell_tracer_yellow";
	};
	class Sh_120mm_HEAT_MP: ShellBase
	{
		airFriction = -0.000275;
		cost = 500;
		CraterEffects = "ATRocketCrater";
		dangerRadiusHit = 160;
		deflecting = 8;
		deleteParentWhenTriggered = 0;
		explosionEffects = "ATRocketExplosion";
		explosionSoundEffect = "DefaultExplosion";
		explosive = 1;
		hit = 95;
		indirectHit = 30;
		indirectHitRange = 3.5;
		model = "\A3\Weapons_f\Data\bullettracer\shell_tracer_white";
		multiSoundHit[] = {"soundHit1", 0.25, "soundHit2", 0.25, "soundHit3", 0.25, "soundHit4", 0.25};
		muzzleEffect = "";
		soundHit1[] = {"A3\Sounds_F\arsenal\explosives\shells\Tank_shell_explosion_01", 1.77828, 1, 1800};
		soundHit2[] = {"A3\Sounds_F\arsenal\explosives\shells\Tank_shell_explosion_02", 1.77828, 1, 1800};
		soundHit3[] = {"A3\Sounds_F\arsenal\explosives\shells\Tank_shell_explosion_03", 1.77828, 1, 1800};
		soundHit4[] = {"A3\Sounds_F\arsenal\explosives\shells\Tank_shell_explosion_04", 1.77828, 1, 1800};
		submunitionAmmo = "ammo_Penetrator_120mm";
		submunitionDirectionType = "SubmunitionModelDirection";
		submunitionInitialOffset[] = {0, 0, -0.2};
		submunitionInitSpeed = 1000;
		submunitionParentSpeedCoef = 0;
		suppressionRadiusHit = 32;
		timeToLive = 15;
		tracerEndTime = 3;
		tracerScale = 1;
		tracerStartTime = 0.1;
		triggerOnImpact = 1;
		typicalSpeed = 1400;
		warheadName = "HE";
		whistleDist = 14;
		whistleOnFire = 1;
		class CamShakeExplode
		{
			distance = 143.636;
			duration = 2.2;
			frequency = 20;
			power = 24;
		};
		class CamShakeFire
		{
			distance = 87.6356;
			duration = 2.2;
			frequency = 20;
			power = 3.30975;
		};
		class CamShakeHit
		{
			distance = 1;
			duration = 0.6;
			frequency = 20;
			power = 120;
		};
		class CamShakePlayerFire
		{
			distance = 1;
			duration = 0.1;
			frequency = 20;
			power = 0.02;
		};
	};
	class Sh_120mm_HEAT_MP_T_Green: Sh_120mm_HEAT_MP
	{
		model = "\A3\Weapons_f\Data\bullettracer\shell_tracer_green";
	};
	class Sh_120mm_HEAT_MP_T_Red: Sh_120mm_HEAT_MP
	{
		model = "\A3\Weapons_f\Data\bullettracer\shell_tracer_red";
	};
	class Sh_120mm_HEAT_MP_T_Yellow: Sh_120mm_HEAT_MP
	{
		model = "\A3\Weapons_f\Data\bullettracer\shell_tracer_yellow";
	};
	class Sh_125mm_APFSDS: Sh_120mm_APFSDS
	{
		caliber = 34.8387;
		deflecting = 15;
		hit = 550;
		indirectHit = 20;
		indirectHitRange = 0.5;
		typicalSpeed = 1550;
	};
	class Sh_125mm_APFSDS_T_Green: Sh_125mm_APFSDS
	{
		model = "\A3\Weapons_f\Data\bullettracer\shell_tracer_green";
	};
	class Sh_125mm_APFSDS_T_Red: Sh_125mm_APFSDS
	{
		model = "\A3\Weapons_f\Data\bullettracer\shell_tracer_red";
	};
	class Sh_125mm_APFSDS_T_Yellow: Sh_125mm_APFSDS
	{
		model = "\A3\Weapons_f\Data\bullettracer\shell_tracer_yellow";
	};
	class Sh_125mm_HE: Sh_120mm_HE
	{
		caliber = 10;
		deflecting = 4;
		hit = 300;
		indirectHit = 80;
		indirectHitRange = 6;
	};
	class Sh_125mm_HE_T_Green: Sh_125mm_HE
	{
		model = "\A3\Weapons_f\Data\bullettracer\shell_tracer_green";
	};
	class Sh_125mm_HE_T_Red: Sh_125mm_HE
	{
		model = "\A3\Weapons_f\Data\bullettracer\shell_tracer_red";
	};
	class Sh_125mm_HE_T_Yellow: Sh_125mm_HE
	{
		model = "\A3\Weapons_f\Data\bullettracer\shell_tracer_yellow";
	};
	class Sh_125mm_HEAT: Sh_125mm_HE
	{
		cost = 500;
		CraterEffects = "ATRocketCrater";
		deleteParentWhenTriggered = 0;
		explosionEffects = "ATRocketExplosion";
		explosionSoundEffect = "DefaultExplosion";
		hit = 150;
		indirectHit = 31;
		indirectHitRange = 3.75;
		multiSoundHit[] = {"soundHit1", 0.25, "soundHit2", 0.25, "soundHit3", 0.25, "soundHit4", 0.25};
		soundHit1[] = {"A3\Sounds_F\arsenal\explosives\shells\Tank_shell_explosion_01", 1.77828, 1, 1800};
		soundHit2[] = {"A3\Sounds_F\arsenal\explosives\shells\Tank_shell_explosion_02", 1.77828, 1, 1800};
		soundHit3[] = {"A3\Sounds_F\arsenal\explosives\shells\Tank_shell_explosion_03", 1.77828, 1, 1800};
		soundHit4[] = {"A3\Sounds_F\arsenal\explosives\shells\Tank_shell_explosion_04", 1.77828, 1, 1800};
		submunitionAmmo = "ammo_Penetrator_125mm";
		submunitionDirectionType = "SubmunitionModelDirection";
		submunitionInitialOffset[] = {0, 0, -0.2};
		submunitionInitSpeed = 1000;
		submunitionParentSpeedCoef = 0;
		triggerOnImpact = 1;
		typicalSpeed = 900;
		warheadName = "TandemHEAT";
	};
	class Sh_125mm_HEAT_T_Green: Sh_125mm_HEAT
	{
		model = "\A3\Weapons_f\Data\bullettracer\shell_tracer_green";
	};
	class Sh_125mm_HEAT_T_Red: Sh_125mm_HEAT
	{
		model = "\A3\Weapons_f\Data\bullettracer\shell_tracer_red";
	};
	class Sh_125mm_HEAT_T_Yellow: Sh_125mm_HEAT
	{
		model = "\A3\Weapons_f\Data\bullettracer\shell_tracer_yellow";
	};
	class Sh_155mm_AMOS: ShellBase
	{
		airFriction = 0;
		artilleryLock = 1;
		caliber = 10;
		cost = 300;
		CraterEffects = "ArtyShellCrater";
		dangerRadiusHit = 750;
		deflecting = 0;
		ExplosionEffects = "MortarExplosion";
		explosive = 0.8;
		hit = 340;
		indirectHit = 125;
		indirectHitRange = 30;
		model = "\A3\weapons_f\ammo\shell";
		multiSoundHit[] = {"soundHit1", 0.25, "soundHit2", 0.25, "soundHit3", 0.25, "soundHit4", 0.25};
		sideairFriction = 0;
		soundHit1[] = {"A3\Sounds_F\arsenal\explosives\shells\Artillery_tank_shell_155mm_explosion_01", 2.51189, 1, 1900};
		soundHit2[] = {"A3\Sounds_F\arsenal\explosives\shells\Artillery_tank_shell_155mm_explosion_02", 2.51189, 1, 1900};
		soundHit3[] = {"A3\Sounds_F\arsenal\explosives\shells\Artillery_tank_shell_155mm_explosion_03", 2.51189, 1, 1900};
		soundHit4[] = {"A3\Sounds_F\arsenal\explosives\shells\Artillery_tank_shell_155mm_explosion_04", 2.51189, 1, 1900};
		SoundSetExplosion[] = {"Shell155mm_Exp_SoundSet", "Shell155mm_Tail_SoundSet", "Explosion_Debris_SoundSet"};
		suppressionRadiusHit = 75;
		thrust = 0;
		timeToLive = 180;
		typicalSpeed = 800;
		warheadName = "HE";
		whistleDist = 60;
		class CamShakeExplode
		{
			distance = 339.599;
			duration = 2.4;
			frequency = 20;
			power = 31;
		};
		class CamShakeFire
		{
			distance = 99.5992;
			duration = 2.4;
			frequency = 20;
			power = 3.52844;
		};
		class CamShakeHit
		{
			distance = 1;
			duration = 0.8;
			frequency = 20;
			power = 155;
		};
		class CamShakePlayerFire
		{
			distance = 1;
			duration = 0.1;
			frequency = 20;
			power = 0.01;
		};
	};
	class Sh_155mm_AMOS_guided: Sh_82mm_AMOS_guided
	{
		hit = 300;
		muzzleEffect = "";
		submunitionAmmo = "M_Mo_155mm_AT";
		triggerDistance = 500;
	};
	class Sh_155mm_AMOS_LG: Sh_82mm_AMOS_LG
	{
		hit = 300;
		muzzleEffect = "";
		submunitionAmmo = "M_Mo_155mm_AT_LG";
		triggerDistance = 500;
	};
	class Sh_82mm_AMOS: Sh_155mm_AMOS
	{
		cost = 200;
		hit = 165;
		indirectHit = 52;
		indirectHitRange = 18;
		muzzleEffect = "";
		SoundSetExplosion[] = {"Mortar_Exp_SoundSet", "Mortar_Tail_SoundSet", "Explosion_Debris_SoundSet"};
		class CamShakeExplode
		{
			distance = 216.443;
			duration = 1.8;
			frequency = 20;
			power = 16.4;
		};
		class CamShakeFire
		{
			distance = 72.4431;
			duration = 1.8;
			frequency = 20;
			power = 3.00922;
		};
		class CamShakeHit
		{
			distance = 1;
			duration = 0.6;
			frequency = 20;
			power = 82;
		};
		class CamShakePlayerFire
		{
			distance = 1;
			duration = 0.1;
			frequency = 20;
			power = 0.01;
		};
	};
	class Sh_82mm_AMOS_guided: SubmunitionBase
	{
		airFriction = 0;
		autoSeekTarget = 1;
		cost = 200;
		hit = 165;
		laserLock = 0;
		muzzleEffect = "";
		submunitionAmmo = "M_Mo_82mm_AT";
		submunitionConeAngle = 0;
		submunitionCount = 1;
		triggerDistance = 300;
		class CamShakeFire
		{
			distance = 72.4431;
			duration = 1.8;
			frequency = 20;
			power = 3.00922;
		};
		class CamShakePlayerFire
		{
			distance = 1;
			duration = 0.1;
			frequency = 20;
			power = 0.01;
		};
	};
	class Sh_82mm_AMOS_LG: Sh_82mm_AMOS_guided
	{
		cost = 500;
		irLock = 0;
		laserLock = 1;
		muzzleEffect = "";
		submunitionAmmo = "M_Mo_82mm_AT_LG";
	};
	class ShellBase: ShellCore
	{
		aiAmmoUsageFlags = "64 + 128 + 256";
		audibleFire = 250;
		caliber = 34;
		CraterEffects = "HEShellCrater";
		CraterWaterEffects = "ImpactEffectsWaterHE";
		dangerRadiusHit = -1;
		deflecting = 10;
		deflectionDirDistribution = 0.39;
		ExplosionEffects = "HEShellExplosion";
		muzzleEffect = "";
		penetrationDirDistribution = 0.26;
		soundFakeFall[] = {"soundFakeFall0", 0.25, "soundFakeFall1", 0.25, "soundFakeFall2", 0.25, "soundFakeFall3", 0.25};
		soundFakeFall0[] = {"a3\Sounds_F\weapons\falling_bomb\fall_01", 3.16228, 1, 1000};
		soundFakeFall1[] = {"a3\Sounds_F\weapons\falling_bomb\fall_02", 3.16228, 1, 1000};
		soundFakeFall2[] = {"a3\Sounds_F\weapons\falling_bomb\fall_03", 3.16228, 1, 1000};
		soundFakeFall3[] = {"a3\Sounds_F\weapons\falling_bomb\fall_04", 3.16228, 1, 1000};
		soundSetSonicCrack[] = {"bulletSonicCrack_SoundSet", "bulletSonicCrackTail_SoundSet"};
		supersonicCrackFar[] = {"A3\Sounds_F\weapons\Explosion\supersonic_crack_50meters", 0.223872, 1, 150};
		supersonicCrackNear[] = {"A3\Sounds_F\weapons\Explosion\supersonic_crack_close", 0.316228, 1, 50};
		suppressionRadiusHit = 30;
		timeToLive = 360;
		visibleFire = 64;
		whistleOnFire = 2;
		class HitEffects
		{
			hitWater = "ImpactEffectsWaterRocket";
		};
	};
	class ShellCore: Default
	{
		audibleFire = 16;
		cost = 1000;
		deflecting = 5;
		indirectHitRange = 8;
		simulation = "shotShell";
		simulationStep = 0.05;
		soundFly[] = {"", 0.0316228, 4};
		soundHit[] = {"", 316.228, 1};
		timeToLive = 20;
		visibleFire = 16;
		visibleFireTime = 10;
	};
	class ShotDeployBase: ShotDeployCore
	{
		model = "\A3\Weapons_F\Ammo\shell.p3d";
	};
	class ShotDeployCore: Default
	{
		artilleryLock = 1;
		audibleFire = 16;
		cost = 1000;
		deflecting = 5;
		hitOnWater = 1;
		indirectHitRange = 8;
		simulation = "shotDeploy";
		simulationStep = 0.05;
		soundFly[] = {"", 0.0316228, 4};
		soundHit[] = {"", 316.228, 1};
		timeToLive = 180;
		visibleFire = 16;
		visibleFireTime = 10;
	};
	class ShotgunBase: ShotgunCore
	{
		dangerRadiusBulletClose = 4;
		dangerRadiusHit = 8;
		model = "\A3\Weapons_f\ammo\shell";
		suppressionRadiusBulletClose = 2;
		suppressionRadiusHit = 4;
		waterEffectOffset = -0.8;
		class HitEffects
		{
			Hit_Foliage_Dead = "ImpactLeavesDead";
			Hit_Foliage_green = "ImpactLeavesGreen";
			Hit_Foliage_Green_big = "ImpactLeavesGreenBig";
			Hit_Foliage_Palm = "ImpactLeavesPalm";
			Hit_Foliage_Pine = "ImpactLeavesPine";
			hitBuilding = "ImpactPlaster";
			hitConcrete = "ImpactConcrete";
			hitFoliage = "ImpactLeaves";
			hitGlass = "ImpactGlass";
			hitGlassArmored = "ImpactGlassThin";
			hitGroundHard = "ImpactEffectsHardGround";
			hitGroundRed = "ImpactEffectsRed";
			hitGroundSoft = "ImpactEffectsSmall";
			hitHay = "ImpactHay";
			hitMan = "ImpactEffectsBlood";
			hitMetal = "ImpactMetal";
			hitMetalPlate = "ImpactMetal";
			hitPlastic = "ImpactPlastic";
			hitRubber = "ImpactRubber";
			hitVirtual = "ImpactMetal";
			hitWater = "ImpactEffectsWater";
			hitWood = "ImpactWood";
		};
	};
	class ShotgunCore: Default
	{
		audibleFire = 16;
		cost = 0.7;
		explosive = 0;
		hitArmor[] = {"soundHitArmor1", 0.7, "soundHitArmor2", 0.3};
		hitBuilding[] = {"soundHitBuilding1", 0.5, "soundHitBuilding2", 0.5};
		hitGround[] = {"soundHit1", 0.33, "soundHit2", 0.33, "soundHit3", 0.33};
		hitMan[] = {"soundHitMan1", 0.5, "soundHitMan2", 0.5};
		simulation = "shotSpread";
		simulationStep = 0.05;
		soundFly[] = {"", 0.251189, 0.7};
		soundHit1[] = {"", 0.0316228, 1};
		soundHit2[] = {"", 0.0316228, 1};
		soundHit3[] = {"", 0.0316228, 1};
		soundHitArmor1[] = {"", 0.0316228, 1};
		soundHitArmor2[] = {"", 0.0316228, 1};
		soundHitBuilding1[] = {"", 0.0316228, 1};
		soundHitBuilding2[] = {"", 0.0316228, 1};
		soundHitMan1[] = {"", 0.0125893, 1};
		soundHitMan2[] = {"", 0.0125893, 1};
		timeToLive = 3;
		visibleFire = 16;
		visibleFireTime = 3;
	};
	class SLAMDirectionalMine_Wire_Ammo: DirectionalBombBase
	{
		cost = 400;
		CraterEffects = "";
		craterShape = "\A3\weapons_f\empty.p3d";
		defaultMagazine = "SLAMDirectionalMine_Wire_Mag";
		explosionAngle = 30;
		explosionEffects = "DirectionalMineExplosionBig";
		hit = 1000;
		icon = "iconExplosiveGPDirectional";
		indirectHit = 1000;
		indirectHitRange = 10;
		mineInconspicuousness = 20;
		mineModelDisabled = "\A3\Weapons_F\Explosives\mine_SLAM_directional_d";
		mineTrigger = "IRTrigger";
		model = "\A3\Weapons_F\Explosives\mine_SLAM_directional";
		multiSoundHit[] = {"soundHit1", 0.5, "soundHit2", 0.5};
		soundActivation[] = {"A3\Sounds_F_Orange\arsenal\explosives\Handling\M6SlamMine_Placement_01", 1.99526, 1, 20};
		soundDeactivation[] = {"A3\Sounds_F_Orange\arsenal\explosives\Handling\M6SlamMine_Deactivate_01", 1.99526, 1, 20};
		soundHit1[] = {"A3\Sounds_F\arsenal\explosives\mines\Explosion_M6_slam_mine_01", 3.16228, 1, 1500};
		soundHit2[] = {"A3\Sounds_F\arsenal\explosives\mines\Explosion_M6_slam_mine_02", 3.16228, 1, 1500};
		SoundSetExplosion[] = {"M6slamMine_Exp_SoundSet", "M6slamMine_Tail_SoundSet", "Explosion_Debris_SoundSet"};
		whistleDist = 100;
	};
	class SmallSecondary: HelicopterExploSmall
	{
		craterEffects = "SecondaryCrater";
		explosionEffects = "SencondaryExplosion";
		explosionSoundEffect = "DefaultExplosion";
		hit = 5;
		indirectHit = 2;
		indirectHitRange = 5;
		SoundSetExplosion[] = {"ExplosiveCharge_Exp_SoundSet", "ExplosiveCharge_Tail_SoundSet", "Explosion_Debris_SoundSet"};
	};
	class Smoke_120mm_AMOS_White: SubmunitionBase
	{
		airFriction = 0;
		cost = 200;
		hit = 300;
		muzzleEffect = "";
		submunitionAmmo = "SmokeShellArty";
		submunitionConeAngle = 5;
		submunitionConeType[] = {"poissondisc", 5};
		triggerDistance = 100;
		class CamShakeFire
		{
			distance = 87.6356;
			duration = 2.2;
			frequency = 20;
			power = 3.30975;
		};
		class CamShakePlayerFire
		{
			distance = 1;
			duration = 0.1;
			frequency = 20;
			power = 0.02;
		};
	};
	class Smoke_82mm_AMOS_White: ShotDeployBase
	{
		model = "\A3\weapons_f\ammo\shell";
		submunitionAmmo = "SmokeShellArty";
	};
	class SmokeLauncherAmmo: BulletBase
	{
		aiAmmoUsageFlags = "4 + 8";
		airFriction = -0.1;
		effectsSmoke = "EmptyEffect";
		hit = 1;
		indirectHit = 0;
		indirectHitRange = 0;
		initTime = 2;
		maxControlRange = 50;
		model = "\A3\weapons_f\empty";
		muzzleEffect = "BIS_fnc_effectFiredSmokeLauncher";
		simulation = "shotCM";
		thrustTime = 10;
		timeToLive = 10;
		weaponLockSystem = "1 + 2 + 4";
	};
	class SmokeLauncherAmmo_boat: SmokeLauncherAmmo
	{
		muzzleEffect = "BIS_fnc_effectFiredSmokeLauncher_boat";
	};
	class SmokeShell: GrenadeHand
	{
		aiAmmoUsageFlags = "4 + 2";
		cost = 100;
		dangerRadiusHit = -1;
		deflecting = 30;
		effectsSmoke = "SmokeShellWhiteEffect";
		explosionTime = 2;
		explosive = 0;
		fuseDistance = 0;
		grenadeBurningSound[] = {"SmokeShellSoundLoop1", 0.5, "SmokeShellSoundLoop2", 0.5};
		grenadeFireSound[] = {"SmokeShellSoundHit1", 0.25, "SmokeShellSoundHit2", 0.25, "SmokeShellSoundHit3", 0.5};
		hit = 0;
		indirectHit = 0;
		indirectHitRange = 0.2;
		model = "\A3\Weapons_f\ammo\smokegrenade_white_throw";
		simulation = "shotSmokeX";
		smokeColor[] = {1, 1, 1, 1};
		SmokeShellSoundHit1[] = {"A3\Sounds_F\weapons\smokeshell\smoke_1", 1.25893, 1, 100};
		SmokeShellSoundHit2[] = {"A3\Sounds_F\weapons\smokeshell\smoke_2", 1.25893, 1, 100};
		SmokeShellSoundHit3[] = {"A3\Sounds_F\weapons\smokeshell\smoke_3", 1.25893, 1, 100};
		SmokeShellSoundLoop1[] = {"A3\Sounds_F\weapons\smokeshell\smoke_loop1", 0.125893, 1, 70};
		SmokeShellSoundLoop2[] = {"A3\Sounds_F\weapons\smokeshell\smoke_loop2", 0.125893, 1, 70};
		soundHit[] = {"", 0, 1};
		suppressionRadiusHit = -1;
		timeToLive = 60;
		typicalspeed = 22;
		whistleDist = 0;
	};
	class SmokeShell_Infinite: SmokeShell
	{
		timeToLive = 1e+010;
	};
	class SmokeShellArty: SmokeShell
	{
		effectsSmoke = "SmokeShellWhiteSmall";
		model = "\A3\weapons_f\ammo\shell_smoke";
		simulation = "shotSmoke";
	};
	class SmokeShellBlue: SmokeShell
	{
		effectsSmoke = "SmokeShellBlueEffect";
		model = "\A3\Weapons_f\ammo\smokegrenade_blue_throw";
		smokeColor[] = {0.1183, 0.1867, 1, 1};
	};
	class SmokeShellBlue_Infinite: SmokeShellBlue
	{
		timeToLive = 1e+010;
	};
	class SmokeShellCore: GrenadeCore
	{
		audibleFire = 0.25;
		cost = 100;
		deflecting = 60;
		explosive = 0;
		hit = 5;
		indirectHit = 2;
		indirectHitRange = 0.2;
		simulation = "shotSmokeX";
		smokeColor[] = {1, 1, 1, 0};
		soundHit[] = {"", 0, 1};
		timeToLive = 60;
		visibleFire = 2;
		visibleFireTime = 1;
	};
	class SmokeShellGreen: SmokeShell
	{
		effectsSmoke = "SmokeShellGreenEffect";
		model = "\A3\Weapons_f\ammo\smokegrenade_green_throw";
		smokeColor[] = {0.2125, 0.6258, 0.4891, 1};
	};
	class SmokeShellGreen_Infinite: SmokeShellGreen
	{
		timeToLive = 1e+010;
	};
	class SmokeShellOrange: SmokeShell
	{
		effectsSmoke = "SmokeShellOrangeEffect";
		model = "\A3\Weapons_f\ammo\smokegrenade_orange_throw";
		smokeColor[] = {0.6697, 0.2275, 0.10053, 1};
	};
	class SmokeShellOrange_Infinite: SmokeShellOrange
	{
		timeToLive = 1e+010;
	};
	class SmokeShellPurple: SmokeShell
	{
		effectsSmoke = "SmokeShellPurpleEffect";
		model = "\A3\Weapons_f\ammo\smokegrenade_purple_throw";
		smokeColor[] = {0.4341, 0.1388, 0.4144, 1};
	};
	class SmokeShellPurple_Infinite: SmokeShellPurple
	{
		timeToLive = 1e+010;
	};
	class SmokeShellRed: SmokeShell
	{
		effectsSmoke = "SmokeShellRedEffect";
		model = "\A3\Weapons_f\ammo\smokegrenade_red_throw";
		smokeColor[] = {0.8438, 0.1383, 0.1353, 1};
	};
	class SmokeShellRed_Infinite: SmokeShellRed
	{
		timeToLive = 1e+010;
	};
	class SmokeShellVehicle: SmokeShell
	{
		effectsSmoke = "EmptyEffect";
		soundFly[] = {"A3\sounds_f\dummysound", 0.1, 1};
	};
	class SmokeShellVehicle_boat: SmokeShellVehicle
	{
		model = "\A3\weapons_f\Ammo\UGL_slug";
	};
	class SmokeShellYellow: SmokeShell
	{
		effectsSmoke = "SmokeShellYellowEffect";
		model = "\A3\Weapons_f\ammo\smokegrenade_yellow_throw";
		smokeColor[] = {0.9883, 0.8606, 0.0719, 1};
	};
	class SmokeShellYellow_Infinite: SmokeShellYellow
	{
		timeToLive = 1e+010;
	};
	class SpectrumAnalyzer_Ammo: BulletBase
	{
		hit = 0;
		indirectHit = 0;
		indirectHitRange = 0;
		timeToLive = 0;
	};
	class Sub_F_Signal_Green: B_9x21_Ball
	{
		airFriction = -0.0216;
		hit = 0;
		model = "\A3\Weapons_F_Kart\Ammo\tracer_green.p3d";
		simulation = "shotSubmunitions";
		submunitionAmmo = "F_Signal_Green";
		submunitionConeAngle = 35;
		submunitionConeType[] = {"poissondisccenter", 3};
		tracerScale = 5;
		tracerStartTime = 0.1;
		triggerTime = 0.9;
	};
	class Sub_F_Signal_Red: Sub_F_Signal_Green
	{
		model = "\A3\Weapons_F_Kart\Ammo\tracer_red.p3d";
		submunitionAmmo = "F_Signal_Red";
	};
	class SubmunitionBase: SubmunitionCore
	{
		model = "\A3\Weapons_F\Ammo\shell.p3d";
	};
	class SubmunitionBullet: SubmunitionBase
	{
		explosive = 0;
		submunitionAmmo = "BulletBase";
		submunitionConeAngle = 0;
		submunitionCount = 1;
		triggerTime = 1;
		class HitEffects
		{
			Hit_Foliage_Dead = "ImpactLeavesDead";
			Hit_Foliage_green = "ImpactLeavesGreen";
			Hit_Foliage_Green_big = "ImpactLeavesGreenBig";
			Hit_Foliage_Palm = "ImpactLeavesPalm";
			Hit_Foliage_Pine = "ImpactLeavesPine";
			hitBuilding = "ImpactPlaster";
			hitConcrete = "ImpactConcrete";
			hitFoliage = "ImpactLeaves";
			hitGlass = "ImpactGlass";
			hitGlassArmored = "ImpactGlassThin";
			hitGroundHard = "ImpactEffectsHardGround";
			hitGroundRed = "ImpactEffectsRed";
			hitGroundSoft = "ImpactEffectsSmall";
			hitHay = "ImpactHay";
			hitMan = "ImpactEffectsBlood";
			hitMetal = "ImpactMetal";
			hitMetalPlate = "ImpactMetal";
			hitPlastic = "ImpactPlastic";
			hitRubber = "ImpactRubber";
			hitTyre = "ImpactTyre";
			hitVirtual = "ImpactMetal";
			hitWater = "ImpactEffectsWater";
			hitWood = "ImpactWood";
		};
	};
	class SubmunitionCore: Default
	{
		artilleryLock = 1;
		audibleFire = 16;
		cost = 1000;
		deflecting = 5;
		hitOnWater = 1;
		indirectHitRange = 8;
		simulation = "shotSubmunitions";
		simulationStep = 0.05;
		soundFly[] = {"", 0.0316228, 4};
		soundHit[] = {"", 316.228, 1};
		timeToLive = 180;
		visibleFire = 16;
		visibleFireTime = 10;
	};
	class SwarmMissile_01_Ammo_F: MissileBase
	{
		airFriction = 0.065;
		autoSeekTarget = 0;
		CraterEffects = "";
		deleteParentWhenTriggered = 0;
		effectFly = "BulletTrace_02_FX1";
		effectsMissile = "BulletTrace_02_FX1";
		explosionEffects = "";
		initTime = 1.25;
		lockSeekRadius = 200;
		maneuvrability = 32.5;
		maxSpeed = 210;
		missileKeepLockedCone = 10;
		missileLockCone = 10;
		model = "\a3\Weapons_F_Contact\Ammo\TracerBall_03_F.p3d";
		sideAirFriction = 0.3;
		simulationStep = 0.002;
		soundFly[] = {"", 0.1, 1, 1};
		SoundSetExplosion[] = {"Swarm_Shell_Launch_02_Projectile_SoundSet"};
		submunitionAmmo[] = {"SwarmMissile_01_fly_ammo_f", 1};
		submunitionAutoleveling = 0;
		submunitionConeAngle = 345;
		submunitionConeType[] = {"random", 1};
		submunitionDirectionType = "SubmunitionModelDirection";
		submunitionInitSpeed = 100;
		submunitionParentSpeedCoef = 1;
		thrust = 130;
		thrustTime = 2;
		timeToLive = 1.55;
		trackLead = 0.85;
		trackOversteer = 0.2;
		triggerDistance = 1;
		triggerOnImpact = 1;
		triggerSpeedCoef[] = {0.5, 2};
		triggerTime = 1.5;
		typicalSpeed = 175;
		weaponType = "missileAA";
		whistleDist = 4;
		class EventHandlers
		{
			fired = "_this call bin_fnc_missileSwarm";
		};
	};
	class SwarmMissile_01_explode1_ammo_f: GrenadeHand
	{
		CraterEffects = "";
		dangerRadiusHit = 40;
		deflecting = 30;
		explosionEffects = "SwarmMissile_MiniExp";
		explosionEffectsRadius = 1.5;
		explosionTime = 4;
		hit = 1;
		impactArmor[] = {};
		impactBuilding[] = {};
		impactConcrete[] = {};
		impactDefault[] = {};
		impactFoliage[] = {};
		impactGlass[] = {};
		impactGlassArmored[] = {};
		impactGroundHard[] = {};
		impactGroundSoft[] = {};
		impactIron[] = {};
		impactMetal[] = {};
		impactMetalplate[] = {};
		impactPlastic[] = {};
		impactRubber[] = {};
		impactTyre[] = {};
		impactWood[] = {};
		indirectHit = 2;
		indirectHitRange = 2;
		model = "\a3\Weapons_F_Contact\Ammo\SwarmMissile_01_explo_F";
		soundFly[] = {"", 0.1, 1, 1};
		soundSetBulletFly[] = {};
		SoundSetExplosion[] = {"Swarm_Grenade_Explosion_SoundSet", "Swarm_Grenade_Explosion_Tail_SoundSet"};
		suppressionRadiusHit = 18;
		typicalspeed = 26;
		whistleDist = 12;
		class CamShakeExplode
		{
			distance = 56;
			duration = 0.8;
			frequency = 20;
			power = 0.2;
		};
	};
	class SwarmMissile_01_explode2_ammo_f: SwarmMissile_01_explode1_ammo_f
	{
		explosionTime = 3;
	};
	class SwarmMissile_01_explode3_ammo_f: SwarmMissile_01_explode1_ammo_f
	{
		explosionTime = 4.3;
	};
	class SwarmMissile_01_explode4_ammo_f: SwarmMissile_01_explode1_ammo_f
	{
		explosionTime = 2.2;
	};
	class SwarmMissile_01_explode5_ammo_f: SwarmMissile_01_explode1_ammo_f
	{
		explosionTime = 2.5;
	};
	class SwarmMissile_01_explode6_ammo_f: SwarmMissile_01_explode1_ammo_f
	{
		explosionTime = 2.9;
	};
	class SwarmMissile_01_explode7_ammo_f: SwarmMissile_01_explode1_ammo_f
	{
		explosionTime = 3.2;
	};
	class SwarmMissile_01_explode8_ammo_f: SwarmMissile_01_explode1_ammo_f
	{
		explosionTime = 3.6;
	};
	class SwarmMissile_01_fly_ammo_f: Sh_82mm_AMOS_guided
	{
		airFriction = -2e-006;
		coefGravity = 0;
		CraterEffects = "ImpactGravityWeapon_Exp";
		deleteParentWhenTriggered = 0;
		effectFly = "BulletTrace_02_FX1";
		explosionEffects = "ImpactGravityWeapon_Exp";
		explosive = 1;
		model = "\a3\Weapons_F_Contact\Ammo\TracerBall_03_warm_F.p3d";
		simulation = "shotBullet";
		simulationStep = 0.002;
		soundFly[] = {"", 0.1, 1, 1};
		soundSetBulletFly[] = {"Swarm_Grenade_FlyBy_SoundSet"};
		SoundSetExplosion[] = {""};
		submunitionAmmo[] = {"SwarmMissile_01_explode1_ammo_f", 0.125, "SwarmMissile_01_explode2_ammo_f", 0.125, "SwarmMissile_01_explode3_ammo_f", 0.125, "SwarmMissile_01_explode4_ammo_f", 0.125, "SwarmMissile_01_explode5_ammo_f", 0.125, "SwarmMissile_01_explode6_ammo_f", 0.125, "SwarmMissile_01_explode7_ammo_f", 0.125, "SwarmMissile_01_explode8_ammo_f", 0.125};
		submunitionConeAngle[] = {150, 180};
		submunitionConeAngleHorizontal = 720;
		submunitionConeType[] = {"randomupcone", 4};
		submunitionDirectionType = "SubmunitionModelDirection";
		submunitionInitialOffset[] = {0, 0, -2};
		submunitionInitSpeed = 28;
		submunitionParentSpeedCoef = 0;
		triggerDistance = 0;
		triggerOnImpact = 1;
		triggerSpeedCoef[] = {0.5, 1};
	};
	class TimeBombCore: Default
	{
		audibleFire = 0;
		cost = 2000;
		hit = 700;
		indirectHit = 700;
		indirectHitRange = 7;
		mineCanBeReactivated = 1;
		model = "";
		simulation = "shotTimeBomb";
		simulationStep = 0.1;
		soundEngine[] = {"", 0, 1};
		soundFly[] = {"", 0, 1};
		soundHit[] = {"", 100, 1};
		timeToLive = 0;
		triggerWhenDestroyed = 1;
		visibleFire = 0;
		visibleFireTime = 0;
	};
	class TrainingMine_Ammo: APERSMine_Range_Ammo
	{
		CraterEffects = "IEDMineSmallLandCrater";
		defaultMagazine = "TrainingMine_Mag";
		explosionEffects = "TrainingMineEffect";
		hit = 1;
		indirectHit = 0;
		indirectHitRange = 0;
		minDamageForCamShakeHit = 1.55;
		mineCanBeReactivated = 0;
		mineInconspicuousness = 30;
		mineModelDisabled = "\A3\Weapons_F\empty.p3d";
		model = "\A3\Weapons_F_Orange\Explosives\TrainingMine_F";
		soundActivation[] = {"A3\Sounds_F_Orange\arsenal\explosives\TrainingMine\TrainingMine_Placement_01", 1.99526, 1, 20};
		soundDeactivation[] = {"A3\Sounds_F_Orange\arsenal\explosives\TrainingMine\TrainingMine_Deactivate_01", 1.99526, 1, 20};
		SoundSetExplosion[] = {"TrainingMine_Exp_SoundSet", "TrainingMine_Flag_SoundSet"};
		soundTrigger[] = {""};
		suppressionRadiusHit = 0;
		class CamShakeExplode
		{
			distance = 0;
			duration = 0.2;
			frequency = 20;
			power = 0;
		};
		class CamShakeHit
		{
			distance = 1;
			duration = 0.2;
			frequency = 20;
			power = 0;
		};
	};
	class UnderwaterMine_Range_Ammo: MineBase
	{
		aiAmmoUsageFlags = "16 + 32";
		cost = 2000;
		CraterEffects = "";
		defaultMagazine = "";
		explosionEffects = "MineUnderwaterExplosion";
		hit = 3000;
		icon = "iconExplosiveUW";
		indirectHit = 3000;
		indirectHitRange = 10;
		mineFloating = -2;
		mineInconspicuousness = 0.5;
		mineModelDisabled = "\A3\Weapons_F\explosives\mine_naval_d";
		mineTrigger = "UnderwaterRangeTriggerMagnetic";
		model = "\A3\Weapons_F\explosives\mine_naval";
		soundActivation[] = {"A3\Sounds_F_Orange\arsenal\explosives\Handling\NavalMine_Moored_Deactivate_01", 1.99526, 1, 20};
		soundDeactivation[] = {"A3\Sounds_F_Orange\arsenal\explosives\Handling\NavalMine_Moored_Deactivate_01", 1.99526, 1, 20};
		soundHit[] = {"A3\Sounds_F\weapons\mines\underwater_mine_3", 1.77828, 1, 2000};
		SoundSetExplosion[] = {"UnderwaterMine_Exp_SoundSet", "UnderwaterMine_Tail_SoundSet", "Explosion_Debris_SoundSet"};
		soundTrigger[] = {"A3\Sounds_F\weapons\mines\electron_UWtrigger_1", 0.562341, 1, 30};
		ssoundTrigger[] = {"A3\Sounds_F_Orange\arsenal\explosives\Handling\PDM7_Trigger_01", 1.99526, 1, 20};
		whistleDist = 20;
	};
	class UnderwaterMineAB_Range_Ammo: UnderwaterMine_Range_Ammo
	{
		defaultMagazine = "";
		explosionEffects = "MineUnderwaterABExplosion";
		hit = 2000;
		indirectHit = 2000;
		indirectHitRange = 10;
		mineFloating = 1;
		mineInconspicuousness = 1;
		mineModelDisabled = "\A3\Weapons_F\explosives\mine_naval2_d";
		model = "\A3\Weapons_F\explosives\mine_naval2";
		soundActivation[] = {"A3\Sounds_F_Orange\arsenal\explosives\Handling\NavalMine_Bottom_Deactivate_01", 1.99526, 1, 20};
		soundDeactivation[] = {"A3\Sounds_F_Orange\arsenal\explosives\Handling\NavalMine_Bottom_Deactivate_01", 1.99526, 1, 20};
		soundHit[] = {"A3\Sounds_F\weapons\mines\underwater_mine_2", 3.16228, 1, 2000};
		SoundSetExplosion[] = {"UnderwaterMineAB_Exp_SoundSet", "UnderwaterMineAB_Tail_SoundSet", "Explosion_Debris_SoundSet"};
		soundTrigger[] = {"A3\Sounds_F_Orange\arsenal\explosives\Handling\PDM7_Trigger_01", 1.99526, 1, 20};
	};
	class UnderwaterMinePDM_Range_Ammo: UnderwaterMine_Range_Ammo
	{
		defaultMagazine = "";
		explosionEffects = "MineUnderwaterPDMExplosion";
		hit = 500;
		indirectHit = 500;
		indirectHitRange = 5;
		mineFloating = 1;
		mineInconspicuousness = 50;
		mineModelDisabled = "\A3\Weapons_F\explosives\mine_naval3_d";
		mineTrigger = "UnderwaterRangeTriggerMagneticShort";
		model = "\A3\Weapons_F\explosives\mine_naval3";
		soundActivation[] = {"A3\Sounds_F_Orange\arsenal\explosives\Handling\PDM7_Deactivate_01", 1.99526, 1, 20};
		soundDeactivation[] = {"A3\Sounds_F_Orange\arsenal\explosives\Handling\PDM7_Deactivate_01", 1.99526, 1, 20};
		soundHit[] = {"A3\Sounds_F\weapons\mines\underwater_mine_1", 10, 1, 2000};
		SoundSetExplosion[] = {"UnderwaterMinePDM_Exp_SoundSet", "UnderwaterMinePDM_Tail_SoundSet", "Explosion_Debris_SoundSet"};
		soundTrigger[] = {"A3\Sounds_F_Orange\arsenal\explosives\Handling\PDM7_Trigger_01", 1.99526, 1, 20};
		whistleDist = 10;
	};
	class UWMine_155mm_AMOS_range: Mine_155mm_AMOS_range
	{
		airFriction = 0;
		submunitionAmmo = "Mo_UnderwaterMineRange";
	};
	class UXO1_Ammo_Base_F: APERSMine_Range_Ammo
	{
		CraterEffects = "ClusterCraterEffects";
		defaultMagazine = "";
		ExplosionEffects = "ClusterExplosionEffects";
		explosionType = "explosive";
		hit = 7;
		icon = "iconExplosiveUXO";
		indirectHit = 7;
		indirectHitRange = 1;
		mineCanBeReactivated = 0;
		mineInconspicuousness = 40;
		mineModelDisabled = "\A3\Weapons_F\empty.p3d";
		mineTrigger = "UXOTrigger1";
		model = "\A3\Weapons_F_Orange\Explosives\BombCluster_01_UXO1_F";
		soundActivation[] = {};
		soundDeactivation[] = {"A3\Sounds_F_Orange\arsenal\explosives\clusterbomb\Uxo_Deactivate_01", 1.99526, 1, 20};
		SoundSetExplosion[] = {"UXO_Exp_SoundSet", "UXO_Tail_SoundSet", "UXO_Debris_SoundSet", "UXO_Debris_Dust_Cloud_SoundSet"};
		soundTrigger[] = {"", 1, 1, 15};
		submunitionYRandomizationAngle = 60;
	};
	class UXO2_Ammo_Base_F: UXO1_Ammo_Base_F
	{
		hit = 7;
		indirectHit = 7;
		indirectHitRange = 3;
		mineTrigger = "UXOTrigger2";
		model = "\A3\Weapons_F_Orange\Explosives\BombCluster_01_UXO2_F";
		soundDeactivation[] = {"A3\Sounds_F_Orange\arsenal\explosives\clusterbomb\Uxo_Deactivate_01", 1.99526, 1, 20};
		soundTrigger[] = {"", 1, 1, 15};
	};
	class UXO3_Ammo_Base_F: UXO1_Ammo_Base_F
	{
		hit = 35;
		indirectHit = 25;
		indirectHitRange = 8;
		mineTrigger = "UXOTrigger3";
		model = "\A3\Weapons_F_Orange\Explosives\BombCluster_01_UXO3_F";
		soundDeactivation[] = {"A3\Sounds_F_Orange\arsenal\explosives\clusterbomb\Uxo_Deactivate_02", 1.99526, 1, 20};
		soundTrigger[] = {"", 1, 1, 15};
	};
	class UXO4_Ammo_Base_F: UXO1_Ammo_Base_F
	{
		hit = 35;
		indirectHit = 25;
		indirectHitRange = 8;
		mineTrigger = "UXOTrigger4";
		model = "\A3\Weapons_F_Orange\Explosives\BombCluster_01_UXO4_F";
		soundDeactivation[] = {"A3\Sounds_F_Orange\arsenal\explosives\clusterbomb\Uxo_Deactivate_03", 1.99526, 1, 20};
		soundTrigger[] = {"", 1, 1, 15};
	};
	class UXO_deploy_base_f: SubmunitionBase
	{
		CraterEffects = "ClusterCraterEffects";
		CraterWaterEffects = "ClusterCraterWaterEffects";
		EffectFly = "ClusterEffectFly";
		ExplosionEffects = "ClusterExplosionEffects";
		hit = 35;
		indirectHit = 25;
		indirectHitRange = 8;
		soundFly[] = {"A3\Sounds_F_Orange\arsenal\explosives\clusterbomb\Cluster_Trajectory", 1, 1, 50};
		SoundSetExplosion[] = {"ClusterBomb_Exp_SoundSet", "ClusterBomb_Debris_SoundSet"};
		submunitionConeAngle = 0;
		submunitionConeType[] = {"randomcenter", 1};
		triggerDistance = 1000;
		triggerSpeedCoef = 0.25;
	};
	class UXO_deploy_BombCluster_base_F: UXO_deploy_base_f
	{
		triggerSpeedCoef = 0.75;
	};
	class UXO_deployMine_base_F: ShotDeployBase
	{
		airFriction = 0;
		EffectFly = "ClusterEffectFly";
		hit = 300;
	};
};
