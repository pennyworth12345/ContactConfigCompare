class CfgSurfaces
{
	class BuildingRubble: GdtRubble
	{
		character = "Empty";
		files = "sutiny*";
	};
	class BuildingRubble_exp: BuildingRubble
	{
		files = "surface_building_rubble*";
		soundEnviron = "gravel_exp";
	};
	class cardboard: concrete
	{
		files = "lepenka*";
	};
	class cardboard_exp: cardboard
	{
		files = "surface_cardboard";
		soundEnviron = "dirt_exp";
	};
	class carpet: GdtConcrete
	{
		character = "Empty";
		files = "koberec*";
		soundEnviron = "concrete";
	};
	class carpet_exp: carpet
	{
		files = "surface_carpet";
		soundEnviron = "int_carpet_exp";
	};
	class carpet_in_exp: carpet_inside
	{
		files = "surface_carpet_in";
		soundEnviron = "int_carpet_exp";
	};
	class carpet_inside: GdtConcrete
	{
		AIAvoidStance = 1;
		character = "Empty";
		files = "dum_mesto_koberec*";
		soundEnviron = "int_concrete";
	};
	class concrete: GdtStratisConcrete
	{
		character = "Empty";
		files = "beton";
		lucidity = 0.3;
	};
	class concrete_exp: concrete
	{
		files = "surface_concrete";
		soundEnviron = "concrete_exp";
	};
	class concrete_hall: concrete
	{
		AIAvoidStance = 1;
		character = "Empty";
		files = "chodba_beton*";
		soundEnviron = "int_concrete";
	};
	class concrete_hall_exp: concrete
	{
		files = "surface_concrete_hall";
		soundEnviron = "int_concrete_exp";
	};
	class concrete_in_exp: concrete
	{
		AIAvoidStance = 1;
		files = "surface_concrete_in";
		soundEnviron = "int_concrete_exp";
	};
	class concrete_inside: GdtStratisConcrete
	{
		AIAvoidStance = 1;
		character = "Empty";
		files = "betonin";
		lucidity = 0.3;
		soundEnviron = "int_concrete";
	};
	class concrete_out: GdtStratisConcrete
	{
		character = "Empty";
		files = "betonout";
		lucidity = 0.3;
	};
	class Default
	{
		AIAvoidStance = 0;
		character = "Empty";
		dust = 0.1;
		files = "default";
		friction = 0.9;
		grassCover = 0;
		impact = "default_Mat";
		isWater = 0;
		lucidity = 1;
		maxSpeedCoef = 1;
		restitution = 0.25;
		rough = 0.075;
		soundEnviron = "normalExt";
		surfaceFriction = 2;
		tracksAlpha = 1;
		transparency = -1;
	};
	class dirtrunway: GdtStratisDirt
	{
		files = "dirtrunway*";
		maxSpeedCoef = 0.9;
		restitution = 0.19;
		rough = 0.04;
		surfaceFriction = 1.4;
	};
	class floor: GdtStratisConcrete
	{
		character = "Empty";
		files = "dlazbaout";
	};
	class floor_exp: floor
	{
		files = "surface_floor";
		soundEnviron = "pavement_exp";
	};
	class floor_in_exp: floor
	{
		AIAvoidStance = 1;
		files = "surface_floor_in";
		soundEnviron = "int_pavement_exp";
	};
	class floor_inside: GdtStratisConcrete
	{
		AIAvoidStance = 1;
		character = "Empty";
		files = "dlazbain";
		soundEnviron = "int_tiles";
	};
	class GdtAsphalt: Default
	{
		access = 2;
		character = "Empty";
		dust = 0.05;
		files = "gdt_asphalt_*";
		grassCover = 0;
		impact = "hitConcrete";
		lucidity = 0.03;
		maxClutterColoringCoef = 1.5;
		restitution = 0.2;
		rough = 0.05;
		soundEnviron = "asphalt_exp";
		soundHit = "concrete";
		surfaceFriction = 2;
	};
	class GdtBeach: Default
	{
		access = 2;
		character = "Empty";
		dust = 0.5;
		files = "gdt_beach_*";
		grassCover = 0;
		impact = "hitGroundSoft";
		lucidity = 1.25;
		maxClutterColoringCoef = 1.5;
		maxSpeedCoef = 0.8;
		restitution = 0.05;
		rough = 0.1;
		soundEnviron = "sand_exp";
		soundHit = "soft_ground";
		surfaceFriction = 1;
	};
	class GdtCliff: Default
	{
		access = 2;
		character = "CliffGroup";
		dust = 0.05;
		files = "gdt_rock_*";
		grassCover = 0;
		impact = "hitGroundHard";
		lucidity = 1;
		maxClutterColoringCoef = 1.3;
		maxSpeedCoef = 0.86;
		restitution = 0.25;
		rough = 0.2;
		soundEnviron = "stones_exp";
		soundHit = "concrete";
		surfaceFriction = 1.8;
	};
	class GdtConcrete: Default
	{
		access = 2;
		character = "Empty";
		dust = 0.05;
		files = "gdt_concrete_*";
		grassCover = 0;
		impact = "hitConcrete";
		lucidity = 0.3;
		maxClutterColoringCoef = 1.35;
		restitution = 0.25;
		rough = 0.05;
		soundEnviron = "concrete";
		soundHit = "concrete";
		surfaceFriction = 1.8;
	};
	class GdtDead: Default
	{
		access = 2;
		character = "Empty";
		dust = 0.4;
		files = "gdt_dead_*";
		grassCover = 0;
		impact = "hitGroundSoft";
		lucidity = 0.5;
		maxClutterColoringCoef = 1.35;
		maxSpeedCoef = 0.9;
		restitution = 0.19;
		rough = 0.05;
		soundEnviron = "sand";
		soundHit = "soft_ground";
		surfaceFriction = 1.4;
	};
	class GdtDesert: Default
	{
		access = 2;
		character = "Empty";
		dust = 0.5;
		files = "gdt_desert_*";
		grassCover = 0;
		impact = "hitGroundSoft";
		lucidity = 2.5;
		maxClutterColoringCoef = 1.35;
		maxSpeedCoef = 0.8;
		restitution = 0.05;
		rough = 0.11;
		soundEnviron = "sand";
		soundHit = "soft_ground";
		surfaceFriction = 1;
	};
	class GdtDirt: Default
	{
		access = 2;
		character = "GrassDryClutter";
		dust = 0.5;
		files = "gdt_dirt_*";
		grassCover = 0.03;
		impact = "hitGroundSoft";
		lucidity = 1;
		maxClutterColoringCoef = 1.35;
		maxSpeedCoef = 0.9;
		restitution = 0.19;
		rough = 0.09;
		soundEnviron = "dirt";
		soundHit = "hard_ground";
		surfaceFriction = 1.4;
	};
	class GdtField: Default
	{
		access = 2;
		character = "Empty";
		dust = 0.2;
		files = "gdt_field_*";
		grassCover = 0.05;
		impact = "hitGroundSoft";
		lucidity = 1;
		maxClutterColoringCoef = 1.5;
		maxSpeedCoef = 0.85;
		restitution = 0.15;
		rough = 0.09;
		soundEnviron = "dirt_exp";
		soundHit = "soft_ground";
		surfaceFriction = 1.2;
	};
	class GdtForest: Default
	{
		access = 2;
		character = "RainForestGroup";
		dust = 0;
		files = "gdt_forest_*";
		grassCover = 0.1;
		impact = "hitGroundSoft";
		lucidity = 3.5;
		maxClutterColoringCoef = 1.05;
		maxSpeedCoef = 0.85;
		restitution = 0.15;
		rough = 0.12;
		soundEnviron = "forest_exp";
		soundHit = "soft_ground";
		surfaceFriction = 1.2;
	};
	class GdtForestMalden: Default
	{
		access = 2;
		character = "MaldenForestClutter";
		dust = 0.3;
		files = "gdt_forest_malden_*";
		grassCover = 0.04;
		impact = "hitGroundSoft";
		lucidity = 3.5;
		maxClutterColoringCoef = 1.35;
		maxSpeedCoef = 0.85;
		restitution = 0.15;
		rough = 0.12;
		soundEnviron = "drygrass";
		soundHit = "soft_ground";
		surfaceFriction = 1.2;
	};
	class GdtForestPine: Default
	{
		access = 2;
		character = "ForestPineClutter";
		dust = 0.4;
		files = "gdt_forest_pine_*";
		grassCover = 0.04;
		impact = "hitGroundSoft";
		lucidity = 3.5;
		maxClutterColoringCoef = 1.35;
		maxSpeedCoef = 0.85;
		restitution = 0.15;
		rough = 0.12;
		soundEnviron = "drygrass";
		soundHit = "soft_ground";
		surfaceFriction = 1.2;
	};
	class GdtGrassDry: Default
	{
		access = 2;
		character = "GrassDryClutter";
		dust = 0.5;
		files = "gdt_dry_grass_*";
		grassCover = 0.1;
		impact = "hitGroundSoft";
		lucidity = 2;
		maxClutterColoringCoef = 1.35;
		maxSpeedCoef = 0.85;
		restitution = 0.15;
		rough = 0.08;
		soundEnviron = "drygrass";
		soundHit = "soft_ground";
		surfaceFriction = 1.2;
	};
	class GdtGrassGreen: Default
	{
		access = 2;
		character = "GrassGreenClutter";
		dust = 0.05;
		files = "gdt_grass_green_*";
		grassCover = 0.05;
		impact = "hitGroundSoft";
		lucidity = 4;
		maxClutterColoringCoef = 1.35;
		maxSpeedCoef = 0.85;
		restitution = 0.15;
		rough = 0.08;
		soundEnviron = "grass";
		soundHit = "soft_ground";
		surfaceFriction = 1.2;
	};
	class GdtGrassLong: Default
	{
		access = 2;
		AIAvoidStance = 2;
		character = "Empty";
		dust = 0.15;
		files = "gdt_grass_long_*";
		grassCover = 0.35;
		impact = "hitGroundSoft";
		lucidity = 4;
		maxClutterColoringCoef = 1.5;
		maxSpeedCoef = 0.85;
		restitution = 0.15;
		rough = 0.2;
		soundEnviron = "grasstall_exp";
		soundHit = "soft_ground";
		surfaceFriction = 1.2;
	};
	class GdtGrassShort: Default
	{
		access = 2;
		AIAvoidStance = 1;
		character = "GrassShortGroup";
		dust = 0.15;
		files = "gdt_grass_short_*";
		grassCover = 0.15;
		impact = "hitGroundSoft";
		lucidity = 4;
		maxClutterColoringCoef = 1;
		maxSpeedCoef = 0.85;
		restitution = 0.15;
		rough = 0.08;
		soundEnviron = "grass_exp";
		soundHit = "soft_ground";
		surfaceFriction = 1.2;
	};
	class GdtGrassTall: Default
	{
		access = 2;
		AIAvoidStance = 2;
		character = "GrassTallGroup";
		dust = 0.15;
		files = "gdt_grass_tall_*";
		grassCover = 0.35;
		impact = "hitGroundSoft";
		lucidity = 4;
		maxClutterColoringCoef = 1.06;
		maxSpeedCoef = 0.85;
		restitution = 0.15;
		rough = 0.2;
		soundEnviron = "grasstall_exp";
		soundHit = "soft_ground";
		surfaceFriction = 1.2;
	};
	class GdtGrassWild: Default
	{
		access = 2;
		character = "GrassWildClutter";
		dust = 0.58;
		files = "gdt_wild_grass_*";
		grassCover = 0.05;
		impact = "hitGroundSoft";
		lucidity = 2.5;
		maxClutterColoringCoef = 1.35;
		maxSpeedCoef = 0.85;
		restitution = 0.15;
		rough = 0.1;
		soundEnviron = "drygrass";
		soundHit = "soft_ground";
		surfaceFriction = 1.2;
	};
	class GdtKLCobblestone: Default
	{
		access = 2;
		character = "Empty";
		dust = 0.05;
		files = "gdt_encobblestone*";
		grassCover = 0;
		impact = "hitConcrete";
		lucidity = 0.3;
		maxClutterColoringCoef = 1;
		maxSpeedCoef = 1;
		rough = 0.05;
		soundEnviron = "concrete";
		soundHit = "concrete";
	};
	class GdtKLDirt: Default
	{
		access = 2;
		character = "empty";
		dust = 0.2;
		files = "gdt_dirt*";
		grassCover = 0;
		impact = "hitGroundSoft";
		lucidity = 0.3;
		maxClutterColoringCoef = 1.15;
		maxSpeedCoef = 0.95;
		rough = 0.2;
		soundEnviron = "gravel";
		soundHit = "soft_ground";
	};
	class GdtKlField: Default
	{
		access = 2;
		AIAvoidStance = 2;
		character = "KLField";
		dust = 0.15;
		files = "gdt_enfield*";
		grassCover = 0.6;
		impact = "hitGroundHard";
		lucidity = 1.25;
		maxClutterColoringCoef = 1.08;
		maxSpeedCoef = 1;
		rough = 0.05;
		soundEnviron = "grass";
		soundHit = "soft_ground";
	};
	class GdtKLForestCon: Default
	{
		access = 2;
		AIAvoidStance = 2;
		character = "KLForestCon";
		dust = 0.1;
		files = "gdt_enforestcon*";
		grassCover = 0.5;
		impact = "hitGroundSoft";
		lucidity = 4;
		maxClutterColoringCoef = 1.35;
		maxSpeedCoef = 0.9;
		rough = 0.08;
		soundEnviron = "forest_exp";
		soundHit = "soft_ground";
	};
	class GdtKLForestDec: Default
	{
		access = 2;
		AIAvoidStance = 2;
		character = "KLForestDec";
		dust = 0.1;
		files = "gdt_enforestdec*";
		grassCover = 0.5;
		impact = "hitGroundSoft";
		lucidity = 4;
		maxClutterColoringCoef = 1.25;
		maxSpeedCoef = 0.9;
		rough = 0.08;
		soundEnviron = "forest_exp";
		soundHit = "soft_ground";
	};
	class GdtKLGrass1: Default
	{
		access = 2;
		character = "KLGrass1";
		dust = 0.15;
		files = "gdt_engrass1*";
		grassCover = 0.4;
		impact = "hitGroundSoft";
		lucidity = 1.25;
		maxClutterColoringCoef = 1.35;
		maxSpeedCoef = 0.9;
		rough = 0.08;
		soundEnviron = "grass";
		soundHit = "soft_ground";
	};
	class GdtKLGrass2: Default
	{
		access = 2;
		AIAvoidStance = 2;
		character = "KLGrass2";
		dust = 0.15;
		files = "gdt_engrass2*";
		grassCover = 0.95;
		impact = "hitGroundSoft";
		lucidity = 1.25;
		maxClutterColoringCoef = 1.35;
		maxSpeedCoef = 0.9;
		rough = 0.2;
		soundEnviron = "drygrass";
		soundHit = "soft_ground";
	};
	class GdtKlSoil: Default
	{
		access = 2;
		character = "KLSoil";
		dust = 0.05;
		files = "gdt_ensoil*";
		grassCover = 0;
		impact = "hitGroundHard";
		lucidity = 1.5;
		maxClutterColoringCoef = 1.2;
		maxSpeedCoef = 0.85;
		rough = 0.15;
		soundEnviron = "dirt";
		soundHit = "soft_ground";
		surfaceFriction = 1.7;
	};
	class GdtKlStubble: Default
	{
		access = 2;
		character = "KLStubble";
		dust = 0.15;
		files = "gdt_enstubble*";
		grassCover = 0.6;
		impact = "hitGroundHard";
		lucidity = 1.25;
		maxClutterColoringCoef = 1.08;
		maxSpeedCoef = 1;
		rough = 0.05;
		soundEnviron = "grass";
		soundHit = "soft_ground";
	};
	class GdtKlTarmac: Default
	{
		access = 2;
		character = "Empty";
		dust = 0.05;
		files = "gdt_entarmac*";
		grassCover = 0;
		impact = "hitConcrete";
		lucidity = 0.3;
		maxClutterColoringCoef = 1;
		maxSpeedCoef = 1;
		rough = 0.05;
		soundEnviron = "concrete";
		soundHit = "concrete";
	};
	class GdtKlWeatheredTarmac: Default
	{
		access = 2;
		character = "KlWeatheredTarmac";
		dust = 0.05;
		files = "gdt_enweatheredtarmac*";
		grassCover = 0;
		impact = "hitConcrete";
		lucidity = 0.3;
		maxClutterColoringCoef = 1;
		maxSpeedCoef = 1;
		rough = 0.05;
		soundEnviron = "concrete";
		soundHit = "concrete";
	};
	class GdtMarsh: Default
	{
		access = 2;
		character = "Empty";
		dust = 0.1;
		files = "gdt_marsh_*";
		grassCover = 0;
		lucidity = 1.5;
		maxClutterColoringCoef = 1.35;
		maxSpeedCoef = 0.8;
		restitution = 0.1;
		rough = 0.15;
		soundEnviron = "dirt";
		soundHit = "soft_ground";
		surfaceFriction = 0.9;
	};
	class GdtMud: Default
	{
		access = 2;
		character = "MudClutter";
		dust = 0.32;
		files = "gdt_mud_*";
		grassCover = 0.04;
		impact = "hitGroundHard";
		lucidity = 1.5;
		maxClutterColoringCoef = 1.35;
		maxSpeedCoef = 0.8;
		restitution = 0.1;
		rough = 0.15;
		soundEnviron = "dirt";
		soundHit = "soft_ground";
		surfaceFriction = 0.9;
	};
	class GdtRedDirt: Default
	{
		access = 2;
		character = "RedDirtGroup";
		dust = 0.2;
		files = "gdt_reddirt_*";
		grassCover = 0.05;
		impact = "hitGroundRed";
		lucidity = 1;
		maxClutterColoringCoef = 1.02;
		maxSpeedCoef = 0.9;
		restitution = 0.19;
		rough = 0.09;
		soundEnviron = "dirt_exp";
		soundHit = "soft_ground";
		surfaceFriction = 1.4;
	};
	class GdtRock: Default
	{
		access = 2;
		character = "Empty";
		dust = 0.5;
		files = "gdt_rock_*";
		grassCover = 0;
		impact = "hitGroundHard";
		lucidity = 1;
		maxClutterColoringCoef = 1.35;
		maxSpeedCoef = 0.86;
		restitution = 0.25;
		rough = 0.2;
		soundEnviron = "rock";
		soundHit = "hard_ground";
		surfaceFriction = 1.8;
	};
	class GdtRubble: Default
	{
		access = 2;
		character = "RubbleClutter";
		dust = 0.5;
		files = "gdt_rubble_*";
		grassCover = 0;
		impact = "hitGroundHard";
		lucidity = 3;
		maxClutterColoringCoef = 1.35;
		maxSpeedCoef = 0.86;
		restitution = 0.125;
		rough = 0.2;
		soundEnviron = "debris";
		soundHit = "building";
		surfaceFriction = 1.2;
	};
	class GdtSeabed: Default
	{
		access = 2;
		character = "SeabedClutter";
		dust = 0.75;
		files = "gdt_seabed_*";
		grassCover = 0;
		lucidity = 200;
		maxClutterColoringCoef = 1.35;
		maxSpeedCoef = 0.8;
		restitution = 0.05;
		rough = 0.15;
		soundEnviron = "gravel";
		soundHit = "hard_ground";
		surfaceFriction = 1;
	};
	class GdtSeabedExp: Default
	{
		access = 2;
		character = "SeabedExpGroup";
		dust = 0.75;
		files = "gdt_seabedexp_*";
		grassCover = 0;
		impact = "hitGroundHard";
		lucidity = 150;
		maxClutterColoringCoef = 1.5;
		maxSpeedCoef = 0.8;
		restitution = 0.05;
		rough = 0.15;
		soundEnviron = "seabed_exp";
		soundHit = "hard_ground";
		surfaceFriction = 1;
	};
	class GdtSoil: Default
	{
		access = 2;
		character = "Empty";
		dust = 0.5;
		files = "gdt_soil_*";
		grassCover = 0;
		lucidity = 1;
		maxClutterColoringCoef = 1.35;
		maxSpeedCoef = 0.9;
		restitution = 0.19;
		rough = 0.09;
		soundEnviron = "dirt";
		soundHit = "soft_ground";
		surfaceFriction = 1.4;
	};
	class GdtStony: Default
	{
		access = 2;
		character = "StonyClutter";
		dust = 0.33;
		files = "gdt_stony_*";
		grassCover = 0;
		impact = "hitGroundHard";
		lucidity = 1.5;
		maxClutterColoringCoef = 1.35;
		maxSpeedCoef = 0.9;
		restitution = 0.175;
		rough = 0.12;
		soundEnviron = "rock";
		soundHit = "hard_ground";
		surfaceFriction = 1.3;
	};
	class GdtStonyThistle: Default
	{
		access = 2;
		character = "StonyThistleClutter";
		dust = 0.42;
		files = "gdt_thistle_stony_*";
		grassCover = 0.03;
		impact = "hitGroundHard";
		lucidity = 1.5;
		maxClutterColoringCoef = 1.35;
		maxSpeedCoef = 0.9;
		restitution = 0.175;
		rough = 0.15;
		soundEnviron = "stony";
		soundHit = "hard_ground";
		surfaceFriction = 1.3;
	};
	class GdtStratisBeach: Default
	{
		access = 2;
		character = "Empty";
		dust = 0.5;
		files = "gdt_strbeach_*";
		grassCover = 0;
		impact = "hitGroundSoft";
		lucidity = 1.25;
		maxClutterColoringCoef = 1.35;
		maxSpeedCoef = 0.8;
		restitution = 0.05;
		rough = 0.1;
		soundEnviron = "sand";
		soundHit = "soft_ground";
		surfaceFriction = 1;
	};
	class GdtStratisConcrete: Default
	{
		access = 2;
		character = "Empty";
		dust = 0.15;
		files = "gdt_strconcrete_*";
		grassCover = 0;
		impact = "hitConcrete";
		lucidity = 0.3;
		maxClutterColoringCoef = 1.35;
		maxSpeedCoef = 1;
		rough = 0.05;
		soundEnviron = "concrete";
		soundHit = "concrete";
		surfaceFriction = 1.8;
	};
	class GdtStratisDirt: Default
	{
		access = 2;
		character = "Empty";
		dust = 0.5;
		files = "gdt_strdirt_*";
		grassCover = 0.03;
		impact = "hitGroundSoft";
		lucidity = 1;
		maxClutterColoringCoef = 1.35;
		maxSpeedCoef = 0.9;
		restitution = 0.19;
		rough = 0.09;
		soundEnviron = "dirt";
		soundHit = "soft_ground";
		surfaceFriction = 1.4;
	};
	class GdtStratisDryGrass: Default
	{
		access = 2;
		character = "StratisDryGrassClutter";
		dust = 0.75;
		files = "gdt_strdrygrass_*";
		grassCover = 0.1;
		impact = "hitGroundSoft";
		lucidity = 2;
		maxClutterColoringCoef = 1.35;
		maxSpeedCoef = 0.85;
		restitution = 0.15;
		rough = 0.08;
		soundEnviron = "drygrass";
		soundHit = "soft_ground";
		surfaceFriction = 1.2;
	};
	class GdtStratisForestPine: Default
	{
		access = 2;
		character = "StratisForestPineClutter";
		dust = 0.4;
		files = "gdt_strforest_pine_*";
		grassCover = 0.04;
		impact = "hitGroundSoft";
		lucidity = 3.5;
		maxClutterColoringCoef = 1.35;
		maxSpeedCoef = 0.85;
		restitution = 0.15;
		rough = 0.12;
		soundEnviron = "drygrass";
		soundHit = "soft_ground";
		surfaceFriction = 1.2;
	};
	class GdtStratisGreenGrass: Default
	{
		access = 2;
		character = "StratisGreenGrassClutter";
		dust = 0.15;
		files = "gdt_strgreengrass_*";
		grassCover = 0.05;
		impact = "hitGroundSoft";
		lucidity = 4;
		maxClutterColoringCoef = 1.35;
		maxSpeedCoef = 0.85;
		restitution = 0.15;
		rough = 0.08;
		soundEnviron = "grass";
		soundHit = "soft_ground";
		surfaceFriction = 1.2;
	};
	class GdtStratisRocky: Default
	{
		access = 2;
		character = "StratisRockyClutter";
		dust = 0.4;
		files = "gdt_strrocky_*";
		grassCover = 0.02;
		impact = "hitGroundHard";
		lucidity = 1.5;
		maxClutterColoringCoef = 1.35;
		maxSpeedCoef = 0.9;
		restitution = 0.25;
		rough = 0.12;
		soundEnviron = "gravel";
		soundHit = "hard_ground";
		surfaceFriction = 1.8;
	};
	class GdtStratisSeabed: Default
	{
		access = 2;
		character = "Empty";
		dust = 0.75;
		files = "gdt_strdeepsea_*";
		grassCover = 0;
		lucidity = 150;
		maxClutterColoringCoef = 1.35;
		maxSpeedCoef = 0.8;
		restitution = 0.05;
		rough = 0.15;
		soundEnviron = "gravel";
		soundHit = "hard_ground";
		surfaceFriction = 1;
	};
	class GdtStratisSeabedCluttered: Default
	{
		access = 2;
		character = "SeabedClutter";
		dust = 0.75;
		files = "gdt_strseabed_*";
		grassCover = 0.05;
		lucidity = 200;
		maxClutterColoringCoef = 1.35;
		maxSpeedCoef = 0.8;
		restitution = 0.05;
		rough = 0.15;
		soundEnviron = "gravel";
		soundHit = "hard_ground";
		surfaceFriction = 1;
	};
	class GdtStratisThistles: Default
	{
		access = 2;
		character = "StratisThistlesClutter";
		dust = 0.6;
		files = "gdt_strthistles_*";
		grassCover = 0;
		impact = "hitGroundSoft";
		lucidity = 3.5;
		maxClutterColoringCoef = 1.35;
		maxSpeedCoef = 0.85;
		restitution = 0.15;
		rough = 0.12;
		soundEnviron = "stony";
		soundHit = "soft_ground";
		surfaceFriction = 1.2;
	};
	class GdtThorn: Default
	{
		access = 2;
		character = "ThornClutter";
		dust = 0.43;
		files = "gdt_thorn_*";
		grassCover = 0.15;
		impact = "hitGroundSoft";
		lucidity = 3.5;
		maxClutterColoringCoef = 1.35;
		maxSpeedCoef = 0.85;
		restitution = 0.15;
		rough = 0.12;
		soundEnviron = "stony";
		soundHit = "hard_ground";
		surfaceFriction = 1.2;
	};
	class GdtVolcano: Default
	{
		access = 2;
		character = "VolcanoGroup";
		dust = 0.5;
		files = "gdt_volcano_*";
		grassCover = 0.05;
		impact = "hitGroundSoft";
		lucidity = 1;
		maxClutterColoringCoef = 1;
		maxSpeedCoef = 0.9;
		restitution = 0.19;
		rough = 0.09;
		soundEnviron = "dirt_exp";
		soundHit = "soft_ground";
		surfaceFriction = 1.4;
	};
	class GdtVolcanoBeach: Default
	{
		access = 2;
		character = "Empty";
		dust = 0.2;
		files = "gdt_vbeach_*";
		grassCover = 0;
		impact = "hitGroundSoft";
		lucidity = 1.25;
		maxClutterColoringCoef = 1.5;
		maxSpeedCoef = 0.8;
		restitution = 0.05;
		rough = 0.1;
		soundEnviron = "sand_exp";
		soundHit = "soft_ground";
		surfaceFriction = 1;
	};
	class GdtVRsurface01: Default
	{
		access = 2;
		character = "Empty";
		dust = 0;
		files = "gdt_vr_*";
		grassCover = 0;
		impact = "hitVirtual";
		lucidity = 0.3;
		maxClutterColoringCoef = 1.35;
		maxSpeedCoef = 1;
		rough = 0.01;
		soundEnviron = "virtual";
		soundHit = "soft_ground";
	};
	class GdtWeed: Default
	{
		access = 2;
		character = "WeedClutter";
		dust = 0.16;
		files = "gdt_weed_*";
		grassCover = 0.05;
		impact = "hitGroundSoft";
		lucidity = 2;
		maxClutterColoringCoef = 1.35;
		maxSpeedCoef = 0.85;
		restitution = 0.15;
		rough = 0.12;
		soundEnviron = "drygrass";
		soundHit = "soft_ground";
		surfaceFriction = 1.2;
	};
	class GdtWildField: Default
	{
		access = 2;
		character = "WildFieldClutter";
		dust = 0.33;
		files = "gdt_wildfield_*";
		grassCover = 0.1;
		impact = "hitGroundSoft";
		lucidity = 1.5;
		maxClutterColoringCoef = 1.35;
		maxSpeedCoef = 0.85;
		restitution = 0.15;
		rough = 0.1;
		soundEnviron = "drygrass";
		soundHit = "soft_ground";
		surfaceFriction = 1.2;
	};
	class grid: steel
	{
		character = "Empty";
		files = "rost*";
	};
	class grid_exp: grid
	{
		files = "surface_grid";
		soundEnviron = "gridmetal_exp";
	};
	class lino: concrete
	{
		AIAvoidStance = 1;
		files = "lino*";
		soundEnviron = "int_concrete";
	};
	class lino_exp: lino
	{
		files = "surface_lino";
		soundEnviron = "lino_exp";
	};
	class lino_in_exp: lino
	{
		AIAvoidStance = 1;
		files = "surface_lino_in";
		soundEnviron = "int_lino_exp";
	};
	class mat_in_exp: carpet_inside
	{
		files = "surface_mat_in";
		soundEnviron = "int_mat_exp";
	};
	class metalPlate: steel
	{
		character = "Empty";
		files = "plech*";
	};
	class metalPlate_exp: metalPlate
	{
		files = "surface_plate";
		soundEnviron = "metalplate_exp";
	};
	class metalPlate_in_exp: metalPlate
	{
		AIAvoidStance = 1;
		files = "surface_plate_in";
		soundEnviron = "int_metalplate_exp";
	};
	class metalPlatePressed_exp: metalPlate
	{
		files = "surface_plate_pressed";
		soundEnviron = "metalplatepressed_exp";
	};
	class mud: GdtStratisDirt
	{
		character = "Empty";
		files = "hlina*";
	};
	class mud_exp: mud
	{
		files = "surface_mud";
		soundEnviron = "mud_exp";
	};
	class parquet: concrete
	{
		AIAvoidStance = 1;
		files = "parkety*";
		soundEnviron = "int_wood";
	};
	class planks: GdtStratisThistles
	{
		character = "Empty";
		dust = 0.15;
		files = "prknaout";
		grassCover = 0;
		lucidity = 0.3;
		maxSpeedCoef = 0.9;
		restitution = 0.2;
		rough = 0.05;
		soundEnviron = "wood";
		surfaceFriction = 1.5;
	};
	class planks_exp: planks
	{
		files = "surface_planks";
		soundEnviron = "softwood_exp";
	};
	class planks_in_exp: woodenFloor
	{
		AIAvoidStance = 1;
		files = "surface_planks_in";
		soundEnviron = "int_solidwood_exp";
	};
	class planks_inside: GdtStratisThistles
	{
		AIAvoidStance = 1;
		character = "Empty";
		dust = 0.15;
		files = "prknain";
		grassCover = 0;
		lucidity = 0.3;
		maxSpeedCoef = 0.9;
		restitution = 0.2;
		rough = 0.05;
		soundEnviron = "int_wood";
		surfaceFriction = 1.5;
	};
	class road: GdtConcrete
	{
		character = "Empty";
		files = "cesta*";
	};
	class road_exp: road
	{
		files = "surface_road*";
	};
	class roof_tiles_exp: tiling
	{
		files = "surface_roof_tiles";
		soundEnviron = "rooftiles_exp";
	};
	class rubble: GdtRubble
	{
		character = "Empty";
		files = "sterk*";
	};
	class rubble_exp: rubble
	{
		files = "surface_rubble*";
		soundEnviron = "gravel_exp";
	};
	class sand: GdtStratisBeach
	{
		character = "Empty";
		files = "pisek*";
	};
	class sand_exp: sand
	{
		files = "surface_sand*";
	};
	class softwood_in_exp: parquet
	{
		AIAvoidStance = 1;
		files = "surface_parquet";
		soundEnviron = "int_softwood_exp";
	};
	class steel: GdtStony
	{
		AIAvoidStance = 1;
		character = "Empty";
		files = "ocel*";
		soundEnviron = "metal";
	};
	class steel_exp: steel
	{
		files = "surface_steel";
		soundEnviron = "steel_exp";
	};
	class stones: GdtStony
	{
		character = "Empty";
		files = "kameny*";
	};
	class stones_exp: stones
	{
		files = "surface_stones";
		soundEnviron = "stones_exp";
	};
	class straw_exp: mud
	{
		files = "surface_straw";
		soundEnviron = "straw_exp";
	};
	class surf_metal: steel
	{
		character = "Empty";
		files = "surf_metal*";
		soundEnviron = "metal";
	};
	class surf_roadconcrete: GdtConcrete
	{
		character = "Empty";
		files = "surf_roadconcrete*";
		soundEnviron = "concrete";
	};
	class surf_roaddirt: GdtDirt
	{
		character = "Empty";
		files = "surf_roaddirt*";
		soundEnviron = "dirt";
	};
	class surf_roadtarmac: road
	{
		character = "Empty";
		files = "surf_roadtarmac*";
		soundEnviron = "gravel";
	};
	class surf_rooftiles: tiling
	{
		character = "Empty";
		files = "surf_rooftiles*";
		soundEnviron = "tiling";
	};
	class surf_rooftin: tiling
	{
		character = "Empty";
		files = "surf_rooftin*";
		soundEnviron = "int_tiles";
	};
	class surf_wood: GdtForestPine
	{
		character = "Empty";
		files = "surf_wood*";
		soundEnviron = "wood";
	};
	class surfint_concrete: GdtConcrete
	{
		AIAvoidStance = 1;
		character = "Empty";
		files = "surfint_concrete*";
		soundEnviron = "int_concrete";
	};
	class surfint_metal: steel
	{
		character = "Empty";
		files = "surfint_metal*";
		soundEnviron = "int_metal";
	};
	class surfint_tiles: tiling
	{
		character = "Empty";
		files = "surfint_tiles*";
		soundEnviron = "int_tiles";
	};
	class surfint_wood: GdtForestPine
	{
		AIAvoidStance = 1;
		character = "Empty";
		files = "surfint_wood*";
		soundEnviron = "int_wood";
	};
	class SurfIntConcrete: Default
	{
		access = 2;
		AIAvoidStance = 1;
		character = "Empty";
		dust = 0.03;
		files = "surfint_concrete_*";
		lucidity = 0.7;
		rough = 0.05;
		soundEnviron = "int_concrete";
	};
	class SurfIntMetal: Default
	{
		access = 2;
		AIAvoidStance = 1;
		character = "Empty";
		dust = 0;
		files = "surfint_metal_*";
		lucidity = 0.7;
		maxSpeedCoef = 0.95;
		restitution = 0.25;
		rough = 0.05;
		soundEnviron = "int_metal";
		surfaceFriction = 1.7;
	};
	class SurfIntTiles: Default
	{
		access = 2;
		AIAvoidStance = 1;
		character = "Empty";
		dust = 0;
		files = "surfint_tiles_*";
		lucidity = 0.7;
		maxSpeedCoef = 0.86;
		restitution = 0.125;
		rough = 0.05;
		soundEnviron = "int_tiles";
		surfaceFriction = 1.2;
	};
	class SurfIntWood: Default
	{
		access = 2;
		AIAvoidStance = 1;
		character = "Empty";
		dust = 0.01;
		files = "surfint_wood_*";
		lucidity = 0.7;
		maxSpeedCoef = 0.9;
		restitution = 0.2;
		rough = 0.05;
		soundEnviron = "int_wood";
		surfaceFriction = 1.5;
	};
	class SurfMetal: Default
	{
		access = 2;
		AIAvoidStance = 1;
		character = "Empty";
		dust = 0;
		files = "surf_metal_*";
		lucidity = 0.7;
		maxSpeedCoef = 0.95;
		restitution = 0.25;
		rough = 0.05;
		soundEnviron = "metal";
		surfaceFriction = 1.7;
	};
	class SurfRoadConcrete: Default
	{
		access = 2;
		character = "Empty";
		dust = 0.15;
		files = "surf_roadconcrete_*";
		impact = "hitGroundHard";
		lucidity = 0.3;
		rough = 0.05;
		soundEnviron = "concrete";
		soundHit = "hard_ground";
		surfaceFriction = 1.8;
	};
	class SurfRoadConcrete_exp: SurfRoadConcrete
	{
		files = "surf_exp_roadconcrete_*";
		soundEnviron = "concrete_exp";
	};
	class SurfRoadDirt: Default
	{
		access = 2;
		character = "Empty";
		dust = 0.4;
		files = "surf_roaddirt_*";
		impact = "hitGroundHard";
		lucidity = 0.8;
		maxSpeedCoef = 0.9;
		restitution = 0.19;
		rough = 0.05;
		soundEnviron = "gravel";
		soundHit = "hard_ground";
		surfaceFriction = 1.4;
	};
	class SurfRoadDirt_Enoch: SurfRoadDirt_exp
	{
		files = "mud_gravel_*";
	};
	class SurfRoadDirt_exp: SurfRoadDirt
	{
		dust = 0.2;
		files = "surf_exp_roaddirt_*";
		impact = "HitGroundRed";
		soundEnviron = "dirt_exp";
	};
	class SurfRoadTarmac: Default
	{
		access = 2;
		character = "Empty";
		dust = 0.02;
		files = "surf_roadtarmac_*";
		impact = "hitGroundHard";
		lucidity = 0.5;
		restitution = 0.2;
		rough = 0.05;
		soundEnviron = "tarmac";
		soundHit = "hard_ground";
		surfaceFriction = 2;
	};
	class SurfRoadTarmac1_Enoch: SurfRoadTarmac_exp
	{
		files = "asf1_dashedline_*";
	};
	class SurfRoadTarmac2_Enoch: SurfRoadTarmac_exp
	{
		files = "asf2_clear_*";
	};
	class SurfRoadTarmac3_Enoch: SurfRoadTarmac_exp
	{
		files = "asf3_clear_*";
	};
	class SurfRoadTarmac_exp: SurfRoadTarmac
	{
		files = "surf_exp_roadtarmac_*";
		soundEnviron = "asphalt_exp";
	};
	class SurfRoofTiles: Default
	{
		access = 2;
		character = "Empty";
		dust = 0.05;
		files = "surf_rooftiles_*";
		lucidity = 0.7;
		maxSpeedCoef = 0.86;
		restitution = 0.125;
		rough = 0.05;
		soundEnviron = "roof_tiles";
		surfaceFriction = 1.2;
	};
	class SurfRoofTin: Default
	{
		access = 2;
		character = "Empty";
		dust = 0.03;
		files = "surf_rooftin_*";
		lucidity = 0.7;
		maxSpeedCoef = 0.86;
		restitution = 0.125;
		rough = 0.05;
		soundEnviron = "wavymetal";
		surfaceFriction = 1.2;
	};
	class SurfTrailDirt_Enoch: SurfTrailDirt_exp
	{
		files = "path_narrow_forest_01_*";
	};
	class SurfTrailDirt_exp: Default
	{
		access = 2;
		character = "Empty";
		dust = 0.02;
		files = "surf_exp_traildirt_*";
		impact = "hitGroundHard";
		lucidity = 0.8;
		maxSpeedCoef = 0.95;
		restitution = 0.19;
		rough = 0.05;
		soundEnviron = "dirt_exp";
		soundHit = "hard_ground";
		surfaceFriction = 1.4;
	};
	class SurfWater: Default
	{
		access = 2;
		character = "Empty";
		dust = 0;
		files = "surf_water_*";
		friction = 0.01;
		isWater = 1;
		lucidity = 1;
		restitution = 0;
		rough = 0.05;
		soundEnviron = "water";
	};
	class SurfWood: Default
	{
		access = 2;
		character = "Empty";
		dust = 0.01;
		files = "surf_wood_*";
		lucidity = 0.7;
		maxSpeedCoef = 0.9;
		restitution = 0.2;
		rough = 0.05;
		soundEnviron = "wood";
		surfaceFriction = 1.5;
	};
	class TEST_SurfNormal: Default
	{
		access = 2;
		character = "Empty";
		dust = 0.1;
		files = "test_surf_normal_*";
		lucidity = 1;
		rough = 0.05;
		soundEnviron = "normal";
	};
	class tiling: concrete
	{
		AIAvoidStance = 1;
		character = "Empty";
		files = "tasky*";
		soundEnviron = "tiling";
	};
	class trash: GdtRubble
	{
		character = "Empty";
		files = "odpadky*";
	};
	class trash_exp: trash
	{
		files = "surface_trash*";
	};
	class Water
	{
		character = "Empty";
		dust = 0;
		files = "more_anim*";
		friction = 0.9;
		grassCover = 0;
		impact = "hitWater";
		isWater = 1;
		lucidity = 1;
		maxSpeedCoef = 1;
		restitution = 0;
		rough = 0;
		soundEnviron = "water";
	};
	class wavyMetal: steel
	{
		character = "Empty";
		files = "vlnityplech*";
		soundEnviron = "wavymetal";
	};
	class wavyMetal_exp: wavyMetal
	{
		files = "surface_wavy_metal";
		soundEnviron = "wavymetal_exp";
	};
	class woodenFloor: concrete
	{
		AIAvoidStance = 1;
		character = "Empty";
		files = "podlaha_prkna*";
		soundEnviron = "int_wood";
	};
};
