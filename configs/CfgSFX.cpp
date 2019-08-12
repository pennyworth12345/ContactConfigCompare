class CfgSFX
{
	access = 1;
	seagull[] = {"A3\sounds_f\dummysound", -20, 1, 100, 1, 0.2, 1, 5};
	class AirAlarmSfx
	{
		Alarm[] = {"A3\Sounds_F\sfx\alarm", 1, 1, 400, 1, 0, 0, 0};
		empty[] = {"", 0, 0, 0, 0, 0, 0, 0};
		sounds[] = {"Alarm"};
	};
	class AlarmSfx
	{
		Alarm[] = {"A3\Sounds_F\sfx\alarm", 1, 1, 400, 1, 0, 0, 0};
		empty[] = {"", 0, 0, 0, 0, 0, 0, 0};
		name = "Alarm";
		sounds[] = {"Alarm"};
	};
	class Balloon_air_pop1
	{
		Pop1[] = {"A3\Sounds_F\sfx\objects\balloon\Balloon_air_01", 1, 1, 100};
	};
	class Balloon_air_pop2
	{
		Pop2[] = {"A3\Sounds_F\sfx\objects\balloon\Balloon_air_02", 1, 1, 100};
	};
	class Balloon_air_pop3
	{
		Pop3[] = {"A3\Sounds_F\sfx\objects\balloon\Balloon_air_03", 1, 1, 100};
	};
	class Balloon_water_pop1
	{
		Pop1[] = {"A3\Sounds_F\sfx\objects\balloon\Balloon_water_01", 1, 1, 100};
	};
	class Balloon_water_pop2
	{
		Pop2[] = {"A3\Sounds_F\sfx\objects\balloon\Balloon_water_02", 1, 1, 100};
	};
	class Balloon_water_pop3
	{
		Pop3[] = {"A3\Sounds_F\sfx\objects\balloon\Balloon_water_03", 1, 1, 100};
	};
	class BattlefieldExplosions
	{
		empty[] = {"", 0, 0, 0, 0, 0, 0, 0};
		name = "Sound: Battlefield Explosions";
		sound0[] = {"A3\Sounds_F\environment\ambient\battlefield\battlefield_explosions1", 1, 1, 5000, 1, 0, 5, 10};
		sound1[] = {"A3\Sounds_F\environment\ambient\battlefield\battlefield_explosions2", 1, 1, 5000, 1, 0, 5, 10};
		sound2[] = {"A3\Sounds_F\environment\ambient\battlefield\battlefield_explosions3", 1, 1, 5000, 1, 0, 5, 10};
		sound3[] = {"A3\Sounds_F\environment\ambient\battlefield\battlefield_explosions4", 1, 1, 5000, 1, 0, 5, 10};
		sound4[] = {"A3\Sounds_F\environment\ambient\battlefield\battlefield_explosions5", 1, 1, 5000, 1, 0, 5, 10};
		sounds[] = {"sound0", "sound1", "sound2", "sound3", "sound4"};
	};
	class BattlefieldFirefight: BattlefieldExplosions
	{
		empty[] = {"", 0, 0, 0, 0, 0, 0, 0};
		name = "Sound: Battlefield Firefight";
		random[] = {"sound0", "sound1", "sound2", "sound3"};
		sound0[] = {"A3\Sounds_F\environment\ambient\battlefield\battlefield_firefight1", 1, 1, 5000, 1, 0, 5, 10};
		sound1[] = {"A3\Sounds_F\environment\ambient\battlefield\battlefield_firefight2", 1, 1, 5000, 1, 0, 5, 10};
		sound2[] = {"A3\Sounds_F\environment\ambient\battlefield\battlefield_firefight3", 1, 1, 5000, 1, 0, 5, 10};
		sound3[] = {"A3\Sounds_F\environment\ambient\battlefield\battlefield_firefight4", 1, 1, 5000, 1, 0, 5, 10};
	};
	class BattlefieldHeli: BattlefieldExplosions
	{
		name = "Sound: Battlefield Helicopter Flyby";
		random[] = {"sound0", "sound1", "sound2"};
		sound[] = {"A3\Sounds_F\environment\ambient\battlefield\battlefield_firefight1", 0.316228, 1};
		sound0[] = {"A3\Sounds_F\environment\ambient\battlefield\battlefield_heli1", 0.316228, 1, 1000, 0.2, 10, 25, 30};
		sound1[] = {"A3\Sounds_F\environment\ambient\battlefield\battlefield_heli2", 0.316228, 1, 1000, 0.2, 10, 25, 30};
		sound2[] = {"A3\Sounds_F\environment\ambient\battlefield\battlefield_heli3", 0.316228, 1, 1000, 0.2, 10, 25, 30};
	};
	class BattlefieldJet: BattlefieldExplosions
	{
		name = "Sound: Battlefield Jet Flyby";
		random[] = {"sound0", "sound1", "sound2"};
		sound[] = {"A3\Sounds_F\environment\ambient\battlefield\battlefield_jet1", 0.316228, 1};
		sound0[] = {"A3\Sounds_F\environment\ambient\battlefield\battlefield_jet1", 0.316228, 1, 1000, 0.2, 10, 25, 30};
		sound1[] = {"A3\Sounds_F\environment\ambient\battlefield\battlefield_jet2", 0.316228, 1, 1000, 0.2, 10, 25, 30};
		sound2[] = {"A3\Sounds_F\environment\ambient\battlefield\battlefield_jet3", 0.316228, 1, 1000, 0.2, 10, 25, 30};
	};
	class Birds
	{
		empty[] = {"", 0, 0, 0, 0, 0, 0, 0};
		name = "Sound: Birds";
		sound0[] = {"A3\Sounds_F\environment\animals\birds\birds1", 0.316228, 1, 1000, 0.2, 0, 15, 30};
		sound1[] = {"A3\Sounds_F\environment\animals\birds\birds2", 0.316228, 1, 1000, 0.2, 0, 15, 30};
		sound2[] = {"A3\Sounds_F\environment\animals\birds\birds3", 0.316228, 1, 1000, 0.2, 0, 15, 30};
		sound3[] = {"A3\Sounds_F\environment\animals\birds\birds4", 0.316228, 1, 1000, 0.2, 0, 15, 30};
		sound4[] = {"A3\Sounds_F\environment\animals\birds\birds5", 0.316228, 1, 1000, 0.2, 0, 15, 30};
		sounds[] = {"sound0", "sound1", "sound2", "sound3", "sound4"};
		titles[] = {};
	};
	class CA_Expl1
	{
		empty[] = {"", 0, 0, 0, 0, 1, 5, 20};
		sound1[] = {"A3\sounds_f\dummysound", 10, 1, 700, 0.5, 0, 2, 5};
		sounds[] = {"sound1"};
	};
	class Church
	{
		largeBell[] = {"A3\Sounds_F\environment\structures\church\bell_big", 0.891251, 1, 250};
		smallBell[] = {"A3\Sounds_F\environment\structures\church\bell_small", 0.891251, 1, 250};
	};
	class debugsound
	{
		empty[] = {"", 0, 0, 0, 0, 0, 0, 0};
		name = "Debug";
		sound0[] = {"A3\Sounds_F\debugsound", 1, 1, 500, 1, 0, 0, 0};
		sounds[] = {"sound0"};
		titles[] = {};
	};
	class DeconShower_01_loop
	{
		empty[] = {"", 0, 0, 0, 0, 0, 0, 0};
		sound0[] = {"\a3\Sounds_F_Enoch\Assets\Props\DeconShower_Spray_Loop_01", 2.6, 1, 50, 1, 0, 0, 0};
		sounds[] = {"sound0"};
	};
	class DestrHouse
	{
		DestrHouse1[] = {"A3\Sounds_F\sfx\special_sfx\Building_Destroy_01", 6.30957, 1, 150, 0.1, 0, 0, 0};
		DestrHouse2[] = {"A3\Sounds_F\sfx\special_sfx\Building_Destroy_02", 6.30957, 1, 150, 0.1, 0, 0, 0};
		DestrHouse3[] = {"A3\Sounds_F\sfx\special_sfx\Building_Destroy_03", 6.30957, 1, 150, 0.1, 0, 0, 0};
		DestrHouse4[] = {"A3\Sounds_F\sfx\special_sfx\Building_Destroy_04", 6.30957, 1, 150, 0.1, 0, 0, 0};
		DestrHouse5[] = {"A3\Sounds_F\sfx\special_sfx\Building_Destroy_05", 6.30957, 1, 150, 0.1, 0, 0, 0};
		DestrHouse6[] = {"A3\Sounds_F\sfx\special_sfx\Building_Destroy_06", 6.30957, 1, 150, 0.1, 0, 0, 0};
		DestrHouse7[] = {"A3\Sounds_F\sfx\special_sfx\Building_Destroy_07", 6.30957, 1, 150, 0.1, 0, 0, 0};
		DestrHouse8[] = {"A3\Sounds_F\sfx\special_sfx\Building_Destroy_08", 6.30957, 1, 150, 0.1, 0, 0, 0};
		DestrHouse9[] = {"A3\Sounds_F\sfx\special_sfx\Building_Destroy_08", 6.30957, 0.9, 150, 0.1, 0, 0, 0};
		empty[] = {"", 6.30957, 1, 150, 0.1, 0, 0, 0};
		sounds[] = {"DestrHouse1", "DestrHouse2", "DestrHouse3", "DestrHouse4", "DestrHouse5", "DestrHouse6", "DestrHouse7", "DestrHouse8", "DestrHouse9"};
	};
	class DestrHousePart
	{
		DestrHouse1[] = {"A3\Sounds_F\sfx\special_sfx\Building_Destroy_01", 6.30957, 1, 150, 0.1, 0, 0, 0};
		DestrHouse2[] = {"A3\Sounds_F\sfx\special_sfx\Building_Destroy_02", 6.30957, 1, 150, 0.1, 0, 0, 0};
		DestrHouse3[] = {"A3\Sounds_F\sfx\special_sfx\Building_Destroy_03", 6.30957, 1, 150, 0.1, 0, 0, 0};
		DestrHouse4[] = {"A3\Sounds_F\sfx\special_sfx\Building_Destroy_04", 6.30957, 1, 150, 0.1, 0, 0, 0};
		DestrHouse5[] = {"A3\Sounds_F\sfx\special_sfx\Building_Destroy_05", 6.30957, 1, 150, 0.1, 0, 0, 0};
		DestrHouse6[] = {"A3\Sounds_F\sfx\special_sfx\Building_Destroy_06", 6.30957, 1, 150, 0.1, 0, 0, 0};
		DestrHouse7[] = {"A3\Sounds_F\sfx\special_sfx\Building_Destroy_07", 6.30957, 1, 150, 0.1, 0, 0, 0};
		DestrHouse8[] = {"A3\Sounds_F\sfx\special_sfx\Building_Destroy_08", 6.30957, 1, 150, 0.1, 0, 0, 0};
		DestrHouse9[] = {"A3\Sounds_F\sfx\special_sfx\Building_Destroy_08", 6.30957, 0.9, 150, 0.1, 0, 0, 0};
		empty[] = {"", 6.30957, 1, 150, 0.1, 0, 0, 0};
		sounds[] = {"DestrHouse1", "DestrHouse2", "DestrHouse3", "DestrHouse4", "DestrHouse5", "DestrHouse6", "DestrHouse7", "DestrHouse8", "DestrHouse9"};
	};
	class ERA_Explosion
	{
		empty[] = {"", 0, 0, 0, 0, 0, 0, 0};
		random[] = {"sound0", "sound1", "sound2", "sound3", "sound4"};
		sound0[] = {"A3\Sounds_F\vehicles2\armor\shared\Explosive_Reactive_Armor\Era_Exp_01", 3.98107, 1, 250, 0.2, 10, 10, 10};
		sound1[] = {"A3\Sounds_F\vehicles2\armor\shared\Explosive_Reactive_Armor\Era_Exp_02", 3.98107, 1, 250, 0.2, 10, 10, 10};
		sound2[] = {"A3\Sounds_F\vehicles2\armor\shared\Explosive_Reactive_Armor\Era_Exp_03", 3.98107, 1, 250, 0.2, 10, 10, 10};
		sound3[] = {"A3\Sounds_F\vehicles2\armor\shared\Explosive_Reactive_Armor\Era_Exp_04", 3.98107, 1, 250, 0.2, 10, 10, 10};
		sound4[] = {"A3\Sounds_F\vehicles2\armor\shared\Explosive_Reactive_Armor\Era_Exp_05", 3.98107, 1, 250, 0.2, 10, 10, 10};
		sounds[] = {"sound0", "sound1", "sound2", "sound3", "sound4"};
		titles[] = {};
	};
	class Fire
	{
		empty[] = {"", 0, 0, 0, 0, 0, 0, 0};
		name = "Sound: Fire";
		sound0[] = {"A3\Sounds_F\sfx\fire1_loop", 1, 1, 50, 1, 0, 0, 0};
		sounds[] = {"sound0"};
		titles[] = {};
	};
	class Fire_camp
	{
		empty[] = {"", 0, 0, 0, 0, 0, 0, 0};
		sound0[] = {"A3\Sounds_F\sfx\fire2_loop", 1, 1, 40, 1, 0, 0, 0};
		sounds[] = {"sound0"};
		titles[] = {};
	};
	class Fire_camp_small
	{
		empty[] = {"", 0, 0, 0, 0, 0, 0, 0};
		sound0[] = {"A3\Sounds_F\sfx\fire3_loop", 1, 1, 30, 1, 0, 0, 0};
		sounds[] = {"sound0"};
		titles[] = {};
	};
	class FlareLoop
	{
		empty[] = {"", 0, 0, 0, 0, 0, 0, 0};
		flare[] = {"a3\missions_f_beta\data\sounds\Showcase_Night\flare_loop", 1, 1, 400, 1, 0, 0, 0};
		sounds[] = {"flare"};
	};
	class Owl
	{
		empty[] = {"", 0, 0, 0, 0, 0, 0, 0};
		name = "Sound: Owl";
		sound0[] = {"A3\Sounds_F\environment\animals\birds\owl1", 0.316228, 1, 1000, 0.2, 0, 15, 30};
		sound1[] = {"A3\Sounds_F\environment\animals\birds\owl2", 0.316228, 1, 1000, 0.2, 0, 15, 30};
		sound2[] = {"A3\Sounds_F\environment\animals\birds\owl3", 0.316228, 1, 1000, 0.2, 0, 15, 30};
		sounds[] = {"sound0", "sound1", "sound2"};
		titles[] = {};
	};
	class Preview
	{
		effect[] = {"A3\Sounds_f\sfx\UI\volume_preview\sfx.wss", 1, 1};
		music[] = {"A3\sounds_f\sfx\UI\volume_preview\music.wss", 1, 1};
		speech[] = {"A3\sounds_f\sfx\UI\volume_preview\radio.wss", 1, 1};
	};
	class SCBACylinder_01_loop
	{
		empty[] = {"", 0, 0, 0, 0, 0, 0, 0};
		sound0[] = {"\a3\Sounds_F\weapons\smokeshell\smoke_loop2", 1.6, 1, 20, 1, 0, 0, 0};
		sounds[] = {"sound0"};
	};
	class SFX_ImpactHay
	{
		empty[] = {"", 0, 0, 0, 0, 0, 0, 0};
		Hit01[] = {"", 1.5, 1, 500, 0.0625, 5, 5, 5};
		Hit02[] = {"", 1.5, 1, 500, 0.0625, 5, 5, 5};
		Hit03[] = {"", 1.5, 1, 500, 0.0625, 5, 5, 5};
		Hit04[] = {"", 1.5, 1, 500, 0.0625, 5, 5, 5};
		Hit05[] = {"", 1.5, 1, 500, 0.0625, 5, 5, 5};
		Hit06[] = {"", 1.5, 1, 500, 0.0625, 5, 5, 5};
		Hit07[] = {"", 1.5, 1, 500, 0.0625, 5, 5, 5};
		Hit08[] = {"", 0.8, 1.05, 500, 0.0625, 5, 5, 5};
		Hit09[] = {"", 0.8, 0.95, 500, 0.0625, 5, 5, 5};
		Hit10[] = {"", 0.8, 1.05, 500, 0.0625, 5, 5, 5};
		Hit11[] = {"", 0.8, 0.95, 500, 0.0625, 5, 5, 5};
		Hit12[] = {"", 0.8, 0.95, 500, 0.0625, 5, 5, 5};
		Hit13[] = {"", 0.8, 1.05, 500, 0.0625, 5, 5, 5};
		Hit14[] = {"", 0.8, 0.95, 500, 0.0625, 5, 5, 5};
		Hit15[] = {"", 0.9, 0.97, 500, 0.0625, 5, 5, 5};
		Hit16[] = {"", 0.9, 1.02, 500, 0.0625, 5, 5, 5};
		sounds[] = {"Hit01", "Hit02", "Hit03", "Hit04", "Hit05", "Hit06", "Hit07", "Hit08", "Hit09", "Hit10", "Hit11", "Hit12", "Hit13", "Hit14", "Hit15", "Hit16"};
		titles[] = {};
	};
	class Simulation_Fatal_SFX
	{
		empty[] = {"", 0, 0, 0, 0, 0, 0, 0};
		name = "Simulation Lethal Damage";
		Simulation_Fatal[] = {"\A3\Sounds_F_Bootcamp\SFX\VR\Simulation_Fatal", 1, 1, 400, 1, 0, 0, 0};
		sounds[] = {"Simulation_Fatal"};
	};
	class Simulation_Restart_SFX
	{
		empty[] = {"", 0, 0, 0, 0, 0, 0, 0};
		name = "Simulation Restart";
		Simulation_Restart[] = {"\A3\Sounds_F_Bootcamp\SFX\VR\Simulation_Restart", 1, 1, 400, 1, 0, 0, 0};
		sounds[] = {"Simulation_Restart"};
	};
	class SmokeWreck1
	{
		empty[] = {"", 0, 0, 0, 0, 0, 0, 0};
		name = "Smoking Wreck 01";
		Smoke01[] = {"A3\Sounds_F\sfx\special_sfx\small_fire_smoke_wreck_Heli_Attack_01_1", 0.1, 1, 60, 1, 0, 0, 0};
		sounds[] = {"Smoke01"};
	};
	class SparklesWreck1
	{
		empty[] = {"", 0, 0, 0, 0, 0, 0, 0};
		name = "Electric Wreck 01";
		sounds[] = {"Sparkles01"};
		Sparkles01[] = {"A3\Sounds_F\sfx\special_sfx\sparkles_wreck_1", 0.177828, 1, 60, 1, 5, 5, 5};
	};
	class SparklesWreck2
	{
		empty[] = {"", 0, 0, 0, 0, 0, 0, 0};
		name = "Electric Wreck 02";
		sounds[] = {"Sparkles02"};
		Sparkles02[] = {"A3\Sounds_F\sfx\special_sfx\sparkles_wreck_2", 0.177828, 1, 60, 1, 5, 5, 5};
	};
	class StreamSfx
	{
		empty[] = {"", 0, 0, 0, 0, 0, 0, 0};
		sounds[] = {"Stream01"};
		Stream01[] = {"A3\sounds_f\dummysound", 0.316228, 1, 60, 1, 1, 1, 1};
	};
	class Topic_Deselection_SFX
	{
		empty[] = {"", 0, 0, 0, 0, 0, 0, 0};
		name = "Topic Deselection";
		sounds[] = {"Topic_Deselection"};
		Topic_Deselection[] = {"\A3\Sounds_F_Bootcamp\SFX\VR\Topic_Deselection", 1, 1, 400, 1, 0, 0, 0};
	};
	class Topic_Done_SFX
	{
		empty[] = {"", 0, 0, 0, 0, 0, 0, 0};
		name = "Topic Done";
		sounds[] = {"Topic_Done"};
		Topic_Done[] = {"\A3\Sounds_F_Bootcamp\SFX\VR\Topic_Done", 1, 1, 400, 1, 0, 0, 0};
	};
	class Topic_Selection_SFX
	{
		empty[] = {"", 0, 0, 0, 0, 0, 0, 0};
		name = "Topic Selection";
		sounds[] = {"Topic_Selection"};
		Topic_Selection[] = {"\A3\Sounds_F_Bootcamp\SFX\VR\Topic_Selection", 1, 1, 400, 1, 0, 0, 0};
	};
	class Topic_Trigger_SFX
	{
		empty[] = {"", 0, 0, 0, 0, 0, 0, 0};
		name = "Topic Trigger";
		sounds[] = {"Topic_Trigger"};
		Topic_Trigger[] = {"\A3\Sounds_F_Bootcamp\SFX\VR\Topic_Trigger", 1, 1, 400, 1, 0, 0, 0};
	};
};
