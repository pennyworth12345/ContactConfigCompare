class CfgNonAIVehicles
{
	access = 0;
	class Beetle: Insect
	{
		acceleration = 5;
		avgHeight = 0.8;
		flySound[] = {"\A3\sounds_f\dummysound", 0.000562341, 1, 1};
		fsm[] = {"Butterfly"};
		maxHeight = 4;
		maxSpeed = 3;
		minHeight = -0.1;
		minSpeed = -0.1;
		model = "\A3\Animals_f\beetle.p3d";
		straightDistance = 10;
	};
	class Bird
	{
		acceleration = 7;
		airFriction0[] = {40, 20, 60};
		airFriction1[] = {1500, 700, 100};
		airFriction2[] = {25, 12, 2.5};
		animated = 0;
		avgHeight = 10;
		canBeShot = 1;
		flySound[] = {"", 0.0316228, 1, 1};
		maxHeight = 50;
		maxSpeed = 20;
		minHeight = 5;
		minSpeed = -0.5;
		model = "";
		reversed = 0;
		scope = 0;
		simulation = "SeaGull";
		singSound[] = {"", 0.0316228, 1, 1};
		straightDistance = 50;
		turning = 1;
	};
	class Bridge_base_F
	{
		armor = 500;
		cost = 30000;
		destrType = "DestructNo";
		displayName = "Bridge";
		model = "\A3\Weapons_F\empty.p3d";
		scope = 0;
		scopeCurator = 0;
		simulation = "road";
		class Destruction
		{
			animations[] = {};
		};
	};
	class ButterFly_random: Insect
	{
		acceleration = 5;
		autocenter = 0;
		avgHeight = 0.3;
		fsm[] = {"Butterfly"};
		maxHeight = 1.5;
		maxSpeed = 1;
		minHeight = -0.1;
		minSpeed = -0.1;
		model = "\A3\animals_f\butterfly.p3d";
		moves = "CfgMovesButterfly";
		reversed = 0;
		straightDistance = 2;
		turning = 5;
		class EventHandlers
		{
			init = "(_this select 0) call bis_fnc_animalRandomization;";
		};
	};
	class CamConstruct
	{
		crossHairs = "#(argb,8,8,3)color(1,1,1,1)";
		maxHAL = 30;
		model = "";
		radius = 125;
		scope = 2;
		simulation = "CamConstruct";
	};
	class CamCurator
	{
		crossHairs = "#(argb,8,8,3)color(1,1,1,1)";
		maxHAL = 30;
		model = "";
		radius = 125;
		scope = 2;
		simulation = "CamCurator";
	};
	class Camera
	{
		crossHairs = "\A3\ui_f\data\igui\cfg\nonaivehicles\camera_ca.paa";
		model = "";
		scope = 2;
		simulation = "Camera";
	};
	class Cicada: Insect
	{
		acceleration = 5;
		avgHeight = 0.3;
		flySound[] = {"\A3\sounds_f\dummysound", 0.000562341, 1, 1};
		fsm[] = {"Butterfly"};
		maxHeight = 1.5;
		maxSpeed = 1;
		minHeight = -0.1;
		minSpeed = -0.1;
		model = "\A3\Animals_f\Cicada.p3d";
		straightDistance = 10;
	};
	class Crowe: SeaGull
	{
		model = "\A3\Animals_F\Seagull\Crowe.p3d";
		singSound[] = {"A3\Animals_F\Seagull\Data\crowe", 0.891251, 1, 200};
	};
	class DragonFly: Insect
	{
		flySound[] = {"\A3\sounds_f\dummysound", 0.000562341, 1, 1};
		fsm[] = {"Dragonfly"};
		maxSpeed = 5;
		model = "\A3\Animals_f\dragonfly.p3d";
		straightDistance = 10;
	};
	class Eagle_F: Bird
	{
		acceleration = 5;
		avgHeight = 70;
		canBeShot = 0;
		maxHeight = 80;
		maxSpeed = 25;
		minHeight = 60;
		minSPeed = 5;
		model = "\a3\Data_F_Curator\Eagle\eagle.p3d";
		singSound[] = {"A3\data_f_curator\sound\cfgNonAiVehicles\eagle_f_3", 1, 1, 300};
		turning = 0.5;
	};
	class EditCursor
	{
		model = "\core\cursor\cursor.p3d";
		simulation = "EditCursor";
	};
	class Editor_Proxy_Composition
	{
		animated = 0;
		autocenter = 0;
		displayName = "Editor proxy - Object composition";
		model = "\A3\editor_f\data\composition_proxy\composition_proxy";
		reversed = 0;
		scope = 1;
		selectionFabric = "";
		simulation = "flag";
	};
	class EmptyDetector
	{
		displayName = "Trigger";
		icon = "\a3\Ui_f\data\IGUI\Cfg\IslandMap\iconSensor_ca.paa";
		model = "";
		scope = 2;
		selectionFabric = "latka";
		simulation = "detector";
		class AttributeValues
		{
			size2[] = {0, 0};
			size3[] = {0, 0, -1};
		};
	};
	class EmptyDetectorArea10x10: EmptyDetector
	{
		displayName = "Trigger (10x10x10 m)";
		class AttributeValues
		{
			IsRectangle = 1;
			size2[] = {5, 5};
			size3[] = {5, 5, 5};
		};
	};
	class EmptyDetectorAreaR250: EmptyDetector
	{
		displayName = "Trigger (Ø 500 m)";
		class AttributeValues
		{
			size2[] = {250, 250};
			size3[] = {250, 250, -1};
		};
	};
	class EmptyDetectorAreaR50: EmptyDetector
	{
		displayName = "Trigger (Ø 100 m)";
		class AttributeValues
		{
			size2[] = {50, 50};
			size3[] = {50, 50, -1};
		};
	};
	class FireFly: Insect
	{
		acceleration = 5;
		avgHeight = 0.3;
		flySound[] = {"\A3\sounds_f\dummysound", 0.000562341, 1, 1};
		fsm[] = {"Butterfly"};
		maxHeight = 1.5;
		maxSpeed = 1;
		minHeight = -0.1;
		minSpeed = -0.1;
		model = "\A3\Animals_f\firefly.p3d";
		straightDistance = 10;
	};
	class HoneyBee: Insect
	{
		avgHeight = 0.2;
		flySound[] = {"\A3\sounds_f\dummysound", 0.001, 1, 1};
		fsm[] = {"HoneyBee"};
		maxHeight = 1;
		maxSpeed = 0.2;
		minHeight = -0.1;
		minSpeed = -0.1;
		model = "\A3\animals_f\honeybee.p3d";
		reversed = 0;
		straightDistance = 0.5;
	};
	class HouseFly: Insect
	{
		avgHeight = 1.4;
		flySound[] = {"\A3\sounds_f\dummysound", 0.001, 1, 1};
		maxHeight = 2;
		maxSpeed = 5;
		minHeight = -0.1;
		minSpeed = -0.1;
		model = "\A3\animals_f\fly.p3d";
		straightDistance = 0.5;
	};
	class Insect: Bird
	{
		acceleration = 25;
		airFriction0[] = {200, 20, 60};
		airFriction1[] = {7500, 700, 100};
		airFriction2[] = {125, 12, 2.5};
		animated = 0;
		avgHeight = 1.2;
		canBeShot = 0;
		flySound[] = {"", 0.0316228, 1, 1};
		maxHeight = 2;
		maxSpeed = 5;
		minHeight = -0.1;
		minSpeed = -0.1;
		singSound[] = {"", 0.0316228, 1, 1};
		straightDistance = 2;
		turning = 2;
	};
	class Kestrel_Random_F: Bird
	{
		avgHeight = 70;
		maxHeight = 80;
		minHeight = 60;
		model = "\A3\Animals_F\kestrel\kestrel_F.p3d";
		moves = "CfgMovesBird";
		singSound[] = {"A3\sounds_f\dummysound", 0.00177828, 1, 1};
	};
	class LadyBug: Insect
	{
		avgHeight = 0.5;
		flySound[] = {"\A3\sounds_f\dummysound", 0.001, 1, 1};
		maxHeight = 2.5;
		maxSpeed = 6;
		minHeight = -0.1;
		minSpeed = -0.05;
		model = "\A3\animals_f\ladybug.p3d";
		straightDistance = 0.5;
	};
	class Land_Bridge_01_F: Bridge_base_F
	{
		displayName = "Bridge";
		model = "\A3\Structures_F\Bridges\Bridge_01_F.p3d";
		scope = 1;
		scopeCurator = 0;
	};
	class Land_Bridge_Asphalt_02_center_F: Bridge_base_F
	{
		displayName = "Bridge_Asphalt_02_center_F";
		model = "\A3\Structures_F_Enoch\Infrastructure\Bridges\Bridge_Asphalt_02_center_F.p3d";
		scope = 1;
		scopeCurator = 0;
	};
	class Land_Bridge_Asphalt_02_left_F: Bridge_base_F
	{
		displayName = "Bridge_Asphalt_02_left_F";
		model = "\A3\Structures_F_Enoch\Infrastructure\Bridges\Bridge_Asphalt_02_left_F.p3d";
		scope = 1;
		scopeCurator = 0;
	};
	class Land_Bridge_Asphalt_02_right_F: Bridge_base_F
	{
		displayName = "Bridge_Asphalt_02_right_F";
		model = "\A3\Structures_F_Enoch\Infrastructure\Bridges\Bridge_Asphalt_02_right_F.p3d";
		scope = 1;
		scopeCurator = 0;
	};
	class Land_Bridge_Asphalt_F: Bridge_base_F
	{
		displayName = "Bridge";
		model = "\A3\Structures_F\Bridges\Bridge_Asphalt_F.p3d";
		scope = 1;
		scopeCurator = 0;
	};
	class Land_Bridge_Concrete_02_center_F: Bridge_base_F
	{
		displayName = "Bridge_Concrete_02_center_F";
		model = "\A3\Structures_F_Enoch\Infrastructure\Bridges\Bridge_Concrete_02_center_F.p3d";
		scope = 1;
		scopeCurator = 0;
	};
	class Land_Bridge_Concrete_02_left_F: Bridge_base_F
	{
		displayName = "Bridge_Concrete_02_left_F";
		model = "\A3\Structures_F_Enoch\Infrastructure\Bridges\Bridge_Concrete_02_left_F.p3d";
		scope = 1;
		scopeCurator = 0;
	};
	class Land_Bridge_Concrete_02_right_F: Bridge_base_F
	{
		displayName = "Bridge_Concrete_02_right_F";
		model = "\A3\Structures_F_Enoch\Infrastructure\Bridges\Bridge_Concrete_02_right_F.p3d";
		scope = 1;
		scopeCurator = 0;
	};
	class Land_Bridge_Concrete_F: Bridge_base_F
	{
		displayName = "Bridge";
		model = "\A3\Structures_F\Bridges\Bridge_Concrete_F.p3d";
		scope = 1;
		scopeCurator = 0;
	};
	class Land_Bridge_HighWay_F: Bridge_base_F
	{
		displayName = "Bridge";
		model = "\A3\Structures_F\Bridges\Bridge_HighWay_F.p3d";
		scope = 1;
		scopeCurator = 0;
	};
	class Land_Bridge_Metal_01_25m_F: Bridge_base_F
	{
		displayName = "Bridge_Metal_01_25m_F";
		model = "\A3\Structures_F_Enoch\Infrastructure\Bridges\Bridge_Metal_01_25m_F.p3d";
		scope = 1;
		scopeCurator = 0;
	};
	class Land_BridgeConcrete_01_F: Bridge_base_F
	{
		displayName = "BridgeConcrete_01";
		model = "\A3\Structures_F_Exp\Infrastructure\Bridges\BridgeConcrete_01_F.p3d";
		scope = 1;
		scopeCurator = 0;
	};
	class Land_BridgeSea_01_F: Bridge_base_F
	{
		displayName = "BridgeSea_01";
		model = "\A3\Structures_F_Exp\Infrastructure\Bridges\BridgeSea_01_F.p3d";
		scope = 1;
		scopeCurator = 0;
	};
	class Land_BridgeSea_01_ramp_down_F: Bridge_base_F
	{
		displayName = "BridgeSea_01_ramp_down";
		model = "\A3\Structures_F_Exp\Infrastructure\Bridges\BridgeSea_01_ramp_down_F.p3d";
		scope = 1;
		scopeCurator = 0;
	};
	class Land_BridgeSea_01_ramp_F: Bridge_base_F
	{
		displayName = "BridgeSea_01_ramp";
		model = "\A3\Structures_F_Exp\Infrastructure\Bridges\BridgeSea_01_ramp_F.p3d";
		scope = 1;
		scopeCurator = 0;
	};
	class Land_BridgeSea_01_ramp_up_F: Bridge_base_F
	{
		displayName = "BridgeSea_01_ramp_up";
		model = "\A3\Structures_F_Exp\Infrastructure\Bridges\BridgeSea_01_ramp_up_F.p3d";
		scope = 1;
		scopeCurator = 0;
	};
	class Land_BridgeWooden_01_F: Bridge_base_F
	{
		displayName = "BridgeWooden_01";
		model = "\A3\Structures_F_Exp\Infrastructure\Bridges\BridgeWooden_01_F.p3d";
		scope = 1;
		scopeCurator = 0;
	};
	class Land_Pier_doubleside_F: Bridge_base_F
	{
		displayName = "Pier (Concrete)";
		editorSubcategory = "EdSubcat_Seaports";
		icon = "iconObject_3x1";
		model = "\A3\Structures_F\Naval\Piers\Pier_doubleside_F.p3d";
		scope = 2;
		scopeCurator = 2;
	};
	class Mosquito: Insect
	{
		avgHeight = 1;
		flySound[] = {"\A3\sounds_f\dummysound", 0.00141254, 1, 1};
		maxHeight = 2;
		maxSpeed = 2;
		minHeight = -0.1;
		minSpeed = -0.05;
		model = "\A3\animals_f\mosquito.p3d";
		straightDistance = 0.4;
	};
	class Moth: Insect
	{
		acceleration = 5;
		avgHeight = 3;
		flySound[] = {"\A3\sounds_f\dummysound", 0.000562341, 1, 1};
		fsm[] = {"Butterfly"};
		maxHeight = 6;
		maxSpeed = 1;
		minHeight = 1.5;
		minSpeed = -0.1;
		model = "\A3\Animals_f\moth.p3d";
		straightDistance = 4;
	};
	class ObjView
	{
		model = "";
		scope = 2;
		simulation = "ObjView";
	};
	class ProxyAFV_Wheeled_01_wreck_F: ProxyRetex
	{
		hiddenSelections[] = {"camo1", "camo2", "camo3", "CamoNet", "CamoSlat"};
		model = "\A3\Armor_F_Tank\AFV_Wheeled_01\AFV_Wheeled_01_wreck_F.p3d";
	};
	class ProxyAmmoInTruck
	{
		animated = 0;
		autocenter = 0;
		model = "";
		reversed = 0;
		scope = 2;
		shadow = 1;
		simulation = "alwaysshow";
	};
	class proxyAPC_Tracked_02_aa_wreck_F: ProxyRetex
	{
		hiddenSelections[] = {"Camo1", "Camo2", "Camo3"};
		model = "\A3\Armor_F_Beta\APC_Tracked_02\APC_Tracked_02_aa_wreck_F.p3d";
	};
	class proxyAPC_Tracked_02_cannon_wreck_F: ProxyRetex
	{
		hiddenSelections[] = {"Camo1", "Camo2", "Camo3"};
		model = "\A3\Armor_F_Beta\APC_Tracked_02\APC_Tracked_02_cannon_wreck_F.p3d";
	};
	class ProxyAPC_tracked_03_wreck_F: ProxyRetex
	{
		hiddenSelections[] = {"Camo1", "Camo2", "CamoNet", "CamoSlat"};
		model = "a3\Armor_F_EPB\APC_Tracked_03\APC_tracked_03_wreck_F.p3d";
	};
	class ProxyBackpack: Proxyus_bag
	{
		animated = 1;
		autocenter = 0;
		model = "\A3\Characters_F\Proxies\backpack";
		reversed = 1;
		scope = 2;
	};
	class ProxyBasicMotoDriver: ProxyDriver {};
	class ProxyBasicSittingCargo: ProxyCargo {};
	class ProxyBasicSittingCommander: ProxyCommander {};
	class ProxyBasicSittingDriver: ProxyDriver {};
	class ProxyBasicSittingGunner: ProxyGunner {};
	class ProxyBasicStandingCargo: ProxyCargo {};
	class ProxyBasicStandingCommander: ProxyCommander {};
	class ProxyBasicStandingDriver: ProxyDriver {};
	class ProxyBasicStandingGunner: ProxyGunner {};
	class ProxyBinoculars: ProxyLeftHand {};
	class ProxyBomb_01_F: ProxyWeapon
	{
		model = "\A3\Weapons_F\Ammo\Bomb_01_F";
		simulation = "maverickweapon";
	};
	class ProxyBomb_02_F: ProxyWeapon
	{
		model = "\A3\Weapons_F\Ammo\Bomb_02_F";
		simulation = "maverickweapon";
	};
	class ProxyBomb_03_F: ProxyWeapon
	{
		model = "\A3\Weapons_F_EPC\Ammo\Bomb_03_F.p3d";
		simulation = "maverickweapon";
	};
	class ProxyBomb_04_F: ProxyWeapon
	{
		model = "\A3\Weapons_F_EPC\Ammo\Bomb_04_F.p3d";
		simulation = "maverickweapon";
	};
	class ProxyBomb_05_F: ProxyWeapon
	{
		model = "\A3\Weapons_F_Sams\Ammo\Bomb_05_F";
		simulation = "maverickweapon";
	};
	class ProxyBomb_05_F_fly: ProxyWeapon
	{
		model = "\A3\Weapons_F_Sams\Ammo\Bomb_05_F_fly";
		simulation = "maverickweapon";
	};
	class ProxyBomb_06_F: ProxyWeapon
	{
		model = "\A3\Weapons_F_Sams\Ammo\Bomb_06_F";
		simulation = "maverickweapon";
	};
	class ProxyBomb_06_F_fly: ProxyWeapon
	{
		model = "\A3\Weapons_F_Sams\Ammo\Bomb_06_F_fly";
		simulation = "maverickweapon";
	};
	class ProxyBombDemine_01_F: ProxyWeapon
	{
		model = "\A3\Weapons_F_Orange\Ammo\BombDemine_01_F";
		simulation = "maverickweapon";
	};
	class ProxyBysta
	{
		animated = 1;
		autocenter = 0;
		model = "";
		reversed = 1;
		scope = 2;
		simulation = "ProxySubpart";
	};
	class ProxyCargo: ProxyCrew
	{
		crewPosition = "CPCargo";
	};
	class ProxyCargo01: ProxyCargo {};
	class ProxyCargo02: ProxyCargo {};
	class ProxyCargo03: ProxyCargo {};
	class ProxyCargo04: ProxyCargo {};
	class ProxyCargoStanding: ProxyCargo {};
	class ProxyCommander: ProxyCrew
	{
		crewPosition = "CPCommander";
	};
	class ProxyCommanderOut: ProxyCommander {};
	class ProxyCrew
	{
		autocenter = 0;
		crewPosition = "CPDriver";
		model = "";
		scope = 1;
		shadow = 1;
		simulation = "proxycrew";
	};
	class ProxyDalekohled_Proxy: ProxyLeftHand {};
	class ProxyDriver: ProxyCrew
	{
		crewPosition = "CPDriver";
	};
	class ProxyDriverOut: ProxyDriver {};
	class ProxyEarPhones
	{
		animated = 0;
		autocenter = 0;
		inventoryType = "EarPhones";
		model = "";
		scope = 2;
		shadow = 1;
		simulation = "ProxyInventoryOld";
	};
	class ProxyEquipment
	{
		animated = 1;
		autocenter = 0;
		inventoryType = "Vest";
		model = "\A3\characters_f\ProxyModels\equipmentVest";
		reversed = 1;
		scope = 2;
		shadow = 1;
		simulation = "ProxyInventoryOld";
	};
	class ProxyFlag
	{
		autocenter = 0;
		model = "\A3\Characters_F\Proxies\flag";
		reversed = 0;
		scope = 2;
		selectionFabric = "cloth";
		shadow = 1;
		simulation = "flag";
	};
	class ProxyFlag_Alone: ProxyFlag
	{
		model = "\A3\data_f\proxies\Flags\flag_alone";
	};
	class ProxyFlag_Asym_F: ProxyFlag_F
	{
		model = "\a3\Structures_F\Mil\Flags\Flag_Asym_F.p3d";
	};
	class ProxyFlag_Auto: ProxyFlag
	{
		model = "\A3\data_f\proxies\Flags\flag_auto";
	};
	class ProxyFlag_F
	{
		autocenter = 0;
		model = "\a3\Structures_F\Mil\Flags\Flag_F.p3d";
		reversed = 0;
		scope = 1;
		selectionFabric = "latka";
		simulation = "flag";
	};
	class ProxyFLAG_MiniUGV: ProxyFlag
	{
		model = "\A3\data_f_enoch\proxies\Flags\FLAG_MiniUGV";
	};
	class ProxyFlag_soldier: ProxyFlag
	{
		model = "\A3\characters_f\flag_soldier";
		selectionFabric = "cloth";
	};
	class ProxyFlag_Vojak: ProxyFlag
	{
		model = "\A3\characters_f\flag_soldier";
		selectionFabric = "cloth";
	};
	class ProxyFlagChecked_proxy_F
	{
		autocenter = 0;
		model = "\A3\Signs_F\SignSpecial\FlagChecked_proxy_F.p3d";
		reversed = 0;
		scope = 1;
		selectionFabric = "latka";
		simulation = "flag";
	};
	class ProxyGlasses: ProxyGoggles
	{
		model = "\A3\Characters_F\Proxies\glasses";
		simulation = "ProxyInventoryOld";
	};
	class ProxyGoggles
	{
		animated = 0;
		autocenter = 0;
		inventoryType = "Goggles";
		model = "";
		scope = 2;
		shadow = 1;
		simulation = "ProxyInventoryOld";
	};
	class ProxyGunner: ProxyCrew
	{
		crewPosition = "CPGunner";
	};
	class ProxyGunner01: ProxyGunner {};
	class ProxyGunner02: ProxyGunner {};
	class ProxyGunnerOut: ProxyGunner {};
	class ProxyHeadgear
	{
		animated = 1;
		autocenter = 0;
		inventoryType = "Headgear";
		model = "";
		reversed = 1;
		scope = 2;
		shadow = 1;
		simulation = "ProxyInventoryOld";
	};
	class ProxyHeadGear_proxy: ProxyWeapon
	{
		simulation = "proxyheadgear";
	};
	class ProxyHide
	{
		animated = 0;
		autocenter = 0;
		model = "";
		scope = 2;
		simulation = "alwayshide";
	};
	class ProxyHMD
	{
		animated = 1;
		autocenter = 0;
		inventoryType = "HMD";
		model = "";
		reversed = 1;
		scope = 2;
		shadow = 1;
		simulation = "ProxyInventoryOld";
	};
	class ProxyLauncher
	{
		animated = 0;
		autocenter = 0;
		model = "";
		scope = 2;
		shadow = 1;
		simulation = "ProxySecWeapon";
	};
	class ProxyLeftHand
	{
		animated = 0;
		autocenter = 0;
		inventoryType = "LeftHand";
		model = "";
		scope = 2;
		shadow = 1;
		simulation = "ProxyInventoryOld";
	};
	class ProxyLT_01_AA_wreck_F: ProxyRetex
	{
		hiddenSelections[] = {"camo1", "camo2", "CamoNet", "CamoSlat"};
		model = "\A3\Armor_F_Tank\LT_01\LT_01_AA_wreck_F.p3d";
	};
	class ProxyLT_01_cannon_wreck_F: ProxyLT_01_AA_wreck_F
	{
		model = "\A3\Armor_F_Tank\LT_01\LT_01_cannon_wreck_F.p3d";
	};
	class ProxyLT_01_scout_wreck_F: ProxyLT_01_AA_wreck_F
	{
		model = "\A3\Armor_F_Tank\LT_01\LT_01_scout_wreck_F.p3d";
	};
	class ProxyM16A2: ProxyWeapon {};
	class ProxyMagazineSlot: ProxyWeapon
	{
		model = "";
		simulation = "magazine";
	};
	class proxyMBT_02_wreck_F: ProxyRetex
	{
		hiddenSelections[] = {"camo1"};
		model = "\A3\Armor_F_Gamma\MBT_02\MBT_02_wreck_F.p3d";
	};
	class ProxyMBT_04_wreck_F: ProxyRetex
	{
		hiddenSelections[] = {"Camo1", "Camo2", "CamoNet"};
		model = "\A3\Armor_F_Tank\MBT_04\MBT_04_wreck_F.p3d";
	};
	class ProxyMissile_AA_01_F: ProxyWeapon
	{
		model = "\A3\Weapons_F\Ammo\Missile_AA_01_F";
		simulation = "maverickweapon";
	};
	class ProxyMissile_AA_02_F: ProxyWeapon
	{
		model = "\A3\Weapons_F\Ammo\Missile_AA_02_F";
		simulation = "maverickweapon";
	};
	class ProxyMissile_AA_03_F: ProxyWeapon
	{
		model = "\A3\Weapons_F_EPC\Ammo\Missile_AA_03_F.p3d";
		simulation = "maverickweapon";
	};
	class ProxyMissile_AA_04_F: ProxyWeapon
	{
		model = "\A3\Weapons_F_EPC\Ammo\Missile_AA_04_F.p3d";
		simulation = "maverickweapon";
	};
	class ProxyMissile_AA_05_F: ProxyWeapon
	{
		model = "\A3\Weapons_F_Jets\Ammo\Missile_AA_05_F";
		simulation = "maverickweapon";
	};
	class ProxyMissile_AA_05_fly_F: ProxyWeapon
	{
		model = "\A3\Weapons_F_Jets\Ammo\Missile_AA_05_fly_F";
		simulation = "maverickweapon";
	};
	class ProxyMissile_AA_06_F: ProxyWeapon
	{
		model = "\A3\Weapons_F_Jets\Ammo\Missile_AA_06_F";
		simulation = "maverickweapon";
	};
	class ProxyMissile_AA_06_fly_F: ProxyWeapon
	{
		model = "\A3\Weapons_F_Jets\Ammo\Missile_AA_06_fly_F";
		simulation = "maverickweapon";
	};
	class ProxyMissile_AA_07_F: ProxyWeapon
	{
		model = "\A3\Weapons_F_Jets\Ammo\Missile_AA_07_F";
		simulation = "maverickweapon";
	};
	class ProxyMissile_AA_07_fly_F: ProxyWeapon
	{
		model = "\A3\Weapons_F_Jets\Ammo\Missile_AA_07_fly_F";
		simulation = "maverickweapon";
	};
	class ProxyMissile_AA_08_F: ProxyWeapon
	{
		model = "\A3\Weapons_F_Jets\Ammo\Missile_AA_08_F";
		simulation = "maverickweapon";
	};
	class ProxyMissile_AA_08_fly_F: ProxyWeapon
	{
		model = "\A3\Weapons_F_Jets\Ammo\Missile_AA_08_fly_F";
		simulation = "maverickweapon";
	};
	class ProxyMissile_AA_09_F: ProxyWeapon
	{
		model = "\A3\Weapons_F_Jets\Ammo\Missile_AA_09_F";
		simulation = "maverickweapon";
	};
	class ProxyMissile_AA_09_fly_F: ProxyWeapon
	{
		model = "\A3\Weapons_F_Jets\Ammo\Missile_AA_09_fly_F";
		simulation = "maverickweapon";
	};
	class ProxyMissile_AA_10_F: ProxyWeapon
	{
		model = "\A3\Weapons_F_Jets\Ammo\Missile_AA_10_F";
		simulation = "maverickweapon";
	};
	class ProxyMissile_AA_10_fly_F: ProxyWeapon
	{
		model = "\A3\Weapons_F_Jets\Ammo\Missile_AA_10_fly_F";
		simulation = "maverickweapon";
	};
	class ProxyMissile_AGM_01_F: ProxyWeapon
	{
		model = "\A3\Weapons_F_EPC\Ammo\Missile_AGM_01_F.p3d";
		simulation = "maverickweapon";
	};
	class ProxyMissile_AGM_02_F: ProxyWeapon
	{
		model = "\A3\Weapons_F_EPC\Ammo\Missile_AGM_02_F.p3d";
		simulation = "maverickweapon";
	};
	class ProxyMissile_AR_01_F: ProxyWeapon
	{
		model = "\A3\Weapons_F_Sams\Ammo\Missile_AR_01_F";
		simulation = "maverickweapon";
	};
	class ProxyMissile_AR_01_F_fly: ProxyWeapon
	{
		model = "\A3\Weapons_F_Sams\Ammo\Missile_AR_01_F_fly";
		simulation = "maverickweapon";
	};
	class ProxyMissile_AR_02_F: ProxyWeapon
	{
		model = "\A3\Weapons_F_Sams\Ammo\Missile_AR_02_F";
		simulation = "maverickweapon";
	};
	class ProxyMissile_AR_02_F_fly: ProxyWeapon
	{
		model = "\A3\Weapons_F_Sams\Ammo\Missile_AR_02_F_fly";
		simulation = "maverickweapon";
	};
	class ProxyMissile_AT_01_F: ProxyWeapon
	{
		model = "\A3\Weapons_F\Ammo\Missile_AT_01_F";
		simulation = "maverickweapon";
	};
	class ProxyMissile_AT_02_F: ProxyWeapon
	{
		model = "\A3\Weapons_F\Ammo\Missile_AT_02_F";
		simulation = "maverickweapon";
	};
	class ProxyMissile_AT_03_F: ProxyWeapon
	{
		model = "\A3\Weapons_F\Ammo\Missile_AT_03_F";
		simulation = "maverickweapon";
	};
	class ProxyMissile_AT_04_F: ProxyWeapon
	{
		model = "\A3\Weapons_F_Exp\Ammo\Missile_AT_04_F.p3d";
		simulation = "maverickweapon";
	};
	class ProxyMissile_AT_04_fly_F: ProxyWeapon
	{
		model = "\A3\Weapons_F_Exp\Ammo\Missile_AT_04_fly_F.p3d";
		simulation = "maverickweapon";
	};
	class ProxyMissile_Cruise_01_F: ProxyWeapon
	{
		model = "\A3\Weapons_F_Destroyer\Ammo\Missile_Cruise_01_F";
		simulation = "maverickweapon";
	};
	class ProxyMissile_Cruise_01_Fly_F: ProxyWeapon
	{
		model = "\A3\Weapons_F_Destroyer\Ammo\Missile_Cruise_01_Fly_F";
		simulation = "maverickweapon";
	};
	class ProxyMissile_SAM_01_fly_F: ProxyWeapon
	{
		model = "\A3\Weapons_F_Jets\Ammo\Missile_SAM_01_fly_F";
		simulation = "maverickweapon";
	};
	class ProxyMissile_SAM_02_fly_F: ProxyWeapon
	{
		model = "\A3\Weapons_F_Jets\Ammo\Missile_SAM_02_fly_F";
		simulation = "maverickweapon";
	};
	class ProxyMissile_SAM_03_fly_F: ProxyWeapon
	{
		model = "\A3\Weapons_F_Sams\Ammo\Missile_SAM_03_fly_F";
		simulation = "maverickweapon";
	};
	class ProxyMissile_SAM_04_fly_F: ProxyWeapon
	{
		model = "\A3\Weapons_F_Sams\Ammo\Missile_SAM_04_fly_F";
		simulation = "maverickweapon";
	};
	class ProxyNVG: ProxyGoggles
	{
		model = "\A3\Weapons_f\binocular\NVG_Proxy";
		scope = 2;
	};
	class ProxyNVG_Head: ProxyGoggles
	{
		model = "\A3\Weapons_f\binocular\NVG_Head";
	};
	class ProxyNVG_Head_Big: ProxyGoggles
	{
		model = "\A3\Weapons_f\binocular\NVG_Head_Big";
	};
	class ProxyNVG_Head_C: ProxyGoggles
	{
		model = "\A3\Weapons_f\binocular\NVG_Head_C";
	};
	class ProxyNVG_Head_R: ProxyGoggles
	{
		model = "\A3\Weapons_f\binocular\NVG_Head_R";
	};
	class ProxyNVG_Head_S: ProxyGoggles
	{
		model = "\A3\Weapons_f\binocular\NVG_Head_S";
	};
	class ProxyNVG_Proxy: ProxyGoggles
	{
		model = "\A3\Weapons_f\binocular\NVG_Proxy";
		scope = 2;
	};
	class ProxyParasutista: ProxyDriver {};
	class ProxyPilot: ProxyDriver {};
	class ProxyPistol
	{
		animated = 0;
		autocenter = 0;
		inventoryType = "Handgun";
		model = "";
		scope = 2;
		shadow = 1;
		simulation = "ProxyInventoryOld";
	};
	class ProxyPistol_holstered
	{
		animated = 1;
		autocenter = 0;
		inventoryType = "PistolHolstered";
		model = "\A3\Characters_F\Proxies\pistol_holstered";
		reversed = 1;
		scope = 1;
		shadow = 1;
		simulation = "ProxyInventoryOld";
	};
	class ProxyPlane_Flag_big_F: ProxyFlag
	{
		model = "\A3\Air_F\Data\Plane_Flag_big_F";
		selectionFabric = "cloth";
	};
	class ProxyPlane_Flag_F: ProxyFlag
	{
		model = "\A3\Air_F\Data\Plane_Flag_F";
		selectionFabric = "cloth";
	};
	class ProxyPlane_Flag_medium_F: ProxyFlag
	{
		model = "\A3\Air_F\Data\Plane_Flag_medium_F";
		selectionFabric = "cloth";
	};
	class ProxyPlane_Flag_medium_inv_F: ProxyPlane_Flag_big_F
	{
		model = "\A3\Air_F\Data\Plane_Flag_medium_inv_F";
	};
	class ProxyProxy_box_damage_F: ProxyRetex
	{
		hiddenSelections[] = {"camo1", "camo2", "camo3", "camo4"};
		model = "\A3\Soft_F_Gamma\Truck_01\Proxy_box_damage_F.p3d";
	};
	class ProxyProxy_box_F: ProxyRetex
	{
		hiddenSelections[] = {"camo1", "camo2", "camo3", "camo4"};
		model = "\A3\Soft_F_Gamma\Truck_01\Proxy_box_F.p3d";
	};
	class ProxyProxy_covered_damaged_F: ProxyRetex
	{
		hiddenSelections[] = {"camo1", "camo2", "camo3", "camo4"};
		model = "\A3\Soft_F_Beta\Truck_01\Proxy_covered_damaged_F.p3d";
	};
	class ProxyProxy_covered_F: ProxyRetex
	{
		hiddenSelections[] = {"camo1", "camo2", "camo3", "camo4"};
		model = "\A3\Soft_F_Beta\Truck_01\Proxy_covered_F.p3d";
	};
	class ProxyProxy_medevac_damaged_F: ProxyRetex
	{
		hiddenSelections[] = {"camo1", "camo2", "camo3", "camo4"};
		model = "\A3\Soft_F_Gamma\Truck_01\Proxy_medevac_damaged_F.p3d";
	};
	class ProxyProxy_medevac_F: ProxyRetex
	{
		hiddenSelections[] = {"camo1", "camo2", "camo3", "camo4"};
		model = "\A3\Soft_F_Gamma\Truck_01\Proxy_medevac_F.p3d";
	};
	class ProxyProxy_transport_damaged_F: ProxyRetex
	{
		hiddenSelections[] = {"camo1", "camo2", "camo3"};
		model = "\A3\Soft_F_Beta\Truck_01\Proxy_transport_damaged_F.p3d";
	};
	class ProxyProxy_transport_F: ProxyRetex
	{
		hiddenSelections[] = {"camo1", "camo2", "camo3"};
		model = "\A3\Soft_F_Beta\Truck_01\Proxy_transport_F.p3d";
	};
	class ProxyPylonPod_3x_Missile_AGM_02_F: ProxyWeapon
	{
		model = "\A3\Weapons_F\DynamicLoadout\PylonPod_1x_Missile_AGM_02_F.p3d";
		simulation = "pylonpod";
	};
	class ProxyPylonPod_Bomb_05_x4_F: ProxyWeapon
	{
		model = "\A3\Weapons_F_Sams\Ammo\PylonPod_Bomb_05_x4_F";
		simulation = "pylonpod";
	};
	class ProxyPylonPod_Bomb_GBU12_04_DualRail_x2_F: ProxyWeapon
	{
		model = "\A3\Weapons_F_Jets\Ammo\PylonPod_Bomb_GBU12_04_DualRail_x2_F";
		simulation = "pylonpod";
	};
	class ProxyPylonPod_Bomb_GBU12_04_x1_F: ProxyWeapon
	{
		model = "\A3\Weapons_F_Jets\Ammo\PylonPod_Bomb_GBU12_04_x1_F";
		simulation = "pylonpod";
	};
	class ProxyPylonPod_Bomb_KAB250_03_x1_F: ProxyWeapon
	{
		model = "\A3\Weapons_F_Jets\Ammo\PylonPod_Bomb_KAB250_03_x1_F";
		simulation = "pylonpod";
	};
	class ProxyPylonPod_Missile_AA_05_x1_F: ProxyWeapon
	{
		model = "\A3\Weapons_F_Jets\Ammo\PylonPod_Missile_AA_05_x1_F";
		simulation = "pylonpod";
	};
	class ProxyPylonPod_Missile_AA_06_DualRail_x2_F: ProxyWeapon
	{
		model = "\A3\Weapons_F_Jets\Ammo\PylonPod_Missile_AA_06_DualRail_x2_F";
		simulation = "pylonpod";
	};
	class ProxyPylonPod_Missile_AA_06_Rail_x1_F: ProxyWeapon
	{
		model = "\A3\Weapons_F_Jets\Ammo\PylonPod_Missile_AA_06_Rail_x1_F";
		simulation = "pylonpod";
	};
	class ProxyPylonPod_Missile_AA_06_x1_F: ProxyWeapon
	{
		model = "\A3\Weapons_F_Jets\Ammo\PylonPod_Missile_AA_06_x1_F";
		simulation = "pylonpod";
	};
	class ProxyPylonPod_Missile_AA_07_x1_F: ProxyWeapon
	{
		model = "\A3\Weapons_F_Jets\Ammo\PylonPod_Missile_AA_07_x1_F";
		simulation = "pylonpod";
	};
	class ProxyPylonPod_Missile_AA_08_DualRail_x2_F: ProxyWeapon
	{
		model = "\A3\Weapons_F_Jets\Ammo\PylonPod_Missile_AA_08_DualRail_x2_F";
		simulation = "pylonpod";
	};
	class ProxyPylonPod_Missile_AA_08_Rail_x1_F: ProxyWeapon
	{
		model = "\A3\Weapons_F_Jets\Ammo\PylonPod_Missile_AA_08_Rail_x1_F";
		simulation = "pylonpod";
	};
	class ProxyPylonPod_Missile_AA_08_x1_F: ProxyWeapon
	{
		model = "\A3\Weapons_F_Jets\Ammo\PylonPod_Missile_AA_08_x1_F";
		simulation = "pylonpod";
	};
	class ProxyPylonPod_Missile_AA_10_DualRail_x2_F: ProxyWeapon
	{
		model = "\A3\Weapons_F_Jets\Ammo\PylonPod_Missile_AA_06_DualRail_x2_F";
		simulation = "pylonpod";
	};
	class ProxyPylonPod_Missile_AA_10_Rail_x1_F: ProxyWeapon
	{
		model = "\A3\Weapons_F_Jets\Ammo\PylonPod_Missile_AA_06_Rail_x1_F";
		simulation = "pylonpod";
	};
	class ProxyPylonPod_Missile_AA_10_x1_F: ProxyWeapon
	{
		model = "\A3\Weapons_F_Jets\Ammo\PylonPod_Missile_AA_06_x1_F";
		simulation = "pylonpod";
	};
	class ProxyPylonPod_Missile_AGM_01_x1_F: ProxyWeapon
	{
		model = "\A3\Weapons_F_Jets\Ammo\PylonPod_Missile_AGM_01_x1_F";
		simulation = "pylonpod";
	};
	class ProxyPylonPod_Missile_AGM_02_DualRail_x2_F: ProxyWeapon
	{
		model = "\A3\Weapons_F_Jets\Ammo\PylonPod_Missile_AGM_02_DualRail_x2_F";
		simulation = "pylonpod";
	};
	class ProxyPylonPod_Missile_AGM_02_Rail_x1_F: ProxyWeapon
	{
		model = "\A3\Weapons_F_Jets\Ammo\PylonPod_Missile_AGM_02_Rail_x1_F";
		simulation = "pylonpod";
	};
	class ProxyPylonPod_Missile_AGM_02_x1_F: ProxyWeapon
	{
		model = "\A3\Weapons_F_Jets\Ammo\PylonPod_Missile_AGM_02_x1_F";
		simulation = "pylonpod";
	};
	class ProxyPylonPod_Missile_AR_01_Rail_x1_F: ProxyWeapon
	{
		model = "\A3\Weapons_F_Sams\Ammo\PylonPod_Missile_AR_01_Rail_x1_F";
		simulation = "pylonpod";
	};
	class ProxyPylonPod_Missile_AR_01_x1_F: ProxyWeapon
	{
		model = "\A3\Weapons_F_Sams\Ammo\PylonPod_Missile_AR_01_x1_F";
		simulation = "pylonpod";
	};
	class ProxyPylonPod_Missile_AR_02_x1_F: ProxyWeapon
	{
		model = "\A3\Weapons_F_Sams\Ammo\PylonPod_Missile_AR_02_x1_F";
		simulation = "pylonpod";
	};
	class ProxyRadio_proxy: ProxyWeapon
	{
		simulation = "proxyradio";
	};
	class ProxyRetex
	{
		animated = 0;
		autocenter = 0;
		hiddenSelections[] = {};
		model = "";
		scope = 0;
		simulation = "proxyretex";
	};
	class ProxyRightHand
	{
		animated = 0;
		autocenter = 0;
		inventoryType = "RightHand";
		model = "";
		scope = 2;
		shadow = 1;
		simulation = "ProxyInventoryOld";
	};
	class ProxyRocket_03_AP_F: ProxyWeapon
	{
		model = "\A3\Weapons_F_EPC\Ammo\Rocket_03_AP_F.p3d";
		simulation = "maverickweapon";
	};
	class ProxyRocket_03_FL_F: ProxyWeapon
	{
		model = "\A3\Weapons_F_EPC\Ammo\Rocket_03_FL_F.p3d";
		simulation = "maverickweapon";
	};
	class ProxyRocket_03_HE_F: ProxyWeapon
	{
		model = "\A3\Weapons_F_EPC\Ammo\Rocket_03_HE_F.p3d";
		simulation = "maverickweapon";
	};
	class ProxyRocket_04_AP_F: ProxyWeapon
	{
		model = "\A3\Weapons_F_EPC\Ammo\Rocket_04_AP_F.p3d";
		simulation = "maverickweapon";
	};
	class ProxyRocket_04_FL_F: ProxyWeapon
	{
		model = "\A3\Weapons_F_EPC\Ammo\Rocket_04_FL_F.p3d";
		simulation = "maverickweapon";
	};
	class ProxyRocket_04_HE_F: ProxyWeapon
	{
		model = "\A3\Weapons_F_EPC\Ammo\Rocket_04_HE_F.p3d";
		simulation = "maverickweapon";
	};
	class ProxyShipFlag_F
	{
		autocenter = 0;
		model = "\A3\Boat_F_Destroyer\Destroyer_01\ShipFlag_F.p3d";
		reversed = 0;
		scope = 1;
		selectionFabric = "latka";
		simulation = "flag";
	};
	class ProxyTruck_01_box_wreck_F: ProxyRetex
	{
		hiddenSelections[] = {"camo1", "camo2", "camo3", "camo4"};
		model = "\A3\Soft_F_Gamma\Truck_01\Truck_01_box_wreck_F.p3d";
	};
	class ProxyTruck_01_fuel_wreck_F: ProxyRetex
	{
		hiddenSelections[] = {"camo1", "camo2", "camo3"};
		model = "\A3\Soft_F_Gamma\Truck_01\Truck_01_fuel_wreck_F.p3d";
	};
	class ProxyTruck_01_mover_wreck_F: ProxyRetex
	{
		hiddenSelections[] = {"camo1", "camo2", "camo3"};
		model = "\A3\Soft_F_Gamma\Truck_01\Truck_01_mover_wreck_F.p3d";
	};
	class ProxyTruck_01_wreck_F: ProxyRetex
	{
		hiddenSelections[] = {"camo1", "camo2", "camo3"};
		model = "\A3\Soft_F_Beta\Truck_01\Truck_01_wreck_F.p3d";
	};
	class proxyTruck_03_base_wreck_F: ProxyRetex
	{
		hiddenSelections[] = {"Camo1", "Camo2", "Camo3"};
		model = "\A3\Soft_F_EPC\Truck_03\Truck_03_base_wreck_F.p3d";
	};
	class proxyTruck_03_device_wreck_F: ProxyRetex
	{
		hiddenSelections[] = {"Camo1", "Camo2", "Camo3", "Camo4", "Camo5"};
		model = "\A3\Soft_F_EPC\Truck_03\Truck_03_device_wreck_F.p3d";
	};
	class proxyTruck_03_fuel_wreck_F: ProxyRetex
	{
		hiddenSelections[] = {"Camo1", "Camo2", "Camo3"};
		model = "\A3\Soft_F_EPC\Truck_03\Truck_03_fuel_wreck_F.p3d";
	};
	class proxyTruck_03_repair_wreck_F: ProxyRetex
	{
		hiddenSelections[] = {"Camo1", "Camo2", "Camo3"};
		model = "\A3\Soft_F_EPC\Truck_03\Truck_03_repair_wreck_F.p3d";
	};
	class Proxyus_bag
	{
		animated = 0;
		autocenter = 0;
		inventoryType = "Backpack";
		model = "";
		reversed = 1;
		scope = 2;
		shadow = 1;
		simulation = "ProxyInventoryOld";
	};
	class ProxyVan_02_medevac_wreck_F: ProxyRetex
	{
		hiddenSelections[] = {"Camo1", "Camo2", "Camo3"};
		model = "a3\Soft_F_Orange\Van_02\Van_02_medevac_wreck_F";
	};
	class ProxyVan_02_transport_wreck_F: ProxyVan_02_medevac_wreck_F
	{
		model = "a3\Soft_F_Orange\Van_02\Van_02_transport_wreck_F";
	};
	class ProxyVan_02_vehicle_wreck_F: ProxyVan_02_medevac_wreck_F
	{
		model = "a3\Soft_F_Orange\Van_02\Van_02_vehicle_wreck_F";
	};
	class proxyVTOL_01_vehicle_wreck_F: ProxyRetex
	{
		hiddenSelections[] = {"Camo_1", "Camo_2", "Camo_3", "Camo_4"};
		model = "\A3\Air_F_Exp\VTOL_01\VTOL_01_vehicle_wreck_F.p3d";
	};
	class proxyVTOL_02_vehicle_wreck_F: ProxyRetex
	{
		hiddenSelections[] = {"Camo_1", "Camo_2", "Camo_3", "Camo_4"};
		model = "\A3\Air_F_Exp\VTOL_02\VTOL_02_vehicle_wreck_F.p3d";
	};
	class ProxyWeapon
	{
		animated = 0;
		autocenter = 0;
		model = "";
		reversed = 0;
		scope = 2;
		shadow = 1;
		simulation = "ProxyWeapon";
	};
	class ProxyWindsock_01_F
	{
		autocenter = 0;
		cloth = "Windsock";
		model = "\A3\Structures_F_Heli\Ind\Airport\Windsock_01_F.p3d";
		reversed = 0;
		scope = 1;
		selectionFabric = "latka";
		simulation = "windsock";
	};
	class ProxyWreck
	{
		animated = 0;
		autocenter = 0;
		model = "";
		scope = 0;
		simulation = "alwaysshow";
	};
	class RandomShape
	{
		autocenter = 0;
		model = "";
		models[] = {};
		reversed = 0;
		scope = 2;
		shadow = 1;
		simulation = "randomshape";
	};
	class RopeEnd: RopeSegment
	{
		access = 0;
		model = "\A3\Data_f\Hook\Hook_F.p3d";
		scope = 2;
	};
	class RopeSegment
	{
		access = 0;
		animated = 0;
		autocenter = 0;
		displayName = "";
		model = "\A3\Data_f\proxies\Rope\rope.p3d";
		scope = 2;
		simulation = "ropesegment";
	};
	class SeaGull: Bird
	{
		afMax = 30;
		canBeShot = 0;
		htMax = 1800;
		htMin = 60;
		mFact = 1;
		mfMax = 0;
		model = "\A3\Animals_F\Seagull\Seagull.p3d";
		moves = "CfgMovesBird";
		reversed = 0;
		scope = 2;
		singSound[] = {"A3\Sounds_F\environment\animals\birds\seagul1", 0.891251, 1, 200};
		tBody = 37;
	};
	class StreetLamp
	{
		aggregateReflectors[] = {};
		animated = 0;
		armorLights = 1;
		armorStructural = 1;
		brightness = 0.2;
		colorAmbient[] = {0.1, 0.1, 0.1};
		colorDiffuse[] = {0.9, 0.8, 0.6};
		destrType = "DestructTree";
		model = "";
		simulation = "StreetLamp";
		class HitPoints
		{
			class HitBulb
			{
				armor = 1;
				explosionShielding = 1;
				material = 60;
				name = "lampa";
				passThrough = 1;
			};
		};
		class Reflectors
		{
			class LampLight
			{
				ambient[] = {0.1, 0.1, 0.1, 1};
				brightness = 0.2;
				color[] = {0.9, 0.8, 0.6, 1};
				direction = "";
				hitpoint = "lampa";
				position = "Light";
				selection = "";
				size = 0.5;
			};
		};
	};
	class Temp
	{
		model = "";
		scope = 2;
		simulation = "Temp";
	};
};
