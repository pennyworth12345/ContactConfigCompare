class CfgContact
{
	class Antennas
	{
		class AlienComms
		{
			displayName = "Alien Entity";
			frequency[] = {"AlienPuzzle00"};
			power = 5;
			sensitivity = -50;
		};
		class AlienMother
		{
			displayName = "AFO";
			frequency[] = {"AlienMother"};
			power = 10000;
			sensitivity = -100;
		};
		class AlienTracker
		{
			displayName = "Alien Entity";
			frequency[] = {"AlienTracker"};
			power = 195.485;
			sensitivity = -50;
		};
		class Antenna_01
		{
			angle = 60;
			frequency[] = {78, 89};
			gain = 1;
			power = 10;
			scope = 1;
			sensitivity = -70;
			spectrumAnalyzer = "Default";
		};
		class Antenna_02
		{
			angle = 60;
			frequency[] = {390, 500};
			gain = 1;
			power = 10;
			scope = 1;
			sensitivity = -70;
			spectrumAnalyzer = "Default";
		};
		class Antenna_03
		{
			angle = 60;
			frequency[] = {433.76};
			gain = 1;
			power = 10;
			scope = 1;
			sensitivity = -70;
			spectrumAnalyzer = "Default";
		};
		class Antenna_Passive
		{
			frequency[] = {78, 500};
			gain = 1;
			scope = 1;
			sensitivity = -70;
		};
		class C01
		{
			displayName = "Gray Wolf HQ";
			frequency[] = {"C01"};
			gain = 2;
			power = 1000;
			sensitivity = -80;
		};
		class C01_Squad: C01
		{
			displayName = "Unknown Squad";
			frequency[] = {"C01"};
			gain = 1;
			power = 5;
			sensitivity = -70;
		};
		class C02: C01
		{
			frequency[] = {"C02"};
		};
		class C02_Squad: C01_Squad
		{
			frequency[] = {"C02"};
		};
		class C03: C01
		{
			frequency[] = {"C03"};
		};
		class C03_Squad: C01_Squad
		{
			frequency[] = {"C03"};
		};
		class C04: C01
		{
			frequency[] = {"C04"};
		};
		class C04_Squad: C01_Squad
		{
			frequency[] = {"C04"};
		};
		class C05: C01
		{
			frequency[] = {"C05"};
		};
		class C05_Squad: C01_Squad
		{
			frequency[] = {"C05"};
		};
		class C06: C01
		{
			frequency[] = {"C06"};
		};
		class C06_Squad: C01_Squad
		{
			frequency[] = {"C06"};
		};
		class C07: C01
		{
			frequency[] = {"C07"};
		};
		class C07_Squad: C01_Squad
		{
			frequency[] = {"C07"};
		};
		class C08: C01
		{
			frequency[] = {"C08"};
		};
		class C08_Squad: C01_Squad
		{
			frequency[] = {"C08"};
		};
		class C09: C01
		{
			frequency[] = {"C09"};
		};
		class C09_Squad: C01_Squad
		{
			frequency[] = {"C09"};
		};
		class C10: C01
		{
			frequency[] = {"C10"};
		};
		class C10_Squad: C01_Squad
		{
			frequency[] = {"C10"};
		};
		class CarKeys
		{
			displayName = "Key Fob";
			frequency[] = {"CarKeys"};
			power = 1;
			sensitivity = -60;
		};
		class Detonator
		{
			displayName = "Remote Detonator";
			frequency[] = {"Detonator"};
			power = 1;
			sensitivity = -60;
		};
		class DistressBeacon
		{
			displayName = "Unknown Beacon";
			frequency[] = {"DistressBeacon"};
			power = 1;
			sensitivity = -60;
		};
		class FMRadio
		{
			displayName = "Rodzanica Tower";
			frequency[] = {"FMRadio"};
			power = 10000;
		};
		class Home
		{
			displayName = "NATO Net";
			frequency[] = {"Home"};
			power = 50;
			sensitivity = -100;
		};
		class MiniUGV
		{
			displayName = "";
			frequency[] = {"UAVBlu"};
			power = 0.01;
			sensitivity = -50;
		};
		class Prototype_Drone: Prototype_Player
		{
			angle = 180;
			frequency[] = {1425, 1425, 1500, 1500, 1575, 1575};
			gain = 15;
			power = 200;
			sensitivity = -40;
			spectrumAnalyzer = "Default";
		};
		class Prototype_dummySignal: Prototype_Player
		{
			angle = 180;
			displayName = "Morse Code";
			frequency[] = {1590, 1590};
			gain = 15;
			power = 100;
			sensitivity = 0;
			spectrumAnalyzer = "Default";
		};
		class Prototype_Local: Prototype_Player
		{
			angle = 180;
			frequency[] = {1955, 1965};
			gain = 15;
			power = 100;
			sensitivity = 0;
			spectrumAnalyzer = "Default";
		};
		class Prototype_Player
		{
			angle = 45;
			frequency[] = {1000, 2000};
			gain = 1;
			power = 0;
			scope = 1;
			sensitivity = -60;
			spectrumAnalyzer = "Default";
		};
		class Prototype_Receiver: Prototype_Player
		{
			angle = 220;
			frequency[] = {1760, 1760};
			gain = 1;
			power = 50000;
			sensitivity = 0;
			spectrumAnalyzer = "Default";
		};
		class Prototype_Tower: Prototype_Player
		{
			angle = 270;
			frequency[] = {1700, 1700};
			gain = 15;
			power = 100000;
			sensitivity = 0;
			spectrumAnalyzer = "Default";
		};
		class Prototype_UFO: Prototype_Player
		{
			angle = 180;
			frequency[] = {1230, 1230};
			gain = 15;
			power = 1e+006;
			sensitivity = -100;
			spectrumAnalyzer = "Default";
		};
		class Prototype_UFO_Left: Prototype_Player
		{
			angle = 180;
			frequency[] = {1210, 1210};
			gain = 15;
			power = 100000;
			sensitivity = 0;
			spectrumAnalyzer = "Default";
		};
		class Prototype_UFO_Right: Prototype_Player
		{
			angle = 180;
			frequency[] = {1250, 1250};
			gain = 15;
			power = 100000;
			sensitivity = 0;
			spectrumAnalyzer = "Default";
		};
		class RadioTracker
		{
			displayName = "";
			frequency[] = {"RadioTracker"};
			gain = 1;
			power = 3;
			sensitivity = -70;
		};
		class Russians
		{
			displayName = "";
			frequency[] = {"Russians"};
			power = 10;
			sensitivity = -70;
		};
		class Test_Directional
		{
			angle = 45;
			frequency[] = {1000, 2000};
			gain = 1;
			power = 10;
			scope = 1;
			sensitivity = -60;
			spectrumAnalyzer = "Default";
		};
		class UAV
		{
			displayName = "";
			frequency[] = {"UAV"};
			power = 20;
			sensitivity = -50;
		};
		class UAVHack
		{
			displayName = "";
			frequency[] = {"UAVHack"};
			power = 0.0005;
			sensitivity = -30;
		};
		class WalkieTalkie
		{
			displayName = "Walkie Talkie";
			frequency[] = {"WalkieTalkie"};
			power = 2;
			sensitivity = -60;
		};
	};
	class Behavior
	{
		class CombatDrone
		{
			class Avoid
			{
				condition = "deltaHitMax 	+ linearconversion [0.55,0.15,breathEffectivity,0,1,true] 	+ (1 - (ceil combatModuleAlive max 0 min 1))";
				fsm = "\a3\Functions_F_Contact\Behavior\Drone\avoid.fsm";
				interrupt = 1;
			};
			class CollectMatter
			{
				condition = "(ceil proximityMen max 0 min 1) 	* linearconversion [0,0.4,breathEffectivity,0,1,true]*6 	* (1 - (ceil deltaHitMax max 0 min 1)) 	* (ceil combatModuleAlive max 0 min 1) 	* linearconversion [3,0.99,matterModuleAlive,0,1,true]";
				fsm = "\a3\Functions_F_Contact\Behavior\Drone\collectMatter.fsm";
				interrupt = 1;
			};
			class Default
			{
				condition = "0";
				fsm = "\a3\Functions_F_Contact\Behavior\Drone\default.fsm";
			};
			class GravityBurst
			{
				condition = "3*((ceil proximityCloseMen max 0 min 1) 	* linearconversion [1,0.35,breathEffectivity,0,1,true]) 	* (1 - (ceil playerRagdoll max 0 min 1))";
				fsm = "\a3\Functions_F_Contact\Behavior\Drone\gravityBurst.fsm";
				interrupt = 0;
			};
			class GravityCannon
			{
				condition = "(ceil proximityMen max 0 min 1) 	* linearconversion [0,0.4,breathEffectivity,0,1,true] 	* (1 - (ceil deltaHitMax max 0 min 1)) 	* (ceil combatModuleAlive max 0 min 1) 	* (matterModuleAlive)*3 	* (1 - (ceil actionInProgress max 0 min 1))";
				fsm = "\a3\Functions_F_Contact\Behavior\Drone\gravityCannon.fsm";
				interrupt = 1;
			};
			class Investigate
			{
				condition = "(jammed - breathEffectivity)*10";
				fsm = "\a3\Functions_F_Contact\Behavior\Drone\investigate.fsm";
			};
			class Jammed
			{
				condition = "(jammed)*20";
				fsm = "\a3\Functions_F_Contact\Behavior\Drone\jammed.fsm";
			};
			class Jump
			{
				condition = "0";
				fsm = "\a3\Functions_F_Contact\Behavior\Drone\jump.fsm";
			};
			class Light
			{
				condition = "linearconversion [0.6,0.5,breathEffectivity,0,1,true] 	* linearconversion [	0.5,	1.0,danger,0,1,true] 	* (1 - (ceil proximityDelta max 0 min 1)) 	+ linearconversion [0.0,0.1,deltaHitMax,0,1,true]";
				fsm = "\a3\Functions_F_Contact\Behavior\Drone\light.fsm";
				interrupt = 1;
			};
			class MissileSwarm
			{
				condition = "linearconversion [3,10,proximityMen,0,1,true]*2 	* (1 - (ceil deltaHitMax max 0 min 1))";
				fsm = "\a3\Functions_F_Contact\Behavior\Drone\missileSwarm.fsm";
				interrupt = 1;
			};
			class Patrol
			{
				condition = "(1 - (ceil proximityMen max 0 min 1))";
				fsm = "\a3\Functions_F_Contact\Behavior\Drone\patrol.fsm";
			};
		};
		class Drone
		{
			class Avoid
			{
				condition = "(1 - abs(linearconversion [	0.5,	1.0 + 0.1,danger,0,1,true] - linearconversion [	1.0 + 0.1,	0.5,danger,0,1,true])) 	+ (deltaHitMax) 	+ (1 - (ceil scienceModuleAlive max 0 min 1))";
				fsm = "\a3\Functions_F_Contact\Behavior\Drone\avoid.fsm";
				interrupt = 1;
			};
			class Default
			{
				condition = "0";
				fsm = "\a3\Functions_F_Contact\Behavior\Drone\default.fsm";
			};
			class GravityBurst
			{
				condition = "linearconversion [	0.5,	1.0,danger,0,1,true] 	* (1 - (ceil playerRagdoll max 0 min 1))";
				fsm = "\a3\Functions_F_Contact\Behavior\Drone\gravityBurst.fsm";
				interrupt = 0;
			};
			class Investigate
			{
				condition = "(1 - abs(linearconversion [	0.0,	0.5,danger,0,1,true] - linearconversion [	0.5,	0.0,danger,0,1,true])) 	+ ((1 - (ceil danger max 0 min 1)) 	* (ceil proximityDelta max 0 min 1)*10) 	+ jammed*10";
				fsm = "\a3\Functions_F_Contact\Behavior\Drone\investigate.fsm";
			};
			class Jump
			{
				condition = "0";
				fsm = "\a3\Functions_F_Contact\Behavior\Drone\jump.fsm";
			};
			class Light
			{
				condition = "linearconversion [0.8,0.7,breathEffectivity,0,1,true] 	* linearconversion [	0.5,	1.0,danger,0,1,true]";
				fsm = "\a3\Functions_F_Contact\Behavior\Drone\light.fsm";
				interrupt = 1;
			};
			class Research
			{
				condition = "(1 - (ceil danger max 0 min 1)) 	* (ceil scienceModuleAlive max 0 min 1)";
				fsm = "\a3\Functions_F_Contact\Behavior\Drone\research.fsm";
			};
		};
	};
	class Breathing
	{
		class Charge
		{
			curve[] = {{0, 0, 0}, {0.1, 0, 0}, {1, 1, 0}, {1, 0, 0}, {1, 1, 0}, {1, 0, 0}};
			duration[] = {8, 8};
			normalize = 1;
		};
		class Default
		{
			curve[] = {{0, 0, 0}, {0.0979772, 0, 0}, {0, 1, 0}, {0.205058, 0, 0}, {0.398555, 0, 0}, {1, 0, 0}};
			duration[] = {0.5, 2};
			normalize = 1;
		};
		class Hold
		{
			curve[] = {{0, 0, 0}, {0, 0, 0}};
			duration[] = {1, 4};
			normalize = 0;
		};
	};
	class Constants
	{
		moveDeceptionDuration[] = {300, 300, 300};
		patrolRadius = 100;
		radioHandshakeDuration = 30;
		radioIgnoredSignalTypes[] = {"", "default", "ping"};
		radioUnknownSignalTypes[] = {"noise", "armybase", "armysquad"};
		radioWarningDuration = 300;
	};
	class Diary
	{
		class AlienSketch
		{
			description = "";
			icon = "";
			isLeaflet = 1;
			parent = "Intel";
			texture = "\A3\Missions_F_Contact\Data\Img\Freeroam\freeroam_alien_sketch_ca";
			title = "Alien Sketch";
		};
		class Briefing
		{
			description = "My personal notes on the situation...";
			icon = "";
			title = "Personal";
		};
		class Cheats
		{
			description = "Internal version cheats for quick tests (do not use for full play-throughs)";
			icon = "";
			title = "Debug Cheats";
		};
		class EvacutationNotice
		{
			description = "NOTICE OF MANDATORY EVACUATION<br /><br />Toxic vapors have leaked from the former SIŁA Factory. This area is NOT safe!<br /><br />In accordance with Ministry of Health legislation (Act on Mass Event Safety [2023]), you are required to leave the Nadbór region immediately.<br /><br />* Open shelters are located at Radunin and Topolin.<br />* Listen to a battery-powered radio and follow local evacuation instructions.<br />* Collect Emergency Supply Kits from military personnel.<br />* Take your pets, but only service animals are permitted in public shelters.<br />* Follow the recommended evacuation routes. Do not take shortcuts. Alternative routes may be blocked.<br /><br />Do not remain in the affected area. Doing so endangers your life and the lives of first responders.";
			icon = "";
			isLeaflet = 1;
			parent = "Intel";
			tags = "font='RobotoCondensed' size='0.8'";
			texture = "\A3\Missions_F_Contact\Data\Img\Freeroam\freeroam_evacuation_notice_ca";
			title = "Evacuation Notice";
		};
		class FactoryPhoto
		{
			description = "";
			icon = "";
			isLeaflet = 1;
			parent = "Intel";
			texture = "\A3\Missions_F_Contact\Data\Img\Freeroam\freeroam_research_site_photo_ca";
			title = "Research Site Photo Evidence";
		};
		class FreeRoam1
		{
			description = "First Contact...<br /><br />Imagine the Indians of the New World greeted Columbus with arrows. That's about where we are now. Actually, no; our situation's worse. Imagine they did that, then fought on the beach with another tribe. My only hope is these aliens are as disinterested in us as they seem - but then, why are they here?<br /><br />Lieutenant Kingsly wants us to gather intel, although that won't exactly be easy with all the LDF around. Suffice to say, we're none too popular after Corporal Stype's stunt with the explosives at Camp Kresnik. Seems it's true what they say: the road to hell really is littered with good intentions. I guess, whatever happens, it's going to be a long night.";
			icon = "";
			parent = "Briefing";
			title = "Anomalous Phenomena";
		};
		class FreeRoam2
		{
			description = "It seems we've got a new lead.<br /><br />Our science team has jerry-rigged the Russian neutrino Bouncer on the mini UGV. If it does what we think it does, I should be able to follow the subterranean roots to their tips - which appear to be of interest to the aliens. If we can get just more samples, we might be able to learn if there's a danger from contamination.";
			icon = "";
			parent = "Briefing";
			title = "Carpe Noctem";
		};
		class Intel
		{
			description = "Collected intelligence notes";
			icon = "";
			title = "Intel";
		};
		class Intro1
		{
			description = "So much for Livonia's 'summer sunshine'. And I thought the Pacific was bad...<br /><br />Anyway, seems I've been temporarily assigned to an Electronic Warfare team - we're operating in the thick of it, behind enemy lines. Somehow today is going to reflect that. We're supposed to be attacking an abandoned factory - they gave us tetanus shots and everything. I guess it means we'll see some 'action'...";
			icon = "";
			parent = "Briefing";
			title = "False Negative";
		};
		class Intro1Factory
		{
			description = "";
			icon = "";
			parent = "Intel";
			title = "SIŁA Factory Map";
		};
		class Intro2
		{
			description = "Looks like we're going home early. Or at least, that was the idea.<br /><br />Watching AAN tonight, I'm not so sure we're going anywhere - the National Movement Control Points are completely rammed and all our travel permits need replacing. The Livonians? They're not exactly forward thinkers - you can't just 'move' an army. Cancelling Exercise Electron because of that business at the factory, I mean, talk about a kneejerk reaction. We don't even know what went wrong...";
			icon = "";
			parent = "Briefing";
			title = "Going Dark";
		};
		class Intro2Factory
		{
			description = "";
			icon = "";
			parent = "Intel";
			title = "'Project Gospel' File";
		};
		class Intro3
		{
			description = "No time to write and the glow from a chemlight's fading...<br /><br />If Corporal Jack Stype and I disappear, know this: we saw an alien object in the sky. It passed right overhead. And there is something or some things, buried beneath the SIŁA Factory.<br /><br />Soon enough, everyone will know - we're going to Camp Kresnik.";
			icon = "";
			parent = "Briefing";
			title = "Close Encounters";
		};
		class MapMarking1
		{
			description = "";
			icon = "";
			isLeaflet = 1;
			parent = "Intel";
			texture = "\A3\Missions_F_Contact\Data\Img\Freeroam\freeroam_treasure_map_marking_ca";
			title = "Map Marking";
		};
		class MapMarking2
		{
			description = "";
			icon = "";
			isLeaflet = 1;
			parent = "Intel";
			texture = "\A3\Missions_F_Contact\Data\Img\Freeroam\freeroam_treasure_map_instructions_ca";
			title = "Rough Map Instructions";
		};
		class ModuleSketch
		{
			description = "";
			icon = "";
			isLeaflet = 1;
			parent = "Intel";
			texture = "\A3\Missions_F_Contact\Data\Img\Freeroam\freeroam_alien_tech_sketch_ca";
			title = "Alien Tech Sketch";
		};
		class OrbSketch
		{
			description = "";
			icon = "";
			isLeaflet = 1;
			parent = "Intel";
			texture = "\A3\Missions_F_Contact\Data\Img\Freeroam\freeroam_orb_sketch_ca";
			title = "Strange Orb Sketch";
		};
		class Outro2
		{
			description = "Apparently we share a common interest with the Russians.<br /><br />I guess there's nothing like 'survival' to bring us all together. No doubt, they'll exploit this mess to their advantage but right now, we have no choice. If we can't stop the LDF's offensive, everything is lost.";
			icon = "";
			parent = "Briefing";
			title = "Elimination Coda";
		};
		class Outro2Cheats
		{
			description = "LWin+1: Skip Briefing<br />LWin+2: Skip to Anti-ET 1 Done<br />LWin+3: Skip to all Anti-ET Done<br />LWin+4: Skip to Probe Core Secured<br />LWin+5: Skip to Extraction";
			icon = "";
			parent = "Cheats";
			title = "Outro2 - Cheats";
		};
		class RootResearch1
		{
			description = "There are limits to what we can achieve with the root cap in situ at the SIŁA Factory.<br /><br />Clearly, it is part of a much larger structure. This is why I'm filing a formal request for the creation of a pilot hole - and yes, it will involve 'conspicuous' drilling equipment and contractors. Simply put, there's no way round it. The discovery is far too deep. If you want to establish linkage with the specimen on the hill, we must go deeper.";
			icon = "";
			isLeaflet = 1;
			parent = "Intel";
			texture = "\A3\Missions_F_Contact\Data\Img\Freeroam\freeroam_pilot_hole_request_ca";
			title = "Pilot Hole Equipment Request";
		};
		class RootResearch2
		{
			description = "Dr. Lem, I know you're busy. I'm summarizing here.<br /><br />Today's results on the infrared scan. The internal component of the root's internode, colloquially referred to as the 'tongue', gave a marked response to the thermal signatures provided. Dr. Čapek believes this could be an evolutionary trait. Personally, I am not convinced - at least, not until we conclude our preliminary tests.<br /><br />Nevertheless, on each occasion when thermal signatures were applied in close proximity, the tongue retracted. If it is indeed organic, it will be utterly incongruous with the syntheticity observed elsewhere. Of course, we'll know more once the science bot and genome sequencing equipment arrives.";
			icon = "";
			isLeaflet = 1;
			parent = "Intel";
			texture = "\A3\Missions_F_Contact\Data\Img\Freeroam\freeroam_research_life_sensing_ca";
			title = "Root Research: Life Sensing";
		};
		class RootResearch3
		{
			description = "The sample we collected from the root in the field has biomineralized. There is nothing left but a crystalline matter, black in color.<br /><br />This process has been triggered by an unknown factor. Possibly the injection of some kind of stimulant - maybe even extraterrestrial in origin?<br /><br />I can only speculate on the purpose behind this transformation.";
			icon = "";
			isLeaflet = 1;
			parent = "Intel";
			texture = "\A3\Missions_F_Contact\Data\Img\Freeroam\freeroam_research_biomineralization_ca";
			title = "Root Research: Biomineralization";
		};
		class RootSketch
		{
			description = "";
			icon = "";
			isLeaflet = 1;
			parent = "Intel";
			texture = "\A3\Missions_F_Contact\Data\Img\Freeroam\freeroam_root_specimen_sketch_ca";
			title = "Root Specimen Sketch";
		};
		class RussianBriefing
		{
			description = "";
			icon = "";
			isLeaflet = 1;
			parent = "Intel";
			texture = "\A3\Missions_F_Contact\Data\Img\Freeroam\freeroam_russian_briefing_ca";
			title = "Russian In-Flight Briefing";
		};
		class RussianLeaflet
		{
			description = "Warning!<br />You have been exposed to an unknown pathogen.<br />The Russian Federation must act now to enforce cross-border quarantine measures, in the interests of biological security.<br />Such actions are in accordance with Federal Constitutional Law N 3-FKZ (2021) and WHO International Health Regulations, Article XVI. AM II. (2024).<br />This is not an act of war nor an attempt to undermine the sovereignty of Livonia.<br />For your own safety, remain where you are and avoid human contact. Comply with law enforcement officials, medical workers, and military personnel.";
			icon = "";
			isLeaflet = 1;
			parent = "Intel";
			tags = "font='RobotoCondensed' size='0.8'";
			texture = "\A3\Missions_F_Contact\Data\Img\Freeroam\freeroam_russian_leaflet_ca";
			title = "Russian Leaflet";
		};
		class Test1
		{
			description = "The sample we collected from the root in the field has biomineralized. There is nothing left but a crystalline matter, black in color.<br /><br />This process has been triggered by an unknown factor. Possibly the injection of some kind of stimulant - maybe even extraterrestrial in origin?<br /><br />I can only speculate on the purpose behind this transformation.";
			isLeaflet = 0;
			parent = "Cheats";
			texture = "\a3\Missions_F_Contact\Data\Img\Intro3\intro3_sciencePaper6_ca.paa";
			title = "Test 1";
		};
		class Test2
		{
			description = "The sample we collected from the root in the field has biomineralized. There is nothing left but a crystalline matter, black in color.<br /><br />This process has been triggered by an unknown factor. Possibly the injection of some kind of stimulant - maybe even extraterrestrial in origin?<br /><br />I can only speculate on the purpose behind this transformation.";
			isLeaflet = 1;
			parent = "Cheats";
			texture = "\a3\Missions_F_Contact\Data\Img\Intro3\intro3_sciencePaper6_ca.paa";
			title = "Test 2";
		};
		class UnitPositions1
		{
			description = "";
			icon = "";
			isLeaflet = 1;
			parent = "Intel";
			texture = "\A3\Missions_F_Contact\Data\Img\Freeroam\freeroam_ldf_positions_polana_ca";
			title = "LDF Unit Positions (Polana Area)";
		};
		class UnitPositions2
		{
			description = "";
			icon = "";
			isLeaflet = 1;
			parent = "Intel";
			texture = "\A3\Missions_F_Contact\Data\Img\Freeroam\freeroam_ldf_positions_dolnik_ca";
			title = "LDF Unit Positions (Dolnik Area)";
		};
	};
	class Frequencies
	{
		class AlienMother
		{
			displayName = "AFO";
			frequency = 461.373;
			type = "Ufo";
		};
		class AlienPuzzle00
		{
			displayName = "Alien Comms?";
			frequency = 394.265;
			type = "Ufo";
		};
		class AlienPuzzle01
		{
			displayName = "Alien Comms?";
			frequency = 402.653;
			type = "Ufo";
		};
		class AlienPuzzle02
		{
			displayName = "Alien Comms?";
			frequency = 411.042;
			type = "Ufo";
		};
		class AlienPuzzle03
		{
			displayName = "Alien Comms?";
			frequency = 427.819;
			type = "Ufo";
		};
		class AlienPuzzle04
		{
			displayName = "Alien Comms?";
			frequency = 436.208;
			type = "Ufo";
		};
		class AlienPuzzle05
		{
			displayName = "Alien Comms?";
			frequency = 444.596;
			type = "Ufo";
		};
		class AlienPuzzle06
		{
			displayName = "Alien Comms?";
			frequency = 452.985;
			type = "Ufo";
		};
		class AlienPuzzle07
		{
			displayName = "Alien Comms?";
			frequency = 469.762;
			type = "Ufo";
		};
		class AlienPuzzle08
		{
			displayName = "Alien Comms?";
			frequency = 478.151;
			type = "Ufo";
		};
		class AlienPuzzle09
		{
			displayName = "Alien Comms?";
			frequency = 486.539;
			type = "Ufo";
		};
		class AlienPuzzle10
		{
			displayName = "Alien Comms?";
			frequency = 494.928;
			type = "Ufo";
		};
		class AlienTracker
		{
			displayName = "Alien Entities";
			frequency = 419.43;
			type = "Ufo";
		};
		class C01
		{
			displayName = "LDF Net";
			frequency = 79.54;
			ping = "EM_Squad_Id_01";
			type = "Mil";
		};
		class C02
		{
			displayName = "LDF Net";
			frequency = 80.39;
			ping = "EM_Squad_Id_02";
			type = "Mil";
		};
		class C03
		{
			displayName = "LDF Net";
			frequency = 81.05;
			ping = "EM_Squad_Id_03";
			type = "Mil";
		};
		class C04
		{
			displayName = "LDF Net";
			frequency = 81.72;
			ping = "EM_Squad_Id_04";
			type = "Mil";
		};
		class C05
		{
			displayName = "LDF Net";
			frequency = 82.57;
			ping = "EM_Squad_Id_05";
			type = "Mil";
		};
		class C06
		{
			displayName = "LDF Net";
			frequency = 83.45;
			ping = "EM_Squad_Id_06";
			type = "Mil";
		};
		class C07
		{
			displayName = "LDF Net";
			frequency = 84.61;
			ping = "EM_Squad_Id_07";
			type = "Mil";
		};
		class C08
		{
			displayName = "LDF Net";
			frequency = 85.42;
			ping = "EM_Squad_Id_01";
			type = "Mil";
		};
		class C09
		{
			displayName = "LDF Net";
			frequency = 86.5;
			ping = "EM_Squad_Id_02";
			type = "Mil";
		};
		class C10
		{
			displayName = "LDF Net";
			frequency = 87.19;
			ping = "EM_Squad_Id_03";
			type = "Mil";
		};
		class CarKeys
		{
			displayName = "Remote Keyless Systems";
			frequency = 433.92;
			type = "Civ";
		};
		class Detonator
		{
			displayName = "Remote Detonators";
			frequency = 414.98;
			type = "Mil";
		};
		class DistressBeacon
		{
			displayName = "Distress Beacons";
			frequency = 406;
			type = "Rus";
		};
		class FMRadio
		{
			displayName = "FM Radio";
			frequency = 88.1;
			type = "Civ";
		};
		class Home
		{
			displayName = "NATO Net";
			frequency = 78.24;
			type = "Blu";
		};
		class RadioTracker
		{
			displayName = "Russian Beacons";
			frequency = 86.13;
			type = "Rus";
		};
		class Russians
		{
			displayName = "Unknown Net";
			frequency = 85.9;
			type = "Rus";
		};
		class UAV
		{
			displayName = "Drone Telemetry";
			frequency = 433.76;
			type = "Mil";
		};
		class UAVBlu: UAV
		{
			type = "Blu";
		};
		class UAVHack
		{
			displayName = "Drone Firmware";
			frequency = 436.04;
			type = "Mil";
		};
		class WalkieTalkie
		{
			displayName = "Walkie Talkies";
			frequency = 465.14;
			type = "Civ";
		};
	};
	class FrequencyTypes
	{
		class Blu
		{
			color[] = {0, 0, 0.7, 1};
			displayName = "NATO";
		};
		class Civ
		{
			color[] = {0, 0.35, 0.7, 1};
			displayName = "Civilians";
		};
		class Def
		{
			color[] = {0.7, 0.7, 0.7, 1};
			displayName = "Unidentified";
		};
		class Mil
		{
			color[] = {0.7, 0, 0, 1};
			displayName = "LDF";
		};
		class Rus
		{
			color[] = {0.7, 0.35, 0, 1};
			displayName = "Unknown Army";
		};
		class Ufo
		{
			color[] = {0, 0.7, 0.7, 1};
			displayName = "Aliens";
		};
	};
	class Group
	{
		class at_01
		{
			identity = "Contact_AT_01";
			vehicleClass = "B_CTRG_soldier_GL_LAT_F";
		};
		class mg_01
		{
			identity = "Contact_MG_01";
			vehicleClass = "B_CTRG_soldier_AR_A_F";
		};
		class sniper_01
		{
			identity = "Contact_Sniper_01";
			vehicleClass = "B_ghillie_lsh_F";
		};
	};
	class Hitpoints
	{
		class Templates
		{
			class Default
			{
				hithull = 1;
				hitweakspot1 = 1;
				hitweakspot2 = 1;
				hitweakspot3 = 1;
				hitweakspot4 = 1;
				hitweakspot5 = 1;
			};
		};
	};
	class Locations
	{
		class CampCondrad
		{
			isFreeroam = 1;
			position[] = {6811.6, 1210.42, 0};
			text = "Camp Konrad";
			type = "HandDrawnCamp";
		};
		class CampKresnik
		{
			isFreeroam = 1;
			position[] = {9172.28, 1752.72};
			text = "Camp Kresnik";
			type = "HandDrawnCamp";
		};
		class CampMagnes
		{
			isFreeroam = 1;
			position[] = {5609.49, 3798.31, 0};
			text = "Camp Magnes";
			type = "HandDrawnCamp";
		};
		class PointHopi
		{
			isFreeroam = 1;
			position[] = {9585.99, 1113.65, 0};
			text = "Point Hopi";
			type = "HandDrawnPoint";
		};
	};
	class Missions
	{
		initMission = "Contact_Mission_01";
	};
	class Movement
	{
		class Templates
		{
			class CombatDrone: Default
			{
				curve[] = {{0, 0, 0}, {0.3, 0.9, 0}, {0.5, 0.9, 0}, {0.5, 1.07, 0}, {0.5, 1, 0}};
				curveEnd[] = {{0, 0, 0}, {0.5, 1, 0}, {0.7, 1, 0}, {1, 1, 0}};
				curveRotation[] = {{0, 0, 0}, {0, 2, 0}, {0.9, 1, 0}, {1, 1, 0}};
				maxPulseDistanceFar = 40;
				speed = 14;
			};
			class CombatDrone_Fast: Default
			{
				curve[] = {{0, 0, 0}, {0.3, 0.9, 0}, {0.5, 0.9, 0}, {0.5, 1.07, 0}, {0.5, 1, 0}};
				curveEnd[] = {{0, 0, 0}, {0.5, 1, 0}, {0.7, 1, 0}, {1, 1, 0}};
				curveRotation[] = {{0, 0, 0}, {0, 2, 0}, {0.9, 1, 0}, {1, 1, 0}};
				maxPulseDistanceFar = 40;
				speed = 28;
			};
			class CombatDrone_Long: Default
			{
				curve[] = {{0, 0, 0}, {0.3, 0.9, 0}, {0.5, 0.9, 0}, {0.5, 1.024, 0}, {0.5, 1, 0}};
				curveEnd[] = {{0, 0, 0}, {0.5, 1, 0}, {0.7, 1, 0}, {1, 1, 0}};
				curveRotation[] = {{0, 0, 0}, {0, 2, 0}, {0.9, 1, 0}, {1, 1, 0}};
				maxPulseDistanceFar = 1000;
				pulseDistance = 500;
				speed = 28;
			};
			class Default
			{
				altitude = 100;
				curve[] = {{0, 0}, {1, 1}};
				curveEnd[] = {{0, 0}, {1, 1}};
				curveRotation[] = {{0, 0, 0}, {1, 0, 0}, {0, 1, 0}, {1, 1, 0}};
				maxPulseDistanceClose = 3;
				maxPulseDistanceFar = 100;
				pulseDistance = 100;
				speed = 8;
			};
			class Drone: Default
			{
				curve[] = {{0, 0, 0}, {0.3, 0.9, 0}, {0.5, 0.9, 0}, {0.5, 1.07, 0}, {0.5, 1, 0}};
				curveEnd[] = {{0, 0, 0}, {0.5, 1, 0}, {0.7, 1, 0}, {1, 1, 0}};
				curveRotation[] = {{0, 0, 0}, {0, 2, 0}, {0.9, 1, 0}, {1, 1, 0}};
				speed = 7;
			};
			class Drone_Intro3: Drone
			{
				maxPulseDistanceFar = 550;
				pulseDistance = 550;
				speed = 12;
			};
			class Drone_Long: Drone
			{
				curve[] = {{0, 0, 0}, {0.3, 0.9, 0}, {0.5, 0.9, 0}, {0.5, 1.024, 0}, {0.5, 1, 0}};
				maxPulseDistanceFar = 550;
				pulseDistance = 250;
				speed = 14;
			};
			class ModularShip: Default
			{
				curve[] = {{0, 0, 0}, {0.3, 0.9, 0}, {0.5, 0.9, 0}, {0.5, 1.07, 0}, {0.5, 1, 0}};
				curveEnd[] = {{0, 0, 0}, {0.5, 1, 0}, {0.7, 1, 0}, {1, 1, 0}};
				curveRotation[] = {{0, 0, 0}, {0, 2, 0}, {0.9, 1, 0}, {1, 1, 0}};
				speed = 2;
			};
		};
	};
	class Patrol
	{
		class Animations
		{
			class Alone: Universal
			{
				chance = 0.42;
				chanceRepeated = 0.12;
				delay[] = {10, 12, 14};
				displayName = "Soldier";
				states[] = {"Acts_Rifle_Operations_Left", 0.25, "Acts_Rifle_Operations_Right", 0.25, "Acts_Rifle_Operations_Front", 0.25, "Acts_Rifle_Operations_Back", 0.25, "Acts_Rifle_Operations_Zeroing", 0.25, "Acts_Rifle_Operations_Checking_Chamber", 0.25, "Acts_Peering_Left", 1, "Acts_Peering_Right", 1, "Acts_Peering_Front", 0.5, "Acts_Peering_Back", 1, "Acts_Peering_Down", 1, "Acts_Peering_Up", 1, "Acts_Ambient_Cleaning_Nose", 0.5, "Acts_Ambient_Gestures_Sneeze", 0.25, "Acts_Ambient_Gestures_Tired", 0.5, "Acts_Ambient_Gestures_Yawn", 0.5, "Acts_Ambient_Relax_1", 1, "Acts_Ambient_Relax_2", 1, "Acts_Ambient_Relax_3", 1, "Acts_Ambient_Relax_4", 1, "Acts_Ambient_Shoelaces", 0.25, "Acts_Ambient_Stretching", 1};
			};
			class Looter: Team
			{
				displayName = "Looters";
				states[] = {"Acts_Pointing_Left", 0.5, "Acts_Pointing_Right", 0.5, "Acts_Pointing_Front", 0.25, "Acts_Pointing_Back", 0.5, "Acts_Pointing_Down", 0.25, "Acts_Pointing_Up", 0.5, "Acts_Ambient_Aggressive", 0.5, "Acts_Ambient_Agreeing", 0.5, "Acts_Ambient_Approximate", 0.5, "Acts_Ambient_Defensive", 0.1, "Acts_Ambient_Disagreeing", 0.5, "Acts_Ambient_Disagreeing_with_pointing", 0.1, "Acts_Ambient_Dismissing", 0.5, "Acts_Ambient_Facepalm_1", 0.5, "Acts_Ambient_Facepalm_2", 0.1, "Acts_Ambient_Huh", 0.5, "Acts_Peering_Left", 1, "Acts_Peering_Right", 1, "Acts_Peering_Front", 0.5, "Acts_Peering_Back", 1, "Acts_Peering_Down", 1, "Acts_Peering_Up", 1, "Acts_Ambient_Cleaning_Nose", 0.5, "Acts_Ambient_Gestures_Sneeze", 0.25, "Acts_Ambient_Gestures_Tired", 0.5, "Acts_Ambient_Gestures_Yawn", 0.5, "Acts_Ambient_Relax_1", 1, "Acts_Ambient_Relax_2", 1, "Acts_Ambient_Relax_3", 1, "Acts_Ambient_Relax_4", 1, "Acts_Ambient_Shoelaces", 0.25, "Acts_Ambient_Stretching", 1, "Acts_Rifle_Operations_Barrel", 0.25, "Acts_Ambient_Rifle_Drop", 0.25};
			};
			class Team: Universal
			{
				chance = 0.42;
				chanceRepeated = 0.24;
				delay[] = {6, 8, 10};
				displayName = "Fire Team";
				states[] = {"Acts_Pointing_Left", 0.5, "Acts_Pointing_Right", 0.5, "Acts_Pointing_Front", 0.25, "Acts_Pointing_Back", 0.5, "Acts_Pointing_Down", 0.25, "Acts_Pointing_Up", 0.5, "Acts_Ambient_Aggressive", 0.5, "Acts_Ambient_Agreeing", 0.5, "Acts_Ambient_Approximate", 0.5, "Acts_Ambient_Defensive", 0.1, "Acts_Ambient_Disagreeing", 0.5, "Acts_Ambient_Disagreeing_with_pointing", 0.1, "Acts_Ambient_Dismissing", 0.5, "Acts_Ambient_Facepalm_1", 0.5, "Acts_Ambient_Facepalm_2", 0.1, "Acts_Ambient_Huh", 0.5, "Acts_Peering_Left", 1, "Acts_Peering_Right", 1, "Acts_Peering_Front", 0.5, "Acts_Peering_Back", 1, "Acts_Peering_Down", 1, "Acts_Peering_Up", 1, "Acts_Ambient_Cleaning_Nose", 0.5, "Acts_Ambient_Gestures_Sneeze", 0.25, "Acts_Ambient_Gestures_Tired", 0.5, "Acts_Ambient_Gestures_Yawn", 0.5, "Acts_Ambient_Relax_1", 1, "Acts_Ambient_Relax_2", 1, "Acts_Ambient_Relax_3", 1, "Acts_Ambient_Relax_4", 1, "Acts_Ambient_Shoelaces", 0.25, "Acts_Ambient_Stretching", 1};
			};
			class Universal
			{
				chance = 0.33;
				chanceRepeated = 0.12;
				delay[] = {6, 8, 10};
				displayName = "Default";
				states[] = {"Acts_Peering_Left", 1, "Acts_Peering_Right", 1, "Acts_Peering_Front", 0.5, "Acts_Peering_Back", 1, "Acts_Peering_Down", 1, "Acts_Peering_Up", 1, "Acts_Ambient_Cleaning_Nose", 0.5, "Acts_Ambient_Gestures_Sneeze", 0.25, "Acts_Ambient_Gestures_Tired", 0.5, "Acts_Ambient_Gestures_Yawn", 0.5, "Acts_Ambient_Relax_1", 1, "Acts_Ambient_Relax_2", 1, "Acts_Ambient_Relax_3", 1, "Acts_Ambient_Relax_4", 1, "Acts_Ambient_Shoelaces", 0.25, "Acts_Ambient_Stretching", 1};
			};
		};
	};
	class Quests
	{
		class q_alien_freeRoam1
		{
			directory = "\a3\Missions_F_Contact\Quests\q_alien_freeRoam1";
			priority = 0;
			title = "Mysterious Sightings (q_alien_freeRoam1)";
			class DebugSites {};
			class Tasks {};
		};
		class q_alien_freeRoam2
		{
			directory = "\a3\Missions_F_Contact\Quests\q_alien_freeRoam2";
			priority = 0;
			title = "Cautious Communication (q_alien_freeRoam2)";
			class DebugSites {};
			class Tasks {};
		};
		class q_alien_radioTower
		{
			directory = "\a3\Missions_F_Contact\Quests\q_alien_radioTower";
			priority = 0;
			title = "Revelation Impact";
			class DebugSites
			{
				_sites = "Start";
				s_rodzanica_00 = "Start";
			};
			class Tasks
			{
				class Approach
				{
					description = "Move closer to the alien entity...";
					destination[] = {8900.99, 2075.6, 0};
					priority = 0;
					title = "Approach Alien Entity";
					type = "default";
				};
				class Brief
				{
					description = "Hear what intel the Russian Special Forces operators have to share with you.";
					destination[] = {8893.55, 2086.04, 0};
					isHub = 0;
					title = "Speak to Russians";
					type = "listen";
				};
				class Communicate
				{
					description = "Attempt communications with the nearby alien entity using your Spectrum Device once more.";
					destination[] = {8900.99, 2075.6, 0};
					isHub = 0;
					title = "Communicate with Alien Entity";
					type = "interact";
				};
				class Lever
				{
					description = "Using the transfer switch, restart the radio tower's power system that was previously disabled by the blackout.";
					destination[] = {8910.97, 2034.28, 0.957825};
					isHub = 0;
					title = "Restart Power System";
					type = "interact";
				};
				class Link
				{
					description = "Connect with Bravo team at their position inside the perimeter.";
					destination[] = {8917.66, 2051.67, 0};
					isHub = 0;
					title = "Join Bravo";
					type = "default";
				};
				class Meet
				{
					description = "Move to your team's location closer to the radio tower and link up with them.";
					destination[] = {8979.17, 1911.66, 0};
					isHub = 0;
					title = "Meet Your Team";
					type = "default";
				};
				class Panel
				{
					description = "Use the panel inside the barracks to broadcast a preset message to NATO Command.";
					destination[] = {8948.61, 2049.82, 0.691986};
					isHub = 0;
					title = "Broadcast Message";
					type = "interact";
				};
			};
		};
		class q_east_device
		{
			directory = "\a3\Missions_F_Contact\Quests\q_east_device";
			priority = 0;
			title = "Ballistic Therapy";
			class DebugSites {};
			class Tasks
			{
				class Acquire
				{
					description = "Pick up the strange device at the crash site, so it can be examined back at camp.";
					destination[] = {2878.08, 1744.21, 0.381012};
					isHub = 0;
					title = "Take Device";
					type = "interact";
				};
				class CrashSite
				{
					description = "Get closer to the location of the mysterious signal source and report on what you find.";
					destination[] = {"q_east_device_overwatchPosition"};
					isHub = 0;
					title = "Identify Signal Source";
					type = "scout";
				};
				class Disable
				{
					description = "Take out the autonomous turret defending the road. Consider using the Spectrum Device with Experimental Antenna to jam the turret, and then manually disable it up close.";
					destination[] = {3346.17, 2030.17, 0.81897};
					isHub = 0;
					title = "Disable Auto-Turret";
					type = "intel";
				};
				class DisableStomper
				{
					description = "Approach the Unmanned Ground Vehicle (UGV) and disable it by manually accessing its systems.";
					destination[] = {2898.22, 1832.58, 0};
					priority = 1;
					title = "Disable UGV";
					type = "intel";
				};
				class Exfiltrate
				{
					description = "Leave the area and retreat to a safe distance.";
					destination[] = {3727.66, 1832.24, 0};
					isHub = 0;
					title = "Leave Area";
					type = "run";
				};
				class Hack
				{
					description = "Carefully get close to the LDF UGV overlooking the area, hack it using the Spectrum Device, and let it wreak havoc on their patrol to create a window of opportunity.";
					destination[] = {2918.32, 1902.01, 0};
					isHub = 0;
					title = "Hack UGV";
					type = "intel";
				};
				class Investigate
				{
					description = "Move to the crash site and investigate the wreckage.";
					destination[] = {2871.46, 1741.75, 0};
					isHub = 0;
					title = "Investigate Signal Source";
					type = "search";
				};
			};
		};
		class q_east_rtb
		{
			directory = "\a3\Missions_F_Contact\Quests\q_east_rtb";
			priority = 0;
			title = "Confluent Agendas";
			class DebugSites {};
			class Tasks
			{
				class Enter
				{
					description = "Follow the strange figure into the building, but be on your guard.";
					destination[] = {3842.27, 1826.98, 0};
					priority = 0;
					title = "Enter Building";
					type = "getin";
				};
				class Investigate
				{
					description = "Cautiously explore the camp to find out why your allies are not responding.";
					destination[] = {3833.32, 1838.2, 0};
					priority = 0;
					title = "Investigate Camp";
					type = "search";
				};
				class Listen
				{
					description = "Having been trapped inside, listen to what the strangers outside have to say.";
					destination[] = {3842.27, 1826.98, 0};
					priority = 0;
					title = "Listen to Strangers";
					type = "listen";
				};
				class Return
				{
					description = "Make your way back to the camp at the radio tower to receive new orders.";
					destination[] = {3833.32, 1838.2, 0};
					priority = 0;
					title = "Return to Camp";
					type = "talk";
				};
			};
		};
		class q_misc_music
		{
			directory = "\a3\Missions_F_Contact\Quests\q_misc_music";
			priority = 0;
			title = "q_misc_music";
			class DebugSites {};
			class Tasks {};
		};
		class q_probe_ambush
		{
			directory = "\a3\Missions_F_Contact\Quests\q_probe_ambush";
			priority = 0;
			title = "A Surrounded Alien (q_probe_ambush)";
			class DebugSites {};
			class Tasks {};
		};
		class q_probe_forest
		{
			directory = "\a3\Missions_F_Contact\Quests\q_probe_forest";
			priority = 0;
			title = "A Lost Probe (q_probe_forest)";
			class DebugSites {};
			class Tasks {};
		};
		class q_probe_freeRoam2
		{
			directory = "\a3\Missions_F_Contact\Quests\q_probe_freeRoam2";
			priority = 0;
			title = "Root Recon";
			class DebugSites
			{
				s_kulno_01 = "TaskAssigned";
			};
			class Tasks
			{
				class Deceive
				{
					description = "Consider making the LDF forces and the alien entity near the alien network root interact somehow...";
					destination[] = {10625.2, 1531.66, 0};
					priority = 1;
					title = "Deceive LDF";
					type = "default";
				};
				class Investigate
				{
					description = "Using the special mapping device mounted onto the mini UGV, find more alien root tips in the area.";
					destination[] = {"q_probe_freeRoam2_searchArea"};
					priority = 0;
					title = "Find Alien Tips";
					type = "search";
				};
				class Learn
				{
					description = "Listing to the doctor's instructions on how to use the special device in order to further locate and map the underground network.";
					destination[] = {"bin_physicist"};
					isHub = 0;
					title = "Receive Instructions";
					type = "default";
				};
				class Map
				{
					description = "Access your topographic map to start learning about mapping the underground alien network.";
					destination[] = {"bin_physicist"};
					isHub = 0;
					title = "Open Map";
					type = "default";
				};
				class Probe
				{
					description = "Switch to the special map to view the currently known underground network data.";
					destination[] = {"bin_physicist"};
					isHub = 0;
					title = "Switch to Special Map";
					type = "default";
				};
				class Sample1
				{
					description = "Use the mini UGV's biopsy probe to acquire a soft tissue sample from the alien root tip near the fuel station.";
					destination[] = {10232, 2147, 2};
					priority = 0;
					title = "Acquire Root Sample 1";
					type = "download";
				};
				class Sample2
				{
					description = "Use the mini UGV's biopsy probe to acquire a soft tissue sample from the alien root tip in the ruined house.";
					destination[] = {10621, 1323.77, 0};
					priority = 0;
					title = "Acquire Root Sample 2";
					type = "download";
				};
			};
		};
		class q_probe_ugv
		{
			directory = "\a3\Missions_F_Contact\Quests\q_probe_ugv";
			priority = 0;
			title = "Finding Eddie";
			class DebugSites
			{
				_sites = "Start";
				s_polana_02 = "Start";
				s_swarog_00 = "Base";
				s_swarog_01 = "TaskAssigned";
			};
			class Tasks
			{
				class Escape
				{
					description = "Exfiltrate from the immediate area.";
					destination[] = {3801.91, 2063, 0};
					isHub = 0;
					priority = 0;
					title = "Exfiltrate";
					type = "run";
				};
				class Find
				{
					description = "Find the ED-1E mini UGV that is supposedly loaded in an Astra van, located somewhere inside the guarded radar station complex.";
					destination[] = {"q_probe_ugv_ugvLocation"};
					priority = 0;
					title = "Find Mini UGV";
					type = "search";
				};
				class Locate
				{
					description = "Eavesdrop on the LDF's electromagnetic signals to learn the location of another surfaced alien root tip, or perform a search of the area yourself.";
					destination[] = {"q_probe_ugv_probeTask"};
					priority = 0;
					title = "Locate Alien Root";
					type = "scout";
				};
				class Move
				{
					description = "Move to the discovered alien root tip location, and get a closer look at the situation.";
					destination[] = {4309.41, 2292.42, 0};
					priority = 0;
					title = "Move to Alien Site";
					type = "walk";
				};
				class Pickup
				{
					description = "Disassemble and pick up the mini UGV for later use.";
					destination[] = {"q_probe_ugv_van"};
					priority = 0;
					title = "Collect Mini UGV";
					type = "interact";
				};
				class Probe
				{
					description = "Assemble and maneuver the mini UGV up close to the alien root tip, and use its sampling laser to study it.";
					destination[] = {4337.54, 2254.41, 0};
					priority = 0;
					title = "Investigate Alien Root";
					type = "search";
				};
				class Return
				{
					description = "Return to the alien root location, carrying the mini UGV with you on your back.";
					destination[] = {4309.41, 2292.42, 0};
					priority = 0;
					title = "Return to Alien Site";
					type = "walk";
				};
				class Steal
				{
					description = "Pick up the disassembled mini UGV from the Astra van.";
					destination[] = {5006.6, 2133.21, 0};
					priority = 0;
					title = "Retrieve Mini UGV";
					type = "interact";
				};
				class Stealth
				{
					description = "Remain undetected by LDF patrols as your move through the enemy base to avoid unnecessary escalation.";
					destination[] = {""};
					priority = 1;
					title = "Remain Unseen";
					type = "danger";
				};
			};
		};
		class q_probe_valley
		{
			directory = "\a3\Missions_F_Contact\Quests\q_probe_valley";
			priority = 0;
			title = "Field Science";
			class DebugSites {};
			class Tasks
			{
				class Approach
				{
					description = "Move closer to the alien entity...";
					destination[] = {3580.63, 2647.9, 0};
					priority = 0;
					title = "Approach Alien Entity";
					type = "default";
				};
				class Communicate
				{
					description = "Use the Spectrum Device to try and communicate with the static alien entity. Transmit signals on its frequencies to provoke another... response.";
					destination[] = {3580.63, 2647.9, 0};
					priority = 0;
					title = "Communicate with Alien Entity";
					type = "default";
				};
				class Find
				{
					description = "Move to the alien entity's signal source location so you can get a visual on the extraterrestrial visitor.";
					destination[] = {"q_probe_valley_alienTask"};
					priority = 0;
					title = "Find Alien Entity";
					type = "default";
				};
				class Follow
				{
					description = "Follow the alien entity and investigate what it is doing in the valley below.";
					destination[] = {"q_probe_valley_probeTask"};
					priority = 0;
					title = "Follow Alien Entity";
					type = "default";
				};
				class Investigate
				{
					description = "Move closer to the area just visited by the alien entity. Find out what it was up to.";
					destination[] = {3581.59, 2652.79, 0};
					priority = 0;
					title = "Investigate Area";
					type = "default";
				};
				class Probe
				{
					description = "Move the assembled mini UGV close to the alien root tip, and use its biopsy probe to extract a soft tissue sample from one of the openings.";
					destination[] = {3584.7, 2655.41, 2};
					priority = 0;
					title = "Extract Sample";
					type = "default";
				};
				class Signal
				{
					antenna = "q_alien_freeRoam1_alien";
					description = "Acquire the alien entity's signal using the Spectrum Device with Experimental Antenna in order to track it.";
					destination[] = {"q_probe_valley_alienSignalTask"};
					priority = 0;
					title = "Track Alien Signal";
					type = "default";
				};
				class Ugv
				{
					description = "Disassemble and pick up the mini UGV before you leave.";
					destination[] = {3584.7, 2655.41, 2};
					priority = 0;
					title = "Collect Mini UGV";
					type = "default";
				};
			};
		};
	};
	class SignalDurations
	{
		EM_AutoTurret_Enc_01 = 23.4704;
		EM_AutoTurret_Jammed_01 = 23.4704;
		EM_Base_Noise_01 = 8.60297;
		EM_Base_Noise_01_Outro3 = 8.60297;
		EM_BlackBox_DistressSignal_01 = 16.332;
		EM_Darter_Enc_01 = 23.4704;
		EM_Darter_Jammed_01 = 23.4704;
		EM_Drone_01 = 84.8922;
		EM_Drone_01_Tracking_01 = 84.8922;
		EM_Emergency_Broadcast_01 = 22.8235;
		EM_ESD_01 = 29.9712;
		EM_freeroam1_am_nato_prisoner_request_HQ_0 = 9.62202;
		EM_freeroam1_am_nato_prisoner_request_SOLDIERA_0 = 5.11907;
		EM_freeroam1_em_device_searching_HQ_0 = 4.44277;
		EM_freeroam1_em_device_searching_HQ_1 = 6.45478;
		EM_freeroam1_em_device_searching_SOLDIERA_0 = 3.58859;
		EM_freeroam1_em_device_searching_SOLDIERA_1 = 10.1787;
		EM_freeroam1_em_device_turret_defense_HQ_0 = 8.95846;
		EM_freeroam1_em_device_turret_defense_HQ_1 = 5.36075;
		EM_freeroam1_em_device_turret_defense_HQ_2 = 12.1885;
		EM_freeroam1_em_device_turret_defense_SOLDIERC_0 = 7.42515;
		EM_freeroam1_em_device_turret_defense_SOLDIERC_1 = 10.3348;
		EM_freeroam1_em_device_turret_defense_SOLDIERC_2 = 3.46404;
		EM_freeroam1_em_ugv_actual_location_HQ_0 = 4.38975;
		EM_freeroam1_em_ugv_actual_location_HQ_1 = 11.6553;
		EM_freeroam1_em_ugv_actual_location_SOLDIERB_0 = 11.3508;
		EM_freeroam1_em_ugv_actual_location_SOLDIERB_1 = 3.67454;
		EM_freeroam1_em_ugv_probe_tip_HQ_0 = 2.44333;
		EM_freeroam1_em_ugv_probe_tip_HQ_1 = 4.23084;
		EM_freeroam1_em_ugv_probe_tip_HQ_2 = 6.28422;
		EM_freeroam1_em_ugv_probe_tip_SOLDIERA_0 = 2.86249;
		EM_freeroam1_em_ugv_probe_tip_SOLDIERA_1 = 8.84397;
		EM_freeroam1_em_ugv_probe_tip_SOLDIERA_2 = 9.27386;
		EM_freeroam1_em_valley_probe_awe_HQ_0 = 1.94038;
		EM_freeroam1_em_valley_probe_awe_HQ_1 = 4.7703;
		EM_freeroam1_em_valley_probe_awe_HQ_2 = 6.11957;
		EM_freeroam1_em_valley_probe_awe_SOLDIERC_0 = 3.77041;
		EM_freeroam1_em_valley_probe_awe_SOLDIERC_1 = 7.8107;
		EM_freeroam1_em_valley_probe_awe_SOLDIERC_2 = 9.52556;
		EM_freeroam2_am_forest_probe_discussion_HQ_0 = 4.03061;
		EM_freeroam2_am_forest_probe_discussion_HQ_1 = 3.73295;
		EM_freeroam2_am_forest_probe_discussion_HQ_2 = 5.5046;
		EM_freeroam2_am_forest_probe_discussion_HQ_3 = 5.87494;
		EM_freeroam2_am_forest_probe_discussion_HQ_4 = 5.4376;
		EM_freeroam2_am_forest_probe_discussion_SOLDIERB_0 = 5.05456;
		EM_freeroam2_am_forest_probe_discussion_SOLDIERB_1 = 6.09422;
		EM_freeroam2_am_forest_probe_discussion_SOLDIERB_2 = 8.30809;
		EM_freeroam2_am_forest_probe_discussion_SOLDIERB_3 = 9.96186;
		EM_freeroam2_am_forest_probe_discussion_SOLDIERB_4 = 6.05549;
		EM_freeroam2_am_looters_found_radio_HQ_0 = 6.0512;
		EM_freeroam2_am_looters_found_radio_HQ_1 = 1.73542;
		EM_freeroam2_am_looters_found_radio_HQ_2 = 11.199;
		EM_freeroam2_am_looters_found_radio_SOLDIERB_0 = 1.80451;
		EM_freeroam2_am_looters_found_radio_SOLDIERB_1 = 8.67338;
		EM_freeroam2_am_looters_found_radio_SOLDIERB_2 = 11.7126;
		EM_freeroam2_am_matter_ball_found_ldf_investigate_HQ_0 = 3.79104;
		EM_freeroam2_am_matter_ball_found_ldf_investigate_HQ_1 = 9.99653;
		EM_freeroam2_am_matter_ball_found_ldf_investigate_HQ_2 = 5.32347;
		EM_freeroam2_am_matter_ball_found_ldf_investigate_SOLDIERA_0 = 2.11259;
		EM_freeroam2_am_matter_ball_found_ldf_investigate_SOLDIERA_1 = 3.18281;
		EM_freeroam2_am_matter_ball_found_ldf_investigate_SOLDIERA_2 = 4.21644;
		EM_freeroam2_am_radio_station_message_MAJOR_0 = 1.5442;
		EM_freeroam2_am_radio_station_message_MAJOR_1 = 0.64576;
		EM_freeroam2_am_radio_station_message_MAJOR_2 = 1.92027;
		EM_freeroam2_am_radio_station_message_MAJOR_3 = 1.97136;
		EM_freeroam2_am_radio_station_message_MAJOR_4 = 4.42587;
		EM_freeroam2_am_radio_station_message_MAJOR_5 = 6.68197;
		EM_freeroam2_am_radio_station_message_MAJOR_6 = 2.18946;
		EM_freeroam2_am_radio_station_message_MAJOR_7 = 2.52914;
		EM_freeroam2_ta_ambush_probe_eavesdrop_assign_task_HQ_0 = 3.85782;
		EM_freeroam2_ta_ambush_probe_eavesdrop_assign_task_HQ_1 = 4.99073;
		EM_freeroam2_ta_ambush_probe_eavesdrop_assign_task_SOLDIERC_0 = 4.49719;
		EM_freeroam2_ta_ambush_probe_eavesdrop_assign_task_SOLDIERC_1 = 2.55898;
		EM_freeroam2_ta_ambush_probe_eavesdrop_assign_task_var1_HQ_0 = 3.34617;
		EM_freeroam2_ta_ambush_probe_eavesdrop_assign_task_var1_HQ_1 = 4.37955;
		EM_freeroam2_ta_ambush_probe_eavesdrop_assign_task_var1_SOLDIERC_0 = 5.27737;
		EM_freeroam2_ta_ambush_probe_eavesdrop_assign_task_var1_SOLDIERC_1 = 9.41379;
		EM_freeroam2_ta_ambush_probe_eavesdrop_assign_task_var2_HQ_0 = 2.89;
		EM_freeroam2_ta_ambush_probe_eavesdrop_assign_task_var2_HQ_1 = 5.91887;
		EM_freeroam2_ta_ambush_probe_eavesdrop_assign_task_var2_SOLDIERC_0 = 3.7856;
		EM_freeroam2_ta_ambush_probe_eavesdrop_assign_task_var2_SOLDIERC_1 = 6.02995;
		EM_handshake_a2q_SQUAD_0 = 1.75837;
		EM_handshake_a2q_SQUAD_1 = 2.08955;
		EM_handshake_a2q_SQUAD_2 = 2.13864;
		EM_handshake_a2q_SQUAD_3 = 2.22311;
		EM_handshake_a2q_SQUAD_4 = 2.07664;
		EM_handshake_b2q_SQUAD_0 = 1.89091;
		EM_handshake_b2q_SQUAD_1 = 1.8171;
		EM_handshake_b2q_SQUAD_2 = 1.90193;
		EM_handshake_b2q_SQUAD_3 = 2.04064;
		EM_handshake_b2q_SQUAD_4 = 2.0507;
		EM_handshake_c2q_SQUAD_0 = 1.71045;
		EM_handshake_c2q_SQUAD_1 = 1.79642;
		EM_handshake_c2q_SQUAD_2 = 1.79168;
		EM_handshake_c2q_SQUAD_3 = 2.07322;
		EM_handshake_c2q_SQUAD_4 = 2.02701;
		EM_handshake_d2q_SQUAD_0 = 1.78227;
		EM_handshake_d2q_SQUAD_1 = 1.9039;
		EM_handshake_d2q_SQUAD_2 = 1.9532;
		EM_handshake_d2q_SQUAD_3 = 2.13492;
		EM_handshake_d2q_SQUAD_4 = 1.95349;
		EM_handshake_e2q_SQUAD_0 = 1.67256;
		EM_handshake_e2q_SQUAD_1 = 1.8002;
		EM_handshake_e2q_SQUAD_2 = 1.76642;
		EM_handshake_e2q_SQUAD_3 = 1.90984;
		EM_handshake_e2q_SQUAD_4 = 1.97662;
		EM_handshake_f2q_SQUAD_0 = 1.68771;
		EM_handshake_f2q_SQUAD_1 = 1.8132;
		EM_handshake_f2q_SQUAD_2 = 1.84098;
		EM_handshake_f2q_SQUAD_3 = 2.03304;
		EM_handshake_f2q_SQUAD_4 = 1.93025;
		EM_handshake_g2q_SQUAD_0 = 1.79127;
		EM_handshake_g2q_SQUAD_1 = 2.04404;
		EM_handshake_g2q_SQUAD_2 = 1.87948;
		EM_handshake_g2q_SQUAD_3 = 2.00959;
		EM_handshake_g2q_SQUAD_4 = 1.93621;
		EM_handshake_h2q_SQUAD_0 = 1.80515;
		EM_handshake_h2q_SQUAD_1 = 1.94859;
		EM_handshake_h2q_SQUAD_2 = 1.88526;
		EM_handshake_h2q_SQUAD_3 = 2.04531;
		EM_handshake_h2q_SQUAD_4 = 1.95832;
		EM_handshake_q2a_HQ_0 = 1.94159;
		EM_handshake_q2a_HQ_1 = 2.71633;
		EM_handshake_q2a_HQ_2 = 2.26449;
		EM_handshake_q2a_HQ_3 = 2.05624;
		EM_handshake_q2a_HQ_4 = 2.58259;
		EM_handshake_q2b_HQ_0 = 2.27705;
		EM_handshake_q2b_HQ_1 = 2.58565;
		EM_handshake_q2b_HQ_2 = 2.24617;
		EM_handshake_q2b_HQ_3 = 1.98166;
		EM_handshake_q2b_HQ_4 = 2.71882;
		EM_handshake_q2c_HQ_0 = 2.03331;
		EM_handshake_q2c_HQ_1 = 2.33413;
		EM_handshake_q2c_HQ_2 = 1.89408;
		EM_handshake_q2c_HQ_3 = 1.88172;
		EM_handshake_q2c_HQ_4 = 2.36324;
		EM_handshake_q2d_HQ_0 = 1.86238;
		EM_handshake_q2d_HQ_1 = 2.3119;
		EM_handshake_q2d_HQ_2 = 2.15773;
		EM_handshake_q2d_HQ_3 = 1.94;
		EM_handshake_q2d_HQ_4 = 2.36111;
		EM_handshake_q2e_HQ_0 = 2.05426;
		EM_handshake_q2e_HQ_1 = 2.35726;
		EM_handshake_q2e_HQ_2 = 2.04331;
		EM_handshake_q2e_HQ_3 = 2.03091;
		EM_handshake_q2e_HQ_4 = 2.34474;
		EM_handshake_q2f_HQ_0 = 2.05429;
		EM_handshake_q2f_HQ_1 = 2.43637;
		EM_handshake_q2f_HQ_2 = 2.14959;
		EM_handshake_q2f_HQ_3 = 2.07746;
		EM_handshake_q2f_HQ_4 = 2.45025;
		EM_handshake_q2g_HQ_0 = 1.91472;
		EM_handshake_q2g_HQ_1 = 2.19292;
		EM_handshake_q2g_HQ_2 = 2.21209;
		EM_handshake_q2g_HQ_3 = 1.86458;
		EM_handshake_q2g_HQ_4 = 2.60968;
		EM_handshake_q2h_HQ_0 = 2.34585;
		EM_handshake_q2h_HQ_1 = 2.66376;
		EM_handshake_q2h_HQ_2 = 2.41488;
		EM_handshake_q2h_HQ_3 = 2.28127;
		EM_handshake_q2h_HQ_4 = 2.84122;
		EM_hq_confirm_help_HQ_0 = 2.6998;
		EM_hq_confirm_help_HQ_1 = 3.99483;
		EM_hq_confirm_help_HQ_2 = 3.70025;
		EM_hq_confused_HQ_0 = 5.75383;
		EM_hq_confused_HQ_1 = 4.95669;
		EM_hq_confused_HQ_2 = 3.51104;
		EM_hq_deny_help_HQ_0 = 4.7224;
		EM_hq_deny_help_HQ_1 = 4.86748;
		EM_hq_deny_help_HQ_2 = 4.68422;
		EM_hq_dummy_reply_HQ_0 = 4.33376;
		EM_hq_dummy_reply_HQ_1 = 4.83556;
		EM_hq_dummy_reply_HQ_2 = 6.50234;
		EM_hq_dummy_reply_HQ_3 = 3.66245;
		EM_hq_dummy_reply_HQ_4 = 4.61535;
		EM_HQ_Enc_01 = 23.4703;
		EM_hq_identify_HQ_0 = 3.69621;
		EM_hq_identify_HQ_1 = 7.70721;
		EM_hq_identify_HQ_2 = 4.25118;
		EM_hq_move_e_HQ_0 = 2.90229;
		EM_hq_move_e_HQ_1 = 4.10957;
		EM_hq_move_e_HQ_2 = 4.48404;
		EM_hq_move_e_HQ_3 = 5.6505;
		EM_hq_move_e_HQ_4 = 3.74166;
		EM_hq_move_n_HQ_0 = 3.39746;
		EM_hq_move_n_HQ_1 = 4.27034;
		EM_hq_move_n_HQ_2 = 4.16766;
		EM_hq_move_n_HQ_3 = 4.95077;
		EM_hq_move_n_HQ_4 = 3.91109;
		EM_hq_move_s_HQ_0 = 2.84801;
		EM_hq_move_s_HQ_1 = 4.00322;
		EM_hq_move_s_HQ_2 = 3.53689;
		EM_hq_move_s_HQ_3 = 4.98671;
		EM_hq_move_s_HQ_4 = 3.54234;
		EM_hq_move_w_HQ_0 = 3.10755;
		EM_hq_move_w_HQ_1 = 3.99526;
		EM_hq_move_w_HQ_2 = 4.04229;
		EM_hq_move_w_HQ_3 = 4.68694;
		EM_hq_move_w_HQ_4 = 3.44662;
		EM_hq_negative_HQ_0 = 1.15463;
		EM_hq_negative_HQ_1 = 2.18458;
		EM_hq_negative_HQ_2 = 2.15902;
		EM_hq_no_help_HQ_0 = 5.45422;
		EM_hq_no_help_HQ_1 = 5.31964;
		EM_hq_no_help_HQ_2 = 6.51154;
		EM_hq_no_move_HQ_0 = 3.81206;
		EM_hq_no_move_HQ_1 = 3.26095;
		EM_hq_no_move_HQ_2 = 4.20097;
		EM_hq_no_response_a_HQ_0 = 2.15889;
		EM_hq_no_response_a_HQ_1 = 2.11608;
		EM_hq_no_response_a_HQ_2 = 2.15782;
		EM_hq_no_response_b_HQ_0 = 1.78651;
		EM_hq_no_response_b_HQ_1 = 2.29655;
		EM_hq_no_response_b_HQ_2 = 2.43138;
		EM_hq_no_response_c_HQ_0 = 1.98181;
		EM_hq_no_response_c_HQ_1 = 2.29941;
		EM_hq_no_response_c_HQ_2 = 2.19785;
		EM_hq_no_response_d_HQ_0 = 1.93347;
		EM_hq_no_response_d_HQ_1 = 2.17154;
		EM_hq_no_response_d_HQ_2 = 2.43515;
		EM_hq_no_response_e_HQ_0 = 2.19497;
		EM_hq_no_response_e_HQ_1 = 2.13088;
		EM_hq_no_response_e_HQ_2 = 2.06379;
		EM_hq_no_response_f_HQ_0 = 1.96075;
		EM_hq_no_response_f_HQ_1 = 2.44932;
		EM_hq_no_response_f_HQ_2 = 2.0627;
		EM_hq_no_response_g_HQ_0 = 1.92122;
		EM_hq_no_response_g_HQ_1 = 2.07091;
		EM_hq_no_response_g_HQ_2 = 2.34528;
		EM_hq_no_response_h_HQ_0 = 1.84408;
		EM_hq_no_response_h_HQ_1 = 2.45583;
		EM_hq_no_response_h_HQ_2 = 2.24884;
		EM_hq_positive_HQ_0 = 1.41556;
		EM_hq_positive_HQ_1 = 1.46676;
		EM_hq_positive_HQ_2 = 1.94388;
		EM_hq_posrep_HQ_0 = 1.93608;
		EM_hq_posrep_HQ_1 = 2.09948;
		EM_hq_posrep_HQ_2 = 1.92769;
		EM_HQ_Russian_Enc_01 = 11.3737;
		EM_hq_safe_HQ_0 = 4.38213;
		EM_hq_safe_HQ_1 = 4.32612;
		EM_hq_safe_HQ_2 = 4.09388;
		EM_hq_say_again_HQ_0 = 1.1836;
		EM_hq_say_again_HQ_1 = 1.93662;
		EM_hq_say_again_HQ_2 = 2.91397;
		EM_hq_send_help_a_HQ_0 = 3.19254;
		EM_hq_send_help_a_HQ_1 = 3.6927;
		EM_hq_send_help_a_HQ_2 = 3.59644;
		EM_hq_send_help_b_HQ_0 = 2.75252;
		EM_hq_send_help_b_HQ_1 = 3.43515;
		EM_hq_send_help_b_HQ_2 = 3.60327;
		EM_hq_send_help_c_HQ_0 = 2.65179;
		EM_hq_send_help_c_HQ_1 = 3.96694;
		EM_hq_send_help_c_HQ_2 = 3.64927;
		EM_hq_send_help_d_HQ_0 = 2.64526;
		EM_hq_send_help_d_HQ_1 = 3.91045;
		EM_hq_send_help_d_HQ_2 = 3.78222;
		EM_hq_send_help_e_HQ_0 = 2.75043;
		EM_hq_send_help_e_HQ_1 = 3.8563;
		EM_hq_send_help_e_HQ_2 = 3.49909;
		EM_hq_send_help_f_HQ_0 = 2.66825;
		EM_hq_send_help_f_HQ_1 = 3.88061;
		EM_hq_send_help_f_HQ_2 = 3.85512;
		EM_hq_send_help_g_HQ_0 = 2.61361;
		EM_hq_send_help_g_HQ_1 = 3.82857;
		EM_hq_send_help_g_HQ_2 = 3.79082;
		EM_hq_silence_HQ_0 = 9.5093;
		EM_hq_silence_HQ_1 = 8.5224;
		EM_hq_silence_HQ_2 = 11.1988;
		EM_hq_strange_signal_reply_HQ_0 = 5.5837;
		EM_hq_strange_signal_reply_HQ_1 = 4.04025;
		EM_hq_strange_signal_reply_HQ_2 = 7.39936;
		EM_intro2_physicist_am_4_1_PHYSICIST_0 = 1.80494;
		EM_intro2_physicist_am_4_2_PHYSICIST_0 = 2.09202;
		EM_intro2_physicist_am_4_3_PHYSICIST_0 = 1.64571;
		EM_intro2_physicist_am_4_4_PHYSICIST_0 = 2.68039;
		EM_intro2_physicist_am_4_5_PHYSICIST_0 = 1.6593;
		EM_intro2_physicist_am_4_6_PHYSICIST_0 = 3.32843;
		EM_intro2_physicist_am_4_7_PHYSICIST_0 = 1.37315;
		EM_intro2_physicist_am_4_8_PHYSICIST_0 = 1.6017;
		EM_intro2_physicist_am_4_9_PHYSICIST_0 = 1.90442;
		EM_intro2_physicist_am_4_loop_PHYSICIST_0 = 1.94422;
		EM_intro2_q2raven_am_2_1_RAVEN_0 = 1.71034;
		EM_intro2_q2raven_am_2_2_RAVEN_0 = 2.1951;
		EM_intro2_q2raven_am_2_3_RAVEN_0 = 2.54397;
		EM_intro2_q2raven_am_2_4_RAVEN_0 = 2.93719;
		EM_intro2_q2raven_am_2_5_HQ_0 = 1.46975;
		EM_intro2_q2raven_am_2_6_HQ_0 = 3.29603;
		EM_intro2_q2raven_am_2_7_RAVEN_0 = 4.40209;
		EM_intro2_q2s_am_1_1_SQUAD_0 = 2.51506;
		EM_intro2_q2s_am_1_2_SQUAD_0 = 2.35707;
		EM_intro2_q2s_am_1_3_HQ_0 = 1.82295;
		EM_intro2_q2s_am_1_4_SQUAD_0 = 2.66107;
		EM_intro2_q2s_am_1_5_SQUAD_0 = 1.24544;
		EM_intro2_q2s_am_1_6_SQUAD_0 = 3.1097;
		EM_intro2_q2s_am_1_7_HQ_0 = 1.70038;
		EM_intro2_q2s_am_1_8_HQ_0 = 4.92469;
		EM_intro2_q2s_am_1_9_HQ_0 = 2.78596;
		EM_intro2_q2s_am_1_loop_HQ_0 = 2.12197;
		EM_intro2_q_am_3_2_HQ_0 = 1.9115;
		EM_intro2_q_am_3_3_HQ_0 = 3.45655;
		EM_intro2_q_am_3_5_HQ_0 = 1.24957;
		EM_intro2_q_am_3_6_HQ_0 = 1.58748;
		EM_intro2_q_am_3_7_HQ_0 = 3.6441;
		EM_intro2_q_am_3_8_HQ_0 = 3.31628;
		EM_intro2_q_am_3_loop_HQ_0 = 1.16515;
		EM_intro2_q_am_3_loop_HQ_1 = 3.56007;
		EM_intro2_q_am_3_loop_HQ_2 = 3.29206;
		EM_intro2_s_am_2_1_SQUAD_0 = 2.01154;
		EM_intro2_s_am_2_2_AMBIENTA_0 = 1.14163;
		EM_intro2_s_am_2_3_SQUAD_0 = 1.03401;
		EM_intro2_s_am_2_4_AMBIENTA_0 = 1.67603;
		EM_intro2_s_am_2_5_AMBIENTA_0 = 3.85546;
		EM_intro2_s_am_2_6_SQUAD_0 = 1.70993;
		EM_intro2_s_am_2_7_SQUAD_0 = 5.24365;
		EM_intro2_s_am_2_8_SQUAD_0 = 3.78385;
		EM_intro2_s_am_2_loop_SQUAD_0 = 0.501905;
		EM_intro2_s_am_2_loop_SQUAD_1 = 1.83367;
		EM_intro2_s_am_2_loop_SQUAD_2 = 2.29744;
		EM_intro2_s_am_3_1_SQUAD_0 = 0.968209;
		EM_intro2_s_am_3_2_SQUAD_0 = 2.03263;
		EM_intro2_s_am_3_3_AMBIENTB_0 = 0.772358;
		EM_intro2_s_am_3_4_AMBIENTB_0 = 2.64399;
		EM_intro2_s_am_3_5_AMBIENTB_0 = 2.17962;
		EM_intro2_s_am_3_6_SQUAD_0 = 0.653719;
		EM_intro2_s_am_3_7_SQUAD_0 = 2.47521;
		EM_intro2_s_am_3_8_SQUAD_0 = 2.75574;
		EM_intro2_s_am_3_loop_SQUAD_0 = 2.46061;
		EM_intro2_s_am_3_loop_SQUAD_1 = 2.49778;
		EM_intro2_s_am_3_loop_SQUAD_2 = 3.49318;
		EM_Mission_FreeRoam1_01 = 40.9556;
		EM_Mission_FreeRoam2_01 = 28.1009;
		EM_Mission_Intro1_01 = 15.9979;
		EM_Mission_Intro2_01 = 14.7117;
		EM_Mission_Intro3_01 = 24.7927;
		EM_Mission_Outro2_01 = 17.1876;
		EM_Mission_Outro3_01 = 28.8302;
		EM_MorseCode_01 = 19.1913;
		EM_Mothership_01 = 54.5684;
		EM_Mothership_01_Tracking_01 = 54.5684;
		EM_outro2_aet_jammed_2_SOLDIERB_0 = 7.04608;
		EM_outro2_aet_jammed_3_SOLDIERC_0 = 6.99367;
		EM_outro2_aet_jammed_4_SOLDIERA_0 = 8.52347;
		EM_outro2_aet_jammed_SOLDIERA_0 = 8.27082;
		EM_outro2_aet_resuming_2_SOLDIERB_0 = 6.67487;
		EM_outro2_aet_resuming_3_SOLDIERC_0 = 5.94635;
		EM_outro2_aet_resuming_4_SOLDIERA_0 = 6.14576;
		EM_outro2_aet_resuming_SOLDIERA_0 = 4.7376;
		EM_outro2_fox_2_HQ_0 = 6.60472;
		EM_outro2_fox_2_SOLDIERA_0 = 1.50442;
		EM_outro2_ldf_counterattack_HQ_0 = 1.99989;
		EM_outro2_ldf_counterattack_HQ_1 = 3.15809;
		EM_outro2_ldf_counterattack_HQ_2 = 5.11463;
		EM_outro2_ldf_counterattack_HQ_3 = 1.99848;
		EM_outro2_ldf_counterattack_HQ_4 = 6.39821;
		EM_outro2_probe_explosives_HQ_0 = 5.00265;
		EM_outro2_probe_explosives_HQ_1 = 1.10057;
		EM_outro2_probe_explosives_HQ_2 = 5.43825;
		EM_outro2_probe_explosives_SOLDIERB_0 = 2.70077;
		EM_outro2_probe_explosives_SOLDIERB_1 = 4.11413;
		EM_outro2_probe_explosives_SOLDIERB_2 = 5.70243;
		EM_outro2_probe_target_HQ_0 = 1.4236;
		EM_outro2_probe_target_HQ_1 = 4.01048;
		EM_outro3_am_aan_radio_news_merged = 65.1216;
		EM_outro3_am_aan_radio_news_NEWSREADERB_0 = 7.74717;
		EM_outro3_am_aan_radio_news_NEWSREADERB_1 = 13.1562;
		EM_outro3_am_aan_radio_news_NEWSREADERB_2 = 11.4332;
		EM_outro3_am_aan_radio_news_NEWSREADERB_3 = 6.9383;
		EM_outro3_am_aan_radio_news_NEWSREADERB_4 = 10.2866;
		EM_outro3_am_aan_radio_news_NEWSREADERB_5 = 10.2333;
		EM_outro3_am_aan_radio_news_NEWSREADERB_6 = 4.25397;
		EM_outro3_am_aan_radio_news_NEWSREADERB_7 = 9.67383;
		EM_outro3_am_aan_radio_news_NEWSREADERB_8 = 15.3533;
		EM_outro3_am_cbn_radio_news_merged = 65.95;
		EM_outro3_am_cbn_radio_news_NEWSREADERC_0 = 8.15714;
		EM_outro3_am_cbn_radio_news_NEWSREADERC_1 = 10.0113;
		EM_outro3_am_cbn_radio_news_NEWSREADERC_2 = 12.7126;
		EM_outro3_am_cbn_radio_news_NEWSREADERC_3 = 11.2509;
		EM_outro3_am_cbn_radio_news_NEWSREADERC_4 = 9.1178;
		EM_outro3_am_cbn_radio_news_NEWSREADERC_5 = 8.49315;
		EM_outro3_am_cbn_radio_news_NEWSREADERC_6 = 9.61422;
		EM_outro3_am_cbn_radio_news_NEWSREADERC_7 = 4.03286;
		EM_outro3_am_cbn_radio_news_NEWSREADERC_8 = 10.6519;
		EM_outro3_am_cbn_radio_news_NEWSREADERC_9 = 8.5997;
		EM_outro3_am_conspiracy_radio_merged = 87.4291;
		EM_outro3_am_conspiracy_radio_THEORIST_0 = 1.69546;
		EM_outro3_am_conspiracy_radio_THEORIST_1 = 6.7422;
		EM_outro3_am_conspiracy_radio_THEORIST_10 = 3.91828;
		EM_outro3_am_conspiracy_radio_THEORIST_11 = 1.33358;
		EM_outro3_am_conspiracy_radio_THEORIST_12 = 2.55181;
		EM_outro3_am_conspiracy_radio_THEORIST_13 = 0.954717;
		EM_outro3_am_conspiracy_radio_THEORIST_14 = 1.15923;
		EM_outro3_am_conspiracy_radio_THEORIST_15 = 3.31955;
		EM_outro3_am_conspiracy_radio_THEORIST_16 = 3.16785;
		EM_outro3_am_conspiracy_radio_THEORIST_17 = 6.93773;
		EM_outro3_am_conspiracy_radio_THEORIST_18 = 0.716304;
		EM_outro3_am_conspiracy_radio_THEORIST_19 = 5.5295;
		EM_outro3_am_conspiracy_radio_THEORIST_2 = 6.56846;
		EM_outro3_am_conspiracy_radio_THEORIST_20 = 5.82209;
		EM_outro3_am_conspiracy_radio_THEORIST_21 = 5.05283;
		EM_outro3_am_conspiracy_radio_THEORIST_3 = 3.73526;
		EM_outro3_am_conspiracy_radio_THEORIST_4 = 4.11154;
		EM_outro3_am_conspiracy_radio_THEORIST_5 = 6.35778;
		EM_outro3_am_conspiracy_radio_THEORIST_6 = 2.43154;
		EM_outro3_am_conspiracy_radio_THEORIST_7 = 3.91043;
		EM_outro3_am_conspiracy_radio_THEORIST_8 = 3.6876;
		EM_outro3_am_conspiracy_radio_THEORIST_9 = 4.88061;
		EM_outro3_am_conspiracy_radio_THEORIST_merged_01 = 87.5237;
		EM_outro3_am_polish_radio_news_merged = 65.3647;
		EM_outro3_am_polish_radio_news_NEWSREADERA_0 = 0.992925;
		EM_outro3_am_polish_radio_news_NEWSREADERA_1 = 3.24755;
		EM_outro3_am_polish_radio_news_NEWSREADERA_2 = 4.98971;
		EM_outro3_am_polish_radio_news_NEWSREADERA_3 = 10.5254;
		EM_outro3_am_polish_radio_news_NEWSREADERA_4 = 9.36315;
		EM_outro3_am_polish_radio_news_NEWSREADERA_5 = 6.33766;
		EM_outro3_am_polish_radio_news_NEWSREADERA_6 = 10.4442;
		EM_outro3_am_polish_radio_news_NEWSREADERA_7 = 8.49129;
		EM_outro3_am_polish_radio_news_NEWSREADERA_8 = 6.16755;
		EM_outro3_am_polish_radio_news_NEWSREADERA_9 = 8.10116;
		EM_outro3_am_science_chat_INTERVIEWERB_0 = 1.82785;
		EM_outro3_am_science_chat_INTERVIEWERB_1 = 1.35084;
		EM_outro3_am_science_chat_INTERVIEWERB_2 = 2.2054;
		EM_outro3_am_science_chat_INTERVIEWERB_3 = 3.40333;
		EM_outro3_am_science_chat_merged = 74.9985;
		EM_outro3_am_science_chat_SCIENTIST_0 = 7.02587;
		EM_outro3_am_science_chat_SCIENTIST_1 = 4.74819;
		EM_outro3_am_science_chat_SCIENTIST_2 = 14.5892;
		EM_outro3_am_science_chat_SCIENTIST_3 = 0.93932;
		EM_outro3_am_science_chat_SCIENTIST_4 = 10.1982;
		EM_outro3_am_science_chat_SCIENTIST_5 = 10.5884;
		EM_outro3_am_science_chat_SCIENTIST_6 = 12.038;
		EM_outro3_am_science_chat_SCIENTIST_7 = 3.18338;
		EM_outro3_am_science_chat_SCIENTIST_8 = 12.8296;
		EM_outro3_am_science_chat_SCIENTIST_9 = 6.23537;
		EM_outro3_am_talkshow_radio_INTERVIEWERA_0 = 6.13687;
		EM_outro3_am_talkshow_radio_INTERVIEWERA_1 = 2.13948;
		EM_outro3_am_talkshow_radio_INTERVIEWERA_10 = 3.03746;
		EM_outro3_am_talkshow_radio_INTERVIEWERA_2 = 3.0839;
		EM_outro3_am_talkshow_radio_INTERVIEWERA_3 = 1.76093;
		EM_outro3_am_talkshow_radio_INTERVIEWERA_4 = 2.26973;
		EM_outro3_am_talkshow_radio_INTERVIEWERA_5 = 0.997732;
		EM_outro3_am_talkshow_radio_INTERVIEWERA_6 = 3.17306;
		EM_outro3_am_talkshow_radio_INTERVIEWERA_7 = 2.52599;
		EM_outro3_am_talkshow_radio_INTERVIEWERA_8 = 1.93887;
		EM_outro3_am_talkshow_radio_INTERVIEWERA_9 = 3.44236;
		EM_outro3_am_talkshow_radio_merged = 64.8503;
		EM_outro3_am_talkshow_radio_PHYSICIST_0 = 1.2417;
		EM_outro3_am_talkshow_radio_PHYSICIST_1 = 2.7922;
		EM_outro3_am_talkshow_radio_PHYSICIST_10 = 1.2085;
		EM_outro3_am_talkshow_radio_PHYSICIST_11 = 1.25077;
		EM_outro3_am_talkshow_radio_PHYSICIST_12 = 3.7381;
		EM_outro3_am_talkshow_radio_PHYSICIST_13 = 4.9541;
		EM_outro3_am_talkshow_radio_PHYSICIST_14 = 6.10692;
		EM_outro3_am_talkshow_radio_PHYSICIST_2 = 2.58367;
		EM_outro3_am_talkshow_radio_PHYSICIST_3 = 1.92796;
		EM_outro3_am_talkshow_radio_PHYSICIST_4 = 1.63803;
		EM_outro3_am_talkshow_radio_PHYSICIST_5 = 2.80261;
		EM_outro3_am_talkshow_radio_PHYSICIST_6 = 3.48308;
		EM_outro3_am_talkshow_radio_PHYSICIST_7 = 5.69925;
		EM_outro3_am_talkshow_radio_PHYSICIST_8 = 5.45311;
		EM_outro3_am_talkshow_radio_PHYSICIST_9 = 7.31025;
		EM_Puzzle_01 = 3;
		EM_Puzzle_02 = 2.92853;
		EM_Puzzle_03 = 2.91782;
		EM_RadioStation_Song_01 = 770.928;
		EM_RadioStation_Song_01_Transmission = 51.9149;
		EM_RadioStation_Song_02 = 434.05;
		EM_RadioStation_Song_02_Transmission = 61.441;
		EM_RadioStation_Song_03 = 408.875;
		EM_RadioStation_Song_03_Transmission = 33.7789;
		EM_RussianBeacon_01 = 15.7886;
		EM_Send_Hack_01 = 3.06719;
		EM_Send_Signal_01 = 9.61644;
		EM_Silence_01 = 1;
		EM_squad_compromised_SQUAD_0 = 1.75934;
		EM_squad_compromised_SQUAD_1 = 2.24853;
		EM_squad_compromised_SQUAD_2 = 2.90909;
		EM_squad_confused_SQUAD_0 = 3.49578;
		EM_squad_confused_SQUAD_1 = 3.34252;
		EM_squad_confused_SQUAD_2 = 3.74603;
		EM_squad_event_e_SQUAD_0 = 2.63846;
		EM_squad_event_e_SQUAD_1 = 2.62354;
		EM_squad_event_e_SQUAD_2 = 2.1185;
		EM_squad_event_n_SQUAD_0 = 2.85356;
		EM_squad_event_n_SQUAD_1 = 2.76558;
		EM_squad_event_n_SQUAD_2 = 2.23859;
		EM_squad_event_s_SQUAD_0 = 2.89533;
		EM_squad_event_s_SQUAD_1 = 2.98921;
		EM_squad_event_s_SQUAD_2 = 2.31361;
		EM_squad_event_w_SQUAD_0 = 2.83376;
		EM_squad_event_w_SQUAD_1 = 3.00385;
		EM_squad_event_w_SQUAD_2 = 2.19576;
		EM_squad_flare_e_SQUAD_0 = 1.96821;
		EM_squad_flare_e_SQUAD_1 = 2.23755;
		EM_squad_flare_e_SQUAD_2 = 2.24134;
		EM_squad_flare_n_SQUAD_0 = 2.50204;
		EM_squad_flare_n_SQUAD_1 = 2.45916;
		EM_squad_flare_n_SQUAD_2 = 2.24272;
		EM_squad_flare_s_SQUAD_0 = 1.6856;
		EM_squad_flare_s_SQUAD_1 = 2.43397;
		EM_squad_flare_s_SQUAD_2 = 2.21011;
		EM_squad_flare_w_SQUAD_0 = 1.61122;
		EM_squad_flare_w_SQUAD_1 = 2.33057;
		EM_squad_flare_w_SQUAD_2 = 2.2266;
		EM_squad_gunfire_e_SQUAD_0 = 2.29912;
		EM_squad_gunfire_e_SQUAD_1 = 1.79481;
		EM_squad_gunfire_e_SQUAD_2 = 3.03179;
		EM_squad_gunfire_n_SQUAD_0 = 2.30043;
		EM_squad_gunfire_n_SQUAD_1 = 1.93086;
		EM_squad_gunfire_n_SQUAD_2 = 3.28;
		EM_squad_gunfire_s_SQUAD_0 = 2.30184;
		EM_squad_gunfire_s_SQUAD_1 = 1.98224;
		EM_squad_gunfire_s_SQUAD_2 = 3.13331;
		EM_squad_gunfire_w_SQUAD_0 = 2.18048;
		EM_squad_gunfire_w_SQUAD_1 = 1.8819;
		EM_squad_gunfire_w_SQUAD_2 = 3.10556;
		EM_Squad_Id_01 = 2.00002;
		EM_Squad_Id_02 = 1.6088;
		EM_Squad_Id_03 = 1.6088;
		EM_Squad_Id_04 = 1.6088;
		EM_Squad_Id_05 = 1.6088;
		EM_Squad_Id_06 = 2.49352;
		EM_Squad_Id_07 = 1.74549;
		EM_Squad_Id_08 = 1.74551;
		EM_squad_identify_SQUAD_0 = 3.35374;
		EM_squad_identify_SQUAD_1 = 3.16989;
		EM_squad_identify_SQUAD_2 = 4.00386;
		EM_squad_negative_combat_SQUAD_0 = 2.11032;
		EM_squad_negative_combat_SQUAD_1 = 2.8266;
		EM_squad_negative_combat_SQUAD_2 = 3.15832;
		EM_squad_negative_move_SQUAD_0 = 2.36263;
		EM_squad_negative_move_SQUAD_1 = 3.13347;
		EM_squad_negative_move_SQUAD_2 = 2.49705;
		EM_squad_negative_SQUAD_0 = 4.8863;
		EM_squad_negative_SQUAD_1 = 2.6259;
		EM_squad_negative_SQUAD_2 = 4.30154;
		EM_squad_positive_move_SQUAD_0 = 2.13871;
		EM_squad_positive_move_SQUAD_1 = 1.96236;
		EM_squad_positive_move_SQUAD_2 = 2.43172;
		EM_squad_positive_move_SQUAD_3 = 2.53587;
		EM_squad_positive_move_SQUAD_4 = 1.66864;
		EM_squad_positive_move_SQUAD_5 = 2.4515;
		EM_squad_positive_SQUAD_0 = 1.2337;
		EM_squad_positive_SQUAD_1 = 1.83626;
		EM_squad_positive_SQUAD_2 = 1.80326;
		EM_squad_positive_SQUAD_3 = 1.8259;
		EM_squad_positive_SQUAD_4 = 1.89497;
		EM_squad_positive_SQUAD_5 = 1.88703;
		EM_squad_posrep_reply_SQUAD_0 = 1.94791;
		EM_squad_posrep_reply_SQUAD_1 = 2.07841;
		EM_squad_posrep_reply_SQUAD_2 = 2.21531;
		EM_squad_posrep_reply_SQUAD_3 = 2.71306;
		EM_squad_posrep_reply_SQUAD_4 = 1.61995;
		EM_squad_posrep_reply_SQUAD_5 = 2.79787;
		EM_squad_request_help_SQUAD_0 = 2.23073;
		EM_squad_request_help_SQUAD_1 = 2.06875;
		EM_squad_request_help_SQUAD_2 = 2.58333;
		EM_squad_say_again_SQUAD_0 = 1.73957;
		EM_squad_say_again_SQUAD_1 = 2.64386;
		EM_squad_say_again_SQUAD_2 = 2.30925;
		EM_squad_strange_signal_SQUAD_0 = 3.64789;
		EM_squad_strange_signal_SQUAD_1 = 3.58306;
		EM_squad_strange_signal_SQUAD_2 = 3.29463;
		EM_Stomper_Enc_01 = 23.4704;
		EM_Stomper_Jammed_01 = 23.4703;
		EM_Ugv_Enc_01 = 23.4704;
		EM_Ugv_Jammed_01 = 23.4704;
	};
	class SignalResponses
	{
		EM_freeroam1_am_nato_prisoner_request_SOLDIERA_0 = "EM_freeroam1_am_nato_prisoner_request_HQ_0";
		EM_freeroam1_em_device_searching_HQ_0 = "EM_freeroam1_em_device_searching_SOLDIERA_1";
		EM_freeroam1_em_device_searching_SOLDIERA_0 = "EM_freeroam1_em_device_searching_HQ_0";
		EM_freeroam1_em_device_searching_SOLDIERA_1 = "EM_freeroam1_em_device_searching_HQ_1";
		EM_freeroam1_em_device_turret_defense_HQ_0 = "EM_freeroam1_em_device_turret_defense_SOLDIERC_1";
		EM_freeroam1_em_device_turret_defense_HQ_1 = "EM_freeroam1_em_device_turret_defense_SOLDIERC_2";
		EM_freeroam1_em_device_turret_defense_SOLDIERC_0 = "EM_freeroam1_em_device_turret_defense_HQ_0";
		EM_freeroam1_em_device_turret_defense_SOLDIERC_1 = "EM_freeroam1_em_device_turret_defense_HQ_1";
		EM_freeroam1_em_device_turret_defense_SOLDIERC_2 = "EM_freeroam1_em_device_turret_defense_HQ_2";
		EM_freeroam1_em_ugv_actual_location_HQ_0 = "EM_freeroam1_em_ugv_actual_location_SOLDIERB_0";
		EM_freeroam1_em_ugv_actual_location_HQ_1 = "EM_freeroam1_em_ugv_actual_location_SOLDIERB_1";
		EM_freeroam1_em_ugv_actual_location_SOLDIERB_0 = "EM_freeroam1_em_ugv_actual_location_HQ_1";
		EM_freeroam1_em_ugv_probe_tip_HQ_0 = "EM_freeroam1_em_ugv_probe_tip_SOLDIERA_1";
		EM_freeroam1_em_ugv_probe_tip_HQ_1 = "EM_freeroam1_em_ugv_probe_tip_SOLDIERA_2";
		EM_freeroam1_em_ugv_probe_tip_SOLDIERA_0 = "EM_freeroam1_em_ugv_probe_tip_HQ_0";
		EM_freeroam1_em_ugv_probe_tip_SOLDIERA_1 = "EM_freeroam1_em_ugv_probe_tip_HQ_1";
		EM_freeroam1_em_ugv_probe_tip_SOLDIERA_2 = "EM_freeroam1_em_ugv_probe_tip_HQ_2";
		EM_freeroam1_em_valley_probe_awe_HQ_0 = "EM_freeroam1_em_valley_probe_awe_SOLDIERC_1";
		EM_freeroam1_em_valley_probe_awe_HQ_1 = "EM_freeroam1_em_valley_probe_awe_SOLDIERC_2";
		EM_freeroam1_em_valley_probe_awe_SOLDIERC_0 = "EM_freeroam1_em_valley_probe_awe_HQ_0";
		EM_freeroam1_em_valley_probe_awe_SOLDIERC_1 = "EM_freeroam1_em_valley_probe_awe_HQ_1";
		EM_freeroam1_em_valley_probe_awe_SOLDIERC_2 = "EM_freeroam1_em_valley_probe_awe_HQ_2";
		EM_freeroam2_am_forest_probe_discussion_HQ_0 = "EM_freeroam2_am_forest_probe_discussion_SOLDIERB_1";
		EM_freeroam2_am_forest_probe_discussion_HQ_1 = "EM_freeroam2_am_forest_probe_discussion_SOLDIERB_2";
		EM_freeroam2_am_forest_probe_discussion_HQ_2 = "EM_freeroam2_am_forest_probe_discussion_SOLDIERB_3";
		EM_freeroam2_am_forest_probe_discussion_HQ_3 = "EM_freeroam2_am_forest_probe_discussion_SOLDIERB_4";
		EM_freeroam2_am_forest_probe_discussion_SOLDIERB_0 = "EM_freeroam2_am_forest_probe_discussion_HQ_0";
		EM_freeroam2_am_forest_probe_discussion_SOLDIERB_1 = "EM_freeroam2_am_forest_probe_discussion_HQ_1";
		EM_freeroam2_am_forest_probe_discussion_SOLDIERB_2 = "EM_freeroam2_am_forest_probe_discussion_HQ_2";
		EM_freeroam2_am_forest_probe_discussion_SOLDIERB_3 = "EM_freeroam2_am_forest_probe_discussion_HQ_3";
		EM_freeroam2_am_forest_probe_discussion_SOLDIERB_4 = "EM_freeroam2_am_forest_probe_discussion_HQ_4";
		EM_freeroam2_am_looters_found_radio_HQ_0 = "EM_freeroam2_am_looters_found_radio_SOLDIERB_1";
		EM_freeroam2_am_looters_found_radio_HQ_1 = "EM_freeroam2_am_looters_found_radio_SOLDIERB_2";
		EM_freeroam2_am_looters_found_radio_SOLDIERB_0 = "EM_freeroam2_am_looters_found_radio_HQ_0";
		EM_freeroam2_am_looters_found_radio_SOLDIERB_1 = "EM_freeroam2_am_looters_found_radio_HQ_1";
		EM_freeroam2_am_looters_found_radio_SOLDIERB_2 = "EM_freeroam2_am_looters_found_radio_HQ_2";
		EM_freeroam2_am_matter_ball_found_ldf_investigate_HQ_0 = "EM_freeroam2_am_matter_ball_found_ldf_investigate_SOLDIERA_0";
		EM_freeroam2_am_matter_ball_found_ldf_investigate_HQ_1 = "EM_freeroam2_am_matter_ball_found_ldf_investigate_SOLDIERA_1";
		EM_freeroam2_am_matter_ball_found_ldf_investigate_HQ_2 = "EM_freeroam2_am_matter_ball_found_ldf_investigate_SOLDIERA_2";
		EM_freeroam2_am_matter_ball_found_ldf_investigate_SOLDIERA_0 = "EM_freeroam2_am_matter_ball_found_ldf_investigate_HQ_1";
		EM_freeroam2_am_matter_ball_found_ldf_investigate_SOLDIERA_1 = "EM_freeroam2_am_matter_ball_found_ldf_investigate_HQ_2";
		EM_freeroam2_am_radio_station_message_MAJOR_0 = "EM_freeroam2_am_radio_station_message_MAJOR_1";
		EM_freeroam2_am_radio_station_message_MAJOR_1 = "EM_freeroam2_am_radio_station_message_MAJOR_2";
		EM_freeroam2_am_radio_station_message_MAJOR_2 = "EM_freeroam2_am_radio_station_message_MAJOR_3";
		EM_freeroam2_am_radio_station_message_MAJOR_3 = "EM_freeroam2_am_radio_station_message_MAJOR_4";
		EM_freeroam2_am_radio_station_message_MAJOR_4 = "EM_freeroam2_am_radio_station_message_MAJOR_5";
		EM_freeroam2_am_radio_station_message_MAJOR_5 = "EM_freeroam2_am_radio_station_message_MAJOR_6";
		EM_freeroam2_am_radio_station_message_MAJOR_6 = "EM_freeroam2_am_radio_station_message_MAJOR_7";
		EM_freeroam2_ta_ambush_probe_eavesdrop_assign_task_HQ_0 = "EM_freeroam2_ta_ambush_probe_eavesdrop_assign_task_SOLDIERC_1";
		EM_freeroam2_ta_ambush_probe_eavesdrop_assign_task_SOLDIERC_0 = "EM_freeroam2_ta_ambush_probe_eavesdrop_assign_task_HQ_0";
		EM_freeroam2_ta_ambush_probe_eavesdrop_assign_task_SOLDIERC_1 = "EM_freeroam2_ta_ambush_probe_eavesdrop_assign_task_HQ_1";
		EM_freeroam2_ta_ambush_probe_eavesdrop_assign_task_var1_HQ_0 = "EM_freeroam2_ta_ambush_probe_eavesdrop_assign_task_var1_SOLDIERC_1";
		EM_freeroam2_ta_ambush_probe_eavesdrop_assign_task_var1_SOLDIERC_0 = "EM_freeroam2_ta_ambush_probe_eavesdrop_assign_task_var1_HQ_0";
		EM_freeroam2_ta_ambush_probe_eavesdrop_assign_task_var1_SOLDIERC_1 = "EM_freeroam2_ta_ambush_probe_eavesdrop_assign_task_var1_HQ_1";
		EM_freeroam2_ta_ambush_probe_eavesdrop_assign_task_var2_HQ_0 = "EM_freeroam2_ta_ambush_probe_eavesdrop_assign_task_var2_SOLDIERC_1";
		EM_freeroam2_ta_ambush_probe_eavesdrop_assign_task_var2_SOLDIERC_0 = "EM_freeroam2_ta_ambush_probe_eavesdrop_assign_task_var2_HQ_0";
		EM_freeroam2_ta_ambush_probe_eavesdrop_assign_task_var2_SOLDIERC_1 = "EM_freeroam2_ta_ambush_probe_eavesdrop_assign_task_var2_HQ_1";
		EM_intro2_s_am_2_loop_SQUAD_0 = "EM_intro2_s_am_2_loop_SQUAD_1";
		EM_intro2_s_am_2_loop_SQUAD_1 = "EM_intro2_s_am_2_loop_SQUAD_2";
		EM_intro2_s_am_3_loop_SQUAD_0 = "EM_intro2_s_am_3_loop_SQUAD_1";
		EM_intro2_s_am_3_loop_SQUAD_1 = "EM_intro2_s_am_3_loop_SQUAD_2";
		EM_outro2_fox_2_SOLDIERA_0 = "EM_outro2_fox_2_HQ_0";
		EM_outro2_probe_explosives_HQ_0 = "EM_outro2_probe_explosives_SOLDIERB_0";
		EM_outro2_probe_explosives_HQ_1 = "EM_outro2_probe_explosives_SOLDIERB_1";
		EM_outro2_probe_explosives_HQ_2 = "EM_outro2_probe_explosives_SOLDIERB_2";
		EM_outro2_probe_explosives_SOLDIERB_0 = "EM_outro2_probe_explosives_HQ_1";
		EM_outro2_probe_explosives_SOLDIERB_1 = "EM_outro2_probe_explosives_HQ_2";
		EM_outro3_am_aan_radio_news_NEWSREADERB_0 = "EM_outro3_am_aan_radio_news_NEWSREADERB_1";
		EM_outro3_am_aan_radio_news_NEWSREADERB_1 = "EM_outro3_am_aan_radio_news_NEWSREADERB_2";
		EM_outro3_am_aan_radio_news_NEWSREADERB_2 = "EM_outro3_am_aan_radio_news_NEWSREADERB_3";
		EM_outro3_am_aan_radio_news_NEWSREADERB_3 = "EM_outro3_am_aan_radio_news_NEWSREADERB_4";
		EM_outro3_am_aan_radio_news_NEWSREADERB_4 = "EM_outro3_am_aan_radio_news_NEWSREADERB_5";
		EM_outro3_am_aan_radio_news_NEWSREADERB_5 = "EM_outro3_am_aan_radio_news_NEWSREADERB_6";
		EM_outro3_am_aan_radio_news_NEWSREADERB_6 = "EM_outro3_am_aan_radio_news_NEWSREADERB_7";
		EM_outro3_am_aan_radio_news_NEWSREADERB_7 = "EM_outro3_am_aan_radio_news_NEWSREADERB_8";
		EM_outro3_am_cbn_radio_news_NEWSREADERC_0 = "EM_outro3_am_cbn_radio_news_NEWSREADERC_1";
		EM_outro3_am_cbn_radio_news_NEWSREADERC_1 = "EM_outro3_am_cbn_radio_news_NEWSREADERC_2";
		EM_outro3_am_cbn_radio_news_NEWSREADERC_2 = "EM_outro3_am_cbn_radio_news_NEWSREADERC_3";
		EM_outro3_am_cbn_radio_news_NEWSREADERC_3 = "EM_outro3_am_cbn_radio_news_NEWSREADERC_4";
		EM_outro3_am_cbn_radio_news_NEWSREADERC_4 = "EM_outro3_am_cbn_radio_news_NEWSREADERC_5";
		EM_outro3_am_cbn_radio_news_NEWSREADERC_5 = "EM_outro3_am_cbn_radio_news_NEWSREADERC_6";
		EM_outro3_am_cbn_radio_news_NEWSREADERC_6 = "EM_outro3_am_cbn_radio_news_NEWSREADERC_7";
		EM_outro3_am_cbn_radio_news_NEWSREADERC_7 = "EM_outro3_am_cbn_radio_news_NEWSREADERC_8";
		EM_outro3_am_cbn_radio_news_NEWSREADERC_8 = "EM_outro3_am_cbn_radio_news_NEWSREADERC_9";
		EM_outro3_am_conspiracy_radio_THEORIST_0 = "EM_outro3_am_conspiracy_radio_THEORIST_1";
		EM_outro3_am_conspiracy_radio_THEORIST_1 = "EM_outro3_am_conspiracy_radio_THEORIST_2";
		EM_outro3_am_conspiracy_radio_THEORIST_10 = "EM_outro3_am_conspiracy_radio_THEORIST_11";
		EM_outro3_am_conspiracy_radio_THEORIST_11 = "EM_outro3_am_conspiracy_radio_THEORIST_12";
		EM_outro3_am_conspiracy_radio_THEORIST_12 = "EM_outro3_am_conspiracy_radio_THEORIST_13";
		EM_outro3_am_conspiracy_radio_THEORIST_13 = "EM_outro3_am_conspiracy_radio_THEORIST_14";
		EM_outro3_am_conspiracy_radio_THEORIST_14 = "EM_outro3_am_conspiracy_radio_THEORIST_15";
		EM_outro3_am_conspiracy_radio_THEORIST_15 = "EM_outro3_am_conspiracy_radio_THEORIST_16";
		EM_outro3_am_conspiracy_radio_THEORIST_16 = "EM_outro3_am_conspiracy_radio_THEORIST_17";
		EM_outro3_am_conspiracy_radio_THEORIST_17 = "EM_outro3_am_conspiracy_radio_THEORIST_18";
		EM_outro3_am_conspiracy_radio_THEORIST_18 = "EM_outro3_am_conspiracy_radio_THEORIST_19";
		EM_outro3_am_conspiracy_radio_THEORIST_19 = "EM_outro3_am_conspiracy_radio_THEORIST_20";
		EM_outro3_am_conspiracy_radio_THEORIST_2 = "EM_outro3_am_conspiracy_radio_THEORIST_3";
		EM_outro3_am_conspiracy_radio_THEORIST_20 = "EM_outro3_am_conspiracy_radio_THEORIST_21";
		EM_outro3_am_conspiracy_radio_THEORIST_3 = "EM_outro3_am_conspiracy_radio_THEORIST_4";
		EM_outro3_am_conspiracy_radio_THEORIST_4 = "EM_outro3_am_conspiracy_radio_THEORIST_5";
		EM_outro3_am_conspiracy_radio_THEORIST_5 = "EM_outro3_am_conspiracy_radio_THEORIST_6";
		EM_outro3_am_conspiracy_radio_THEORIST_6 = "EM_outro3_am_conspiracy_radio_THEORIST_7";
		EM_outro3_am_conspiracy_radio_THEORIST_7 = "EM_outro3_am_conspiracy_radio_THEORIST_8";
		EM_outro3_am_conspiracy_radio_THEORIST_8 = "EM_outro3_am_conspiracy_radio_THEORIST_9";
		EM_outro3_am_conspiracy_radio_THEORIST_9 = "EM_outro3_am_conspiracy_radio_THEORIST_10";
		EM_outro3_am_polish_radio_news_NEWSREADERA_0 = "EM_outro3_am_polish_radio_news_NEWSREADERA_1";
		EM_outro3_am_polish_radio_news_NEWSREADERA_1 = "EM_outro3_am_polish_radio_news_NEWSREADERA_2";
		EM_outro3_am_polish_radio_news_NEWSREADERA_2 = "EM_outro3_am_polish_radio_news_NEWSREADERA_3";
		EM_outro3_am_polish_radio_news_NEWSREADERA_3 = "EM_outro3_am_polish_radio_news_NEWSREADERA_4";
		EM_outro3_am_polish_radio_news_NEWSREADERA_4 = "EM_outro3_am_polish_radio_news_NEWSREADERA_5";
		EM_outro3_am_polish_radio_news_NEWSREADERA_5 = "EM_outro3_am_polish_radio_news_NEWSREADERA_6";
		EM_outro3_am_polish_radio_news_NEWSREADERA_6 = "EM_outro3_am_polish_radio_news_NEWSREADERA_7";
		EM_outro3_am_polish_radio_news_NEWSREADERA_7 = "EM_outro3_am_polish_radio_news_NEWSREADERA_8";
		EM_outro3_am_polish_radio_news_NEWSREADERA_8 = "EM_outro3_am_polish_radio_news_NEWSREADERA_9";
		EM_outro3_am_science_chat_INTERVIEWERB_0 = "EM_outro3_am_science_chat_INTERVIEWERB_1";
		EM_outro3_am_science_chat_INTERVIEWERB_1 = "EM_outro3_am_science_chat_SCIENTIST_1";
		EM_outro3_am_science_chat_INTERVIEWERB_2 = "EM_outro3_am_science_chat_SCIENTIST_3";
		EM_outro3_am_science_chat_INTERVIEWERB_3 = "EM_outro3_am_science_chat_SCIENTIST_6";
		EM_outro3_am_science_chat_SCIENTIST_0 = "EM_outro3_am_science_chat_INTERVIEWERB_0";
		EM_outro3_am_science_chat_SCIENTIST_1 = "EM_outro3_am_science_chat_SCIENTIST_2";
		EM_outro3_am_science_chat_SCIENTIST_2 = "EM_outro3_am_science_chat_INTERVIEWERB_2";
		EM_outro3_am_science_chat_SCIENTIST_3 = "EM_outro3_am_science_chat_SCIENTIST_4";
		EM_outro3_am_science_chat_SCIENTIST_4 = "EM_outro3_am_science_chat_SCIENTIST_5";
		EM_outro3_am_science_chat_SCIENTIST_5 = "EM_outro3_am_science_chat_INTERVIEWERB_3";
		EM_outro3_am_science_chat_SCIENTIST_6 = "EM_outro3_am_science_chat_SCIENTIST_7";
		EM_outro3_am_science_chat_SCIENTIST_7 = "EM_outro3_am_science_chat_SCIENTIST_8";
		EM_outro3_am_science_chat_SCIENTIST_8 = "EM_outro3_am_science_chat_SCIENTIST_9";
		EM_outro3_am_talkshow_radio_INTERVIEWERA_0 = "EM_outro3_am_talkshow_radio_INTERVIEWERA_1";
		EM_outro3_am_talkshow_radio_INTERVIEWERA_1 = "EM_outro3_am_talkshow_radio_PHYSICIST_0";
		EM_outro3_am_talkshow_radio_INTERVIEWERA_10 = "EM_outro3_am_talkshow_radio_PHYSICIST_11";
		EM_outro3_am_talkshow_radio_INTERVIEWERA_2 = "EM_outro3_am_talkshow_radio_PHYSICIST_1";
		EM_outro3_am_talkshow_radio_INTERVIEWERA_3 = "EM_outro3_am_talkshow_radio_INTERVIEWERA_4";
		EM_outro3_am_talkshow_radio_INTERVIEWERA_4 = "EM_outro3_am_talkshow_radio_PHYSICIST_4";
		EM_outro3_am_talkshow_radio_INTERVIEWERA_5 = "EM_outro3_am_talkshow_radio_PHYSICIST_7";
		EM_outro3_am_talkshow_radio_INTERVIEWERA_6 = "EM_outro3_am_talkshow_radio_PHYSICIST_8";
		EM_outro3_am_talkshow_radio_INTERVIEWERA_7 = "EM_outro3_am_talkshow_radio_PHYSICIST_10";
		EM_outro3_am_talkshow_radio_INTERVIEWERA_8 = "EM_outro3_am_talkshow_radio_INTERVIEWERA_9";
		EM_outro3_am_talkshow_radio_INTERVIEWERA_9 = "EM_outro3_am_talkshow_radio_INTERVIEWERA_10";
		EM_outro3_am_talkshow_radio_PHYSICIST_0 = "EM_outro3_am_talkshow_radio_INTERVIEWERA_2";
		EM_outro3_am_talkshow_radio_PHYSICIST_1 = "EM_outro3_am_talkshow_radio_PHYSICIST_2";
		EM_outro3_am_talkshow_radio_PHYSICIST_10 = "EM_outro3_am_talkshow_radio_INTERVIEWERA_8";
		EM_outro3_am_talkshow_radio_PHYSICIST_11 = "EM_outro3_am_talkshow_radio_PHYSICIST_12";
		EM_outro3_am_talkshow_radio_PHYSICIST_12 = "EM_outro3_am_talkshow_radio_PHYSICIST_13";
		EM_outro3_am_talkshow_radio_PHYSICIST_13 = "EM_outro3_am_talkshow_radio_PHYSICIST_14";
		EM_outro3_am_talkshow_radio_PHYSICIST_2 = "EM_outro3_am_talkshow_radio_PHYSICIST_3";
		EM_outro3_am_talkshow_radio_PHYSICIST_3 = "EM_outro3_am_talkshow_radio_INTERVIEWERA_3";
		EM_outro3_am_talkshow_radio_PHYSICIST_4 = "EM_outro3_am_talkshow_radio_PHYSICIST_5";
		EM_outro3_am_talkshow_radio_PHYSICIST_5 = "EM_outro3_am_talkshow_radio_PHYSICIST_6";
		EM_outro3_am_talkshow_radio_PHYSICIST_6 = "EM_outro3_am_talkshow_radio_INTERVIEWERA_5";
		EM_outro3_am_talkshow_radio_PHYSICIST_7 = "EM_outro3_am_talkshow_radio_INTERVIEWERA_6";
		EM_outro3_am_talkshow_radio_PHYSICIST_8 = "EM_outro3_am_talkshow_radio_PHYSICIST_9";
		EM_outro3_am_talkshow_radio_PHYSICIST_9 = "EM_outro3_am_talkshow_radio_INTERVIEWERA_7";
		EM_squad_explosion_e_SQUAD_0 = "EM_squad_explosion_e_SQUAD_1";
		EM_squad_explosion_e_SQUAD_1 = "EM_squad_explosion_e_SQUAD_2";
		EM_squad_explosion_n_SQUAD_0 = "EM_squad_explosion_n_SQUAD_1";
		EM_squad_explosion_n_SQUAD_1 = "EM_squad_explosion_n_SQUAD_2";
		EM_squad_explosion_s_SQUAD_0 = "EM_squad_explosion_s_SQUAD_1";
		EM_squad_explosion_s_SQUAD_1 = "EM_squad_explosion_s_SQUAD_2";
		EM_squad_explosion_w_SQUAD_0 = "EM_squad_explosion_w_SQUAD_1";
		EM_squad_explosion_w_SQUAD_1 = "EM_squad_explosion_w_SQUAD_2";
		EM_squad_gunfire_e_SQUAD_0 = "EM_squad_gunfire_e_SQUAD_1";
		EM_squad_gunfire_e_SQUAD_1 = "EM_squad_gunfire_e_SQUAD_2";
		EM_squad_gunfire_n_SQUAD_0 = "EM_squad_gunfire_n_SQUAD_1";
		EM_squad_gunfire_n_SQUAD_1 = "EM_squad_gunfire_n_SQUAD_2";
		EM_squad_gunfire_s_SQUAD_0 = "EM_squad_gunfire_s_SQUAD_1";
		EM_squad_gunfire_s_SQUAD_1 = "EM_squad_gunfire_s_SQUAD_2";
		EM_squad_gunfire_w_SQUAD_0 = "EM_squad_gunfire_w_SQUAD_1";
		EM_squad_gunfire_w_SQUAD_1 = "EM_squad_gunfire_w_SQUAD_2";
	};
	class Signals
	{
		class EM_Alien
		{
			isVariants = 1;
			links[] = {"", "EM_Drone_01_Tracking_01", "EM_Mothership_01_Tracking_01", "EM_Puzzle_01", "EM_Puzzle_02", "EM_Puzzle_03", "EM_Drone_01", "EM_MotherShip_01"};
		};
		class EM_AutoTurret_Enc_01
		{
			displayName = "class EM_AutoTurret_Enc_01";
			folder = "Human";
			loop = 1;
			soundStrong = "EM_AutoTurret_Enc_01_S";
			soundWeak = "EM_AutoTurret_Enc_01_W";
			type = "Human";
			variants = 2;
			vehicle = "EM_AutoTurret_Enc_01_F";
			volumeStrong = "1.5 * (1 * (	CustomSoundController1 factor [0,1]) * 	CustomSoundController1 max 0)";
			volumeWeak = "1.5 * (0.75 * (	CustomSoundController1 factor [0.45,0.01]) * 	CustomSoundController1 max 0)";
		};
		class EM_AutoTurret_Jammed_01
		{
			displayName = "class EM_AutoTurret_Jammed_01";
			folder = "Human";
			loop = 1;
			soundStrong = "EM_AutoTurret_Jammed_01_S";
			soundWeak = "EM_AutoTurret_Jammed_01_W";
			type = "Human";
			variants = 2;
			vehicle = "EM_AutoTurret_Jammed_01_F";
			volumeStrong = "1.5 * (1 * (	CustomSoundController1 factor [0,1]) * 	CustomSoundController1 max 0)";
			volumeWeak = "1.5 * (0.75 * (	CustomSoundController1 factor [0.45,0.01]) * 	CustomSoundController1 max 0)";
		};
		class EM_Base_Noise_01
		{
			displayName = "class EM_Base_Noise_01";
			folder = "Noise";
			loop = 1;
			soundStrong = "EM_Base_Noise_01_S";
			soundWeak = "EM_Base_Noise_01_W";
			type = "Noise";
			variants = 2;
			vehicle = "EM_Base_Noise_01_F";
			volumeStrong = "1.5 * (0.45* 	CustomSoundController1)";
			volumeWeak = "1.5 * (0.45* CustomSoundController2)";
		};
		class EM_Base_Noise_01_Outro3
		{
			displayName = "class EM_Base_Noise_01_Outro3";
			folder = "Noise";
			loop = 1;
			soundStrong = "EM_Base_Noise_01_Outro3_S";
			soundWeak = "EM_Base_Noise_01_Outro3_W";
			type = "Noise";
			variants = 2;
			vehicle = "EM_Base_Noise_01_Outro3_F";
			volumeStrong = "1.5 * (0.75 * 	CustomSoundController1)";
			volumeWeak = "1.5 * (1.5  * CustomSoundController2)";
		};
		class EM_BlackBox_DistressSignal_01
		{
			displayName = "class EM_BlackBox_DistressSignal_01";
			folder = "Human";
			loop = 1;
			soundStrong = "EM_BlackBox_DistressSignal_01_S";
			soundWeak = "EM_BlackBox_DistressSignal_01_S";
			type = "Human";
			variants = 1;
			vehicle = "EM_BlackBox_DistressSignal_01_F";
			volumeStrong = "1.5 * (0.5 * (	CustomSoundController1 factor [0,1]) * 	CustomSoundController1 max 0)";
			volumeWeak = "0";
		};
		class EM_Credits
		{
			isVariants = 1;
			links[] = {"", "EM_outro3_am_talkshow_radio_merged", "EM_outro3_am_aan_radio_news_merged", "EM_outro3_am_cbn_radio_news_merged", "EM_outro3_am_science_chat_merged", "EM_outro3_am_conspiracy_radio_merged", "EM_outro3_am_polish_radio_news_merged"};
		};
		class EM_Darter_Enc_01
		{
			displayName = "class EM_Darter_Enc_01";
			folder = "Human";
			loop = 1;
			soundStrong = "EM_Darter_Enc_01_S";
			soundWeak = "EM_Darter_Enc_01_W";
			type = "Human";
			variants = 2;
			vehicle = "EM_Darter_Enc_01_F";
			volumeStrong = "1.5 * (0.25 * (	CustomSoundController1 factor [0,1]) * 	CustomSoundController1 max 0)";
			volumeWeak = "1.5 * (0.2 * (	CustomSoundController1 factor [0.45,0.01]) * 	CustomSoundController1 max 0)";
		};
		class EM_Darter_Jammed_01
		{
			displayName = "class EM_Darter_Jammed_01";
			folder = "Human";
			loop = 1;
			soundStrong = "EM_Darter_Jammed_01_S";
			soundWeak = "EM_Darter_Jammed_01_W";
			type = "Human";
			variants = 2;
			vehicle = "EM_Darter_Jammed_01_F";
			volumeStrong = "1.5 * (0.4 * (	CustomSoundController1 factor [0,1]) * 	CustomSoundController1 max 0)";
			volumeWeak = "1.5 * (0.25 * (	CustomSoundController1 factor [0.45,0.01]) * 	CustomSoundController1 max 0)";
		};
		class EM_Drone_01
		{
			displayName = "class EM_Drone_01";
			folder = "Alien";
			loop = 1;
			soundStrong = "EM_Drone_01_S";
			soundWeak = "EM_Drone_01_W";
			type = "Alien";
			variants = 2;
			vehicle = "EM_Drone_01_F";
			volumeStrong = "1.5 * (1.5 * (	CustomSoundController1 factor [0.01,1]))";
			volumeWeak = "1.5 * (0 * (	CustomSoundController1 factor [0.5,0.001]) * 	CustomSoundController1 max 0)";
		};
		class EM_Drone_01_Tracking_01
		{
			displayName = "class EM_Drone_01_Tracking_01";
			folder = "Alien";
			loop = 1;
			soundStrong = "EM_Drone_01_Tracking_01_S";
			soundWeak = "EM_Drone_01_Tracking_01_W";
			type = "Alien";
			variants = 2;
			vehicle = "EM_Drone_01_Tracking_01_F";
			volumeStrong = "(1.5 * (1 * (	CustomSoundController1 factor [0.25,1]))) min 0.6";
			volumeWeak = "1.5 * (1.9 * (	CustomSoundController1 factor [0.35,0.1]) * 	CustomSoundController1 max 0)";
		};
		class EM_Emergency_Broadcast_01
		{
			displayName = "class EM_Emergency_Broadcast_01";
			folder = "Human";
			loop = 1;
			soundStrong = "EM_Emergency_Broadcast_01_S";
			soundWeak = "EM_Emergency_Broadcast_01_W";
			type = "Human";
			variants = 2;
			vehicle = "EM_Emergency_Broadcast_01_F";
			volumeStrong = "1.5 * (0.1 * (	CustomSoundController1 factor [0,1]) * 	CustomSoundController1 max 0)";
			volumeWeak = "1.5 * (0* 0.35 * (	CustomSoundController1 factor [0.45,0.01]) * 	CustomSoundController1 max 0)";
		};
		class EM_ESD_01
		{
			displayName = "class EM_ESD_01";
			folder = "Human";
			loop = 1;
			soundStrong = "EM_ESD_01_S";
			soundWeak = "EM_ESD_01_S";
			type = "Human";
			variants = 1;
			vehicle = "EM_ESD_01_F";
			volumeStrong = "1.5 * (0.3 * 	CustomSoundController1)";
			volumeWeak = "0";
		};
		class EM_freeroam1_am_nato_prisoner_request
		{
			isVariants = 0;
			links[] = {"", "EM_freeroam1_am_nato_prisoner_request_SOLDIERA_0", "EM_freeroam1_am_nato_prisoner_request_HQ_0"};
		};
		class EM_freeroam1_am_nato_prisoner_request_HQ_0
		{
			folder = "Human";
			loop = 0;
			soundStrong = "EM_freeroam1_am_nato_prisoner_request_HQ_0_S";
			soundWeak = "EM_freeroam1_am_nato_prisoner_request_HQ_0_S";
			text = "Excellent catch, Alpha! Sounds like you caught some of our cowboys from Kresnik. Zip tie them and keep them guarded; we'll send a transport and bring them in. Out.";
			textRaw = "Excellent catch Alpha! Sounds like you caught some of our cowboys from Kresnik. Zip tie them and keep them guarded; we'll send a transport and bring them in. Out.";
			type = "HQ";
			variants = 1;
			vehicle = "EM_freeroam1_am_nato_prisoner_request_HQ_0_F";
			volumeStrong = "1.5 * (0.5 * 	CustomSoundController1)";
			volumeWeak = "0";
		};
		class EM_freeroam1_am_nato_prisoner_request_SOLDIERA_0
		{
			folder = "Human";
			loop = 0;
			soundStrong = "EM_freeroam1_am_nato_prisoner_request_SOLDIERA_0_S";
			soundWeak = "EM_freeroam1_am_nato_prisoner_request_SOLDIERA_0_S";
			text = "Gray Wolf, it's Alpha here, we just picked up four Americans, wondering around in the woods. Over.";
			textRaw = "Gray Wolf it's Alpha here we just picked up four Americans wondering around in the woods. Over.";
			type = "SOLDIERA";
			variants = 1;
			vehicle = "EM_freeroam1_am_nato_prisoner_request_SOLDIERA_0_F";
			volumeStrong = "1.5 * (0.5 * 	CustomSoundController1)";
			volumeWeak = "0";
		};
		class EM_freeroam1_em_device_searching
		{
			isVariants = 0;
			links[] = {"", "EM_freeroam1_em_device_searching_SOLDIERA_0", "EM_freeroam1_em_device_searching_HQ_0", "EM_freeroam1_em_device_searching_SOLDIERA_1", "EM_freeroam1_em_device_searching_HQ_1"};
		};
		class EM_freeroam1_em_device_searching_HQ_0
		{
			folder = "Human";
			loop = 0;
			soundStrong = "EM_freeroam1_em_device_searching_HQ_0_S";
			soundWeak = "EM_freeroam1_em_device_searching_HQ_0_S";
			text = "Copy. Any survivors or intel? Over.";
			textRaw = "Copy. Any survivors or intel? Over.";
			type = "HQ";
			variants = 1;
			vehicle = "EM_freeroam1_em_device_searching_HQ_0_F";
			volumeStrong = "1.5 * (0.5 * 	CustomSoundController1)";
			volumeWeak = "0";
		};
		class EM_freeroam1_em_device_searching_HQ_1
		{
			folder = "Human";
			loop = 0;
			soundStrong = "EM_freeroam1_em_device_searching_HQ_1_S";
			soundWeak = "EM_freeroam1_em_device_searching_HQ_1_S";
			text = "Misinformation, most likely. Still. Gather what you can for processing. And try to get a bead on anyone who could've been onboard. Out.";
			textRaw = "Misinformation most likely. Still. Gather what you can for processing. And try to get a bead on anyone who could've been onboard. Out.";
			type = "HQ";
			variants = 1;
			vehicle = "EM_freeroam1_em_device_searching_HQ_1_F";
			volumeStrong = "1.5 * (0.5 * 	CustomSoundController1)";
			volumeWeak = "0";
		};
		class EM_freeroam1_em_device_searching_SOLDIERA_0
		{
			folder = "Human";
			loop = 0;
			soundStrong = "EM_freeroam1_em_device_searching_SOLDIERA_0_S";
			soundWeak = "EM_freeroam1_em_device_searching_SOLDIERA_0_S";
			text = "Gray Wolf. It's Delta. Crash site's secure. Over.";
			textRaw = "Gray Wolf. It's Delta. Crash site's secure. Over.";
			type = "SOLDIERA";
			variants = 1;
			vehicle = "EM_freeroam1_em_device_searching_SOLDIERA_0_F";
			volumeStrong = "1.5 * (0.5 * 	CustomSoundController1)";
			volumeWeak = "0";
		};
		class EM_freeroam1_em_device_searching_SOLDIERA_1
		{
			folder = "Human";
			loop = 0;
			soundStrong = "EM_freeroam1_em_device_searching_SOLDIERA_1_S";
			soundWeak = "EM_freeroam1_em_device_searching_SOLDIERA_1_S";
			text = "No survivors - we tried to save the pilot but he didn't make it. As for intel, we got papers. Maybe from an in-flight briefing. Over.";
			textRaw = "No survivors - we tried to save the pilot but he didn't make it. As for intel we got papers. Maybe from an in-flight briefing. Over.";
			type = "SOLDIERA";
			variants = 1;
			vehicle = "EM_freeroam1_em_device_searching_SOLDIERA_1_F";
			volumeStrong = "1.5 * (0.5 * 	CustomSoundController1)";
			volumeWeak = "0";
		};
		class EM_freeroam1_em_device_turret_defense
		{
			isVariants = 0;
			links[] = {"", "EM_freeroam1_em_device_turret_defense_SOLDIERC_0", "EM_freeroam1_em_device_turret_defense_HQ_0", "EM_freeroam1_em_device_turret_defense_SOLDIERC_1", "EM_freeroam1_em_device_turret_defense_HQ_1", "EM_freeroam1_em_device_turret_defense_SOLDIERC_2", "EM_freeroam1_em_device_turret_defense_HQ_2"};
		};
		class EM_freeroam1_em_device_turret_defense_HQ_0
		{
			folder = "Human";
			loop = 0;
			soundStrong = "EM_freeroam1_em_device_turret_defense_HQ_0_S";
			soundWeak = "EM_freeroam1_em_device_turret_defense_HQ_0_S";
			text = "Solid copy, Bravo. Good work. Designate objective rally points and don't let anything through. The rogue Yankees are really causing chaos. Over.";
			textRaw = "Solid copy Bravo. Good work. Designate objective rally points and don't let anything through. The rogue Yankees are really causing chaos. Over.";
			type = "HQ";
			variants = 1;
			vehicle = "EM_freeroam1_em_device_turret_defense_HQ_0_F";
			volumeStrong = "1.5 * (0.5 * 	CustomSoundController1)";
			volumeWeak = "0";
		};
		class EM_freeroam1_em_device_turret_defense_HQ_1
		{
			folder = "Human";
			loop = 0;
			soundStrong = "EM_freeroam1_em_device_turret_defense_HQ_1_S";
			soundWeak = "EM_freeroam1_em_device_turret_defense_HQ_1_S";
			text = "Focus, Sergeant, we're driving them back. Come first light, we'll be in control of the situation. Over.";
			textRaw = "Focus Sergeant we're driving them back. Come first light we'll be in control of the situation. Over.";
			type = "HQ";
			variants = 1;
			vehicle = "EM_freeroam1_em_device_turret_defense_HQ_1_F";
			volumeStrong = "1.5 * (0.5 * 	CustomSoundController1)";
			volumeWeak = "0";
		};
		class EM_freeroam1_em_device_turret_defense_HQ_2
		{
			folder = "Human";
			loop = 0;
			soundStrong = "EM_freeroam1_em_device_turret_defense_HQ_2_S";
			soundWeak = "EM_freeroam1_em_device_turret_defense_HQ_2_S";
			text = "Negative. Last we heard, BIOSEC along the border is still their top concern. Could be enough to justify an incursion, though. So heads on a swivel, out.";
			textRaw = "Negative. Last we heard BIOSEC along the border is still their top concern. Could be enough to justify an incursion though. So heads on a swivel out.";
			type = "HQ";
			variants = 1;
			vehicle = "EM_freeroam1_em_device_turret_defense_HQ_2_F";
			volumeStrong = "1.5 * (0.5 * 	CustomSoundController1)";
			volumeWeak = "0";
		};
		class EM_freeroam1_em_device_turret_defense_SOLDIERC_0
		{
			folder = "Human";
			loop = 0;
			soundStrong = "EM_freeroam1_em_device_turret_defense_SOLDIERC_0_S";
			soundWeak = "EM_freeroam1_em_device_turret_defense_SOLDIERC_0_S";
			text = "Bravo to Gray Wolf. Update. That autonomous turret's deployed and online, how copy? Over.";
			textRaw = "Bravo to Gray Wolf. Update. That autonomous turret's deployed and online how copy? Over.";
			type = "SOLDIERC";
			variants = 1;
			vehicle = "EM_freeroam1_em_device_turret_defense_SOLDIERC_0_F";
			volumeStrong = "1.5 * (0.5 * 	CustomSoundController1)";
			volumeWeak = "0";
		};
		class EM_freeroam1_em_device_turret_defense_SOLDIERC_1
		{
			folder = "Human";
			loop = 0;
			soundStrong = "EM_freeroam1_em_device_turret_defense_SOLDIERC_1_S";
			soundWeak = "EM_freeroam1_em_device_turret_defense_SOLDIERC_1_S";
			text = "Acknowledged. It's not the Americans we're worried about, sir. It's them. The Pulsers. They're in the forests, churning up the ground. Raising that - thing! Over.";
			textRaw = "Acknowledged. It's not the Americans we're worried about sir. It's them. The Pulsers. They're in the forests churning up the ground. Raising that - thing! Over.";
			type = "SOLDIERC";
			variants = 1;
			vehicle = "EM_freeroam1_em_device_turret_defense_SOLDIERC_1_F";
			volumeStrong = "1.5 * (0.5 * 	CustomSoundController1)";
			volumeWeak = "0";
		};
		class EM_freeroam1_em_device_turret_defense_SOLDIERC_2
		{
			folder = "Human";
			loop = 0;
			soundStrong = "EM_freeroam1_em_device_turret_defense_SOLDIERC_2_S";
			soundWeak = "EM_freeroam1_em_device_turret_defense_SOLDIERC_2_S";
			text = "Roger that. Has there been any news on the Russians? Over.";
			textRaw = "Roger that. Has there been any news on the Russians? Over.";
			type = "SOLDIERC";
			variants = 1;
			vehicle = "EM_freeroam1_em_device_turret_defense_SOLDIERC_2_F";
			volumeStrong = "1.5 * (0.5 * 	CustomSoundController1)";
			volumeWeak = "0";
		};
		class EM_freeroam1_em_ugv_actual_location
		{
			isVariants = 0;
			links[] = {"", "EM_freeroam1_em_ugv_actual_location_HQ_0", "EM_freeroam1_em_ugv_actual_location_SOLDIERB_0", "EM_freeroam1_em_ugv_actual_location_HQ_1", "EM_freeroam1_em_ugv_actual_location_SOLDIERB_1"};
		};
		class EM_freeroam1_em_ugv_actual_location_HQ_0
		{
			folder = "Human";
			loop = 0;
			soundStrong = "EM_freeroam1_em_ugv_actual_location_HQ_0_S";
			soundWeak = "EM_freeroam1_em_ugv_actual_location_HQ_0_S";
			text = "Gray Wolf to Black Fox - what's the status on Echo's science equipment? Over.";
			textRaw = "Gray Wolf to Black Fox - what's the status on Echo's science equipment? Over.";
			type = "HQ";
			variants = 1;
			vehicle = "EM_freeroam1_em_ugv_actual_location_HQ_0_F";
			volumeStrong = "1.5 * (0.5 * 	CustomSoundController1)";
			volumeWeak = "0";
		};
		class EM_freeroam1_em_ugv_actual_location_HQ_1
		{
			folder = "Human";
			loop = 0;
			soundStrong = "EM_freeroam1_em_ugv_actual_location_HQ_1_S";
			soundWeak = "EM_freeroam1_em_ugv_actual_location_HQ_1_S";
			text = "Okay, copy that. Renegade Americans shot up Camp Kresnik, and we have intel on black helicopters crossing the border. Stay alert and be ready for anything. Over.";
			textRaw = "Okay copy that. Renegade Americans shot up Camp Kresnik and we have intel on black helicopters crossing the border. Stay alert and be ready for anything. Over.";
			type = "HQ";
			variants = 1;
			vehicle = "EM_freeroam1_em_ugv_actual_location_HQ_1_F";
			volumeStrong = "1.5 * (0.5 * 	CustomSoundController1)";
			volumeWeak = "0";
		};
		class EM_freeroam1_em_ugv_actual_location_SOLDIERB_0
		{
			folder = "Human";
			loop = 0;
			soundStrong = "EM_freeroam1_em_ugv_actual_location_SOLDIERB_0_S";
			soundWeak = "EM_freeroam1_em_ugv_actual_location_SOLDIERB_0_S";
			text = "The first consignment's prepped and ready by the inner gate. As for equipment, the bots? They're in the Astra van. Figured we'd leave them in there, seeing as they didn't get damaged in the pulse. Over.";
			textRaw = "The first consignment's prepped and ready by the inner gate. As for equipment the bots? They're in the Astra van. Figured we've leave them in there seeing as they didn't get damaged in the pulse. Over.";
			type = "SOLDIERB";
			variants = 1;
			vehicle = "EM_freeroam1_em_ugv_actual_location_SOLDIERB_0_F";
			volumeStrong = "1.5 * (0.5 * 	CustomSoundController1)";
			volumeWeak = "0";
		};
		class EM_freeroam1_em_ugv_actual_location_SOLDIERB_1
		{
			folder = "Human";
			loop = 0;
			soundStrong = "EM_freeroam1_em_ugv_actual_location_SOLDIERB_1_S";
			soundWeak = "EM_freeroam1_em_ugv_actual_location_SOLDIERB_1_S";
			text = "Roger, we'll report back if we spot anything suspicious. Out.";
			textRaw = "Roger we'll report back if we spot anything suspicious. Out.";
			type = "SOLDIERB";
			variants = 1;
			vehicle = "EM_freeroam1_em_ugv_actual_location_SOLDIERB_1_F";
			volumeStrong = "1.5 * (0.5 * 	CustomSoundController1)";
			volumeWeak = "0";
		};
		class EM_freeroam1_em_ugv_probe_tip
		{
			isVariants = 0;
			links[] = {"", "EM_freeroam1_em_ugv_probe_tip_SOLDIERA_0", "EM_freeroam1_em_ugv_probe_tip_HQ_0", "EM_freeroam1_em_ugv_probe_tip_SOLDIERA_1", "EM_freeroam1_em_ugv_probe_tip_HQ_1", "EM_freeroam1_em_ugv_probe_tip_SOLDIERA_2", "EM_freeroam1_em_ugv_probe_tip_HQ_2"};
		};
		class EM_freeroam1_em_ugv_probe_tip_HQ_0
		{
			folder = "Human";
			loop = 0;
			soundStrong = "EM_freeroam1_em_ugv_probe_tip_HQ_0_S";
			soundWeak = "EM_freeroam1_em_ugv_probe_tip_HQ_0_S";
			text = "Copy that, Bravo. Give us a report. Over.";
			textRaw = "Copy that Bravo. Give us a report. Over.";
			type = "HQ";
			variants = 1;
			vehicle = "EM_freeroam1_em_ugv_probe_tip_HQ_0_F";
			volumeStrong = "1.5 * (0.5 * 	CustomSoundController1)";
			volumeWeak = "0";
		};
		class EM_freeroam1_em_ugv_probe_tip_HQ_1
		{
			folder = "Human";
			loop = 0;
			soundStrong = "EM_freeroam1_em_ugv_probe_tip_HQ_1_S";
			soundWeak = "EM_freeroam1_em_ugv_probe_tip_HQ_1_S";
			text = "Roger. Can you confirm the relative position? Over.";
			textRaw = "Roger. Can you confirm the relative position? Over.";
			type = "HQ";
			variants = 1;
			vehicle = "EM_freeroam1_em_ugv_probe_tip_HQ_1_F";
			volumeStrong = "1.5 * (0.5 * 	CustomSoundController1)";
			volumeWeak = "0";
		};
		class EM_freeroam1_em_ugv_probe_tip_HQ_2
		{
			folder = "Human";
			loop = 0;
			soundStrong = "EM_freeroam1_em_ugv_probe_tip_HQ_2_S";
			soundWeak = "EM_freeroam1_em_ugv_probe_tip_HQ_2_S";
			text = "Acknowledged, hold there, we'll get another team to you before dawn. Secure the immediate vicinity. Out.";
			textRaw = "Acknowledged hold there we'll get another team to you before dawn. Secure the immediate vicinity. Out.";
			type = "HQ";
			variants = 1;
			vehicle = "EM_freeroam1_em_ugv_probe_tip_HQ_2_F";
			volumeStrong = "1.5 * (0.5 * 	CustomSoundController1)";
			volumeWeak = "0";
		};
		class EM_freeroam1_em_ugv_probe_tip_SOLDIERA_0
		{
			folder = "Human";
			loop = 0;
			soundStrong = "EM_freeroam1_em_ugv_probe_tip_SOLDIERA_0_S";
			soundWeak = "EM_freeroam1_em_ugv_probe_tip_SOLDIERA_0_S";
			text = "Gray Wolf, it's Bravo, we're at the location. Over.";
			textRaw = "Gray Wolf it's Bravo we're at the location. Over.";
			type = "SOLDIERA";
			variants = 1;
			vehicle = "EM_freeroam1_em_ugv_probe_tip_SOLDIERA_0_F";
			volumeStrong = "1.5 * (0.5 * 	CustomSoundController1)";
			volumeWeak = "0";
		};
		class EM_freeroam1_em_ugv_probe_tip_SOLDIERA_1
		{
			folder = "Human";
			loop = 0;
			soundStrong = "EM_freeroam1_em_ugv_probe_tip_SOLDIERA_1_S";
			soundWeak = "EM_freeroam1_em_ugv_probe_tip_SOLDIERA_1_S";
			text = "Intel checks out. The root? It's definitely been pulled up. But, not by the Americans - by them. Over.";
			textRaw = "Intel checks out. The root? It's definitely been pulled up. But not by the Americans - by them. Over.";
			type = "SOLDIERA";
			variants = 1;
			vehicle = "EM_freeroam1_em_ugv_probe_tip_SOLDIERA_1_F";
			volumeStrong = "1.5 * (0.5 * 	CustomSoundController1)";
			volumeWeak = "0";
		};
		class EM_freeroam1_em_ugv_probe_tip_SOLDIERA_2
		{
			folder = "Human";
			loop = 0;
			soundStrong = "EM_freeroam1_em_ugv_probe_tip_SOLDIERA_2_S";
			soundWeak = "EM_freeroam1_em_ugv_probe_tip_SOLDIERA_2_S";
			text = "Affirmative, we're west of the abandoned radar station, Shapka-41. About half a kilometer. This thing? It's kinda hard to miss, sir. Over.";
			textRaw = "Affirmative we're west of the abandoned radar station Shapka-41. About half a kilometer. This thing? It's kinda hard to miss sir. Over.";
			type = "SOLDIERA";
			variants = 1;
			vehicle = "EM_freeroam1_em_ugv_probe_tip_SOLDIERA_2_F";
			volumeStrong = "1.5 * (0.5 * 	CustomSoundController1)";
			volumeWeak = "0";
		};
		class EM_freeroam1_em_valley_probe_awe
		{
			isVariants = 0;
			links[] = {"", "EM_freeroam1_em_valley_probe_awe_SOLDIERC_0", "EM_freeroam1_em_valley_probe_awe_HQ_0", "EM_freeroam1_em_valley_probe_awe_SOLDIERC_1", "EM_freeroam1_em_valley_probe_awe_HQ_1", "EM_freeroam1_em_valley_probe_awe_SOLDIERC_2", "EM_freeroam1_em_valley_probe_awe_HQ_2"};
		};
		class EM_freeroam1_em_valley_probe_awe_HQ_0
		{
			folder = "Human";
			loop = 0;
			soundStrong = "EM_freeroam1_em_valley_probe_awe_HQ_0_S";
			soundWeak = "EM_freeroam1_em_valley_probe_awe_HQ_0_S";
			text = "Try me, Echo - what's your traffic? Over.";
			textRaw = "Try me Echo - what's your traffic? Over.";
			type = "HQ";
			variants = 1;
			vehicle = "EM_freeroam1_em_valley_probe_awe_HQ_0_F";
			volumeStrong = "1.5 * (0.5 * 	CustomSoundController1)";
			volumeWeak = "0";
		};
		class EM_freeroam1_em_valley_probe_awe_HQ_1
		{
			folder = "Human";
			loop = 0;
			soundStrong = "EM_freeroam1_em_valley_probe_awe_HQ_1_S";
			soundWeak = "EM_freeroam1_em_valley_probe_awe_HQ_1_S";
			text = "Explain, Sergeant. What do you mean not by anything human? Over.";
			textRaw = "Explain Sergeant. What do you mean not by anything human? Over.";
			type = "HQ";
			variants = 1;
			vehicle = "EM_freeroam1_em_valley_probe_awe_HQ_1_F";
			volumeStrong = "1.5 * (0.5 * 	CustomSoundController1)";
			volumeWeak = "0";
		};
		class EM_freeroam1_em_valley_probe_awe_HQ_2
		{
			folder = "Human";
			loop = 0;
			soundStrong = "EM_freeroam1_em_valley_probe_awe_HQ_2_S";
			soundWeak = "EM_freeroam1_em_valley_probe_awe_HQ_2_S";
			text = "Roger. You might not be far off the mark there. Guard the site and wait for further orders. Out.";
			textRaw = "Roger. You might not be far off the mark there. Guard the site and wait for further orders. Out.";
			type = "HQ";
			variants = 1;
			vehicle = "EM_freeroam1_em_valley_probe_awe_HQ_2_F";
			volumeStrong = "1.5 * (0.5 * 	CustomSoundController1)";
			volumeWeak = "0";
		};
		class EM_freeroam1_em_valley_probe_awe_SOLDIERC_0
		{
			folder = "Human";
			loop = 0;
			soundStrong = "EM_freeroam1_em_valley_probe_awe_SOLDIERC_0_S";
			soundWeak = "EM_freeroam1_em_valley_probe_awe_SOLDIERC_0_S";
			text = "Echo to Gray Wolf, you're not gonna believe this. Over.";
			textRaw = "Echo to Gray Wolf you're not gonna believe this. Over.";
			type = "SOLDIERC";
			variants = 1;
			vehicle = "EM_freeroam1_em_valley_probe_awe_SOLDIERC_0_F";
			volumeStrong = "1.5 * (0.5 * 	CustomSoundController1)";
			volumeWeak = "0";
		};
		class EM_freeroam1_em_valley_probe_awe_SOLDIERC_1
		{
			folder = "Human";
			loop = 0;
			soundStrong = "EM_freeroam1_em_valley_probe_awe_SOLDIERC_1_S";
			soundWeak = "EM_freeroam1_em_valley_probe_awe_SOLDIERC_1_S";
			text = "There's one of them weird roots and it's been ripped up. Only... not by anything human. Over.";
			textRaw = "There's one of them weird roots and it's been ripped up. Only... not by anything human. Over.";
			type = "SOLDIERC";
			variants = 1;
			vehicle = "EM_freeroam1_em_valley_probe_awe_SOLDIERC_1_F";
			volumeStrong = "1.5 * (0.5 * 	CustomSoundController1)";
			volumeWeak = "0";
		};
		class EM_freeroam1_em_valley_probe_awe_SOLDIERC_2
		{
			folder = "Human";
			loop = 0;
			soundStrong = "EM_freeroam1_em_valley_probe_awe_SOLDIERC_2_S";
			soundWeak = "EM_freeroam1_em_valley_probe_awe_SOLDIERC_2_S";
			text = "I mean, the root? It was below some old bunker, and now the bunker's on its side. Looks like a giant cosmic hand did some weeding. Over.";
			textRaw = "I mean the root? It was below some old bunker and now the bunker's on its side. Looks like a giant cosmic hand did some weeding. Over.";
			type = "SOLDIERC";
			variants = 1;
			vehicle = "EM_freeroam1_em_valley_probe_awe_SOLDIERC_2_F";
			volumeStrong = "1.5 * (0.5 * 	CustomSoundController1)";
			volumeWeak = "0";
		};
		class EM_freeroam2_am_forest_probe_discussion
		{
			isVariants = 0;
			links[] = {"", "EM_freeroam2_am_forest_probe_discussion_SOLDIERB_0", "EM_freeroam2_am_forest_probe_discussion_HQ_0", "EM_freeroam2_am_forest_probe_discussion_SOLDIERB_1", "EM_freeroam2_am_forest_probe_discussion_HQ_1", "EM_freeroam2_am_forest_probe_discussion_SOLDIERB_2", "EM_freeroam2_am_forest_probe_discussion_HQ_2", "EM_freeroam2_am_forest_probe_discussion_SOLDIERB_3", "EM_freeroam2_am_forest_probe_discussion_HQ_3", "EM_freeroam2_am_forest_probe_discussion_SOLDIERB_4", "EM_freeroam2_am_forest_probe_discussion_HQ_4"};
		};
		class EM_freeroam2_am_forest_probe_discussion_HQ_0
		{
			folder = "Human";
			loop = 0;
			soundStrong = "EM_freeroam2_am_forest_probe_discussion_HQ_0_S";
			soundWeak = "EM_freeroam2_am_forest_probe_discussion_HQ_0_S";
			text = "Copy, Charlie. Is there anything to suggest it's dangerous? Over.";
			textRaw = "Copy Charlie. Is there anything to suggest it's dangerous? Over.";
			type = "HQ";
			variants = 1;
			vehicle = "EM_freeroam2_am_forest_probe_discussion_HQ_0_F";
			volumeStrong = "1.5 * (0.5 * 	CustomSoundController1)";
			volumeWeak = "0";
		};
		class EM_freeroam2_am_forest_probe_discussion_HQ_1
		{
			folder = "Human";
			loop = 0;
			soundStrong = "EM_freeroam2_am_forest_probe_discussion_HQ_1_S";
			soundWeak = "EM_freeroam2_am_forest_probe_discussion_HQ_1_S";
			text = "And what about the doctor's theory? Could it be a probe? Over.";
			textRaw = "And what about the doctor's theory? Could it be a probe? Over.";
			type = "HQ";
			variants = 1;
			vehicle = "EM_freeroam2_am_forest_probe_discussion_HQ_1_F";
			volumeStrong = "1.5 * (0.5 * 	CustomSoundController1)";
			volumeWeak = "0";
		};
		class EM_freeroam2_am_forest_probe_discussion_HQ_2
		{
			folder = "Human";
			loop = 0;
			soundStrong = "EM_freeroam2_am_forest_probe_discussion_HQ_2_S";
			soundWeak = "EM_freeroam2_am_forest_probe_discussion_HQ_2_S";
			text = "Roger. And has his team reached any kind of consensus on our worst case scenarios? Over.";
			textRaw = "Roger. And has his team reached any kind of consensus on our worst case scenarios? Over.";
			type = "HQ";
			variants = 1;
			vehicle = "EM_freeroam2_am_forest_probe_discussion_HQ_2_F";
			volumeStrong = "1.5 * (0.5 * 	CustomSoundController1)";
			volumeWeak = "0";
		};
		class EM_freeroam2_am_forest_probe_discussion_HQ_3
		{
			folder = "Human";
			loop = 0;
			soundStrong = "EM_freeroam2_am_forest_probe_discussion_HQ_3_S";
			soundWeak = "EM_freeroam2_am_forest_probe_discussion_HQ_3_S";
			text = "Then we might need to find a way to shut it down. Do we know how it was excavated? Over.";
			textRaw = "Then we might need to find a way to shut it down. Do we know how it was excavated? Over.";
			type = "HQ";
			variants = 1;
			vehicle = "EM_freeroam2_am_forest_probe_discussion_HQ_3_F";
			volumeStrong = "1.5 * (0.5 * 	CustomSoundController1)";
			volumeWeak = "0";
		};
		class EM_freeroam2_am_forest_probe_discussion_HQ_4
		{
			folder = "Human";
			loop = 0;
			soundStrong = "EM_freeroam2_am_forest_probe_discussion_HQ_4_S";
			soundWeak = "EM_freeroam2_am_forest_probe_discussion_HQ_4_S";
			text = "Acknowledged. Maintain close protection and notify us if there're any further developments. Out.";
			textRaw = "Acknowledged. Maintain close protection and notify us if there's any further developments. Out.";
			type = "HQ";
			variants = 1;
			vehicle = "EM_freeroam2_am_forest_probe_discussion_HQ_4_F";
			volumeStrong = "1.5 * (0.5 * 	CustomSoundController1)";
			volumeWeak = "0";
		};
		class EM_freeroam2_am_forest_probe_discussion_SOLDIERB_0
		{
			folder = "Human";
			loop = 0;
			soundStrong = "EM_freeroam2_am_forest_probe_discussion_SOLDIERB_0_S";
			soundWeak = "EM_freeroam2_am_forest_probe_discussion_SOLDIERB_0_S";
			text = "Gray Wolf. This is Charlie. Dr. Lem has a preliminary assessment on the root. Over.";
			textRaw = "Gray Wolf. This is Charlie. Dr. Lem has a preliminary assessment on the root. Over.";
			type = "SOLDIERB";
			variants = 1;
			vehicle = "EM_freeroam2_am_forest_probe_discussion_SOLDIERB_0_F";
			volumeStrong = "1.5 * (0.5 * 	CustomSoundController1)";
			volumeWeak = "0";
		};
		class EM_freeroam2_am_forest_probe_discussion_SOLDIERB_1
		{
			folder = "Human";
			loop = 0;
			soundStrong = "EM_freeroam2_am_forest_probe_discussion_SOLDIERB_1_S";
			soundWeak = "EM_freeroam2_am_forest_probe_discussion_SOLDIERB_1_S";
			text = "That's unknown, sir. It's generating neutrinos at an incredible rate as we already know. But we're not sure why. Over.";
			textRaw = "That's unknown sir. It's generating neutrinos at an incredible rate as we already know. But we're not sure why. Over.";
			type = "SOLDIERB";
			variants = 1;
			vehicle = "EM_freeroam2_am_forest_probe_discussion_SOLDIERB_1_F";
			volumeStrong = "1.5 * (0.5 * 	CustomSoundController1)";
			volumeWeak = "0";
		};
		class EM_freeroam2_am_forest_probe_discussion_SOLDIERB_2
		{
			folder = "Human";
			loop = 0;
			soundStrong = "EM_freeroam2_am_forest_probe_discussion_SOLDIERB_2_S";
			soundWeak = "EM_freeroam2_am_forest_probe_discussion_SOLDIERB_2_S";
			text = "Affirmative. That much seems certain. There's evidence of complex receptors in its biological components. Probably drawing information from the soil. Over.";
			textRaw = "Affirmative. That much seems certain. There's evidence of complex receptors in its biological components. Probably drawing information from the soil. Over.";
			type = "SOLDIERB";
			variants = 1;
			vehicle = "EM_freeroam2_am_forest_probe_discussion_SOLDIERB_2_F";
			volumeStrong = "1.5 * (0.5 * 	CustomSoundController1)";
			volumeWeak = "0";
		};
		class EM_freeroam2_am_forest_probe_discussion_SOLDIERB_3
		{
			folder = "Human";
			loop = 0;
			soundStrong = "EM_freeroam2_am_forest_probe_discussion_SOLDIERB_3_S";
			soundWeak = "EM_freeroam2_am_forest_probe_discussion_SOLDIERB_3_S";
			text = "Reconnaissance. For an invasion, perhaps? And if those neutrinos are a message, as Dr. Lem insists, then it is possible it could be a cosmic clarion call. Over.";
			textRaw = "Reconnaissance. For an invasion perhaps? And if those neutrinos are a message as Dr. Lem insists then it is possible it could be a cosmic clarion call. Over.";
			type = "SOLDIERB";
			variants = 1;
			vehicle = "EM_freeroam2_am_forest_probe_discussion_SOLDIERB_3_F";
			volumeStrong = "1.5 * (0.5 * 	CustomSoundController1)";
			volumeWeak = "0";
		};
		class EM_freeroam2_am_forest_probe_discussion_SOLDIERB_4
		{
			folder = "Human";
			loop = 0;
			soundStrong = "EM_freeroam2_am_forest_probe_discussion_SOLDIERB_4_S";
			soundWeak = "EM_freeroam2_am_forest_probe_discussion_SOLDIERB_4_S";
			text = "Er, negative. Must have been one of those Pulsers - but the 'how' of it is beyond us. Over.";
			textRaw = "Er negative. Must have been one of those Pulsers - but the 'how' of it is beyond us. Over.";
			type = "SOLDIERB";
			variants = 1;
			vehicle = "EM_freeroam2_am_forest_probe_discussion_SOLDIERB_4_F";
			volumeStrong = "1.5 * (0.5 * 	CustomSoundController1)";
			volumeWeak = "0";
		};
		class EM_freeroam2_am_looters_found_radio
		{
			isVariants = 0;
			links[] = {"", "EM_freeroam2_am_looters_found_radio_SOLDIERB_0", "EM_freeroam2_am_looters_found_radio_HQ_0", "EM_freeroam2_am_looters_found_radio_SOLDIERB_1", "EM_freeroam2_am_looters_found_radio_HQ_1", "EM_freeroam2_am_looters_found_radio_SOLDIERB_2", "EM_freeroam2_am_looters_found_radio_HQ_2"};
		};
		class EM_freeroam2_am_looters_found_radio_HQ_0
		{
			folder = "Human";
			loop = 0;
			soundStrong = "EM_freeroam2_am_looters_found_radio_HQ_0_S";
			soundWeak = "EM_freeroam2_am_looters_found_radio_HQ_0_S";
			text = "Hold, unknown station, authenticate: November Delta. Over.";
			textRaw = "Hold unknown station authenticate: November Delta. Over.";
			type = "HQ";
			variants = 1;
			vehicle = "EM_freeroam2_am_looters_found_radio_HQ_0_F";
			volumeStrong = "1.5 * (0.5 * 	CustomSoundController1)";
			volumeWeak = "0";
		};
		class EM_freeroam2_am_looters_found_radio_HQ_1
		{
			folder = "Human";
			loop = 0;
			soundStrong = "EM_freeroam2_am_looters_found_radio_HQ_1_S";
			soundWeak = "EM_freeroam2_am_looters_found_radio_HQ_1_S";
			text = "This is a military channel!";
			textRaw = "This is a military channel!";
			type = "HQ";
			variants = 1;
			vehicle = "EM_freeroam2_am_looters_found_radio_HQ_1_F";
			volumeStrong = "1.5 * (0.5 * 	CustomSoundController1)";
			volumeWeak = "0";
		};
		class EM_freeroam2_am_looters_found_radio_HQ_2
		{
			folder = "Human";
			loop = 0;
			soundStrong = "EM_freeroam2_am_looters_found_radio_HQ_2_S";
			soundWeak = "EM_freeroam2_am_looters_found_radio_HQ_2_S";
			text = "Gray Wolf to all callsigns. Execute code Sierra. Black Fox, converge on Charlie's auxillary tracker. Do not respond. Silence, silence, silence! Out.";
			textRaw = "Gray Wolf to all callsigns. Execute code Sierra. Black Fox converge on Charlie's auxillary tracker. Do not respond. Silence silence silence! Out.";
			type = "HQ";
			variants = 1;
			vehicle = "EM_freeroam2_am_looters_found_radio_HQ_2_F";
			volumeStrong = "1.5 * (0.5 * 	CustomSoundController1)";
			volumeWeak = "0";
		};
		class EM_freeroam2_am_looters_found_radio_SOLDIERB_0
		{
			folder = "Human";
			loop = 0;
			soundStrong = "EM_freeroam2_am_looters_found_radio_SOLDIERB_0_S";
			soundWeak = "EM_freeroam2_am_looters_found_radio_SOLDIERB_0_S";
			text = "Hey? This the army?";
			textRaw = "Hey? This the army?";
			type = "SOLDIERB";
			variants = 1;
			vehicle = "EM_freeroam2_am_looters_found_radio_SOLDIERB_0_F";
			volumeStrong = "1.5 * (0.5 * 	CustomSoundController1)";
			volumeWeak = "0";
		};
		class EM_freeroam2_am_looters_found_radio_SOLDIERB_1
		{
			folder = "Human";
			loop = 0;
			soundStrong = "EM_freeroam2_am_looters_found_radio_SOLDIERB_1_S";
			soundWeak = "EM_freeroam2_am_looters_found_radio_SOLDIERB_1_S";
			text = "I can authenticate it ain't fucking November, man. You gonna do something about the alien invasion? Er, over.";
			textRaw = "I can authenticate it ain't fucking November man. You gonna do something about the alien invasion? Er over.";
			type = "SOLDIERB";
			variants = 1;
			vehicle = "EM_freeroam2_am_looters_found_radio_SOLDIERB_1_F";
			volumeStrong = "1.5 * (0.5 * 	CustomSoundController1)";
			volumeWeak = "0";
		};
		class EM_freeroam2_am_looters_found_radio_SOLDIERB_2
		{
			folder = "Human";
			loop = 0;
			soundStrong = "EM_freeroam2_am_looters_found_radio_SOLDIERB_2_S";
			soundWeak = "EM_freeroam2_am_looters_found_radio_SOLDIERB_2_S";
			text = "Yup. I got a military radio, fuckhead. You gonna tell the people about what's going on here? All the cover-up shit? Because we know...";
			textRaw = "Yup. I got a military radio fuckhead. You gonna tell the people about what's going on here? All the cover-up shit? Because we know...";
			type = "SOLDIERB";
			variants = 1;
			vehicle = "EM_freeroam2_am_looters_found_radio_SOLDIERB_2_F";
			volumeStrong = "1.5 * (0.5 * 	CustomSoundController1)";
			volumeWeak = "0";
		};
		class EM_freeroam2_am_matter_ball_found_ldf_investigate
		{
			isVariants = 0;
			links[] = {"", "EM_freeroam2_am_matter_ball_found_ldf_investigate_HQ_0", "EM_freeroam2_am_matter_ball_found_ldf_investigate_SOLDIERA_0", "EM_freeroam2_am_matter_ball_found_ldf_investigate_HQ_1", "EM_freeroam2_am_matter_ball_found_ldf_investigate_SOLDIERA_1", "EM_freeroam2_am_matter_ball_found_ldf_investigate_HQ_2", "EM_freeroam2_am_matter_ball_found_ldf_investigate_SOLDIERA_2"};
		};
		class EM_freeroam2_am_matter_ball_found_ldf_investigate_HQ_0
		{
			folder = "Human";
			loop = 0;
			soundStrong = "EM_freeroam2_am_matter_ball_found_ldf_investigate_HQ_0_S";
			soundWeak = "EM_freeroam2_am_matter_ball_found_ldf_investigate_HQ_0_S";
			text = "Alpha. Gray Wolf. Priority message. Over.";
			textRaw = "Alpha. Gray Wolf. Priority message. Over.";
			type = "HQ";
			variants = 1;
			vehicle = "EM_freeroam2_am_matter_ball_found_ldf_investigate_HQ_0_F";
			volumeStrong = "1.5 * (0.5 * 	CustomSoundController1)";
			volumeWeak = "0";
		};
		class EM_freeroam2_am_matter_ball_found_ldf_investigate_HQ_1
		{
			folder = "Human";
			loop = 0;
			soundStrong = "EM_freeroam2_am_matter_ball_found_ldf_investigate_HQ_1_S";
			soundWeak = "EM_freeroam2_am_matter_ball_found_ldf_investigate_HQ_1_S";
			text = "Bravo picked up some deserters from Delta company. There's reports of a glowing orb in your sector. Chances are it's nothing. But could you go investigate? Over.";
			textRaw = "Bravo picked up some deserters from Delta company. There's reports of a glowing orb in your sector. Chances are it's nothing. But could you go investigate? Over.";
			type = "HQ";
			variants = 1;
			vehicle = "EM_freeroam2_am_matter_ball_found_ldf_investigate_HQ_1_F";
			volumeStrong = "1.5 * (0.5 * 	CustomSoundController1)";
			volumeWeak = "0";
		};
		class EM_freeroam2_am_matter_ball_found_ldf_investigate_HQ_2
		{
			folder = "Human";
			loop = 0;
			soundStrong = "EM_freeroam2_am_matter_ball_found_ldf_investigate_HQ_2_S";
			soundWeak = "EM_freeroam2_am_matter_ball_found_ldf_investigate_HQ_2_S";
			text = "Negative. Our boys aren't being too cooperative. It has to be somewhere near Kulno. Over.";
			textRaw = "Negative. Our boys aren't being too cooperative. It has to be somewhere near Kulno. Over.";
			type = "HQ";
			variants = 1;
			vehicle = "EM_freeroam2_am_matter_ball_found_ldf_investigate_HQ_2_F";
			volumeStrong = "1.5 * (0.5 * 	CustomSoundController1)";
			volumeWeak = "0";
		};
		class EM_freeroam2_am_matter_ball_found_ldf_investigate_SOLDIERA_0
		{
			folder = "Human";
			loop = 0;
			soundStrong = "EM_freeroam2_am_matter_ball_found_ldf_investigate_SOLDIERA_0_S";
			soundWeak = "EM_freeroam2_am_matter_ball_found_ldf_investigate_SOLDIERA_0_S";
			text = "This is Alpha, go ahead. Over.";
			textRaw = "This is Alpha go ahead. Over.";
			type = "SOLDIERA";
			variants = 1;
			vehicle = "EM_freeroam2_am_matter_ball_found_ldf_investigate_SOLDIERA_0_F";
			volumeStrong = "1.5 * (0.5 * 	CustomSoundController1)";
			volumeWeak = "0";
		};
		class EM_freeroam2_am_matter_ball_found_ldf_investigate_SOLDIERA_1
		{
			folder = "Human";
			loop = 0;
			soundStrong = "EM_freeroam2_am_matter_ball_found_ldf_investigate_SOLDIERA_1_S";
			soundWeak = "EM_freeroam2_am_matter_ball_found_ldf_investigate_SOLDIERA_1_S";
			text = "Copy that, we'll check it out. Have you got a grid ref? Over.";
			textRaw = "Copy that we'll check it out. Have you got a grid ref? Over.";
			type = "SOLDIERA";
			variants = 1;
			vehicle = "EM_freeroam2_am_matter_ball_found_ldf_investigate_SOLDIERA_1_F";
			volumeStrong = "1.5 * (0.5 * 	CustomSoundController1)";
			volumeWeak = "0";
		};
		class EM_freeroam2_am_matter_ball_found_ldf_investigate_SOLDIERA_2
		{
			folder = "Human";
			loop = 0;
			soundStrong = "EM_freeroam2_am_matter_ball_found_ldf_investigate_SOLDIERA_2_S";
			soundWeak = "EM_freeroam2_am_matter_ball_found_ldf_investigate_SOLDIERA_2_S";
			text = "Acknowledged, we'll sweep the area. See if there's anything there. Out.";
			textRaw = "Acknowledged we'll sweep the area. See if there's anything there. Out.";
			type = "SOLDIERA";
			variants = 1;
			vehicle = "EM_freeroam2_am_matter_ball_found_ldf_investigate_SOLDIERA_2_F";
			volumeStrong = "1.5 * (0.5 * 	CustomSoundController1)";
			volumeWeak = "0";
		};
		class EM_freeroam2_am_radio_station_message
		{
			isVariants = 0;
			links[] = {"", "EM_freeroam2_am_radio_station_message_MAJOR_0", "EM_freeroam2_am_radio_station_message_MAJOR_1", "EM_freeroam2_am_radio_station_message_MAJOR_2", "EM_freeroam2_am_radio_station_message_MAJOR_3", "EM_freeroam2_am_radio_station_message_MAJOR_4", "EM_freeroam2_am_radio_station_message_MAJOR_5", "EM_freeroam2_am_radio_station_message_MAJOR_6", "EM_freeroam2_am_radio_station_message_MAJOR_7"};
		};
		class EM_freeroam2_am_radio_station_message_MAJOR_0
		{
			folder = "Human";
			loop = 0;
			soundStrong = "EM_freeroam2_am_radio_station_message_MAJOR_0_S";
			soundWeak = "EM_freeroam2_am_radio_station_message_MAJOR_0_S";
			text = "Alchemist to any station.";
			textRaw = "Alchemist to any station.";
			type = "MAJOR";
			variants = 1;
			vehicle = "EM_freeroam2_am_radio_station_message_MAJOR_0_F";
			volumeStrong = "1.5 * (0.5 * 	CustomSoundController1)";
			volumeWeak = "0";
		};
		class EM_freeroam2_am_radio_station_message_MAJOR_1
		{
			folder = "Human";
			loop = 0;
			soundStrong = "EM_freeroam2_am_radio_station_message_MAJOR_1_S";
			soundWeak = "EM_freeroam2_am_radio_station_message_MAJOR_1_S";
			text = "Flash.";
			textRaw = "Flash.";
			type = "MAJOR";
			variants = 1;
			vehicle = "EM_freeroam2_am_radio_station_message_MAJOR_1_F";
			volumeStrong = "1.5 * (0.5 * 	CustomSoundController1)";
			volumeWeak = "0";
		};
		class EM_freeroam2_am_radio_station_message_MAJOR_2
		{
			folder = "Human";
			loop = 0;
			soundStrong = "EM_freeroam2_am_radio_station_message_MAJOR_2_S";
			soundWeak = "EM_freeroam2_am_radio_station_message_MAJOR_2_S";
			text = "This is an emergency broadcast.";
			textRaw = "This is an emergency broadcast.";
			type = "MAJOR";
			variants = 1;
			vehicle = "EM_freeroam2_am_radio_station_message_MAJOR_2_F";
			volumeStrong = "1.5 * (0.5 * 	CustomSoundController1)";
			volumeWeak = "0";
		};
		class EM_freeroam2_am_radio_station_message_MAJOR_3
		{
			folder = "Human";
			loop = 0;
			soundStrong = "EM_freeroam2_am_radio_station_message_MAJOR_3_S";
			soundWeak = "EM_freeroam2_am_radio_station_message_MAJOR_3_S";
			text = "Electronic equipment disrupted.";
			textRaw = "Electronic equipment disrupted.";
			type = "MAJOR";
			variants = 1;
			vehicle = "EM_freeroam2_am_radio_station_message_MAJOR_3_F";
			volumeStrong = "1.5 * (0.5 * 	CustomSoundController1)";
			volumeWeak = "0";
		};
		class EM_freeroam2_am_radio_station_message_MAJOR_4
		{
			folder = "Human";
			loop = 0;
			soundStrong = "EM_freeroam2_am_radio_station_message_MAJOR_4_S";
			soundWeak = "EM_freeroam2_am_radio_station_message_MAJOR_4_S";
			text = "Severe damage to all communications. Trunk network down.";
			textRaw = "Severe damage to all communications. Trunk network down.";
			type = "MAJOR";
			variants = 1;
			vehicle = "EM_freeroam2_am_radio_station_message_MAJOR_4_F";
			volumeStrong = "1.5 * (0.5 * 	CustomSoundController1)";
			volumeWeak = "0";
		};
		class EM_freeroam2_am_radio_station_message_MAJOR_5
		{
			folder = "Human";
			loop = 0;
			soundStrong = "EM_freeroam2_am_radio_station_message_MAJOR_5_S";
			soundWeak = "EM_freeroam2_am_radio_station_message_MAJOR_5_S";
			text = "Confirmed sighting of Alpha Foxtrot Oscar. Request immediate assistance at Camps Konrad and Kresnik.";
			textRaw = "Confirmed sighting of Alpha Foxtrot Oscar. Request immediate assistance at Camps Konrad and Kresnik.";
			type = "MAJOR";
			variants = 1;
			vehicle = "EM_freeroam2_am_radio_station_message_MAJOR_5_F";
			volumeStrong = "1.5 * (0.5 * 	CustomSoundController1)";
			volumeWeak = "0";
		};
		class EM_freeroam2_am_radio_station_message_MAJOR_6
		{
			folder = "Human";
			loop = 0;
			soundStrong = "EM_freeroam2_am_radio_station_message_MAJOR_6_S";
			soundWeak = "EM_freeroam2_am_radio_station_message_MAJOR_6_S";
			text = "Relay to address group: North Star.";
			textRaw = "Relay to address group: North Star.";
			type = "MAJOR";
			variants = 1;
			vehicle = "EM_freeroam2_am_radio_station_message_MAJOR_6_F";
			volumeStrong = "1.5 * (0.5 * 	CustomSoundController1)";
			volumeWeak = "0";
		};
		class EM_freeroam2_am_radio_station_message_MAJOR_7
		{
			folder = "Human";
			loop = 0;
			soundStrong = "EM_freeroam2_am_radio_station_message_MAJOR_7_S";
			soundWeak = "EM_freeroam2_am_radio_station_message_MAJOR_7_S";
			text = "Authentication is: November Sierra.";
			textRaw = "Authentication is: November Sierra.";
			type = "MAJOR";
			variants = 1;
			vehicle = "EM_freeroam2_am_radio_station_message_MAJOR_7_F";
			volumeStrong = "1.5 * (0.5 * 	CustomSoundController1)";
			volumeWeak = "0";
		};
		class EM_freeroam2_ta_ambush_probe_eavesdrop_assign_task
		{
			isVariants = 0;
			links[] = {"", "EM_freeroam2_ta_ambush_probe_eavesdrop_assign_task_SOLDIERC_0", "EM_freeroam2_ta_ambush_probe_eavesdrop_assign_task_HQ_0", "EM_freeroam2_ta_ambush_probe_eavesdrop_assign_task_SOLDIERC_1", "EM_freeroam2_ta_ambush_probe_eavesdrop_assign_task_HQ_1"};
		};
		class EM_freeroam2_ta_ambush_probe_eavesdrop_assign_task_HQ_0
		{
			folder = "Human";
			loop = 0;
			soundStrong = "EM_freeroam2_ta_ambush_probe_eavesdrop_assign_task_HQ_0_S";
			soundWeak = "EM_freeroam2_ta_ambush_probe_eavesdrop_assign_task_HQ_0_S";
			text = "Roger that, Foxtrot. Golf is almost in position. Over.";
			textRaw = "Roger that Foxtrot. Golf is almost in position. Over.";
			type = "HQ";
			variants = 1;
			vehicle = "EM_freeroam2_ta_ambush_probe_eavesdrop_assign_task_HQ_0_F";
			volumeStrong = "1.5 * (0.5 * 	CustomSoundController1)";
			volumeWeak = "0";
		};
		class EM_freeroam2_ta_ambush_probe_eavesdrop_assign_task_HQ_1
		{
			folder = "Human";
			loop = 0;
			soundStrong = "EM_freeroam2_ta_ambush_probe_eavesdrop_assign_task_HQ_1_S";
			soundWeak = "EM_freeroam2_ta_ambush_probe_eavesdrop_assign_task_HQ_1_S";
			text = "Hold position at your OP - we don't know right now. Wait one. Over.";
			textRaw = "Hold position at your OP - we don't know right now. Wait one. Over.";
			type = "HQ";
			variants = 1;
			vehicle = "EM_freeroam2_ta_ambush_probe_eavesdrop_assign_task_HQ_1_F";
			volumeStrong = "1.5 * (0.5 * 	CustomSoundController1)";
			volumeWeak = "0";
		};
		class EM_freeroam2_ta_ambush_probe_eavesdrop_assign_task_SOLDIERC_0
		{
			folder = "Human";
			loop = 0;
			soundStrong = "EM_freeroam2_ta_ambush_probe_eavesdrop_assign_task_SOLDIERC_0_S";
			soundWeak = "EM_freeroam2_ta_ambush_probe_eavesdrop_assign_task_SOLDIERC_0_S";
			text = "Foxtrot to Gray Wolf. Pulser's still hovering around the root. Over.";
			textRaw = "Foxtrot to Gray Wolf. Pulser's still hovering around the root. Over.";
			type = "SOLDIERC";
			variants = 1;
			vehicle = "EM_freeroam2_ta_ambush_probe_eavesdrop_assign_task_SOLDIERC_0_F";
			volumeStrong = "1.5 * (0.5 * 	CustomSoundController1)";
			volumeWeak = "0";
		};
		class EM_freeroam2_ta_ambush_probe_eavesdrop_assign_task_SOLDIERC_1
		{
			folder = "Human";
			loop = 0;
			soundStrong = "EM_freeroam2_ta_ambush_probe_eavesdrop_assign_task_SOLDIERC_1_S";
			soundWeak = "EM_freeroam2_ta_ambush_probe_eavesdrop_assign_task_SOLDIERC_1_S";
			text = "Acknowledged. How do you want us to handle this? Over.";
			textRaw = "Acknowledged. How do you want us to handle this? Over.";
			type = "SOLDIERC";
			variants = 1;
			vehicle = "EM_freeroam2_ta_ambush_probe_eavesdrop_assign_task_SOLDIERC_1_F";
			volumeStrong = "1.5 * (0.5 * 	CustomSoundController1)";
			volumeWeak = "0";
		};
		class EM_freeroam2_ta_ambush_probe_eavesdrop_assign_task_var1
		{
			isVariants = 0;
			links[] = {"", "EM_freeroam2_ta_ambush_probe_eavesdrop_assign_task_var1_SOLDIERC_0", "EM_freeroam2_ta_ambush_probe_eavesdrop_assign_task_var1_HQ_0", "EM_freeroam2_ta_ambush_probe_eavesdrop_assign_task_var1_SOLDIERC_1", "EM_freeroam2_ta_ambush_probe_eavesdrop_assign_task_var1_HQ_1"};
		};
		class EM_freeroam2_ta_ambush_probe_eavesdrop_assign_task_var1_HQ_0
		{
			folder = "Human";
			loop = 0;
			soundStrong = "EM_freeroam2_ta_ambush_probe_eavesdrop_assign_task_var1_HQ_0_S";
			soundWeak = "EM_freeroam2_ta_ambush_probe_eavesdrop_assign_task_var1_HQ_0_S";
			text = "Copy, Foxtrot. Continue to observe. Over.";
			textRaw = "Copy Foxtrot. Continue to observe. Over.";
			type = "HQ";
			variants = 1;
			vehicle = "EM_freeroam2_ta_ambush_probe_eavesdrop_assign_task_var1_HQ_0_F";
			volumeStrong = "1.5 * (0.5 * 	CustomSoundController1)";
			volumeWeak = "0";
		};
		class EM_freeroam2_ta_ambush_probe_eavesdrop_assign_task_var1_HQ_1
		{
			folder = "Human";
			loop = 0;
			soundStrong = "EM_freeroam2_ta_ambush_probe_eavesdrop_assign_task_var1_HQ_1_S";
			soundWeak = "EM_freeroam2_ta_ambush_probe_eavesdrop_assign_task_var1_HQ_1_S";
			text = "Idle speculation, Sergeant. Standby for tasking. Out.";
			textRaw = "Idle speculation Sergeant. Standby for tasking. Out.";
			type = "HQ";
			variants = 1;
			vehicle = "EM_freeroam2_ta_ambush_probe_eavesdrop_assign_task_var1_HQ_1_F";
			volumeStrong = "1.5 * (0.5 * 	CustomSoundController1)";
			volumeWeak = "0";
		};
		class EM_freeroam2_ta_ambush_probe_eavesdrop_assign_task_var1_SOLDIERC_0
		{
			folder = "Human";
			loop = 0;
			soundStrong = "EM_freeroam2_ta_ambush_probe_eavesdrop_assign_task_var1_SOLDIERC_0_S";
			soundWeak = "EM_freeroam2_ta_ambush_probe_eavesdrop_assign_task_var1_SOLDIERC_0_S";
			text = "Gray Wolf. It's Foxtrot. That Pulser? It isn't fucking off. Over.";
			textRaw = "Gray Wolf. It's Foxtrot. That Pulser? It isn't fucking off. Over.";
			type = "SOLDIERC";
			variants = 1;
			vehicle = "EM_freeroam2_ta_ambush_probe_eavesdrop_assign_task_var1_SOLDIERC_0_F";
			volumeStrong = "1.5 * (0.5 * 	CustomSoundController1)";
			volumeWeak = "0";
		};
		class EM_freeroam2_ta_ambush_probe_eavesdrop_assign_task_var1_SOLDIERC_1
		{
			folder = "Human";
			loop = 0;
			soundStrong = "EM_freeroam2_ta_ambush_probe_eavesdrop_assign_task_var1_SOLDIERC_1_S";
			soundWeak = "EM_freeroam2_ta_ambush_probe_eavesdrop_assign_task_var1_SOLDIERC_1_S";
			text = "Affirmative. It's definitely curious about that root - you think it's a weapon? Some kinda... tectonic device? Over.";
			textRaw = "Affirmative. It's definitely curious about that root - you think it's a weapon? Some kinda tectonic device? Over.";
			type = "SOLDIERC";
			variants = 1;
			vehicle = "EM_freeroam2_ta_ambush_probe_eavesdrop_assign_task_var1_SOLDIERC_1_F";
			volumeStrong = "1.5 * (0.5 * 	CustomSoundController1)";
			volumeWeak = "0";
		};
		class EM_freeroam2_ta_ambush_probe_eavesdrop_assign_task_var2
		{
			isVariants = 0;
			links[] = {"", "EM_freeroam2_ta_ambush_probe_eavesdrop_assign_task_var2_SOLDIERC_0", "EM_freeroam2_ta_ambush_probe_eavesdrop_assign_task_var2_HQ_0", "EM_freeroam2_ta_ambush_probe_eavesdrop_assign_task_var2_SOLDIERC_1", "EM_freeroam2_ta_ambush_probe_eavesdrop_assign_task_var2_HQ_1"};
		};
		class EM_freeroam2_ta_ambush_probe_eavesdrop_assign_task_var2_HQ_0
		{
			folder = "Human";
			loop = 0;
			soundStrong = "EM_freeroam2_ta_ambush_probe_eavesdrop_assign_task_var2_HQ_0_S";
			soundWeak = "EM_freeroam2_ta_ambush_probe_eavesdrop_assign_task_var2_HQ_0_S";
			text = "Negative - survey the root and that alien entity. Over.";
			textRaw = "Negative - survey the root and that alien entity. Over.";
			type = "HQ";
			variants = 1;
			vehicle = "EM_freeroam2_ta_ambush_probe_eavesdrop_assign_task_var2_HQ_0_F";
			volumeStrong = "1.5 * (0.5 * 	CustomSoundController1)";
			volumeWeak = "0";
		};
		class EM_freeroam2_ta_ambush_probe_eavesdrop_assign_task_var2_HQ_1
		{
			folder = "Human";
			loop = 0;
			soundStrong = "EM_freeroam2_ta_ambush_probe_eavesdrop_assign_task_var2_HQ_1_S";
			soundWeak = "EM_freeroam2_ta_ambush_probe_eavesdrop_assign_task_var2_HQ_1_S";
			text = "Maximum aggression, but only on the order to move up and engage. Do not do so yet. Wait out.";
			textRaw = "Maximum aggression but only on the order to move up and engage. Do not do so yet. Wait out.";
			type = "HQ";
			variants = 1;
			vehicle = "EM_freeroam2_ta_ambush_probe_eavesdrop_assign_task_var2_HQ_1_F";
			volumeStrong = "1.5 * (0.5 * 	CustomSoundController1)";
			volumeWeak = "0";
		};
		class EM_freeroam2_ta_ambush_probe_eavesdrop_assign_task_var2_SOLDIERC_0
		{
			folder = "Human";
			loop = 0;
			soundStrong = "EM_freeroam2_ta_ambush_probe_eavesdrop_assign_task_var2_SOLDIERC_0_S";
			soundWeak = "EM_freeroam2_ta_ambush_probe_eavesdrop_assign_task_var2_SOLDIERC_0_S";
			text = "Gray Wolf. Foxtrot. Any update yet? Over.";
			textRaw = "Gray Wolf. Foxtrot. Any update yet? Over.";
			type = "SOLDIERC";
			variants = 1;
			vehicle = "EM_freeroam2_ta_ambush_probe_eavesdrop_assign_task_var2_SOLDIERC_0_F";
			volumeStrong = "1.5 * (0.5 * 	CustomSoundController1)";
			volumeWeak = "0";
		};
		class EM_freeroam2_ta_ambush_probe_eavesdrop_assign_task_var2_SOLDIERC_1
		{
			folder = "Human";
			loop = 0;
			soundStrong = "EM_freeroam2_ta_ambush_probe_eavesdrop_assign_task_var2_SOLDIERC_1_S";
			soundWeak = "EM_freeroam2_ta_ambush_probe_eavesdrop_assign_task_var2_SOLDIERC_1_S";
			text = "Acknowledged. If it attacks, what's our ROE? Over.";
			textRaw = "Acknowledged. If it attacks what's our ROE? Over.";
			type = "SOLDIERC";
			variants = 1;
			vehicle = "EM_freeroam2_ta_ambush_probe_eavesdrop_assign_task_var2_SOLDIERC_1_F";
			volumeStrong = "1.5 * (0.5 * 	CustomSoundController1)";
			volumeWeak = "0";
		};
		class EM_handshake_a2q
		{
			displayName = """Alpha to HQ""";
			isVariants = 1;
			links[] = {"", "EM_handshake_a2q_SQUAD_0", "EM_handshake_a2q_SQUAD_1", "EM_handshake_a2q_SQUAD_2", "EM_handshake_a2q_SQUAD_3", "EM_handshake_a2q_SQUAD_4"};
			selection = "Squad";
			selectionAntenna = "Antenna_01";
			selectionPriority = 1;
			texture = "\a3\UI_F_Contact\Data\CfgContact\EM\Signals\EM_HANDSHAKE_A2Q_SQUAD_0_ca.paa";
		};
		class EM_handshake_a2q_SQUAD_0
		{
			folder = "Human";
			loop = 0;
			soundStrong = "EM_handshake_a2q_SQUAD_0_S";
			soundWeak = "EM_handshake_a2q_SQUAD_0_S";
			text = "Gray Wolf. Alpha. Over.";
			textRaw = "Gray Wolf. Alpha. Over.";
			type = "SQUAD";
			variants = 1;
			vehicle = "EM_handshake_a2q_SQUAD_0_F";
			volumeStrong = "1.5 * (0.5 * 	CustomSoundController1)";
			volumeWeak = "0";
		};
		class EM_handshake_a2q_SQUAD_1
		{
			folder = "Human";
			loop = 0;
			soundStrong = "EM_handshake_a2q_SQUAD_1_S";
			soundWeak = "EM_handshake_a2q_SQUAD_1_S";
			text = "Gray Wolf. Alpha here, over.";
			textRaw = "Gray Wolf. Alpha here over.";
			type = "SQUAD";
			variants = 1;
			vehicle = "EM_handshake_a2q_SQUAD_1_F";
			volumeStrong = "1.5 * (0.5 * 	CustomSoundController1)";
			volumeWeak = "0";
		};
		class EM_handshake_a2q_SQUAD_2
		{
			folder = "Human";
			loop = 0;
			soundStrong = "EM_handshake_a2q_SQUAD_2_S";
			soundWeak = "EM_handshake_a2q_SQUAD_2_S";
			text = "Gray Wolf. This is Alpha. Over.";
			textRaw = "Gray Wolf. This is Alpha. Over.";
			type = "SQUAD";
			variants = 1;
			vehicle = "EM_handshake_a2q_SQUAD_2_F";
			volumeStrong = "1.5 * (0.5 * 	CustomSoundController1)";
			volumeWeak = "0";
		};
		class EM_handshake_a2q_SQUAD_3
		{
			folder = "Human";
			loop = 0;
			soundStrong = "EM_handshake_a2q_SQUAD_3_S";
			soundWeak = "EM_handshake_a2q_SQUAD_3_S";
			text = "Gray Wolf. It's Alpha. Over.";
			textRaw = "Gray Wolf. It's Alpha. Over.";
			type = "SQUAD";
			variants = 1;
			vehicle = "EM_handshake_a2q_SQUAD_3_F";
			volumeStrong = "1.5 * (0.5 * 	CustomSoundController1)";
			volumeWeak = "0";
		};
		class EM_handshake_a2q_SQUAD_4
		{
			folder = "Human";
			loop = 0;
			soundStrong = "EM_handshake_a2q_SQUAD_4_S";
			soundWeak = "EM_handshake_a2q_SQUAD_4_S";
			text = "Gray Wolf. This is Alpha here. Over.";
			textRaw = "Gray Wolf. This is Alpha here. Over.";
			type = "SQUAD";
			variants = 1;
			vehicle = "EM_handshake_a2q_SQUAD_4_F";
			volumeStrong = "1.5 * (0.5 * 	CustomSoundController1)";
			volumeWeak = "0";
		};
		class EM_handshake_b2q
		{
			displayName = """Bravo to HQ""";
			isVariants = 1;
			links[] = {"", "EM_handshake_b2q_SQUAD_0", "EM_handshake_b2q_SQUAD_1", "EM_handshake_b2q_SQUAD_2", "EM_handshake_b2q_SQUAD_3", "EM_handshake_b2q_SQUAD_4"};
			selection = "Squad";
			selectionAntenna = "Antenna_01";
			selectionPriority = 1;
			texture = "\a3\UI_F_Contact\Data\CfgContact\EM\Signals\EM_HANDSHAKE_B2Q_SQUAD_0_ca.paa";
		};
		class EM_handshake_b2q_SQUAD_0
		{
			folder = "Human";
			loop = 0;
			soundStrong = "EM_handshake_b2q_SQUAD_0_S";
			soundWeak = "EM_handshake_b2q_SQUAD_0_S";
			text = "Gray Wolf. Bravo. Over.";
			textRaw = "Gray Wolf. Bravo. Over.";
			type = "SQUAD";
			variants = 1;
			vehicle = "EM_handshake_b2q_SQUAD_0_F";
			volumeStrong = "1.5 * (0.5 * 	CustomSoundController1)";
			volumeWeak = "0";
		};
		class EM_handshake_b2q_SQUAD_1
		{
			folder = "Human";
			loop = 0;
			soundStrong = "EM_handshake_b2q_SQUAD_1_S";
			soundWeak = "EM_handshake_b2q_SQUAD_1_S";
			text = "Gray Wolf. Bravo here, over.";
			textRaw = "Gray Wolf. Bravo here over.";
			type = "SQUAD";
			variants = 1;
			vehicle = "EM_handshake_b2q_SQUAD_1_F";
			volumeStrong = "1.5 * (0.5 * 	CustomSoundController1)";
			volumeWeak = "0";
		};
		class EM_handshake_b2q_SQUAD_2
		{
			folder = "Human";
			loop = 0;
			soundStrong = "EM_handshake_b2q_SQUAD_2_S";
			soundWeak = "EM_handshake_b2q_SQUAD_2_S";
			text = "Gray Wolf. This is Bravo. Over.";
			textRaw = "Gray Wolf. This is Bravo. Over.";
			type = "SQUAD";
			variants = 1;
			vehicle = "EM_handshake_b2q_SQUAD_2_F";
			volumeStrong = "1.5 * (0.5 * 	CustomSoundController1)";
			volumeWeak = "0";
		};
		class EM_handshake_b2q_SQUAD_3
		{
			folder = "Human";
			loop = 0;
			soundStrong = "EM_handshake_b2q_SQUAD_3_S";
			soundWeak = "EM_handshake_b2q_SQUAD_3_S";
			text = "Gray Wolf. It's Bravo. Over.";
			textRaw = "Gray Wolf. It's Bravo. Over.";
			type = "SQUAD";
			variants = 1;
			vehicle = "EM_handshake_b2q_SQUAD_3_F";
			volumeStrong = "1.5 * (0.5 * 	CustomSoundController1)";
			volumeWeak = "0";
		};
		class EM_handshake_b2q_SQUAD_4
		{
			folder = "Human";
			loop = 0;
			soundStrong = "EM_handshake_b2q_SQUAD_4_S";
			soundWeak = "EM_handshake_b2q_SQUAD_4_S";
			text = "Gray Wolf. This is Bravo here. Over.";
			textRaw = "Gray Wolf. This is Bravo here. Over.";
			type = "SQUAD";
			variants = 1;
			vehicle = "EM_handshake_b2q_SQUAD_4_F";
			volumeStrong = "1.5 * (0.5 * 	CustomSoundController1)";
			volumeWeak = "0";
		};
		class EM_handshake_c2q
		{
			displayName = """Charlie to HQ""";
			isVariants = 1;
			links[] = {"", "EM_handshake_c2q_SQUAD_0", "EM_handshake_c2q_SQUAD_1", "EM_handshake_c2q_SQUAD_2", "EM_handshake_c2q_SQUAD_3", "EM_handshake_c2q_SQUAD_4"};
			selection = "Squad";
			selectionAntenna = "Antenna_01";
			selectionPriority = 1;
			texture = "\a3\UI_F_Contact\Data\CfgContact\EM\Signals\EM_HANDSHAKE_C2Q_SQUAD_0_ca.paa";
		};
		class EM_handshake_c2q_SQUAD_0
		{
			folder = "Human";
			loop = 0;
			soundStrong = "EM_handshake_c2q_SQUAD_0_S";
			soundWeak = "EM_handshake_c2q_SQUAD_0_S";
			text = "Gray Wolf. Charlie. Over.";
			textRaw = "Gray Wolf. Charlie. Over.";
			type = "SQUAD";
			variants = 1;
			vehicle = "EM_handshake_c2q_SQUAD_0_F";
			volumeStrong = "1.5 * (0.5 * 	CustomSoundController1)";
			volumeWeak = "0";
		};
		class EM_handshake_c2q_SQUAD_1
		{
			folder = "Human";
			loop = 0;
			soundStrong = "EM_handshake_c2q_SQUAD_1_S";
			soundWeak = "EM_handshake_c2q_SQUAD_1_S";
			text = "Gray Wolf. Charlie here, over.";
			textRaw = "Gray Wolf. Charlie here over.";
			type = "SQUAD";
			variants = 1;
			vehicle = "EM_handshake_c2q_SQUAD_1_F";
			volumeStrong = "1.5 * (0.5 * 	CustomSoundController1)";
			volumeWeak = "0";
		};
		class EM_handshake_c2q_SQUAD_2
		{
			folder = "Human";
			loop = 0;
			soundStrong = "EM_handshake_c2q_SQUAD_2_S";
			soundWeak = "EM_handshake_c2q_SQUAD_2_S";
			text = "Gray Wolf. This is Charlie. Over.";
			textRaw = "Gray Wolf. This is Charlie. Over.";
			type = "SQUAD";
			variants = 1;
			vehicle = "EM_handshake_c2q_SQUAD_2_F";
			volumeStrong = "1.5 * (0.5 * 	CustomSoundController1)";
			volumeWeak = "0";
		};
		class EM_handshake_c2q_SQUAD_3
		{
			folder = "Human";
			loop = 0;
			soundStrong = "EM_handshake_c2q_SQUAD_3_S";
			soundWeak = "EM_handshake_c2q_SQUAD_3_S";
			text = "Gray Wolf. It's Charlie. Over.";
			textRaw = "Gray Wolf. It's Charlie. Over.";
			type = "SQUAD";
			variants = 1;
			vehicle = "EM_handshake_c2q_SQUAD_3_F";
			volumeStrong = "1.5 * (0.5 * 	CustomSoundController1)";
			volumeWeak = "0";
		};
		class EM_handshake_c2q_SQUAD_4
		{
			folder = "Human";
			loop = 0;
			soundStrong = "EM_handshake_c2q_SQUAD_4_S";
			soundWeak = "EM_handshake_c2q_SQUAD_4_S";
			text = "Gray Wolf. This is Charlie here. Over.";
			textRaw = "Gray Wolf. This is Charlie here. Over.";
			type = "SQUAD";
			variants = 1;
			vehicle = "EM_handshake_c2q_SQUAD_4_F";
			volumeStrong = "1.5 * (0.5 * 	CustomSoundController1)";
			volumeWeak = "0";
		};
		class EM_handshake_d2q
		{
			displayName = """Delta to HQ""";
			isVariants = 1;
			links[] = {"", "EM_handshake_d2q_SQUAD_0", "EM_handshake_d2q_SQUAD_1", "EM_handshake_d2q_SQUAD_2", "EM_handshake_d2q_SQUAD_3", "EM_handshake_d2q_SQUAD_4"};
			selection = "Squad";
			selectionAntenna = "Antenna_01";
			selectionPriority = 1;
			texture = "\a3\UI_F_Contact\Data\CfgContact\EM\Signals\EM_HANDSHAKE_D2Q_SQUAD_0_ca.paa";
		};
		class EM_handshake_d2q_SQUAD_0
		{
			folder = "Human";
			loop = 0;
			soundStrong = "EM_handshake_d2q_SQUAD_0_S";
			soundWeak = "EM_handshake_d2q_SQUAD_0_S";
			text = "Gray Wolf. Delta. Over.";
			textRaw = "Gray Wolf. Delta. Over.";
			type = "SQUAD";
			variants = 1;
			vehicle = "EM_handshake_d2q_SQUAD_0_F";
			volumeStrong = "1.5 * (0.5 * 	CustomSoundController1)";
			volumeWeak = "0";
		};
		class EM_handshake_d2q_SQUAD_1
		{
			folder = "Human";
			loop = 0;
			soundStrong = "EM_handshake_d2q_SQUAD_1_S";
			soundWeak = "EM_handshake_d2q_SQUAD_1_S";
			text = "Gray Wolf. Delta here, over.";
			textRaw = "Gray Wolf. Delta here over.";
			type = "SQUAD";
			variants = 1;
			vehicle = "EM_handshake_d2q_SQUAD_1_F";
			volumeStrong = "1.5 * (0.5 * 	CustomSoundController1)";
			volumeWeak = "0";
		};
		class EM_handshake_d2q_SQUAD_2
		{
			folder = "Human";
			loop = 0;
			soundStrong = "EM_handshake_d2q_SQUAD_2_S";
			soundWeak = "EM_handshake_d2q_SQUAD_2_S";
			text = "Gray Wolf. This is Delta. Over.";
			textRaw = "Gray Wolf. This is Delta. Over.";
			type = "SQUAD";
			variants = 1;
			vehicle = "EM_handshake_d2q_SQUAD_2_F";
			volumeStrong = "1.5 * (0.5 * 	CustomSoundController1)";
			volumeWeak = "0";
		};
		class EM_handshake_d2q_SQUAD_3
		{
			folder = "Human";
			loop = 0;
			soundStrong = "EM_handshake_d2q_SQUAD_3_S";
			soundWeak = "EM_handshake_d2q_SQUAD_3_S";
			text = "Gray Wolf. It's Delta. Over.";
			textRaw = "Gray Wolf. It's Delta. Over.";
			type = "SQUAD";
			variants = 1;
			vehicle = "EM_handshake_d2q_SQUAD_3_F";
			volumeStrong = "1.5 * (0.5 * 	CustomSoundController1)";
			volumeWeak = "0";
		};
		class EM_handshake_d2q_SQUAD_4
		{
			folder = "Human";
			loop = 0;
			soundStrong = "EM_handshake_d2q_SQUAD_4_S";
			soundWeak = "EM_handshake_d2q_SQUAD_4_S";
			text = "Gray Wolf. This is Delta here. Over.";
			textRaw = "Gray Wolf. This is Delta here. Over.";
			type = "SQUAD";
			variants = 1;
			vehicle = "EM_handshake_d2q_SQUAD_4_F";
			volumeStrong = "1.5 * (0.5 * 	CustomSoundController1)";
			volumeWeak = "0";
		};
		class EM_handshake_e2q
		{
			displayName = """Echo to HQ""";
			isVariants = 1;
			links[] = {"", "EM_handshake_e2q_SQUAD_0", "EM_handshake_e2q_SQUAD_1", "EM_handshake_e2q_SQUAD_2", "EM_handshake_e2q_SQUAD_3", "EM_handshake_e2q_SQUAD_4"};
			selection = "Squad";
			selectionAntenna = "Antenna_01";
			selectionPriority = 1;
			texture = "\a3\UI_F_Contact\Data\CfgContact\EM\Signals\EM_HANDSHAKE_E2Q_SQUAD_0_ca.paa";
		};
		class EM_handshake_e2q_SQUAD_0
		{
			folder = "Human";
			loop = 0;
			soundStrong = "EM_handshake_e2q_SQUAD_0_S";
			soundWeak = "EM_handshake_e2q_SQUAD_0_S";
			text = "Gray Wolf. Echo. Over.";
			textRaw = "Gray Wolf. Echo. Over.";
			type = "SQUAD";
			variants = 1;
			vehicle = "EM_handshake_e2q_SQUAD_0_F";
			volumeStrong = "1.5 * (0.5 * 	CustomSoundController1)";
			volumeWeak = "0";
		};
		class EM_handshake_e2q_SQUAD_1
		{
			folder = "Human";
			loop = 0;
			soundStrong = "EM_handshake_e2q_SQUAD_1_S";
			soundWeak = "EM_handshake_e2q_SQUAD_1_S";
			text = "Gray Wolf. Echo here, over.";
			textRaw = "Gray Wolf. Echo here over.";
			type = "SQUAD";
			variants = 1;
			vehicle = "EM_handshake_e2q_SQUAD_1_F";
			volumeStrong = "1.5 * (0.5 * 	CustomSoundController1)";
			volumeWeak = "0";
		};
		class EM_handshake_e2q_SQUAD_2
		{
			folder = "Human";
			loop = 0;
			soundStrong = "EM_handshake_e2q_SQUAD_2_S";
			soundWeak = "EM_handshake_e2q_SQUAD_2_S";
			text = "Gray Wolf. This is Echo. Over.";
			textRaw = "Gray Wolf. This is Echo. Over.";
			type = "SQUAD";
			variants = 1;
			vehicle = "EM_handshake_e2q_SQUAD_2_F";
			volumeStrong = "1.5 * (0.5 * 	CustomSoundController1)";
			volumeWeak = "0";
		};
		class EM_handshake_e2q_SQUAD_3
		{
			folder = "Human";
			loop = 0;
			soundStrong = "EM_handshake_e2q_SQUAD_3_S";
			soundWeak = "EM_handshake_e2q_SQUAD_3_S";
			text = "Gray Wolf. It's Echo. Over.";
			textRaw = "Gray Wolf. It's Echo. Over.";
			type = "SQUAD";
			variants = 1;
			vehicle = "EM_handshake_e2q_SQUAD_3_F";
			volumeStrong = "1.5 * (0.5 * 	CustomSoundController1)";
			volumeWeak = "0";
		};
		class EM_handshake_e2q_SQUAD_4
		{
			folder = "Human";
			loop = 0;
			soundStrong = "EM_handshake_e2q_SQUAD_4_S";
			soundWeak = "EM_handshake_e2q_SQUAD_4_S";
			text = "Gray Wolf. This is Echo here. Over.";
			textRaw = "Gray Wolf. This is Echo here. Over.";
			type = "SQUAD";
			variants = 1;
			vehicle = "EM_handshake_e2q_SQUAD_4_F";
			volumeStrong = "1.5 * (0.5 * 	CustomSoundController1)";
			volumeWeak = "0";
		};
		class EM_handshake_f2q
		{
			displayName = """Foxtrot to HQ""";
			isVariants = 1;
			links[] = {"", "EM_handshake_f2q_SQUAD_0", "EM_handshake_f2q_SQUAD_1", "EM_handshake_f2q_SQUAD_2", "EM_handshake_f2q_SQUAD_3", "EM_handshake_f2q_SQUAD_4"};
			selection = "Squad";
			selectionAntenna = "Antenna_01";
			selectionPriority = 1;
			texture = "\a3\UI_F_Contact\Data\CfgContact\EM\Signals\EM_HANDSHAKE_F2Q_SQUAD_0_ca.paa";
		};
		class EM_handshake_f2q_SQUAD_0
		{
			folder = "Human";
			loop = 0;
			soundStrong = "EM_handshake_f2q_SQUAD_0_S";
			soundWeak = "EM_handshake_f2q_SQUAD_0_S";
			text = "Gray Wolf. Foxtrot. Over.";
			textRaw = "Gray Wolf. Foxtrot. Over.";
			type = "SQUAD";
			variants = 1;
			vehicle = "EM_handshake_f2q_SQUAD_0_F";
			volumeStrong = "1.5 * (0.5 * 	CustomSoundController1)";
			volumeWeak = "0";
		};
		class EM_handshake_f2q_SQUAD_1
		{
			folder = "Human";
			loop = 0;
			soundStrong = "EM_handshake_f2q_SQUAD_1_S";
			soundWeak = "EM_handshake_f2q_SQUAD_1_S";
			text = "Gray Wolf. Foxtrot here, over.";
			textRaw = "Gray Wolf. Foxtrot here over.";
			type = "SQUAD";
			variants = 1;
			vehicle = "EM_handshake_f2q_SQUAD_1_F";
			volumeStrong = "1.5 * (0.5 * 	CustomSoundController1)";
			volumeWeak = "0";
		};
		class EM_handshake_f2q_SQUAD_2
		{
			folder = "Human";
			loop = 0;
			soundStrong = "EM_handshake_f2q_SQUAD_2_S";
			soundWeak = "EM_handshake_f2q_SQUAD_2_S";
			text = "Gray Wolf. This is Foxtrot. Over.";
			textRaw = "Gray Wolf. This is Foxtrot. Over.";
			type = "SQUAD";
			variants = 1;
			vehicle = "EM_handshake_f2q_SQUAD_2_F";
			volumeStrong = "1.5 * (0.5 * 	CustomSoundController1)";
			volumeWeak = "0";
		};
		class EM_handshake_f2q_SQUAD_3
		{
			folder = "Human";
			loop = 0;
			soundStrong = "EM_handshake_f2q_SQUAD_3_S";
			soundWeak = "EM_handshake_f2q_SQUAD_3_S";
			text = "Gray Wolf. It's Foxtrot. Over.";
			textRaw = "Gray Wolf. It's Foxtrot. Over.";
			type = "SQUAD";
			variants = 1;
			vehicle = "EM_handshake_f2q_SQUAD_3_F";
			volumeStrong = "1.5 * (0.5 * 	CustomSoundController1)";
			volumeWeak = "0";
		};
		class EM_handshake_f2q_SQUAD_4
		{
			folder = "Human";
			loop = 0;
			soundStrong = "EM_handshake_f2q_SQUAD_4_S";
			soundWeak = "EM_handshake_f2q_SQUAD_4_S";
			text = "Gray Wolf. This is Foxtrot here. Over.";
			textRaw = "Gray Wolf. This is Foxtrot here. Over.";
			type = "SQUAD";
			variants = 1;
			vehicle = "EM_handshake_f2q_SQUAD_4_F";
			volumeStrong = "1.5 * (0.5 * 	CustomSoundController1)";
			volumeWeak = "0";
		};
		class EM_handshake_g2q
		{
			displayName = """Golf to HQ""";
			isVariants = 1;
			links[] = {"", "EM_handshake_g2q_SQUAD_0", "EM_handshake_g2q_SQUAD_1", "EM_handshake_g2q_SQUAD_2", "EM_handshake_g2q_SQUAD_3", "EM_handshake_g2q_SQUAD_4"};
			selection = "Squad";
			selectionAntenna = "Antenna_01";
			selectionPriority = 1;
			texture = "\a3\UI_F_Contact\Data\CfgContact\EM\Signals\EM_HANDSHAKE_G2Q_SQUAD_0_ca.paa";
		};
		class EM_handshake_g2q_SQUAD_0
		{
			folder = "Human";
			loop = 0;
			soundStrong = "EM_handshake_g2q_SQUAD_0_S";
			soundWeak = "EM_handshake_g2q_SQUAD_0_S";
			text = "Gray Wolf. Golf. Over.";
			textRaw = "Gray Wolf. Golf. Over.";
			type = "SQUAD";
			variants = 1;
			vehicle = "EM_handshake_g2q_SQUAD_0_F";
			volumeStrong = "1.5 * (0.5 * 	CustomSoundController1)";
			volumeWeak = "0";
		};
		class EM_handshake_g2q_SQUAD_1
		{
			folder = "Human";
			loop = 0;
			soundStrong = "EM_handshake_g2q_SQUAD_1_S";
			soundWeak = "EM_handshake_g2q_SQUAD_1_S";
			text = "Gray Wolf. Golf here, over.";
			textRaw = "Gray Wolf. Golf here over.";
			type = "SQUAD";
			variants = 1;
			vehicle = "EM_handshake_g2q_SQUAD_1_F";
			volumeStrong = "1.5 * (0.5 * 	CustomSoundController1)";
			volumeWeak = "0";
		};
		class EM_handshake_g2q_SQUAD_2
		{
			folder = "Human";
			loop = 0;
			soundStrong = "EM_handshake_g2q_SQUAD_2_S";
			soundWeak = "EM_handshake_g2q_SQUAD_2_S";
			text = "Gray Wolf. This is Golf. Over.";
			textRaw = "Gray Wolf. This is Golf. Over.";
			type = "SQUAD";
			variants = 1;
			vehicle = "EM_handshake_g2q_SQUAD_2_F";
			volumeStrong = "1.5 * (0.5 * 	CustomSoundController1)";
			volumeWeak = "0";
		};
		class EM_handshake_g2q_SQUAD_3
		{
			folder = "Human";
			loop = 0;
			soundStrong = "EM_handshake_g2q_SQUAD_3_S";
			soundWeak = "EM_handshake_g2q_SQUAD_3_S";
			text = "Gray Wolf. It's Golf. Over.";
			textRaw = "Gray Wolf. It's Golf. Over.";
			type = "SQUAD";
			variants = 1;
			vehicle = "EM_handshake_g2q_SQUAD_3_F";
			volumeStrong = "1.5 * (0.5 * 	CustomSoundController1)";
			volumeWeak = "0";
		};
		class EM_handshake_g2q_SQUAD_4
		{
			folder = "Human";
			loop = 0;
			soundStrong = "EM_handshake_g2q_SQUAD_4_S";
			soundWeak = "EM_handshake_g2q_SQUAD_4_S";
			text = "Gray Wolf. This is Golf here. Over.";
			textRaw = "Gray Wolf. This is Golf here. Over.";
			type = "SQUAD";
			variants = 1;
			vehicle = "EM_handshake_g2q_SQUAD_4_F";
			volumeStrong = "1.5 * (0.5 * 	CustomSoundController1)";
			volumeWeak = "0";
		};
		class EM_handshake_h2q
		{
			displayName = """Black Fox to HQ""";
			isVariants = 1;
			links[] = {"", "EM_handshake_h2q_SQUAD_0", "EM_handshake_h2q_SQUAD_1", "EM_handshake_h2q_SQUAD_2", "EM_handshake_h2q_SQUAD_3", "EM_handshake_h2q_SQUAD_4"};
			selection = "Squad";
			selectionAntenna = "Antenna_01";
			selectionPriority = 1;
			texture = "\a3\UI_F_Contact\Data\CfgContact\EM\Signals\EM_HANDSHAKE_H2Q_SQUAD_0_ca.paa";
		};
		class EM_handshake_h2q_SQUAD_0
		{
			folder = "Human";
			loop = 0;
			soundStrong = "EM_handshake_h2q_SQUAD_0_S";
			soundWeak = "EM_handshake_h2q_SQUAD_0_S";
			text = "Gray Wolf. Black Fox. Over.";
			textRaw = "Gray Wolf. Black Fox. Over.";
			type = "SQUAD";
			variants = 1;
			vehicle = "EM_handshake_h2q_SQUAD_0_F";
			volumeStrong = "1.5 * (0.5 * 	CustomSoundController1)";
			volumeWeak = "0";
		};
		class EM_handshake_h2q_SQUAD_1
		{
			folder = "Human";
			loop = 0;
			soundStrong = "EM_handshake_h2q_SQUAD_1_S";
			soundWeak = "EM_handshake_h2q_SQUAD_1_S";
			text = "Gray Wolf. Black Fox, over.";
			textRaw = "Gray Wolf. Black Fox over.";
			type = "SQUAD";
			variants = 1;
			vehicle = "EM_handshake_h2q_SQUAD_1_F";
			volumeStrong = "1.5 * (0.5 * 	CustomSoundController1)";
			volumeWeak = "0";
		};
		class EM_handshake_h2q_SQUAD_2
		{
			folder = "Human";
			loop = 0;
			soundStrong = "EM_handshake_h2q_SQUAD_2_S";
			soundWeak = "EM_handshake_h2q_SQUAD_2_S";
			text = "Gray Wolf. This is Black Fox. Over.";
			textRaw = "Gray Wolf. This is Black Fox. Over.";
			type = "SQUAD";
			variants = 1;
			vehicle = "EM_handshake_h2q_SQUAD_2_F";
			volumeStrong = "1.5 * (0.5 * 	CustomSoundController1)";
			volumeWeak = "0";
		};
		class EM_handshake_h2q_SQUAD_3
		{
			folder = "Human";
			loop = 0;
			soundStrong = "EM_handshake_h2q_SQUAD_3_S";
			soundWeak = "EM_handshake_h2q_SQUAD_3_S";
			text = "Gray Wolf. It's Black Fox. Over.";
			textRaw = "Gray Wolf. It's Black Fox. Over.";
			type = "SQUAD";
			variants = 1;
			vehicle = "EM_handshake_h2q_SQUAD_3_F";
			volumeStrong = "1.5 * (0.5 * 	CustomSoundController1)";
			volumeWeak = "0";
		};
		class EM_handshake_h2q_SQUAD_4
		{
			folder = "Human";
			loop = 0;
			soundStrong = "EM_handshake_h2q_SQUAD_4_S";
			soundWeak = "EM_handshake_h2q_SQUAD_4_S";
			text = "Gray Wolf. This is Black Fox here. Over.";
			textRaw = "Gray Wolf. This is Black Fox here. Over.";
			type = "SQUAD";
			variants = 1;
			vehicle = "EM_handshake_h2q_SQUAD_4_F";
			volumeStrong = "1.5 * (0.5 * 	CustomSoundController1)";
			volumeWeak = "0";
		};
		class EM_handshake_q2a
		{
			displayName = """HQ to Alpha""";
			isVariants = 1;
			links[] = {"", "EM_handshake_q2a_HQ_0", "EM_handshake_q2a_HQ_1", "EM_handshake_q2a_HQ_2", "EM_handshake_q2a_HQ_3", "EM_handshake_q2a_HQ_4"};
			selection = "Base";
			selectionAntenna = "Antenna_01";
			selectionPriority = 1;
			texture = "\a3\UI_F_Contact\Data\CfgContact\EM\Signals\EM_HANDSHAKE_Q2A_HQ_0_ca.paa";
		};
		class EM_handshake_q2a_HQ_0
		{
			folder = "Human";
			loop = 0;
			soundStrong = "EM_handshake_q2a_HQ_0_S";
			soundWeak = "EM_handshake_q2a_HQ_0_S";
			text = "Alpha. Gray Wolf. Over.";
			textRaw = "Alpha. Gray Wolf. Over.";
			type = "HQ";
			variants = 1;
			vehicle = "EM_handshake_q2a_HQ_0_F";
			volumeStrong = "1.5 * (0.5 * 	CustomSoundController1)";
			volumeWeak = "0";
		};
		class EM_handshake_q2a_HQ_1
		{
			folder = "Human";
			loop = 0;
			soundStrong = "EM_handshake_q2a_HQ_1_S";
			soundWeak = "EM_handshake_q2a_HQ_1_S";
			text = "Alpha. It's Gray Wolf. Over.";
			textRaw = "Alpha. It's Gray Wolf. Over.";
			type = "HQ";
			variants = 1;
			vehicle = "EM_handshake_q2a_HQ_1_F";
			volumeStrong = "1.5 * (0.5 * 	CustomSoundController1)";
			volumeWeak = "0";
		};
		class EM_handshake_q2a_HQ_2
		{
			folder = "Human";
			loop = 0;
			soundStrong = "EM_handshake_q2a_HQ_2_S";
			soundWeak = "EM_handshake_q2a_HQ_2_S";
			text = "Alpha. This is Gray Wolf, over.";
			textRaw = "Alpha. This is Gray Wolf over.";
			type = "HQ";
			variants = 1;
			vehicle = "EM_handshake_q2a_HQ_2_F";
			volumeStrong = "1.5 * (0.5 * 	CustomSoundController1)";
			volumeWeak = "0";
		};
		class EM_handshake_q2a_HQ_3
		{
			folder = "Human";
			loop = 0;
			soundStrong = "EM_handshake_q2a_HQ_3_S";
			soundWeak = "EM_handshake_q2a_HQ_3_S";
			text = "Alpha, Gray Wolf here. Over.";
			textRaw = "Alpha Gray Wolf here. Over.";
			type = "HQ";
			variants = 1;
			vehicle = "EM_handshake_q2a_HQ_3_F";
			volumeStrong = "1.5 * (0.5 * 	CustomSoundController1)";
			volumeWeak = "0";
		};
		class EM_handshake_q2a_HQ_4
		{
			folder = "Human";
			loop = 0;
			soundStrong = "EM_handshake_q2a_HQ_4_S";
			soundWeak = "EM_handshake_q2a_HQ_4_S";
			text = "Alpha. This is Gray Wolf here. Over.";
			textRaw = "Alpha. This is Gray Wolf here. Over.";
			type = "HQ";
			variants = 1;
			vehicle = "EM_handshake_q2a_HQ_4_F";
			volumeStrong = "1.5 * (0.5 * 	CustomSoundController1)";
			volumeWeak = "0";
		};
		class EM_handshake_q2b
		{
			displayName = """HQ to Bravo""";
			isVariants = 1;
			links[] = {"", "EM_handshake_q2b_HQ_0", "EM_handshake_q2b_HQ_1", "EM_handshake_q2b_HQ_2", "EM_handshake_q2b_HQ_3", "EM_handshake_q2b_HQ_4"};
			selection = "Base";
			selectionAntenna = "Antenna_01";
			selectionPriority = 1;
			texture = "\a3\UI_F_Contact\Data\CfgContact\EM\Signals\EM_HANDSHAKE_Q2B_HQ_0_ca.paa";
		};
		class EM_handshake_q2b_HQ_0
		{
			folder = "Human";
			loop = 0;
			soundStrong = "EM_handshake_q2b_HQ_0_S";
			soundWeak = "EM_handshake_q2b_HQ_0_S";
			text = "Bravo. Gray Wolf. Over.";
			textRaw = "Bravo. Gray Wolf. Over.";
			type = "HQ";
			variants = 1;
			vehicle = "EM_handshake_q2b_HQ_0_F";
			volumeStrong = "1.5 * (0.5 * 	CustomSoundController1)";
			volumeWeak = "0";
		};
		class EM_handshake_q2b_HQ_1
		{
			folder = "Human";
			loop = 0;
			soundStrong = "EM_handshake_q2b_HQ_1_S";
			soundWeak = "EM_handshake_q2b_HQ_1_S";
			text = "Bravo. It's Gray Wolf. Over.";
			textRaw = "Bravo. It's Gray Wolf. Over.";
			type = "HQ";
			variants = 1;
			vehicle = "EM_handshake_q2b_HQ_1_F";
			volumeStrong = "1.5 * (0.5 * 	CustomSoundController1)";
			volumeWeak = "0";
		};
		class EM_handshake_q2b_HQ_2
		{
			folder = "Human";
			loop = 0;
			soundStrong = "EM_handshake_q2b_HQ_2_S";
			soundWeak = "EM_handshake_q2b_HQ_2_S";
			text = "Bravo. This is Gray Wolf, over.";
			textRaw = "Bravo. This is Gray Wolf over.";
			type = "HQ";
			variants = 1;
			vehicle = "EM_handshake_q2b_HQ_2_F";
			volumeStrong = "1.5 * (0.5 * 	CustomSoundController1)";
			volumeWeak = "0";
		};
		class EM_handshake_q2b_HQ_3
		{
			folder = "Human";
			loop = 0;
			soundStrong = "EM_handshake_q2b_HQ_3_S";
			soundWeak = "EM_handshake_q2b_HQ_3_S";
			text = "Bravo, Gray Wolf here. Over.";
			textRaw = "Bravo Gray Wolf here. Over.";
			type = "HQ";
			variants = 1;
			vehicle = "EM_handshake_q2b_HQ_3_F";
			volumeStrong = "1.5 * (0.5 * 	CustomSoundController1)";
			volumeWeak = "0";
		};
		class EM_handshake_q2b_HQ_4
		{
			folder = "Human";
			loop = 0;
			soundStrong = "EM_handshake_q2b_HQ_4_S";
			soundWeak = "EM_handshake_q2b_HQ_4_S";
			text = "Bravo. This is Gray Wolf here. Over.";
			textRaw = "Bravo. This is Gray Wolf here. Over.";
			type = "HQ";
			variants = 1;
			vehicle = "EM_handshake_q2b_HQ_4_F";
			volumeStrong = "1.5 * (0.5 * 	CustomSoundController1)";
			volumeWeak = "0";
		};
		class EM_handshake_q2c
		{
			displayName = """HQ to Charlie""";
			isVariants = 1;
			links[] = {"", "EM_handshake_q2c_HQ_0", "EM_handshake_q2c_HQ_1", "EM_handshake_q2c_HQ_2", "EM_handshake_q2c_HQ_3", "EM_handshake_q2c_HQ_4"};
			selection = "Base";
			selectionAntenna = "Antenna_01";
			selectionPriority = 1;
			texture = "\a3\UI_F_Contact\Data\CfgContact\EM\Signals\EM_HANDSHAKE_Q2C_HQ_0_ca.paa";
		};
		class EM_handshake_q2c_HQ_0
		{
			folder = "Human";
			loop = 0;
			soundStrong = "EM_handshake_q2c_HQ_0_S";
			soundWeak = "EM_handshake_q2c_HQ_0_S";
			text = "Charlie. Gray Wolf. Over.";
			textRaw = "Charlie. Gray Wolf. Over.";
			type = "HQ";
			variants = 1;
			vehicle = "EM_handshake_q2c_HQ_0_F";
			volumeStrong = "1.5 * (0.5 * 	CustomSoundController1)";
			volumeWeak = "0";
		};
		class EM_handshake_q2c_HQ_1
		{
			folder = "Human";
			loop = 0;
			soundStrong = "EM_handshake_q2c_HQ_1_S";
			soundWeak = "EM_handshake_q2c_HQ_1_S";
			text = "Charlie. It's Gray Wolf. Over.";
			textRaw = "Charlie. It's Gray Wolf. Over.";
			type = "HQ";
			variants = 1;
			vehicle = "EM_handshake_q2c_HQ_1_F";
			volumeStrong = "1.5 * (0.5 * 	CustomSoundController1)";
			volumeWeak = "0";
		};
		class EM_handshake_q2c_HQ_2
		{
			folder = "Human";
			loop = 0;
			soundStrong = "EM_handshake_q2c_HQ_2_S";
			soundWeak = "EM_handshake_q2c_HQ_2_S";
			text = "Charlie. This is Gray Wolf, over.";
			textRaw = "Charlie. This is Gray Wolf over.";
			type = "HQ";
			variants = 1;
			vehicle = "EM_handshake_q2c_HQ_2_F";
			volumeStrong = "1.5 * (0.5 * 	CustomSoundController1)";
			volumeWeak = "0";
		};
		class EM_handshake_q2c_HQ_3
		{
			folder = "Human";
			loop = 0;
			soundStrong = "EM_handshake_q2c_HQ_3_S";
			soundWeak = "EM_handshake_q2c_HQ_3_S";
			text = "Charlie, Gray Wolf here. Over.";
			textRaw = "Charlie Gray Wolf here. Over.";
			type = "HQ";
			variants = 1;
			vehicle = "EM_handshake_q2c_HQ_3_F";
			volumeStrong = "1.5 * (0.5 * 	CustomSoundController1)";
			volumeWeak = "0";
		};
		class EM_handshake_q2c_HQ_4
		{
			folder = "Human";
			loop = 0;
			soundStrong = "EM_handshake_q2c_HQ_4_S";
			soundWeak = "EM_handshake_q2c_HQ_4_S";
			text = "Charlie. This is Gray Wolf here. Over.";
			textRaw = "Charlie. This is Gray Wolf here. Over.";
			type = "HQ";
			variants = 1;
			vehicle = "EM_handshake_q2c_HQ_4_F";
			volumeStrong = "1.5 * (0.5 * 	CustomSoundController1)";
			volumeWeak = "0";
		};
		class EM_handshake_q2d
		{
			displayName = """HQ to Delta""";
			isVariants = 1;
			links[] = {"", "EM_handshake_q2d_HQ_0", "EM_handshake_q2d_HQ_1", "EM_handshake_q2d_HQ_2", "EM_handshake_q2d_HQ_3", "EM_handshake_q2d_HQ_4"};
			selection = "Base";
			selectionAntenna = "Antenna_01";
			selectionPriority = 1;
			texture = "\a3\UI_F_Contact\Data\CfgContact\EM\Signals\EM_HANDSHAKE_Q2D_HQ_0_ca.paa";
		};
		class EM_handshake_q2d_HQ_0
		{
			folder = "Human";
			loop = 0;
			soundStrong = "EM_handshake_q2d_HQ_0_S";
			soundWeak = "EM_handshake_q2d_HQ_0_S";
			text = "Delta. Gray Wolf. Over.";
			textRaw = "Delta. Gray Wolf. Over.";
			type = "HQ";
			variants = 1;
			vehicle = "EM_handshake_q2d_HQ_0_F";
			volumeStrong = "1.5 * (0.5 * 	CustomSoundController1)";
			volumeWeak = "0";
		};
		class EM_handshake_q2d_HQ_1
		{
			folder = "Human";
			loop = 0;
			soundStrong = "EM_handshake_q2d_HQ_1_S";
			soundWeak = "EM_handshake_q2d_HQ_1_S";
			text = "Delta. It's Gray Wolf. Over.";
			textRaw = "Delta. It's Gray Wolf. Over.";
			type = "HQ";
			variants = 1;
			vehicle = "EM_handshake_q2d_HQ_1_F";
			volumeStrong = "1.5 * (0.5 * 	CustomSoundController1)";
			volumeWeak = "0";
		};
		class EM_handshake_q2d_HQ_2
		{
			folder = "Human";
			loop = 0;
			soundStrong = "EM_handshake_q2d_HQ_2_S";
			soundWeak = "EM_handshake_q2d_HQ_2_S";
			text = "Delta. This is Gray Wolf, over.";
			textRaw = "Delta. This is Gray Wolf over.";
			type = "HQ";
			variants = 1;
			vehicle = "EM_handshake_q2d_HQ_2_F";
			volumeStrong = "1.5 * (0.5 * 	CustomSoundController1)";
			volumeWeak = "0";
		};
		class EM_handshake_q2d_HQ_3
		{
			folder = "Human";
			loop = 0;
			soundStrong = "EM_handshake_q2d_HQ_3_S";
			soundWeak = "EM_handshake_q2d_HQ_3_S";
			text = "Delta, Gray Wolf here. Over.";
			textRaw = "Delta Gray Wolf here. Over.";
			type = "HQ";
			variants = 1;
			vehicle = "EM_handshake_q2d_HQ_3_F";
			volumeStrong = "1.5 * (0.5 * 	CustomSoundController1)";
			volumeWeak = "0";
		};
		class EM_handshake_q2d_HQ_4
		{
			folder = "Human";
			loop = 0;
			soundStrong = "EM_handshake_q2d_HQ_4_S";
			soundWeak = "EM_handshake_q2d_HQ_4_S";
			text = "Delta. This is Gray Wolf here. Over.";
			textRaw = "Delta. This is Gray Wolf here. Over.";
			type = "HQ";
			variants = 1;
			vehicle = "EM_handshake_q2d_HQ_4_F";
			volumeStrong = "1.5 * (0.5 * 	CustomSoundController1)";
			volumeWeak = "0";
		};
		class EM_handshake_q2e
		{
			displayName = """HQ to Echo""";
			isVariants = 1;
			links[] = {"", "EM_handshake_q2e_HQ_0", "EM_handshake_q2e_HQ_1", "EM_handshake_q2e_HQ_2", "EM_handshake_q2e_HQ_3", "EM_handshake_q2e_HQ_4"};
			selection = "Base";
			selectionAntenna = "Antenna_01";
			selectionPriority = 1;
			texture = "\a3\UI_F_Contact\Data\CfgContact\EM\Signals\EM_HANDSHAKE_Q2E_HQ_0_ca.paa";
		};
		class EM_handshake_q2e_HQ_0
		{
			folder = "Human";
			loop = 0;
			soundStrong = "EM_handshake_q2e_HQ_0_S";
			soundWeak = "EM_handshake_q2e_HQ_0_S";
			text = "Echo. Gray Wolf. Over.";
			textRaw = "Echo. Gray Wolf. Over.";
			type = "HQ";
			variants = 1;
			vehicle = "EM_handshake_q2e_HQ_0_F";
			volumeStrong = "1.5 * (0.5 * 	CustomSoundController1)";
			volumeWeak = "0";
		};
		class EM_handshake_q2e_HQ_1
		{
			folder = "Human";
			loop = 0;
			soundStrong = "EM_handshake_q2e_HQ_1_S";
			soundWeak = "EM_handshake_q2e_HQ_1_S";
			text = "Echo. It's Gray Wolf. Over.";
			textRaw = "Echo. It's Gray Wolf. Over.";
			type = "HQ";
			variants = 1;
			vehicle = "EM_handshake_q2e_HQ_1_F";
			volumeStrong = "1.5 * (0.5 * 	CustomSoundController1)";
			volumeWeak = "0";
		};
		class EM_handshake_q2e_HQ_2
		{
			folder = "Human";
			loop = 0;
			soundStrong = "EM_handshake_q2e_HQ_2_S";
			soundWeak = "EM_handshake_q2e_HQ_2_S";
			text = "Echo. This is Gray Wolf, over.";
			textRaw = "Echo. This is Gray Wolf over.";
			type = "HQ";
			variants = 1;
			vehicle = "EM_handshake_q2e_HQ_2_F";
			volumeStrong = "1.5 * (0.5 * 	CustomSoundController1)";
			volumeWeak = "0";
		};
		class EM_handshake_q2e_HQ_3
		{
			folder = "Human";
			loop = 0;
			soundStrong = "EM_handshake_q2e_HQ_3_S";
			soundWeak = "EM_handshake_q2e_HQ_3_S";
			text = "Echo, Gray Wolf here. Over.";
			textRaw = "Echo Gray Wolf here. Over.";
			type = "HQ";
			variants = 1;
			vehicle = "EM_handshake_q2e_HQ_3_F";
			volumeStrong = "1.5 * (0.5 * 	CustomSoundController1)";
			volumeWeak = "0";
		};
		class EM_handshake_q2e_HQ_4
		{
			folder = "Human";
			loop = 0;
			soundStrong = "EM_handshake_q2e_HQ_4_S";
			soundWeak = "EM_handshake_q2e_HQ_4_S";
			text = "Echo. This is Gray Wolf here. Over.";
			textRaw = "Echo. This is Gray Wolf here. Over.";
			type = "HQ";
			variants = 1;
			vehicle = "EM_handshake_q2e_HQ_4_F";
			volumeStrong = "1.5 * (0.5 * 	CustomSoundController1)";
			volumeWeak = "0";
		};
		class EM_handshake_q2f
		{
			displayName = """HQ to Foxtrot""";
			isVariants = 1;
			links[] = {"", "EM_handshake_q2f_HQ_0", "EM_handshake_q2f_HQ_1", "EM_handshake_q2f_HQ_2", "EM_handshake_q2f_HQ_3"};
			selection = "Base";
			selectionAntenna = "Antenna_01";
			selectionPriority = 1;
			texture = "\a3\UI_F_Contact\Data\CfgContact\EM\Signals\EM_HANDSHAKE_Q2F_HQ_0_ca.paa";
		};
		class EM_handshake_q2f_HQ_0
		{
			folder = "Human";
			loop = 0;
			soundStrong = "EM_handshake_q2f_HQ_0_S";
			soundWeak = "EM_handshake_q2f_HQ_0_S";
			text = "Foxtrot. Gray Wolf. Over.";
			textRaw = "Foxtrot. Gray Wolf. Over.";
			type = "HQ";
			variants = 1;
			vehicle = "EM_handshake_q2f_HQ_0_F";
			volumeStrong = "1.5 * (0.5 * 	CustomSoundController1)";
			volumeWeak = "0";
		};
		class EM_handshake_q2f_HQ_1
		{
			folder = "Human";
			loop = 0;
			soundStrong = "EM_handshake_q2f_HQ_1_S";
			soundWeak = "EM_handshake_q2f_HQ_1_S";
			text = "Foxtrot. It's Gray Wolf. Over.";
			textRaw = "Foxtrot. It's Gray Wolf. Over.";
			type = "HQ";
			variants = 1;
			vehicle = "EM_handshake_q2f_HQ_1_F";
			volumeStrong = "1.5 * (0.5 * 	CustomSoundController1)";
			volumeWeak = "0";
		};
		class EM_handshake_q2f_HQ_2
		{
			folder = "Human";
			loop = 0;
			soundStrong = "EM_handshake_q2f_HQ_2_S";
			soundWeak = "EM_handshake_q2f_HQ_2_S";
			text = "Foxtrot. This is Gray Wolf, over.";
			textRaw = "Foxtrot. This is Gray Wolf over.";
			type = "HQ";
			variants = 1;
			vehicle = "EM_handshake_q2f_HQ_2_F";
			volumeStrong = "1.5 * (0.5 * 	CustomSoundController1)";
			volumeWeak = "0";
		};
		class EM_handshake_q2f_HQ_3
		{
			folder = "Human";
			loop = 0;
			soundStrong = "EM_handshake_q2f_HQ_3_S";
			soundWeak = "EM_handshake_q2f_HQ_3_S";
			text = "Foxtrot, Gray Wolf here. Over.";
			textRaw = "Foxtrot Gray Wolf here. Over.";
			type = "HQ";
			variants = 1;
			vehicle = "EM_handshake_q2f_HQ_3_F";
			volumeStrong = "1.5 * (0.5 * 	CustomSoundController1)";
			volumeWeak = "0";
		};
		class EM_handshake_q2g
		{
			displayName = """HQ to Golf""";
			isVariants = 1;
			links[] = {"", "EM_handshake_q2g_HQ_0", "EM_handshake_q2g_HQ_1", "EM_handshake_q2g_HQ_2", "EM_handshake_q2g_HQ_3", "EM_handshake_q2g_HQ_4"};
			selection = "Base";
			selectionAntenna = "Antenna_01";
			selectionPriority = 1;
			texture = "\a3\UI_F_Contact\Data\CfgContact\EM\Signals\EM_HANDSHAKE_Q2G_HQ_0_ca.paa";
		};
		class EM_handshake_q2g_HQ_0
		{
			folder = "Human";
			loop = 0;
			soundStrong = "EM_handshake_q2g_HQ_0_S";
			soundWeak = "EM_handshake_q2g_HQ_0_S";
			text = "Golf. Gray Wolf. Over.";
			textRaw = "Golf. Gray Wolf. Over.";
			type = "HQ";
			variants = 1;
			vehicle = "EM_handshake_q2g_HQ_0_F";
			volumeStrong = "1.5 * (0.5 * 	CustomSoundController1)";
			volumeWeak = "0";
		};
		class EM_handshake_q2g_HQ_1
		{
			folder = "Human";
			loop = 0;
			soundStrong = "EM_handshake_q2g_HQ_1_S";
			soundWeak = "EM_handshake_q2g_HQ_1_S";
			text = "Golf. It's Gray Wolf. Over.";
			textRaw = "Golf. It's Gray Wolf. Over.";
			type = "HQ";
			variants = 1;
			vehicle = "EM_handshake_q2g_HQ_1_F";
			volumeStrong = "1.5 * (0.5 * 	CustomSoundController1)";
			volumeWeak = "0";
		};
		class EM_handshake_q2g_HQ_2
		{
			folder = "Human";
			loop = 0;
			soundStrong = "EM_handshake_q2g_HQ_2_S";
			soundWeak = "EM_handshake_q2g_HQ_2_S";
			text = "Golf. This is Gray Wolf, over.";
			textRaw = "Golf. This is Gray Wolf over.";
			type = "HQ";
			variants = 1;
			vehicle = "EM_handshake_q2g_HQ_2_F";
			volumeStrong = "1.5 * (0.5 * 	CustomSoundController1)";
			volumeWeak = "0";
		};
		class EM_handshake_q2g_HQ_3
		{
			folder = "Human";
			loop = 0;
			soundStrong = "EM_handshake_q2g_HQ_3_S";
			soundWeak = "EM_handshake_q2g_HQ_3_S";
			text = "Golf, Gray Wolf here. Over.";
			textRaw = "Golf Gray Wolf here. Over.";
			type = "HQ";
			variants = 1;
			vehicle = "EM_handshake_q2g_HQ_3_F";
			volumeStrong = "1.5 * (0.5 * 	CustomSoundController1)";
			volumeWeak = "0";
		};
		class EM_handshake_q2g_HQ_4
		{
			folder = "Human";
			loop = 0;
			soundStrong = "EM_handshake_q2g_HQ_4_S";
			soundWeak = "EM_handshake_q2g_HQ_4_S";
			text = "Golf. This is Gray Wolf here. Over.";
			textRaw = "Golf. This is Gray Wolf here. Over.";
			type = "HQ";
			variants = 1;
			vehicle = "EM_handshake_q2g_HQ_4_F";
			volumeStrong = "1.5 * (0.5 * 	CustomSoundController1)";
			volumeWeak = "0";
		};
		class EM_handshake_q2h
		{
			displayName = """HQ to Black Fox""";
			isVariants = 1;
			links[] = {"", "EM_handshake_q2h_HQ_0", "EM_handshake_q2h_HQ_1", "EM_handshake_q2h_HQ_2", "EM_handshake_q2h_HQ_3", "EM_handshake_q2h_HQ_4"};
			selection = "Base";
			selectionAntenna = "Antenna_01";
			selectionPriority = 1;
			texture = "\a3\UI_F_Contact\Data\CfgContact\EM\Signals\EM_HANDSHAKE_Q2H_HQ_0_ca.paa";
		};
		class EM_handshake_q2h_HQ_0
		{
			folder = "Human";
			loop = 0;
			soundStrong = "EM_handshake_q2h_HQ_0_S";
			soundWeak = "EM_handshake_q2h_HQ_0_S";
			text = "Black Fox. Gray Wolf. Over.";
			textRaw = "Black Fox. Gray Wolf. Over.";
			type = "HQ";
			variants = 1;
			vehicle = "EM_handshake_q2h_HQ_0_F";
			volumeStrong = "1.5 * (0.5 * 	CustomSoundController1)";
			volumeWeak = "0";
		};
		class EM_handshake_q2h_HQ_1
		{
			folder = "Human";
			loop = 0;
			soundStrong = "EM_handshake_q2h_HQ_1_S";
			soundWeak = "EM_handshake_q2h_HQ_1_S";
			text = "Black Fox. It's Gray Wolf. Over.";
			textRaw = "Black Fox. It's Gray Wolf. Over.";
			type = "HQ";
			variants = 1;
			vehicle = "EM_handshake_q2h_HQ_1_F";
			volumeStrong = "1.5 * (0.5 * 	CustomSoundController1)";
			volumeWeak = "0";
		};
		class EM_handshake_q2h_HQ_2
		{
			folder = "Human";
			loop = 0;
			soundStrong = "EM_handshake_q2h_HQ_2_S";
			soundWeak = "EM_handshake_q2h_HQ_2_S";
			text = "Black Fox. This is Gray Wolf, over.";
			textRaw = "Black Fox. This is Gray Wolf over.";
			type = "HQ";
			variants = 1;
			vehicle = "EM_handshake_q2h_HQ_2_F";
			volumeStrong = "1.5 * (0.5 * 	CustomSoundController1)";
			volumeWeak = "0";
		};
		class EM_handshake_q2h_HQ_3
		{
			folder = "Human";
			loop = 0;
			soundStrong = "EM_handshake_q2h_HQ_3_S";
			soundWeak = "EM_handshake_q2h_HQ_3_S";
			text = "Black Fox, Gray Wolf here. Over.";
			textRaw = "Black Fox Gray Wolf here. Over.";
			type = "HQ";
			variants = 1;
			vehicle = "EM_handshake_q2h_HQ_3_F";
			volumeStrong = "1.5 * (0.5 * 	CustomSoundController1)";
			volumeWeak = "0";
		};
		class EM_handshake_q2h_HQ_4
		{
			folder = "Human";
			loop = 0;
			soundStrong = "EM_handshake_q2h_HQ_4_S";
			soundWeak = "EM_handshake_q2h_HQ_4_S";
			text = "Black Fox. This is Gray Wolf here. Over.";
			textRaw = "Black Fox. This is Gray Wolf here. Over.";
			type = "HQ";
			variants = 1;
			vehicle = "EM_handshake_q2h_HQ_4_F";
			volumeStrong = "1.5 * (0.5 * 	CustomSoundController1)";
			volumeWeak = "0";
		};
		class EM_hq_confirm_help
		{
			isVariants = 1;
			links[] = {"", "EM_hq_confirm_help_HQ_0", "EM_hq_confirm_help_HQ_1", "EM_hq_confirm_help_HQ_2"};
		};
		class EM_hq_confirm_help_HQ_0
		{
			folder = "Human";
			loop = 0;
			soundStrong = "EM_hq_confirm_help_HQ_0_S";
			soundWeak = "EM_hq_confirm_help_HQ_0_S";
			text = "Copy, we'll get a team to your location. Out.";
			textRaw = "Copy we'll get a team to your location. Out.";
			type = "HQ";
			variants = 1;
			vehicle = "EM_hq_confirm_help_HQ_0_F";
			volumeStrong = "1.5 * (0.5 * 	CustomSoundController1)";
			volumeWeak = "0";
		};
		class EM_hq_confirm_help_HQ_1
		{
			folder = "Human";
			loop = 0;
			soundStrong = "EM_hq_confirm_help_HQ_1_S";
			soundWeak = "EM_hq_confirm_help_HQ_1_S";
			text = "Copy, stay put - friendly forces are on the way. Out.";
			textRaw = "Copy stay put - friendly forces are on the way. Out.";
			type = "HQ";
			variants = 1;
			vehicle = "EM_hq_confirm_help_HQ_1_F";
			volumeStrong = "1.5 * (0.5 * 	CustomSoundController1)";
			volumeWeak = "0";
		};
		class EM_hq_confirm_help_HQ_2
		{
			folder = "Human";
			loop = 0;
			soundStrong = "EM_hq_confirm_help_HQ_2_S";
			soundWeak = "EM_hq_confirm_help_HQ_2_S";
			text = "Affirmative, hold your ground! We're sending help. Out.";
			textRaw = "Affirmative hold your ground! We're sending help. Out.";
			type = "HQ";
			variants = 1;
			vehicle = "EM_hq_confirm_help_HQ_2_F";
			volumeStrong = "1.5 * (0.5 * 	CustomSoundController1)";
			volumeWeak = "0";
		};
		class EM_hq_confused
		{
			isVariants = 1;
			links[] = {"", "EM_hq_confused_HQ_0", "EM_hq_confused_HQ_1", "EM_hq_confused_HQ_2"};
		};
		class EM_hq_confused_HQ_0
		{
			folder = "Human";
			loop = 0;
			soundStrong = "EM_hq_confused_HQ_0_S";
			soundWeak = "EM_hq_confused_HQ_0_S";
			text = "Er, okay... copy, we got your last. Minimize. Over.";
			textRaw = "Er okay... copy we got your last. Minimize. Over.";
			type = "HQ";
			variants = 1;
			vehicle = "EM_hq_confused_HQ_0_F";
			volumeStrong = "1.5 * (0.5 * 	CustomSoundController1)";
			volumeWeak = "0";
		};
		class EM_hq_confused_HQ_1
		{
			folder = "Human";
			loop = 0;
			soundStrong = "EM_hq_confused_HQ_1_S";
			soundWeak = "EM_hq_confused_HQ_1_S";
			text = "Message received. Twice. Check your comms, will you? Over.";
			textRaw = "Message received. Twice. Check your comms will you? Over.";
			type = "HQ";
			variants = 1;
			vehicle = "EM_hq_confused_HQ_1_F";
			volumeStrong = "1.5 * (0.5 * 	CustomSoundController1)";
			volumeWeak = "0";
		};
		class EM_hq_confused_HQ_2
		{
			folder = "Human";
			loop = 0;
			soundStrong = "EM_hq_confused_HQ_2_S";
			soundWeak = "EM_hq_confused_HQ_2_S";
			text = "Copy, we are receiving: you're repeating yourself, Sergeant. Over.";
			textRaw = "Copy we are receiving: you're repeating yourself Sergeant. Over.";
			type = "HQ";
			variants = 1;
			vehicle = "EM_hq_confused_HQ_2_F";
			volumeStrong = "1.5 * (0.5 * 	CustomSoundController1)";
			volumeWeak = "0";
		};
		class EM_hq_deny_help
		{
			isVariants = 1;
			links[] = {"", "EM_hq_deny_help_HQ_0", "EM_hq_deny_help_HQ_1", "EM_hq_deny_help_HQ_2"};
		};
		class EM_hq_deny_help_HQ_0
		{
			folder = "Human";
			loop = 0;
			soundStrong = "EM_hq_deny_help_HQ_0_S";
			soundWeak = "EM_hq_deny_help_HQ_0_S";
			text = "Negative! That's not an option. Take control of the situation! Out.";
			textRaw = "Negative! That's not an option. Take control of the situation! Out.";
			type = "HQ";
			variants = 1;
			vehicle = "EM_hq_deny_help_HQ_0_F";
			volumeStrong = "1.5 * (0.5 * 	CustomSoundController1)";
			volumeWeak = "0";
		};
		class EM_hq_deny_help_HQ_1
		{
			folder = "Human";
			loop = 0;
			soundStrong = "EM_hq_deny_help_HQ_1_S";
			soundWeak = "EM_hq_deny_help_HQ_1_S";
			text = "Negative! QRF's outbound. Hold that position! Out.";
			textRaw = "Negative! QRF's outbound. Hold that position! Out.";
			type = "HQ";
			variants = 1;
			vehicle = "EM_hq_deny_help_HQ_1_F";
			volumeStrong = "1.5 * (0.5 * 	CustomSoundController1)";
			volumeWeak = "0";
		};
		class EM_hq_deny_help_HQ_2
		{
			folder = "Human";
			loop = 0;
			soundStrong = "EM_hq_deny_help_HQ_2_S";
			soundWeak = "EM_hq_deny_help_HQ_2_S";
			text = "No, negative! There're no friendlies in your sector. Stand fast! Out.";
			textRaw = "No negative! There's no friendlies in your sector. Standfast! Out.";
			type = "HQ";
			variants = 1;
			vehicle = "EM_hq_deny_help_HQ_2_F";
			volumeStrong = "1.5 * (0.5 * 	CustomSoundController1)";
			volumeWeak = "0";
		};
		class EM_hq_dummy_reply
		{
			isVariants = 1;
			links[] = {"", "EM_hq_dummy_reply_HQ_0", "EM_hq_dummy_reply_HQ_1", "EM_hq_dummy_reply_HQ_2", "EM_hq_dummy_reply_HQ_3", "EM_hq_dummy_reply_HQ_4"};
		};
		class EM_hq_dummy_reply_HQ_0
		{
			folder = "Human";
			loop = 0;
			soundStrong = "EM_hq_dummy_reply_HQ_0_S";
			soundWeak = "EM_hq_dummy_reply_HQ_0_S";
			text = "Disregard our last - another squad's already on it. Out.";
			textRaw = "Disregard our last - another squad's already on it. Out.";
			type = "HQ";
			variants = 1;
			vehicle = "EM_hq_dummy_reply_HQ_0_F";
			volumeStrong = "1.5 * (0.5 * 	CustomSoundController1)";
			volumeWeak = "0";
		};
		class EM_hq_dummy_reply_HQ_1
		{
			folder = "Human";
			loop = 0;
			soundStrong = "EM_hq_dummy_reply_HQ_1_S";
			soundWeak = "EM_hq_dummy_reply_HQ_1_S";
			text = "Give it another thirty mikes then bring it in. Kilo needs relieving. Out.";
			textRaw = "Give it another thirty mikes then bring it in. Kilo needs relieving. Out.";
			type = "HQ";
			variants = 1;
			vehicle = "EM_hq_dummy_reply_HQ_1_F";
			volumeStrong = "1.5 * (0.5 * 	CustomSoundController1)";
			volumeWeak = "0";
		};
		class EM_hq_dummy_reply_HQ_2
		{
			folder = "Human";
			loop = 0;
			soundStrong = "EM_hq_dummy_reply_HQ_2_S";
			soundWeak = "EM_hq_dummy_reply_HQ_2_S";
			text = "Change of plan. Halt at your current objective rally point and wait for further orders. Out.";
			textRaw = "Change of plan. Halt at your current objective rally point and wait for further orders. Out.";
			type = "HQ";
			variants = 1;
			vehicle = "EM_hq_dummy_reply_HQ_2_F";
			volumeStrong = "1.5 * (0.5 * 	CustomSoundController1)";
			volumeWeak = "0";
		};
		class EM_hq_dummy_reply_HQ_3
		{
			folder = "Human";
			loop = 0;
			soundStrong = "EM_hq_dummy_reply_HQ_3_S";
			soundWeak = "EM_hq_dummy_reply_HQ_3_S";
			text = "Sierra's closing down. Relay to address group: November. Out.";
			textRaw = "Sierra's closing down. Relay to address group: November. Out.";
			type = "HQ";
			variants = 1;
			vehicle = "EM_hq_dummy_reply_HQ_3_F";
			volumeStrong = "1.5 * (0.5 * 	CustomSoundController1)";
			volumeWeak = "0";
		};
		class EM_hq_dummy_reply_HQ_4
		{
			folder = "Human";
			loop = 0;
			soundStrong = "EM_hq_dummy_reply_HQ_4_S";
			soundWeak = "EM_hq_dummy_reply_HQ_4_S";
			text = "Make sure you have your en route recorder check-in, we'll need that intel. Out.";
			textRaw = "Make sure you have your en route recorder check-in we'll need that intel. Out.";
			type = "HQ";
			variants = 1;
			vehicle = "EM_hq_dummy_reply_HQ_4_F";
			volumeStrong = "1.5 * (0.5 * 	CustomSoundController1)";
			volumeWeak = "0";
		};
		class EM_HQ_Enc_01
		{
			displayName = "class EM_HQ_Enc_01";
			folder = "Human";
			loop = 1;
			soundStrong = "EM_HQ_Enc_01_S";
			soundWeak = "EM_HQ_Enc_01_W";
			type = "Human";
			variants = 2;
			vehicle = "EM_HQ_Enc_01_F";
			volumeStrong = "1.5 * (0.1 * (	CustomSoundController1 factor [0,1]) * 	CustomSoundController1 max 0)";
			volumeWeak = "1.5 * (0* 0.35 * (	CustomSoundController1 factor [0.45,0.01]) * 	CustomSoundController1 max 0)";
		};
		class EM_hq_identify
		{
			isVariants = 1;
			links[] = {"", "EM_hq_identify_HQ_0", "EM_hq_identify_HQ_1", "EM_hq_identify_HQ_2"};
		};
		class EM_hq_identify_HQ_0
		{
			folder = "Human";
			loop = 0;
			soundStrong = "EM_hq_identify_HQ_0_S";
			soundWeak = "EM_hq_identify_HQ_0_S";
			text = "Hold - who is this? Verify. Over.";
			textRaw = "Hold - who is this? Verify. Over.";
			type = "HQ";
			variants = 1;
			vehicle = "EM_hq_identify_HQ_0_F";
			volumeStrong = "1.5 * (0.5 * 	CustomSoundController1)";
			volumeWeak = "0";
		};
		class EM_hq_identify_HQ_1
		{
			folder = "Human";
			loop = 0;
			soundStrong = "EM_hq_identify_HQ_1_S";
			soundWeak = "EM_hq_identify_HQ_1_S";
			text = "Hold, unknown station - wrong. Correction to your last. I correct: this is Gray Wolf. Over.";
			textRaw = "Hold unknown station - wrong. Correction to your last. I correct: this is Gray Wolf. Over.";
			type = "HQ";
			variants = 1;
			vehicle = "EM_hq_identify_HQ_1_F";
			volumeStrong = "1.5 * (0.5 * 	CustomSoundController1)";
			volumeWeak = "0";
		};
		class EM_hq_identify_HQ_2
		{
			folder = "Human";
			loop = 0;
			soundStrong = "EM_hq_identify_HQ_2_S";
			soundWeak = "EM_hq_identify_HQ_2_S";
			text = "This is Gray Wolf - unknown station, verify your callsign, over.";
			textRaw = "This is Gray Wolf - unknown station verify your callsign over.";
			type = "HQ";
			variants = 1;
			vehicle = "EM_hq_identify_HQ_2_F";
			volumeStrong = "1.5 * (0.5 * 	CustomSoundController1)";
			volumeWeak = "0";
		};
		class EM_hq_move_e
		{
			displayName = """Move East""";
			isVariants = 1;
			links[] = {"", "EM_hq_move_e_HQ_0", "EM_hq_move_e_HQ_1", "EM_hq_move_e_HQ_2", "EM_hq_move_e_HQ_3", "EM_hq_move_e_HQ_4"};
			selection = "Base";
			selectionAntenna = "Antenna_01";
			selectionPriority = 2;
			texture = "\a3\UI_F_Contact\Data\CfgContact\EM\Signals\EM_HQ_Move_E_HQ_0_ca.paa";
		};
		class EM_hq_move_e_HQ_0
		{
			folder = "Human";
			loop = 0;
			soundStrong = "EM_hq_move_e_HQ_0_S";
			soundWeak = "EM_hq_move_e_HQ_0_S";
			text = "Patrol the area east of your position. Over.";
			textRaw = "Patrol the area east of your position. Over.";
			type = "HQ";
			variants = 1;
			vehicle = "EM_hq_move_e_HQ_0_F";
			volumeStrong = "1.5 * (0.5 * 	CustomSoundController1)";
			volumeWeak = "0";
		};
		class EM_hq_move_e_HQ_1
		{
			folder = "Human";
			loop = 0;
			soundStrong = "EM_hq_move_e_HQ_1_S";
			soundWeak = "EM_hq_move_e_HQ_1_S";
			text = "Divert east and make sure your sector's clear. Over.";
			textRaw = "Divert east and make sure your sector's clear. Over.";
			type = "HQ";
			variants = 1;
			vehicle = "EM_hq_move_e_HQ_1_F";
			volumeStrong = "1.5 * (0.5 * 	CustomSoundController1)";
			volumeWeak = "0";
		};
		class EM_hq_move_e_HQ_2
		{
			folder = "Human";
			loop = 0;
			soundStrong = "EM_hq_move_e_HQ_2_S";
			soundWeak = "EM_hq_move_e_HQ_2_S";
			text = "Sweep east and look for any signs of enemy activity. Over.";
			textRaw = "Sweep east and look for any signs of enemy activity. Over.";
			type = "HQ";
			variants = 1;
			vehicle = "EM_hq_move_e_HQ_2_F";
			volumeStrong = "1.5 * (0.5 * 	CustomSoundController1)";
			volumeWeak = "0";
		};
		class EM_hq_move_e_HQ_3
		{
			folder = "Human";
			loop = 0;
			soundStrong = "EM_hq_move_e_HQ_3_S";
			soundWeak = "EM_hq_move_e_HQ_3_S";
			text = "Zone recon. Move east and check the area's secure. Over.";
			textRaw = "Zone recon. Move east and check the area's secure. Over.";
			type = "HQ";
			variants = 1;
			vehicle = "EM_hq_move_e_HQ_3_F";
			volumeStrong = "1.5 * (0.5 * 	CustomSoundController1)";
			volumeWeak = "0";
		};
		class EM_hq_move_e_HQ_4
		{
			folder = "Human";
			loop = 0;
			soundStrong = "EM_hq_move_e_HQ_4_S";
			soundWeak = "EM_hq_move_e_HQ_4_S";
			text = "Relocate east and designate route rally points. Over.";
			textRaw = "Relocate east and designate route rally points. Over.";
			type = "HQ";
			variants = 1;
			vehicle = "EM_hq_move_e_HQ_4_F";
			volumeStrong = "1.5 * (0.5 * 	CustomSoundController1)";
			volumeWeak = "0";
		};
		class EM_hq_move_n
		{
			displayName = """Move North""";
			isVariants = 1;
			links[] = {"", "EM_hq_move_n_HQ_0", "EM_hq_move_n_HQ_1", "EM_hq_move_n_HQ_2", "EM_hq_move_n_HQ_3", "EM_hq_move_n_HQ_4"};
			selection = "Base";
			selectionAntenna = "Antenna_01";
			selectionPriority = 2;
			texture = "\a3\UI_F_Contact\Data\CfgContact\EM\Signals\EM_HQ_Move_N_HQ_0_ca.paa";
		};
		class EM_hq_move_n_HQ_0
		{
			folder = "Human";
			loop = 0;
			soundStrong = "EM_hq_move_n_HQ_0_S";
			soundWeak = "EM_hq_move_n_HQ_0_S";
			text = "Patrol the area north of your position. Over.";
			textRaw = "Patrol the area north of your position. Over.";
			type = "HQ";
			variants = 1;
			vehicle = "EM_hq_move_n_HQ_0_F";
			volumeStrong = "1.5 * (0.5 * 	CustomSoundController1)";
			volumeWeak = "0";
		};
		class EM_hq_move_n_HQ_1
		{
			folder = "Human";
			loop = 0;
			soundStrong = "EM_hq_move_n_HQ_1_S";
			soundWeak = "EM_hq_move_n_HQ_1_S";
			text = "Divert north and make sure your sector's clear. Over.";
			textRaw = "Divert north and make sure your sector's clear. Over.";
			type = "HQ";
			variants = 1;
			vehicle = "EM_hq_move_n_HQ_1_F";
			volumeStrong = "1.5 * (0.5 * 	CustomSoundController1)";
			volumeWeak = "0";
		};
		class EM_hq_move_n_HQ_2
		{
			folder = "Human";
			loop = 0;
			soundStrong = "EM_hq_move_n_HQ_2_S";
			soundWeak = "EM_hq_move_n_HQ_2_S";
			text = "Sweep north and look for any signs of enemy activity. Over.";
			textRaw = "Sweep north and look for any signs of enemy activity. Over.";
			type = "HQ";
			variants = 1;
			vehicle = "EM_hq_move_n_HQ_2_F";
			volumeStrong = "1.5 * (0.5 * 	CustomSoundController1)";
			volumeWeak = "0";
		};
		class EM_hq_move_n_HQ_3
		{
			folder = "Human";
			loop = 0;
			soundStrong = "EM_hq_move_n_HQ_3_S";
			soundWeak = "EM_hq_move_n_HQ_3_S";
			text = "Zone recon. Move north and check the area's secure. Over.";
			textRaw = "Zone recon. Move north and check the area's secure. Over.";
			type = "HQ";
			variants = 1;
			vehicle = "EM_hq_move_n_HQ_3_F";
			volumeStrong = "1.5 * (0.5 * 	CustomSoundController1)";
			volumeWeak = "0";
		};
		class EM_hq_move_n_HQ_4
		{
			folder = "Human";
			loop = 0;
			soundStrong = "EM_hq_move_n_HQ_4_S";
			soundWeak = "EM_hq_move_n_HQ_4_S";
			text = "Relocate north and designate route rally points. Over.";
			textRaw = "Relocate north and designate route rally points. Over.";
			type = "HQ";
			variants = 1;
			vehicle = "EM_hq_move_n_HQ_4_F";
			volumeStrong = "1.5 * (0.5 * 	CustomSoundController1)";
			volumeWeak = "0";
		};
		class EM_hq_move_s
		{
			displayName = """Move South""";
			isVariants = 1;
			links[] = {"", "EM_hq_move_s_HQ_0", "EM_hq_move_s_HQ_1", "EM_hq_move_s_HQ_2", "EM_hq_move_s_HQ_3", "EM_hq_move_s_HQ_4"};
			selection = "Base";
			selectionAntenna = "Antenna_01";
			selectionPriority = 2;
			texture = "\a3\UI_F_Contact\Data\CfgContact\EM\Signals\EM_HQ_Move_S_HQ_0_ca.paa";
		};
		class EM_hq_move_s_HQ_0
		{
			folder = "Human";
			loop = 0;
			soundStrong = "EM_hq_move_s_HQ_0_S";
			soundWeak = "EM_hq_move_s_HQ_0_S";
			text = "Patrol the area south of your position. Over.";
			textRaw = "Patrol the area south of your position. Over.";
			type = "HQ";
			variants = 1;
			vehicle = "EM_hq_move_s_HQ_0_F";
			volumeStrong = "1.5 * (0.5 * 	CustomSoundController1)";
			volumeWeak = "0";
		};
		class EM_hq_move_s_HQ_1
		{
			folder = "Human";
			loop = 0;
			soundStrong = "EM_hq_move_s_HQ_1_S";
			soundWeak = "EM_hq_move_s_HQ_1_S";
			text = "Divert south and make sure your sector's clear. Over.";
			textRaw = "Divert south and make sure your sector's clear. Over.";
			type = "HQ";
			variants = 1;
			vehicle = "EM_hq_move_s_HQ_1_F";
			volumeStrong = "1.5 * (0.5 * 	CustomSoundController1)";
			volumeWeak = "0";
		};
		class EM_hq_move_s_HQ_2
		{
			folder = "Human";
			loop = 0;
			soundStrong = "EM_hq_move_s_HQ_2_S";
			soundWeak = "EM_hq_move_s_HQ_2_S";
			text = "Sweep south and look for any signs of enemy activity. Over.";
			textRaw = "Sweep south and look for any signs of enemy activity. Over.";
			type = "HQ";
			variants = 1;
			vehicle = "EM_hq_move_s_HQ_2_F";
			volumeStrong = "1.5 * (0.5 * 	CustomSoundController1)";
			volumeWeak = "0";
		};
		class EM_hq_move_s_HQ_3
		{
			folder = "Human";
			loop = 0;
			soundStrong = "EM_hq_move_s_HQ_3_S";
			soundWeak = "EM_hq_move_s_HQ_3_S";
			text = "Zone recon. Move south and check the area's secure. Over.";
			textRaw = "Zone recon. Move south and check the area's secure. Over.";
			type = "HQ";
			variants = 1;
			vehicle = "EM_hq_move_s_HQ_3_F";
			volumeStrong = "1.5 * (0.5 * 	CustomSoundController1)";
			volumeWeak = "0";
		};
		class EM_hq_move_s_HQ_4
		{
			folder = "Human";
			loop = 0;
			soundStrong = "EM_hq_move_s_HQ_4_S";
			soundWeak = "EM_hq_move_s_HQ_4_S";
			text = "Relocate south and designate route rally points. Over.";
			textRaw = "Relocate south and designate route rally points. Over.";
			type = "HQ";
			variants = 1;
			vehicle = "EM_hq_move_s_HQ_4_F";
			volumeStrong = "1.5 * (0.5 * 	CustomSoundController1)";
			volumeWeak = "0";
		};
		class EM_hq_move_w
		{
			displayName = """Move West""";
			isVariants = 1;
			links[] = {"", "EM_hq_move_w_HQ_0", "EM_hq_move_w_HQ_1", "EM_hq_move_w_HQ_2", "EM_hq_move_w_HQ_3", "EM_hq_move_w_HQ_4"};
			selection = "Base";
			selectionAntenna = "Antenna_01";
			selectionPriority = 2;
			texture = "\a3\UI_F_Contact\Data\CfgContact\EM\Signals\EM_HQ_Move_W_HQ_0_ca.paa";
		};
		class EM_hq_move_w_HQ_0
		{
			folder = "Human";
			loop = 0;
			soundStrong = "EM_hq_move_w_HQ_0_S";
			soundWeak = "EM_hq_move_w_HQ_0_S";
			text = "Patrol the area west of your position. Over.";
			textRaw = "Patrol the area west of your position. Over.";
			type = "HQ";
			variants = 1;
			vehicle = "EM_hq_move_w_HQ_0_F";
			volumeStrong = "1.5 * (0.5 * 	CustomSoundController1)";
			volumeWeak = "0";
		};
		class EM_hq_move_w_HQ_1
		{
			folder = "Human";
			loop = 0;
			soundStrong = "EM_hq_move_w_HQ_1_S";
			soundWeak = "EM_hq_move_w_HQ_1_S";
			text = "Divert west and make sure your sector's clear. Over.";
			textRaw = "Divert west and make sure your sector's clear. Over.";
			type = "HQ";
			variants = 1;
			vehicle = "EM_hq_move_w_HQ_1_F";
			volumeStrong = "1.5 * (0.5 * 	CustomSoundController1)";
			volumeWeak = "0";
		};
		class EM_hq_move_w_HQ_2
		{
			folder = "Human";
			loop = 0;
			soundStrong = "EM_hq_move_w_HQ_2_S";
			soundWeak = "EM_hq_move_w_HQ_2_S";
			text = "Sweep west and look for any signs of enemy activity. Over.";
			textRaw = "Sweep west and look for any signs of enemy activity. Over.";
			type = "HQ";
			variants = 1;
			vehicle = "EM_hq_move_w_HQ_2_F";
			volumeStrong = "1.5 * (0.5 * 	CustomSoundController1)";
			volumeWeak = "0";
		};
		class EM_hq_move_w_HQ_3
		{
			folder = "Human";
			loop = 0;
			soundStrong = "EM_hq_move_w_HQ_3_S";
			soundWeak = "EM_hq_move_w_HQ_3_S";
			text = "Zone recon. Move west and check the area's secure. Over.";
			textRaw = "Zone recon. Move west and check the area's secure. Over.";
			type = "HQ";
			variants = 1;
			vehicle = "EM_hq_move_w_HQ_3_F";
			volumeStrong = "1.5 * (0.5 * 	CustomSoundController1)";
			volumeWeak = "0";
		};
		class EM_hq_move_w_HQ_4
		{
			folder = "Human";
			loop = 0;
			soundStrong = "EM_hq_move_w_HQ_4_S";
			soundWeak = "EM_hq_move_w_HQ_4_S";
			text = "Relocate west and designate route rally points. Over.";
			textRaw = "Relocate west and designate route rally points. Over.";
			type = "HQ";
			variants = 1;
			vehicle = "EM_hq_move_w_HQ_4_F";
			volumeStrong = "1.5 * (0.5 * 	CustomSoundController1)";
			volumeWeak = "0";
		};
		class EM_hq_negative
		{
			isVariants = 1;
			links[] = {"", "EM_hq_negative_HQ_0", "EM_hq_negative_HQ_1", "EM_hq_negative_HQ_2"};
		};
		class EM_hq_negative_HQ_0
		{
			folder = "Human";
			loop = 0;
			soundStrong = "EM_hq_negative_HQ_0_S";
			soundWeak = "EM_hq_negative_HQ_0_S";
			text = "Negative. Out.";
			textRaw = "Negative. Out.";
			type = "HQ";
			variants = 1;
			vehicle = "EM_hq_negative_HQ_0_F";
			volumeStrong = "1.5 * (0.5 * 	CustomSoundController1)";
			volumeWeak = "0";
		};
		class EM_hq_negative_HQ_1
		{
			folder = "Human";
			loop = 0;
			soundStrong = "EM_hq_negative_HQ_1_S";
			soundWeak = "EM_hq_negative_HQ_1_S";
			text = "No - negative on that. Out.";
			textRaw = "No - negative on that. Out.";
			type = "HQ";
			variants = 1;
			vehicle = "EM_hq_negative_HQ_1_F";
			volumeStrong = "1.5 * (0.5 * 	CustomSoundController1)";
			volumeWeak = "0";
		};
		class EM_hq_negative_HQ_2
		{
			folder = "Human";
			loop = 0;
			soundStrong = "EM_hq_negative_HQ_2_S";
			soundWeak = "EM_hq_negative_HQ_2_S";
			text = "No, that's a negative. Out.";
			textRaw = "No that's a negative. Out.";
			type = "HQ";
			variants = 1;
			vehicle = "EM_hq_negative_HQ_2_F";
			volumeStrong = "1.5 * (0.5 * 	CustomSoundController1)";
			volumeWeak = "0";
		};
		class EM_hq_no_help
		{
			isVariants = 1;
			links[] = {"", "EM_hq_no_help_HQ_0", "EM_hq_no_help_HQ_1", "EM_hq_no_help_HQ_2"};
		};
		class EM_hq_no_help_HQ_0
		{
			folder = "Human";
			loop = 0;
			soundStrong = "EM_hq_no_help_HQ_0_S";
			soundWeak = "EM_hq_no_help_HQ_0_S";
			text = "If you can hear this message, stand fast - we cannot send support. Out.";
			textRaw = "If you can hear this message standfast - we cannot send support. Out.";
			type = "HQ";
			variants = 1;
			vehicle = "EM_hq_no_help_HQ_0_F";
			volumeStrong = "1.5 * (0.5 * 	CustomSoundController1)";
			volumeWeak = "0";
		};
		class EM_hq_no_help_HQ_1
		{
			folder = "Human";
			loop = 0;
			soundStrong = "EM_hq_no_help_HQ_1_S";
			soundWeak = "EM_hq_no_help_HQ_1_S";
			text = "If you're receiving, be advised, we can't send a QRF right now. Out.";
			textRaw = "If you're receiving be advised we can't send a QRF right now. Out.";
			type = "HQ";
			variants = 1;
			vehicle = "EM_hq_no_help_HQ_1_F";
			volumeStrong = "1.5 * (0.5 * 	CustomSoundController1)";
			volumeWeak = "0";
		};
		class EM_hq_no_help_HQ_2
		{
			folder = "Human";
			loop = 0;
			soundStrong = "EM_hq_no_help_HQ_2_S";
			soundWeak = "EM_hq_no_help_HQ_2_S";
			text = "If you're getting this transmission, know we are unable to send friendlies to your location... hang in there! Out.";
			textRaw = "If you're getting this transmission know we are unable to send friendlies to your location... hang in there! Out.";
			type = "HQ";
			variants = 1;
			vehicle = "EM_hq_no_help_HQ_2_F";
			volumeStrong = "1.5 * (0.5 * 	CustomSoundController1)";
			volumeWeak = "0";
		};
		class EM_hq_no_move
		{
			isVariants = 1;
			links[] = {"", "EM_hq_no_move_HQ_0", "EM_hq_no_move_HQ_1", "EM_hq_no_move_HQ_2"};
		};
		class EM_hq_no_move_HQ_0
		{
			folder = "Human";
			loop = 0;
			soundStrong = "EM_hq_no_move_HQ_0_S";
			soundWeak = "EM_hq_no_move_HQ_0_S";
			text = "Acknowledged. Do not move from your location. Out.";
			textRaw = "Acknowledged. Do not move from your location. Out.";
			type = "HQ";
			variants = 1;
			vehicle = "EM_hq_no_move_HQ_0_F";
			volumeStrong = "1.5 * (0.5 * 	CustomSoundController1)";
			volumeWeak = "0";
		};
		class EM_hq_no_move_HQ_1
		{
			folder = "Human";
			loop = 0;
			soundStrong = "EM_hq_no_move_HQ_1_S";
			soundWeak = "EM_hq_no_move_HQ_1_S";
			text = "Copy, understood. Hold your current position. Out.";
			textRaw = "Copy understood. Hold your current position. Out.";
			type = "HQ";
			variants = 1;
			vehicle = "EM_hq_no_move_HQ_1_F";
			volumeStrong = "1.5 * (0.5 * 	CustomSoundController1)";
			volumeWeak = "0";
		};
		class EM_hq_no_move_HQ_2
		{
			folder = "Human";
			loop = 0;
			soundStrong = "EM_hq_no_move_HQ_2_S";
			soundWeak = "EM_hq_no_move_HQ_2_S";
			text = "Copy that. Stay put. Remain at your position. Out.";
			textRaw = "Copy that. Stay put. Remain at your position. Out.";
			type = "HQ";
			variants = 1;
			vehicle = "EM_hq_no_move_HQ_2_F";
			volumeStrong = "1.5 * (0.5 * 	CustomSoundController1)";
			volumeWeak = "0";
		};
		class EM_hq_no_response_a
		{
			isVariants = 1;
			links[] = {"", "EM_hq_no_response_a_HQ_0", "EM_hq_no_response_a_HQ_1", "EM_hq_no_response_a_HQ_2"};
		};
		class EM_hq_no_response_a_HQ_0
		{
			folder = "Human";
			loop = 0;
			soundStrong = "EM_hq_no_response_a_HQ_0_S";
			soundWeak = "EM_hq_no_response_a_HQ_0_S";
			text = "Alpha, respond! Over.";
			textRaw = "Alpha respond! Over.";
			type = "HQ";
			variants = 1;
			vehicle = "EM_hq_no_response_a_HQ_0_F";
			volumeStrong = "1.5 * (0.5 * 	CustomSoundController1)";
			volumeWeak = "0";
		};
		class EM_hq_no_response_a_HQ_1
		{
			folder = "Human";
			loop = 0;
			soundStrong = "EM_hq_no_response_a_HQ_1_S";
			soundWeak = "EM_hq_no_response_a_HQ_1_S";
			text = "Alpha, nothing heard! Over.";
			textRaw = "Alpha nothing heard! Over.";
			type = "HQ";
			variants = 1;
			vehicle = "EM_hq_no_response_a_HQ_1_F";
			volumeStrong = "1.5 * (0.5 * 	CustomSoundController1)";
			volumeWeak = "0";
		};
		class EM_hq_no_response_a_HQ_2
		{
			folder = "Human";
			loop = 0;
			soundStrong = "EM_hq_no_response_a_HQ_2_S";
			soundWeak = "EM_hq_no_response_a_HQ_2_S";
			text = "Alpha squad - report! Over.";
			textRaw = "Alpha squad - report! Over.";
			type = "HQ";
			variants = 1;
			vehicle = "EM_hq_no_response_a_HQ_2_F";
			volumeStrong = "1.5 * (0.5 * 	CustomSoundController1)";
			volumeWeak = "0";
		};
		class EM_hq_no_response_b
		{
			isVariants = 1;
			links[] = {"", "EM_hq_no_response_b_HQ_0", "EM_hq_no_response_b_HQ_1", "EM_hq_no_response_b_HQ_2"};
		};
		class EM_hq_no_response_b_HQ_0
		{
			folder = "Human";
			loop = 0;
			soundStrong = "EM_hq_no_response_b_HQ_0_S";
			soundWeak = "EM_hq_no_response_b_HQ_0_S";
			text = "Bravo, respond! Over.";
			textRaw = "Bravo respond! Over.";
			type = "HQ";
			variants = 1;
			vehicle = "EM_hq_no_response_b_HQ_0_F";
			volumeStrong = "1.5 * (0.5 * 	CustomSoundController1)";
			volumeWeak = "0";
		};
		class EM_hq_no_response_b_HQ_1
		{
			folder = "Human";
			loop = 0;
			soundStrong = "EM_hq_no_response_b_HQ_1_S";
			soundWeak = "EM_hq_no_response_b_HQ_1_S";
			text = "Bravo, nothing heard! Over.";
			textRaw = "Bravo nothing heard! Over.";
			type = "HQ";
			variants = 1;
			vehicle = "EM_hq_no_response_b_HQ_1_F";
			volumeStrong = "1.5 * (0.5 * 	CustomSoundController1)";
			volumeWeak = "0";
		};
		class EM_hq_no_response_b_HQ_2
		{
			folder = "Human";
			loop = 0;
			soundStrong = "EM_hq_no_response_b_HQ_2_S";
			soundWeak = "EM_hq_no_response_b_HQ_2_S";
			text = "Bravo squad - report! Over.";
			textRaw = "Bravo squad - report! Over.";
			type = "HQ";
			variants = 1;
			vehicle = "EM_hq_no_response_b_HQ_2_F";
			volumeStrong = "1.5 * (0.5 * 	CustomSoundController1)";
			volumeWeak = "0";
		};
		class EM_hq_no_response_c
		{
			isVariants = 1;
			links[] = {"", "EM_hq_no_response_c_HQ_0", "EM_hq_no_response_c_HQ_1", "EM_hq_no_response_c_HQ_2"};
		};
		class EM_hq_no_response_c_HQ_0
		{
			folder = "Human";
			loop = 0;
			soundStrong = "EM_hq_no_response_c_HQ_0_S";
			soundWeak = "EM_hq_no_response_c_HQ_0_S";
			text = "Charlie, respond! Over.";
			textRaw = "Charlie respond! Over.";
			type = "HQ";
			variants = 1;
			vehicle = "EM_hq_no_response_c_HQ_0_F";
			volumeStrong = "1.5 * (0.5 * 	CustomSoundController1)";
			volumeWeak = "0";
		};
		class EM_hq_no_response_c_HQ_1
		{
			folder = "Human";
			loop = 0;
			soundStrong = "EM_hq_no_response_c_HQ_1_S";
			soundWeak = "EM_hq_no_response_c_HQ_1_S";
			text = "Charlie, nothing heard! Over.";
			textRaw = "Charlie nothing heard! Over.";
			type = "HQ";
			variants = 1;
			vehicle = "EM_hq_no_response_c_HQ_1_F";
			volumeStrong = "1.5 * (0.5 * 	CustomSoundController1)";
			volumeWeak = "0";
		};
		class EM_hq_no_response_c_HQ_2
		{
			folder = "Human";
			loop = 0;
			soundStrong = "EM_hq_no_response_c_HQ_2_S";
			soundWeak = "EM_hq_no_response_c_HQ_2_S";
			text = "Charlie - give us a report! Over.";
			textRaw = "Charlie - give us a report! Over.";
			type = "HQ";
			variants = 1;
			vehicle = "EM_hq_no_response_c_HQ_2_F";
			volumeStrong = "1.5 * (0.5 * 	CustomSoundController1)";
			volumeWeak = "0";
		};
		class EM_hq_no_response_d
		{
			isVariants = 1;
			links[] = {"", "EM_hq_no_response_d_HQ_0", "EM_hq_no_response_d_HQ_1", "EM_hq_no_response_d_HQ_2"};
		};
		class EM_hq_no_response_d_HQ_0
		{
			folder = "Human";
			loop = 0;
			soundStrong = "EM_hq_no_response_d_HQ_0_S";
			soundWeak = "EM_hq_no_response_d_HQ_0_S";
			text = "Delta, respond! Over.";
			textRaw = "Delta respond! Over.";
			type = "HQ";
			variants = 1;
			vehicle = "EM_hq_no_response_d_HQ_0_F";
			volumeStrong = "1.5 * (0.5 * 	CustomSoundController1)";
			volumeWeak = "0";
		};
		class EM_hq_no_response_d_HQ_1
		{
			folder = "Human";
			loop = 0;
			soundStrong = "EM_hq_no_response_d_HQ_1_S";
			soundWeak = "EM_hq_no_response_d_HQ_1_S";
			text = "Delta, nothing heard! Over.";
			textRaw = "Delta nothing heard! Over.";
			type = "HQ";
			variants = 1;
			vehicle = "EM_hq_no_response_d_HQ_1_F";
			volumeStrong = "1.5 * (0.5 * 	CustomSoundController1)";
			volumeWeak = "0";
		};
		class EM_hq_no_response_d_HQ_2
		{
			folder = "Human";
			loop = 0;
			soundStrong = "EM_hq_no_response_d_HQ_2_S";
			soundWeak = "EM_hq_no_response_d_HQ_2_S";
			text = "Delta squad - report! Over.";
			textRaw = "Delta squad - report! Over.";
			type = "HQ";
			variants = 1;
			vehicle = "EM_hq_no_response_d_HQ_2_F";
			volumeStrong = "1.5 * (0.5 * 	CustomSoundController1)";
			volumeWeak = "0";
		};
		class EM_hq_no_response_e
		{
			isVariants = 1;
			links[] = {"", "EM_hq_no_response_e_HQ_0", "EM_hq_no_response_e_HQ_1", "EM_hq_no_response_e_HQ_2"};
		};
		class EM_hq_no_response_e_HQ_0
		{
			folder = "Human";
			loop = 0;
			soundStrong = "EM_hq_no_response_e_HQ_0_S";
			soundWeak = "EM_hq_no_response_e_HQ_0_S";
			text = "Echo, respond! Over.";
			textRaw = "Echo respond! Over.";
			type = "HQ";
			variants = 1;
			vehicle = "EM_hq_no_response_e_HQ_0_F";
			volumeStrong = "1.5 * (0.5 * 	CustomSoundController1)";
			volumeWeak = "0";
		};
		class EM_hq_no_response_e_HQ_1
		{
			folder = "Human";
			loop = 0;
			soundStrong = "EM_hq_no_response_e_HQ_1_S";
			soundWeak = "EM_hq_no_response_e_HQ_1_S";
			text = "Echo, nothing heard! Over.";
			textRaw = "Echo nothing heard! Over.";
			type = "HQ";
			variants = 1;
			vehicle = "EM_hq_no_response_e_HQ_1_F";
			volumeStrong = "1.5 * (0.5 * 	CustomSoundController1)";
			volumeWeak = "0";
		};
		class EM_hq_no_response_e_HQ_2
		{
			folder = "Human";
			loop = 0;
			soundStrong = "EM_hq_no_response_e_HQ_2_S";
			soundWeak = "EM_hq_no_response_e_HQ_2_S";
			text = "Echo squad - report! Over.";
			textRaw = "Echo squad - report! Over.";
			type = "HQ";
			variants = 1;
			vehicle = "EM_hq_no_response_e_HQ_2_F";
			volumeStrong = "1.5 * (0.5 * 	CustomSoundController1)";
			volumeWeak = "0";
		};
		class EM_hq_no_response_f
		{
			isVariants = 1;
			links[] = {"", "EM_hq_no_response_f_HQ_0", "EM_hq_no_response_f_HQ_1", "EM_hq_no_response_f_HQ_2"};
		};
		class EM_hq_no_response_f_HQ_0
		{
			folder = "Human";
			loop = 0;
			soundStrong = "EM_hq_no_response_f_HQ_0_S";
			soundWeak = "EM_hq_no_response_f_HQ_0_S";
			text = "Foxtrot, respond! Over.";
			textRaw = "Foxtrot respond! Over.";
			type = "HQ";
			variants = 1;
			vehicle = "EM_hq_no_response_f_HQ_0_F";
			volumeStrong = "1.5 * (0.5 * 	CustomSoundController1)";
			volumeWeak = "0";
		};
		class EM_hq_no_response_f_HQ_1
		{
			folder = "Human";
			loop = 0;
			soundStrong = "EM_hq_no_response_f_HQ_1_S";
			soundWeak = "EM_hq_no_response_f_HQ_1_S";
			text = "Foxtrot, nothing heard! Over.";
			textRaw = "Foxtrot nothing heard! Over.";
			type = "HQ";
			variants = 1;
			vehicle = "EM_hq_no_response_f_HQ_1_F";
			volumeStrong = "1.5 * (0.5 * 	CustomSoundController1)";
			volumeWeak = "0";
		};
		class EM_hq_no_response_f_HQ_2
		{
			folder = "Human";
			loop = 0;
			soundStrong = "EM_hq_no_response_f_HQ_2_S";
			soundWeak = "EM_hq_no_response_f_HQ_2_S";
			text = "Foxtrot - give us a report! Over.";
			textRaw = "Foxtrot - give us a report! Over.";
			type = "HQ";
			variants = 1;
			vehicle = "EM_hq_no_response_f_HQ_2_F";
			volumeStrong = "1.5 * (0.5 * 	CustomSoundController1)";
			volumeWeak = "0";
		};
		class EM_hq_no_response_g
		{
			isVariants = 1;
			links[] = {"", "EM_hq_no_response_g_HQ_0", "EM_hq_no_response_g_HQ_1", "EM_hq_no_response_g_HQ_2"};
		};
		class EM_hq_no_response_g_HQ_0
		{
			folder = "Human";
			loop = 0;
			soundStrong = "EM_hq_no_response_g_HQ_0_S";
			soundWeak = "EM_hq_no_response_g_HQ_0_S";
			text = "Golf, respond! Over.";
			textRaw = "Golf respond! Over.";
			type = "HQ";
			variants = 1;
			vehicle = "EM_hq_no_response_g_HQ_0_F";
			volumeStrong = "1.5 * (0.5 * 	CustomSoundController1)";
			volumeWeak = "0";
		};
		class EM_hq_no_response_g_HQ_1
		{
			folder = "Human";
			loop = 0;
			soundStrong = "EM_hq_no_response_g_HQ_1_S";
			soundWeak = "EM_hq_no_response_g_HQ_1_S";
			text = "Golf, nothing heard! Over.";
			textRaw = "Golf nothing heard! Over.";
			type = "HQ";
			variants = 1;
			vehicle = "EM_hq_no_response_g_HQ_1_F";
			volumeStrong = "1.5 * (0.5 * 	CustomSoundController1)";
			volumeWeak = "0";
		};
		class EM_hq_no_response_g_HQ_2
		{
			folder = "Human";
			loop = 0;
			soundStrong = "EM_hq_no_response_g_HQ_2_S";
			soundWeak = "EM_hq_no_response_g_HQ_2_S";
			text = "Golf squad - report! Over.";
			textRaw = "Golf squad - report! Over.";
			type = "HQ";
			variants = 1;
			vehicle = "EM_hq_no_response_g_HQ_2_F";
			volumeStrong = "1.5 * (0.5 * 	CustomSoundController1)";
			volumeWeak = "0";
		};
		class EM_hq_no_response_h
		{
			isVariants = 1;
			links[] = {"", "EM_hq_no_response_h_HQ_0", "EM_hq_no_response_h_HQ_1", "EM_hq_no_response_h_HQ_2"};
		};
		class EM_hq_no_response_h_HQ_0
		{
			folder = "Human";
			loop = 0;
			soundStrong = "EM_hq_no_response_h_HQ_0_S";
			soundWeak = "EM_hq_no_response_h_HQ_0_S";
			text = "Black Fox, respond! Over.";
			textRaw = "Black Fox respond! Over.";
			type = "HQ";
			variants = 1;
			vehicle = "EM_hq_no_response_h_HQ_0_F";
			volumeStrong = "1.5 * (0.5 * 	CustomSoundController1)";
			volumeWeak = "0";
		};
		class EM_hq_no_response_h_HQ_1
		{
			folder = "Human";
			loop = 0;
			soundStrong = "EM_hq_no_response_h_HQ_1_S";
			soundWeak = "EM_hq_no_response_h_HQ_1_S";
			text = "Black Fox, nothing heard! Over.";
			textRaw = "Black Fox nothing heard! Over.";
			type = "HQ";
			variants = 1;
			vehicle = "EM_hq_no_response_h_HQ_1_F";
			volumeStrong = "1.5 * (0.5 * 	CustomSoundController1)";
			volumeWeak = "0";
		};
		class EM_hq_no_response_h_HQ_2
		{
			folder = "Human";
			loop = 0;
			soundStrong = "EM_hq_no_response_h_HQ_2_S";
			soundWeak = "EM_hq_no_response_h_HQ_2_S";
			text = "Black Fox - give us a report! Over.";
			textRaw = "Black Fox - give us a report! Over.";
			type = "HQ";
			variants = 1;
			vehicle = "EM_hq_no_response_h_HQ_2_F";
			volumeStrong = "1.5 * (0.5 * 	CustomSoundController1)";
			volumeWeak = "0";
		};
		class EM_hq_positive
		{
			isVariants = 1;
			links[] = {"", "EM_hq_positive_HQ_0", "EM_hq_positive_HQ_1", "EM_hq_positive_HQ_2"};
		};
		class EM_hq_positive_HQ_0
		{
			folder = "Human";
			loop = 0;
			soundStrong = "EM_hq_positive_HQ_0_S";
			soundWeak = "EM_hq_positive_HQ_0_S";
			text = "Acknowledged. Out.";
			textRaw = "Acknowledged. Out.";
			type = "HQ";
			variants = 1;
			vehicle = "EM_hq_positive_HQ_0_F";
			volumeStrong = "1.5 * (0.5 * 	CustomSoundController1)";
			volumeWeak = "0";
		};
		class EM_hq_positive_HQ_1
		{
			folder = "Human";
			loop = 0;
			soundStrong = "EM_hq_positive_HQ_1_S";
			soundWeak = "EM_hq_positive_HQ_1_S";
			text = "Affirmative. Out.";
			textRaw = "Affirmative. Out.";
			type = "HQ";
			variants = 1;
			vehicle = "EM_hq_positive_HQ_1_F";
			volumeStrong = "1.5 * (0.5 * 	CustomSoundController1)";
			volumeWeak = "0";
		};
		class EM_hq_positive_HQ_2
		{
			folder = "Human";
			loop = 0;
			soundStrong = "EM_hq_positive_HQ_2_S";
			soundWeak = "EM_hq_positive_HQ_2_S";
			text = "Alright, good copy. Out.";
			textRaw = "Alright good copy. Out.";
			type = "HQ";
			variants = 1;
			vehicle = "EM_hq_positive_HQ_2_F";
			volumeStrong = "1.5 * (0.5 * 	CustomSoundController1)";
			volumeWeak = "0";
		};
		class EM_hq_posrep
		{
			displayName = """Report Position""";
			isVariants = 1;
			links[] = {"", "EM_hq_posrep_HQ_0", "EM_hq_posrep_HQ_1", "EM_hq_posrep_HQ_2"};
			selection = "Base";
			selectionAntenna = "Antenna_01";
			selectionPriority = 3;
			texture = "\a3\UI_F_Contact\Data\CfgContact\EM\Signals\EM_HQ_Posrep_HQ_0_ca.paa";
		};
		class EM_hq_posrep_HQ_0
		{
			folder = "Human";
			loop = 0;
			soundStrong = "EM_hq_posrep_HQ_0_S";
			soundWeak = "EM_hq_posrep_HQ_0_S";
			text = "POSREP. Over.";
			textRaw = "POSREP. Over.";
			type = "HQ";
			variants = 1;
			vehicle = "EM_hq_posrep_HQ_0_F";
			volumeStrong = "1.5 * (0.5 * 	CustomSoundController1)";
			volumeWeak = "0";
		};
		class EM_hq_posrep_HQ_1
		{
			folder = "Human";
			loop = 0;
			soundStrong = "EM_hq_posrep_HQ_1_S";
			soundWeak = "EM_hq_posrep_HQ_1_S";
			text = "Position report. Over.";
			textRaw = "Position report. Over.";
			type = "HQ";
			variants = 1;
			vehicle = "EM_hq_posrep_HQ_1_F";
			volumeStrong = "1.5 * (0.5 * 	CustomSoundController1)";
			volumeWeak = "0";
		};
		class EM_hq_posrep_HQ_2
		{
			folder = "Human";
			loop = 0;
			soundStrong = "EM_hq_posrep_HQ_2_S";
			soundWeak = "EM_hq_posrep_HQ_2_S";
			text = "Transmit your current coordinates. Over.";
			textRaw = "Transmit your current coordinates. Over.";
			type = "HQ";
			variants = 1;
			vehicle = "EM_hq_posrep_HQ_2_F";
			volumeStrong = "1.5 * (0.5 * 	CustomSoundController1)";
			volumeWeak = "0";
		};
		class EM_HQ_Russian_Enc_01
		{
			displayName = "class EM_HQ_Russian_Enc_01";
			folder = "Human";
			loop = 1;
			soundStrong = "EM_HQ_Russian_Enc_01_S";
			soundWeak = "EM_HQ_Russian_Enc_01_W";
			type = "Human";
			variants = 2;
			vehicle = "EM_HQ_Russian_Enc_01_F";
			volumeStrong = "1.5 * (0.1 * (	CustomSoundController1 factor [0,1]) * 	CustomSoundController1 max 0)";
			volumeWeak = "1.5 * (0* 0.35 * (	CustomSoundController1 factor [0.45,0.01]) * 	CustomSoundController1 max 0)";
		};
		class EM_hq_safe
		{
			isVariants = 1;
			links[] = {"", "EM_hq_safe_HQ_0", "EM_hq_safe_HQ_1", "EM_hq_safe_HQ_2"};
		};
		class EM_hq_safe_HQ_0
		{
			folder = "Human";
			loop = 0;
			soundStrong = "EM_hq_safe_HQ_0_S";
			soundWeak = "EM_hq_safe_HQ_0_S";
			text = "Situation Normal. Enemy neutralized. Stand down and wait for tasking, over.";
			textRaw = "Situation Normal. Enemy neutralized. Stand down and wait for tasking over.";
			type = "HQ";
			variants = 1;
			vehicle = "EM_hq_safe_HQ_0_F";
			volumeStrong = "1.5 * (0.5 * 	CustomSoundController1)";
			volumeWeak = "0";
		};
		class EM_hq_safe_HQ_1
		{
			folder = "Human";
			loop = 0;
			soundStrong = "EM_hq_safe_HQ_1_S";
			soundWeak = "EM_hq_safe_HQ_1_S";
			text = "The situation's contained. Stand down and wait for further orders. Over.";
			textRaw = "The situation's contained. Stand down and wait for further orders. Over.";
			type = "HQ";
			variants = 1;
			vehicle = "EM_hq_safe_HQ_1_F";
			volumeStrong = "1.5 * (0.5 * 	CustomSoundController1)";
			volumeWeak = "0";
		};
		class EM_hq_safe_HQ_2
		{
			folder = "Human";
			loop = 0;
			soundStrong = "EM_hq_safe_HQ_2_S";
			soundWeak = "EM_hq_safe_HQ_2_S";
			text = "Everything's under control. Threat eliminated. Stand down. Over.";
			textRaw = "Everything's under control. Threat eliminated. Stand down. Over.";
			type = "HQ";
			variants = 1;
			vehicle = "EM_hq_safe_HQ_2_F";
			volumeStrong = "1.5 * (0.5 * 	CustomSoundController1)";
			volumeWeak = "0";
		};
		class EM_hq_say_again
		{
			isVariants = 1;
			links[] = {"", "EM_hq_say_again_HQ_0", "EM_hq_say_again_HQ_1", "EM_hq_say_again_HQ_2"};
		};
		class EM_hq_say_again_HQ_0
		{
			folder = "Human";
			loop = 0;
			soundStrong = "EM_hq_say_again_HQ_0_S";
			soundWeak = "EM_hq_say_again_HQ_0_S";
			text = "Say again, over.";
			textRaw = "Say again over.";
			type = "HQ";
			variants = 1;
			vehicle = "EM_hq_say_again_HQ_0_F";
			volumeStrong = "1.5 * (0.5 * 	CustomSoundController1)";
			volumeWeak = "0";
		};
		class EM_hq_say_again_HQ_1
		{
			folder = "Human";
			loop = 0;
			soundStrong = "EM_hq_say_again_HQ_1_S";
			soundWeak = "EM_hq_say_again_HQ_1_S";
			text = "You're breaking up - words twice. Over.";
			textRaw = "You're breaking up - words twice. Over.";
			type = "HQ";
			variants = 1;
			vehicle = "EM_hq_say_again_HQ_1_F";
			volumeStrong = "1.5 * (0.5 * 	CustomSoundController1)";
			volumeWeak = "0";
		};
		class EM_hq_say_again_HQ_2
		{
			folder = "Human";
			loop = 0;
			soundStrong = "EM_hq_say_again_HQ_2_S";
			soundWeak = "EM_hq_say_again_HQ_2_S";
			text = "Hold, we lost you there. Say again. Over.";
			textRaw = "Hold we lost you there. Say again. Over.";
			type = "HQ";
			variants = 1;
			vehicle = "EM_hq_say_again_HQ_2_F";
			volumeStrong = "1.5 * (0.5 * 	CustomSoundController1)";
			volumeWeak = "0";
		};
		class EM_hq_send_help_a
		{
			isVariants = 1;
			links[] = {"", "EM_hq_send_help_a_HQ_0", "EM_hq_send_help_a_HQ_1", "EM_hq_send_help_a_HQ_2"};
		};
		class EM_hq_send_help_a_HQ_0
		{
			folder = "Human";
			loop = 0;
			soundStrong = "EM_hq_send_help_a_HQ_0_S";
			soundWeak = "EM_hq_send_help_a_HQ_0_S";
			text = "Move in and support Alpha! Over.";
			textRaw = "Move in and support Alpha! Over.";
			type = "HQ";
			variants = 1;
			vehicle = "EM_hq_send_help_a_HQ_0_F";
			volumeStrong = "1.5 * (0.5 * 	CustomSoundController1)";
			volumeWeak = "0";
		};
		class EM_hq_send_help_a_HQ_1
		{
			folder = "Human";
			loop = 0;
			soundStrong = "EM_hq_send_help_a_HQ_1_S";
			soundWeak = "EM_hq_send_help_a_HQ_1_S";
			text = "Alpha team's engaged! Get there and assist! Over.";
			textRaw = "Alpha team's engaged! Get there and assist! Over.";
			type = "HQ";
			variants = 1;
			vehicle = "EM_hq_send_help_a_HQ_1_F";
			volumeStrong = "1.5 * (0.5 * 	CustomSoundController1)";
			volumeWeak = "0";
		};
		class EM_hq_send_help_a_HQ_2
		{
			folder = "Human";
			loop = 0;
			soundStrong = "EM_hq_send_help_a_HQ_2_S";
			soundWeak = "EM_hq_send_help_a_HQ_2_S";
			text = "Alpha needs support - secure their position! Over.";
			textRaw = "Alpha needs support - secure their position! Over.";
			type = "HQ";
			variants = 1;
			vehicle = "EM_hq_send_help_a_HQ_2_F";
			volumeStrong = "1.5 * (0.5 * 	CustomSoundController1)";
			volumeWeak = "0";
		};
		class EM_hq_send_help_b
		{
			isVariants = 1;
			links[] = {"", "EM_hq_send_help_b_HQ_0", "EM_hq_send_help_b_HQ_1", "EM_hq_send_help_b_HQ_2"};
		};
		class EM_hq_send_help_b_HQ_0
		{
			folder = "Human";
			loop = 0;
			soundStrong = "EM_hq_send_help_b_HQ_0_S";
			soundWeak = "EM_hq_send_help_b_HQ_0_S";
			text = "Move in and support Bravo! Over.";
			textRaw = "Move in and support Bravo! Over.";
			type = "HQ";
			variants = 1;
			vehicle = "EM_hq_send_help_b_HQ_0_F";
			volumeStrong = "1.5 * (0.5 * 	CustomSoundController1)";
			volumeWeak = "0";
		};
		class EM_hq_send_help_b_HQ_1
		{
			folder = "Human";
			loop = 0;
			soundStrong = "EM_hq_send_help_b_HQ_1_S";
			soundWeak = "EM_hq_send_help_b_HQ_1_S";
			text = "Bravo team's engaged! Get there and assist! Over.";
			textRaw = "Bravo team's engaged! Get there and assist! Over.";
			type = "HQ";
			variants = 1;
			vehicle = "EM_hq_send_help_b_HQ_1_F";
			volumeStrong = "1.5 * (0.5 * 	CustomSoundController1)";
			volumeWeak = "0";
		};
		class EM_hq_send_help_b_HQ_2
		{
			folder = "Human";
			loop = 0;
			soundStrong = "EM_hq_send_help_b_HQ_2_S";
			soundWeak = "EM_hq_send_help_b_HQ_2_S";
			text = "Bravo needs support - secure their position! Over.";
			textRaw = "Bravo needs support - secure their position! Over.";
			type = "HQ";
			variants = 1;
			vehicle = "EM_hq_send_help_b_HQ_2_F";
			volumeStrong = "1.5 * (0.5 * 	CustomSoundController1)";
			volumeWeak = "0";
		};
		class EM_hq_send_help_c
		{
			isVariants = 1;
			links[] = {"", "EM_hq_send_help_c_HQ_0", "EM_hq_send_help_c_HQ_1", "EM_hq_send_help_c_HQ_2"};
		};
		class EM_hq_send_help_c_HQ_0
		{
			folder = "Human";
			loop = 0;
			soundStrong = "EM_hq_send_help_c_HQ_0_S";
			soundWeak = "EM_hq_send_help_c_HQ_0_S";
			text = "Move in and support Charlie! Over.";
			textRaw = "Move in and support Charlie! Over.";
			type = "HQ";
			variants = 1;
			vehicle = "EM_hq_send_help_c_HQ_0_F";
			volumeStrong = "1.5 * (0.5 * 	CustomSoundController1)";
			volumeWeak = "0";
		};
		class EM_hq_send_help_c_HQ_1
		{
			folder = "Human";
			loop = 0;
			soundStrong = "EM_hq_send_help_c_HQ_1_S";
			soundWeak = "EM_hq_send_help_c_HQ_1_S";
			text = "Charlie team's engaged! Get there and assist! Over.";
			textRaw = "Charlie team's engaged! Get there and assist! Over.";
			type = "HQ";
			variants = 1;
			vehicle = "EM_hq_send_help_c_HQ_1_F";
			volumeStrong = "1.5 * (0.5 * 	CustomSoundController1)";
			volumeWeak = "0";
		};
		class EM_hq_send_help_c_HQ_2
		{
			folder = "Human";
			loop = 0;
			soundStrong = "EM_hq_send_help_c_HQ_2_S";
			soundWeak = "EM_hq_send_help_c_HQ_2_S";
			text = "Charlie needs support - secure their position! Over.";
			textRaw = "Charlie needs support - secure their position! Over.";
			type = "HQ";
			variants = 1;
			vehicle = "EM_hq_send_help_c_HQ_2_F";
			volumeStrong = "1.5 * (0.5 * 	CustomSoundController1)";
			volumeWeak = "0";
		};
		class EM_hq_send_help_d
		{
			isVariants = 1;
			links[] = {"", "EM_hq_send_help_d_HQ_0", "EM_hq_send_help_d_HQ_1", "EM_hq_send_help_d_HQ_2"};
		};
		class EM_hq_send_help_d_HQ_0
		{
			folder = "Human";
			loop = 0;
			soundStrong = "EM_hq_send_help_d_HQ_0_S";
			soundWeak = "EM_hq_send_help_d_HQ_0_S";
			text = "Move in and support Delta! Over.";
			textRaw = "Move in and support Delta! Over.";
			type = "HQ";
			variants = 1;
			vehicle = "EM_hq_send_help_d_HQ_0_F";
			volumeStrong = "1.5 * (0.5 * 	CustomSoundController1)";
			volumeWeak = "0";
		};
		class EM_hq_send_help_d_HQ_1
		{
			folder = "Human";
			loop = 0;
			soundStrong = "EM_hq_send_help_d_HQ_1_S";
			soundWeak = "EM_hq_send_help_d_HQ_1_S";
			text = "Delta team's engaged! Get there and assist! Over.";
			textRaw = "Delta team's engaged! Get there and assist! Over.";
			type = "HQ";
			variants = 1;
			vehicle = "EM_hq_send_help_d_HQ_1_F";
			volumeStrong = "1.5 * (0.5 * 	CustomSoundController1)";
			volumeWeak = "0";
		};
		class EM_hq_send_help_d_HQ_2
		{
			folder = "Human";
			loop = 0;
			soundStrong = "EM_hq_send_help_d_HQ_2_S";
			soundWeak = "EM_hq_send_help_d_HQ_2_S";
			text = "Delta needs support - secure their position! Over.";
			textRaw = "Delta needs support - secure their position! Over.";
			type = "HQ";
			variants = 1;
			vehicle = "EM_hq_send_help_d_HQ_2_F";
			volumeStrong = "1.5 * (0.5 * 	CustomSoundController1)";
			volumeWeak = "0";
		};
		class EM_hq_send_help_e
		{
			isVariants = 1;
			links[] = {"", "EM_hq_send_help_e_HQ_0", "EM_hq_send_help_e_HQ_1", "EM_hq_send_help_e_HQ_2"};
		};
		class EM_hq_send_help_e_HQ_0
		{
			folder = "Human";
			loop = 0;
			soundStrong = "EM_hq_send_help_e_HQ_0_S";
			soundWeak = "EM_hq_send_help_e_HQ_0_S";
			text = "Move in and support Echo! Over.";
			textRaw = "Move in and support Echo! Over.";
			type = "HQ";
			variants = 1;
			vehicle = "EM_hq_send_help_e_HQ_0_F";
			volumeStrong = "1.5 * (0.5 * 	CustomSoundController1)";
			volumeWeak = "0";
		};
		class EM_hq_send_help_e_HQ_1
		{
			folder = "Human";
			loop = 0;
			soundStrong = "EM_hq_send_help_e_HQ_1_S";
			soundWeak = "EM_hq_send_help_e_HQ_1_S";
			text = "Echo team's engaged! Get there and assist! Over.";
			textRaw = "Echo team's engaged! Get there and assist! Over.";
			type = "HQ";
			variants = 1;
			vehicle = "EM_hq_send_help_e_HQ_1_F";
			volumeStrong = "1.5 * (0.5 * 	CustomSoundController1)";
			volumeWeak = "0";
		};
		class EM_hq_send_help_e_HQ_2
		{
			folder = "Human";
			loop = 0;
			soundStrong = "EM_hq_send_help_e_HQ_2_S";
			soundWeak = "EM_hq_send_help_e_HQ_2_S";
			text = "Echo needs support - secure their position! Over.";
			textRaw = "Echo needs support - secure their position! Over.";
			type = "HQ";
			variants = 1;
			vehicle = "EM_hq_send_help_e_HQ_2_F";
			volumeStrong = "1.5 * (0.5 * 	CustomSoundController1)";
			volumeWeak = "0";
		};
		class EM_hq_send_help_f
		{
			isVariants = 1;
			links[] = {"", "EM_hq_send_help_f_HQ_0", "EM_hq_send_help_f_HQ_1", "EM_hq_send_help_f_HQ_2"};
		};
		class EM_hq_send_help_f_HQ_0
		{
			folder = "Human";
			loop = 0;
			soundStrong = "EM_hq_send_help_f_HQ_0_S";
			soundWeak = "EM_hq_send_help_f_HQ_0_S";
			text = "Move in and support Foxtrot! Over.";
			textRaw = "Move in and support Foxtrot! Over.";
			type = "HQ";
			variants = 1;
			vehicle = "EM_hq_send_help_f_HQ_0_F";
			volumeStrong = "1.5 * (0.5 * 	CustomSoundController1)";
			volumeWeak = "0";
		};
		class EM_hq_send_help_f_HQ_1
		{
			folder = "Human";
			loop = 0;
			soundStrong = "EM_hq_send_help_f_HQ_1_S";
			soundWeak = "EM_hq_send_help_f_HQ_1_S";
			text = "Foxtrot team's engaged! Get there and assist! Over.";
			textRaw = "Foxtrot team's engaged! Get there and assist! Over.";
			type = "HQ";
			variants = 1;
			vehicle = "EM_hq_send_help_f_HQ_1_F";
			volumeStrong = "1.5 * (0.5 * 	CustomSoundController1)";
			volumeWeak = "0";
		};
		class EM_hq_send_help_f_HQ_2
		{
			folder = "Human";
			loop = 0;
			soundStrong = "EM_hq_send_help_f_HQ_2_S";
			soundWeak = "EM_hq_send_help_f_HQ_2_S";
			text = "Foxtrot needs support - secure their position! Over.";
			textRaw = "Foxtrot needs support - secure their position! Over.";
			type = "HQ";
			variants = 1;
			vehicle = "EM_hq_send_help_f_HQ_2_F";
			volumeStrong = "1.5 * (0.5 * 	CustomSoundController1)";
			volumeWeak = "0";
		};
		class EM_hq_send_help_g
		{
			isVariants = 1;
			links[] = {"", "EM_hq_send_help_g_HQ_0", "EM_hq_send_help_g_HQ_1", "EM_hq_send_help_g_HQ_2"};
		};
		class EM_hq_send_help_g_HQ_0
		{
			folder = "Human";
			loop = 0;
			soundStrong = "EM_hq_send_help_g_HQ_0_S";
			soundWeak = "EM_hq_send_help_g_HQ_0_S";
			text = "Move in and support Golf! Over.";
			textRaw = "Move in and support Golf! Over.";
			type = "HQ";
			variants = 1;
			vehicle = "EM_hq_send_help_g_HQ_0_F";
			volumeStrong = "1.5 * (0.5 * 	CustomSoundController1)";
			volumeWeak = "0";
		};
		class EM_hq_send_help_g_HQ_1
		{
			folder = "Human";
			loop = 0;
			soundStrong = "EM_hq_send_help_g_HQ_1_S";
			soundWeak = "EM_hq_send_help_g_HQ_1_S";
			text = "Golf team's engaged! Get there and assist! Over.";
			textRaw = "Golf team's engaged! Get there and assist! Over.";
			type = "HQ";
			variants = 1;
			vehicle = "EM_hq_send_help_g_HQ_1_F";
			volumeStrong = "1.5 * (0.5 * 	CustomSoundController1)";
			volumeWeak = "0";
		};
		class EM_hq_send_help_g_HQ_2
		{
			folder = "Human";
			loop = 0;
			soundStrong = "EM_hq_send_help_g_HQ_2_S";
			soundWeak = "EM_hq_send_help_g_HQ_2_S";
			text = "Golf needs support - secure their position! Over.";
			textRaw = "Golf needs support - secure their position! Over.";
			type = "HQ";
			variants = 1;
			vehicle = "EM_hq_send_help_g_HQ_2_F";
			volumeStrong = "1.5 * (0.5 * 	CustomSoundController1)";
			volumeWeak = "0";
		};
		class EM_hq_silence
		{
			isVariants = 1;
			links[] = {"", "EM_hq_silence_HQ_0", "EM_hq_silence_HQ_1", "EM_hq_silence_HQ_2"};
		};
		class EM_hq_silence_HQ_0
		{
			folder = "Human";
			loop = 0;
			soundStrong = "EM_hq_silence_HQ_0_S";
			soundWeak = "EM_hq_silence_HQ_0_S";
			text = "All units, Gray Wolf. The enemy's monitoring our comms. Execute code Sierra. Silence, silence, silence. Out.";
			textRaw = "All units Gray Wolf. The enemy's monitoring our comms. Execute code Sierra. Silence silence silence. Out.";
			type = "HQ";
			variants = 1;
			vehicle = "EM_hq_silence_HQ_0_F";
			volumeStrong = "1.5 * (0.5 * 	CustomSoundController1)";
			volumeWeak = "0";
		};
		class EM_hq_silence_HQ_1
		{
			folder = "Human";
			loop = 0;
			soundStrong = "EM_hq_silence_HQ_1_S";
			soundWeak = "EM_hq_silence_HQ_1_S";
			text = "All callsigns, Gray Wolf. Comms compromised. Execute code Sierra. Silence, silence, silence. Out.";
			textRaw = "All callsigns Gray Wolf. Comms compromised. Execute code Sierra. Silence silence silence. Out.";
			type = "HQ";
			variants = 1;
			vehicle = "EM_hq_silence_HQ_1_F";
			volumeStrong = "1.5 * (0.5 * 	CustomSoundController1)";
			volumeWeak = "0";
		};
		class EM_hq_silence_HQ_2
		{
			folder = "Human";
			loop = 0;
			soundStrong = "EM_hq_silence_HQ_2_S";
			soundWeak = "EM_hq_silence_HQ_2_S";
			text = "All callsigns, this is Gray Wolf. Combat net is not secure. Execute code Sierra. Imposing radio silence, do not answer. Out.";
			textRaw = "All callsigns this is Gray Wolf. Combat net is not secure. Execute code Sierra. Imposing radio silence do not answer. Out.";
			type = "HQ";
			variants = 1;
			vehicle = "EM_hq_silence_HQ_2_F";
			volumeStrong = "1.5 * (0.5 * 	CustomSoundController1)";
			volumeWeak = "0";
		};
		class EM_hq_strange_signal_reply
		{
			isVariants = 1;
			links[] = {"", "EM_hq_strange_signal_reply_HQ_0", "EM_hq_strange_signal_reply_HQ_1", "EM_hq_strange_signal_reply_HQ_2"};
		};
		class EM_hq_strange_signal_reply_HQ_0
		{
			folder = "Human";
			loop = 0;
			soundStrong = "EM_hq_strange_signal_reply_HQ_0_S";
			soundWeak = "EM_hq_strange_signal_reply_HQ_0_S";
			text = "That's a negative, we're not receiving anything unusual here. Test your comm settings. Over.";
			textRaw = "That's a negative we're not receiving anything unusual here. Test your comm settings. Over.";
			type = "HQ";
			variants = 1;
			vehicle = "EM_hq_strange_signal_reply_HQ_0_F";
			volumeStrong = "1.5 * (0.5 * 	CustomSoundController1)";
			volumeWeak = "0";
		};
		class EM_hq_strange_signal_reply_HQ_1
		{
			folder = "Human";
			loop = 0;
			soundStrong = "EM_hq_strange_signal_reply_HQ_1_S";
			soundWeak = "EM_hq_strange_signal_reply_HQ_1_S";
			text = "Negative on that. Check your antenna and run a diag. Over.";
			textRaw = "Negative on that. Check your antenna and run a diag. Over.";
			type = "HQ";
			variants = 1;
			vehicle = "EM_hq_strange_signal_reply_HQ_1_F";
			volumeStrong = "1.5 * (0.5 * 	CustomSoundController1)";
			volumeWeak = "0";
		};
		class EM_hq_strange_signal_reply_HQ_2
		{
			folder = "Human";
			loop = 0;
			soundStrong = "EM_hq_strange_signal_reply_HQ_2_S";
			soundWeak = "EM_hq_strange_signal_reply_HQ_2_S";
			text = "Negative, you're loud and clear. Might be atmospheric. Follow protocol and check your antenna. Over.";
			textRaw = "Negative you're loud and clear. Might be atmospheric. Follow protocol and check your antenna. Over.";
			type = "HQ";
			variants = 1;
			vehicle = "EM_hq_strange_signal_reply_HQ_2_F";
			volumeStrong = "1.5 * (0.5 * 	CustomSoundController1)";
			volumeWeak = "0";
		};
		class EM_Human
		{
			isVariants = 1;
			links[] = {"", "EM_ESD_01", "EM_MorseCode_01", "EM_BlackBox_DistressSignal_01", "EM_RussianBeacon_01", "EM_HQ_Russian_Enc_01", "EM_Emergency_Broadcast_01", "EM_HQ_Enc_01", "EM_RadioStation_Song_01", "EM_RadioStation_Song_02", "EM_RadioStation_Song_03", "EM_RadioStation_Song_01_Transmission", "EM_RadioStation_Song_02_Transmission", "EM_RadioStation_Song_03_Transmission", "EM_Darter_Enc_01", "EM_Darter_Jammed_01", "EM_Ugv_Enc_01", "EM_Ugv_Jammed_01", "EM_AutoTurret_Enc_01", "EM_AutoTurret_Jammed_01", "EM_Stomper_Enc_01", "EM_Stomper_Jammed_01"};
		};
		class EM_intro2_physicist_am_4_1
		{
			isVariants = 0;
			links[] = {"", "EM_intro2_physicist_am_4_1_PHYSICIST_0"};
		};
		class EM_intro2_physicist_am_4_1_PHYSICIST_0
		{
			folder = "Human";
			loop = 0;
			soundStrong = "EM_intro2_physicist_am_4_1_PHYSICIST_0_S";
			soundWeak = "EM_intro2_physicist_am_4_1_PHYSICIST_0_S";
			text = "Basic protocol. They took mine too.";
			textRaw = "Basic protocol. They took mine too.";
			type = "PHYSICIST";
			variants = 1;
			vehicle = "EM_intro2_physicist_am_4_1_PHYSICIST_0_F";
			volumeStrong = "1.5 * (0.5 * 	CustomSoundController1)";
			volumeWeak = "0";
		};
		class EM_intro2_physicist_am_4_2
		{
			isVariants = 0;
			links[] = {"", "EM_intro2_physicist_am_4_2_PHYSICIST_0"};
		};
		class EM_intro2_physicist_am_4_2_PHYSICIST_0
		{
			folder = "Human";
			loop = 0;
			soundStrong = "EM_intro2_physicist_am_4_2_PHYSICIST_0_S";
			soundWeak = "EM_intro2_physicist_am_4_2_PHYSICIST_0_S";
			text = "No phones or phonecalls, in or out.";
			textRaw = "No phones or phonecalls in or out.";
			type = "PHYSICIST";
			variants = 1;
			vehicle = "EM_intro2_physicist_am_4_2_PHYSICIST_0_F";
			volumeStrong = "1.5 * (0.5 * 	CustomSoundController1)";
			volumeWeak = "0";
		};
		class EM_intro2_physicist_am_4_3
		{
			isVariants = 0;
			links[] = {"", "EM_intro2_physicist_am_4_3_PHYSICIST_0"};
		};
		class EM_intro2_physicist_am_4_3_PHYSICIST_0
		{
			folder = "Human";
			loop = 0;
			soundStrong = "EM_intro2_physicist_am_4_3_PHYSICIST_0_S";
			soundWeak = "EM_intro2_physicist_am_4_3_PHYSICIST_0_S";
			text = "If you want to talk, use the radio.";
			textRaw = "If you want to talk use the radio.";
			type = "PHYSICIST";
			variants = 1;
			vehicle = "EM_intro2_physicist_am_4_3_PHYSICIST_0_F";
			volumeStrong = "1.5 * (0.5 * 	CustomSoundController1)";
			volumeWeak = "0";
		};
		class EM_intro2_physicist_am_4_4
		{
			isVariants = 0;
			links[] = {"", "EM_intro2_physicist_am_4_4_PHYSICIST_0"};
		};
		class EM_intro2_physicist_am_4_4_PHYSICIST_0
		{
			folder = "Human";
			loop = 0;
			soundStrong = "EM_intro2_physicist_am_4_4_PHYSICIST_0_S";
			soundWeak = "EM_intro2_physicist_am_4_4_PHYSICIST_0_S";
			text = "But stay on this channel. Switching frequencies - hell...";
			textRaw = "But stay on this channel. Switching frequencies - hell...";
			type = "PHYSICIST";
			variants = 1;
			vehicle = "EM_intro2_physicist_am_4_4_PHYSICIST_0_F";
			volumeStrong = "1.5 * (0.5 * 	CustomSoundController1)";
			volumeWeak = "0";
		};
		class EM_intro2_physicist_am_4_5
		{
			isVariants = 0;
			links[] = {"", "EM_intro2_physicist_am_4_5_PHYSICIST_0"};
		};
		class EM_intro2_physicist_am_4_5_PHYSICIST_0
		{
			folder = "Human";
			loop = 0;
			soundStrong = "EM_intro2_physicist_am_4_5_PHYSICIST_0_S";
			soundWeak = "EM_intro2_physicist_am_4_5_PHYSICIST_0_S";
			text = "They don't take too kindly to that.";
			textRaw = "They don't take too kindly to that.";
			type = "PHYSICIST";
			variants = 1;
			vehicle = "EM_intro2_physicist_am_4_5_PHYSICIST_0_F";
			volumeStrong = "1.5 * (0.5 * 	CustomSoundController1)";
			volumeWeak = "0";
		};
		class EM_intro2_physicist_am_4_6
		{
			isVariants = 0;
			links[] = {"", "EM_intro2_physicist_am_4_6_PHYSICIST_0"};
		};
		class EM_intro2_physicist_am_4_6_PHYSICIST_0
		{
			folder = "Human";
			loop = 0;
			soundStrong = "EM_intro2_physicist_am_4_6_PHYSICIST_0_S";
			soundWeak = "EM_intro2_physicist_am_4_6_PHYSICIST_0_S";
			text = "Alright, so. Main site, I guess you already know about.";
			textRaw = "Alright so. Main site I guess you already know about.";
			type = "PHYSICIST";
			variants = 1;
			vehicle = "EM_intro2_physicist_am_4_6_PHYSICIST_0_F";
			volumeStrong = "1.5 * (0.5 * 	CustomSoundController1)";
			volumeWeak = "0";
		};
		class EM_intro2_physicist_am_4_7
		{
			isVariants = 0;
			links[] = {"", "EM_intro2_physicist_am_4_7_PHYSICIST_0"};
		};
		class EM_intro2_physicist_am_4_7_PHYSICIST_0
		{
			folder = "Human";
			loop = 0;
			soundStrong = "EM_intro2_physicist_am_4_7_PHYSICIST_0_S";
			soundWeak = "EM_intro2_physicist_am_4_7_PHYSICIST_0_S";
			text = "The second we only just discovered.";
			textRaw = "The second we only just discovered.";
			type = "PHYSICIST";
			variants = 1;
			vehicle = "EM_intro2_physicist_am_4_7_PHYSICIST_0_F";
			volumeStrong = "1.5 * (0.5 * 	CustomSoundController1)";
			volumeWeak = "0";
		};
		class EM_intro2_physicist_am_4_8
		{
			isVariants = 0;
			links[] = {"", "EM_intro2_physicist_am_4_8_PHYSICIST_0"};
		};
		class EM_intro2_physicist_am_4_8_PHYSICIST_0
		{
			folder = "Human";
			loop = 0;
			soundStrong = "EM_intro2_physicist_am_4_8_PHYSICIST_0_S";
			soundWeak = "EM_intro2_physicist_am_4_8_PHYSICIST_0_S";
			text = "On the hill, over near the helipad.";
			textRaw = "On the hill over near the helipad.";
			type = "PHYSICIST";
			variants = 1;
			vehicle = "EM_intro2_physicist_am_4_8_PHYSICIST_0_F";
			volumeStrong = "1.5 * (0.5 * 	CustomSoundController1)";
			volumeWeak = "0";
		};
		class EM_intro2_physicist_am_4_9
		{
			isVariants = 0;
			links[] = {"", "EM_intro2_physicist_am_4_9_PHYSICIST_0"};
		};
		class EM_intro2_physicist_am_4_9_PHYSICIST_0
		{
			folder = "Human";
			loop = 0;
			soundStrong = "EM_intro2_physicist_am_4_9_PHYSICIST_0_S";
			soundWeak = "EM_intro2_physicist_am_4_9_PHYSICIST_0_S";
			text = "I'll bring you up to speed when the locals read you in.";
			textRaw = "I'll bring you up to speed when the locals read you in.";
			type = "PHYSICIST";
			variants = 1;
			vehicle = "EM_intro2_physicist_am_4_9_PHYSICIST_0_F";
			volumeStrong = "1.5 * (0.5 * 	CustomSoundController1)";
			volumeWeak = "0";
		};
		class EM_intro2_physicist_am_4_loop
		{
			isVariants = 0;
			links[] = {"", "EM_intro2_physicist_am_4_loop_PHYSICIST_0"};
		};
		class EM_intro2_physicist_am_4_loop_PHYSICIST_0
		{
			folder = "Human";
			loop = 0;
			soundStrong = "EM_intro2_physicist_am_4_loop_PHYSICIST_0_S";
			soundWeak = "EM_intro2_physicist_am_4_loop_PHYSICIST_0_S";
			text = "Nah, don't take it personally, lad.";
			textRaw = "Nah don't take it personally lad.";
			type = "PHYSICIST";
			variants = 1;
			vehicle = "EM_intro2_physicist_am_4_loop_PHYSICIST_0_F";
			volumeStrong = "1.5 * (0.5 * 	CustomSoundController1)";
			volumeWeak = "0";
		};
		class EM_intro2_q2raven_am_2_1
		{
			isVariants = 0;
			links[] = {"", "EM_intro2_q2raven_am_2_1_RAVEN_0"};
		};
		class EM_intro2_q2raven_am_2_1_RAVEN_0
		{
			folder = "Human";
			loop = 0;
			soundStrong = "EM_intro2_q2raven_am_2_1_RAVEN_0_S";
			soundWeak = "EM_intro2_q2raven_am_2_1_RAVEN_0_S";
			text = "Gray Wolf, this is Raven 1.";
			textRaw = "Gray Wolf this is Raven 1.";
			type = "RAVEN";
			variants = 1;
			vehicle = "EM_intro2_q2raven_am_2_1_RAVEN_0_F";
			volumeStrong = "1.5 * (0.5 * 	CustomSoundController1)";
			volumeWeak = "0";
		};
		class EM_intro2_q2raven_am_2_2
		{
			isVariants = 0;
			links[] = {"", "EM_intro2_q2raven_am_2_2_RAVEN_0"};
		};
		class EM_intro2_q2raven_am_2_2_RAVEN_0
		{
			folder = "Human";
			loop = 0;
			soundStrong = "EM_intro2_q2raven_am_2_2_RAVEN_0_S";
			soundWeak = "EM_intro2_q2raven_am_2_2_RAVEN_0_S";
			text = "There's a truck, on the road to the burn pit.";
			textRaw = "There's a truck on the road to the burn pit.";
			type = "RAVEN";
			variants = 1;
			vehicle = "EM_intro2_q2raven_am_2_2_RAVEN_0_F";
			volumeStrong = "1.5 * (0.5 * 	CustomSoundController1)";
			volumeWeak = "0";
		};
		class EM_intro2_q2raven_am_2_3
		{
			isVariants = 0;
			links[] = {"", "EM_intro2_q2raven_am_2_3_RAVEN_0"};
		};
		class EM_intro2_q2raven_am_2_3_RAVEN_0
		{
			folder = "Human";
			loop = 0;
			soundStrong = "EM_intro2_q2raven_am_2_3_RAVEN_0_S";
			soundWeak = "EM_intro2_q2raven_am_2_3_RAVEN_0_S";
			text = "Driver's stopped. Could be they got a puncture.";
			textRaw = "Driver's stopped. Could be they got a puncture.";
			type = "RAVEN";
			variants = 1;
			vehicle = "EM_intro2_q2raven_am_2_3_RAVEN_0_F";
			volumeStrong = "1.5 * (0.5 * 	CustomSoundController1)";
			volumeWeak = "0";
		};
		class EM_intro2_q2raven_am_2_4
		{
			isVariants = 0;
			links[] = {"", "EM_intro2_q2raven_am_2_4_RAVEN_0"};
		};
		class EM_intro2_q2raven_am_2_4_RAVEN_0
		{
			folder = "Human";
			loop = 0;
			soundStrong = "EM_intro2_q2raven_am_2_4_RAVEN_0_S";
			soundWeak = "EM_intro2_q2raven_am_2_4_RAVEN_0_S";
			text = "You want us to make another pass, get them moving? Over.";
			textRaw = "You want us to make another pass get them moving? Over.";
			type = "RAVEN";
			variants = 1;
			vehicle = "EM_intro2_q2raven_am_2_4_RAVEN_0_F";
			volumeStrong = "1.5 * (0.5 * 	CustomSoundController1)";
			volumeWeak = "0";
		};
		class EM_intro2_q2raven_am_2_5
		{
			isVariants = 0;
			links[] = {"", "EM_intro2_q2raven_am_2_5_HQ_0"};
		};
		class EM_intro2_q2raven_am_2_5_HQ_0
		{
			folder = "Human";
			loop = 0;
			soundStrong = "EM_intro2_q2raven_am_2_5_HQ_0_S";
			soundWeak = "EM_intro2_q2raven_am_2_5_HQ_0_S";
			text = "Negative, Raven 1.";
			textRaw = "Negative Raven 1.";
			type = "HQ";
			variants = 1;
			vehicle = "EM_intro2_q2raven_am_2_5_HQ_0_F";
			volumeStrong = "1.5 * (0.5 * 	CustomSoundController1)";
			volumeWeak = "0";
		};
		class EM_intro2_q2raven_am_2_6
		{
			isVariants = 0;
			links[] = {"", "EM_intro2_q2raven_am_2_6_HQ_0"};
		};
		class EM_intro2_q2raven_am_2_6_HQ_0
		{
			folder = "Human";
			loop = 0;
			soundStrong = "EM_intro2_q2raven_am_2_6_HQ_0_S";
			soundWeak = "EM_intro2_q2raven_am_2_6_HQ_0_S";
			text = "Return to base. You have a priority asset awaiting transfer.";
			textRaw = "Return to base. You have a priority asset awaiting transfer.";
			type = "HQ";
			variants = 1;
			vehicle = "EM_intro2_q2raven_am_2_6_HQ_0_F";
			volumeStrong = "1.5 * (0.5 * 	CustomSoundController1)";
			volumeWeak = "0";
		};
		class EM_intro2_q2raven_am_2_7
		{
			isVariants = 0;
			links[] = {"", "EM_intro2_q2raven_am_2_7_RAVEN_0"};
		};
		class EM_intro2_q2raven_am_2_7_RAVEN_0
		{
			folder = "Human";
			loop = 0;
			soundStrong = "EM_intro2_q2raven_am_2_7_RAVEN_0_S";
			soundWeak = "EM_intro2_q2raven_am_2_7_RAVEN_0_S";
			text = "Copy, we'll stay on task, vectoring for approach now. Out.";
			textRaw = "Copy we'll stay on task vectoring for approach now. Out.";
			type = "RAVEN";
			variants = 1;
			vehicle = "EM_intro2_q2raven_am_2_7_RAVEN_0_F";
			volumeStrong = "1.5 * (0.5 * 	CustomSoundController1)";
			volumeWeak = "0";
		};
		class EM_intro2_q2s_am_1_1
		{
			isVariants = 0;
			links[] = {"", "EM_intro2_q2s_am_1_1_SQUAD_0"};
		};
		class EM_intro2_q2s_am_1_1_SQUAD_0
		{
			folder = "Human";
			loop = 0;
			soundStrong = "EM_intro2_q2s_am_1_1_SQUAD_0_S";
			soundWeak = "EM_intro2_q2s_am_1_1_SQUAD_0_S";
			text = "A truckload of mixed, plus one more of HazMat.";
			textRaw = "A truckload of mixed plus one more of HazMat.";
			type = "SQUAD";
			variants = 1;
			vehicle = "EM_intro2_q2s_am_1_1_SQUAD_0_F";
			volumeStrong = "1.5 * (0.5 * 	CustomSoundController1)";
			volumeWeak = "0";
		};
		class EM_intro2_q2s_am_1_2
		{
			isVariants = 0;
			links[] = {"", "EM_intro2_q2s_am_1_2_SQUAD_0"};
		};
		class EM_intro2_q2s_am_1_2_SQUAD_0
		{
			folder = "Human";
			loop = 0;
			soundStrong = "EM_intro2_q2s_am_1_2_SQUAD_0_S";
			soundWeak = "EM_intro2_q2s_am_1_2_SQUAD_0_S";
			text = "As for the second drop, they didn't make it. Over.";
			textRaw = "As for the second drop they didn't make it. Over.";
			type = "SQUAD";
			variants = 1;
			vehicle = "EM_intro2_q2s_am_1_2_SQUAD_0_F";
			volumeStrong = "1.5 * (0.5 * 	CustomSoundController1)";
			volumeWeak = "0";
		};
		class EM_intro2_q2s_am_1_3
		{
			isVariants = 0;
			links[] = {"", "EM_intro2_q2s_am_1_3_HQ_0"};
		};
		class EM_intro2_q2s_am_1_3_HQ_0
		{
			folder = "Human";
			loop = 0;
			soundStrong = "EM_intro2_q2s_am_1_3_HQ_0_S";
			soundWeak = "EM_intro2_q2s_am_1_3_HQ_0_S";
			text = "Roger. And what about this morning?";
			textRaw = "Roger. And what about this morning?";
			type = "HQ";
			variants = 1;
			vehicle = "EM_intro2_q2s_am_1_3_HQ_0_F";
			volumeStrong = "1.5 * (0.5 * 	CustomSoundController1)";
			volumeWeak = "0";
		};
		class EM_intro2_q2s_am_1_4
		{
			isVariants = 0;
			links[] = {"", "EM_intro2_q2s_am_1_4_SQUAD_0"};
		};
		class EM_intro2_q2s_am_1_4_SQUAD_0
		{
			folder = "Human";
			loop = 0;
			soundStrong = "EM_intro2_q2s_am_1_4_SQUAD_0_S";
			soundWeak = "EM_intro2_q2s_am_1_4_SQUAD_0_S";
			text = "Three HEMTTs from Camp Konrad, with junk from Kresnik.";
			textRaw = "Three HEMTTs from Camp Konrad with  junk from Kresnik.";
			type = "SQUAD";
			variants = 1;
			vehicle = "EM_intro2_q2s_am_1_4_SQUAD_0_F";
			volumeStrong = "1.5 * (0.5 * 	CustomSoundController1)";
			volumeWeak = "0";
		};
		class EM_intro2_q2s_am_1_5
		{
			isVariants = 0;
			links[] = {"", "EM_intro2_q2s_am_1_5_SQUAD_0"};
		};
		class EM_intro2_q2s_am_1_5_SQUAD_0
		{
			folder = "Human";
			loop = 0;
			soundStrong = "EM_intro2_q2s_am_1_5_SQUAD_0_S";
			soundWeak = "EM_intro2_q2s_am_1_5_SQUAD_0_S";
			text = "Some e-waste too.";
			textRaw = "Some e-waste too.";
			type = "SQUAD";
			variants = 1;
			vehicle = "EM_intro2_q2s_am_1_5_SQUAD_0_F";
			volumeStrong = "1.5 * (0.5 * 	CustomSoundController1)";
			volumeWeak = "0";
		};
		class EM_intro2_q2s_am_1_6
		{
			isVariants = 0;
			links[] = {"", "EM_intro2_q2s_am_1_6_SQUAD_0"};
		};
		class EM_intro2_q2s_am_1_6_SQUAD_0
		{
			folder = "Human";
			loop = 0;
			soundStrong = "EM_intro2_q2s_am_1_6_SQUAD_0_S";
			soundWeak = "EM_intro2_q2s_am_1_6_SQUAD_0_S";
			text = "Though no mention of the sinkhole or the root they saw. Over.";
			textRaw = "Though no mention of the sinkhole or the root they saw. Over.";
			type = "SQUAD";
			variants = 1;
			vehicle = "EM_intro2_q2s_am_1_6_SQUAD_0_F";
			volumeStrong = "1.5 * (0.5 * 	CustomSoundController1)";
			volumeWeak = "0";
		};
		class EM_intro2_q2s_am_1_7
		{
			isVariants = 0;
			links[] = {"", "EM_intro2_q2s_am_1_7_HQ_0"};
		};
		class EM_intro2_q2s_am_1_7_HQ_0
		{
			folder = "Human";
			loop = 0;
			soundStrong = "EM_intro2_q2s_am_1_7_HQ_0_S";
			soundWeak = "EM_intro2_q2s_am_1_7_HQ_0_S";
			text = "Copy that, Sergeant.";
			textRaw = "Copy that Sergeant.";
			type = "HQ";
			variants = 1;
			vehicle = "EM_intro2_q2s_am_1_7_HQ_0_F";
			volumeStrong = "1.5 * (0.5 * 	CustomSoundController1)";
			volumeWeak = "0";
		};
		class EM_intro2_q2s_am_1_8
		{
			isVariants = 0;
			links[] = {"", "EM_intro2_q2s_am_1_8_HQ_0"};
		};
		class EM_intro2_q2s_am_1_8_HQ_0
		{
			folder = "Human";
			loop = 0;
			soundStrong = "EM_intro2_q2s_am_1_8_HQ_0_S";
			soundWeak = "EM_intro2_q2s_am_1_8_HQ_0_S";
			text = "Remember, lethal force is in effect beyond your checkpoint.";
			textRaw = "Remember lethal force is in effect beyond your checkpoint.";
			type = "HQ";
			variants = 1;
			vehicle = "EM_intro2_q2s_am_1_8_HQ_0_F";
			volumeStrong = "1.5 * (0.5 * 	CustomSoundController1)";
			volumeWeak = "0";
		};
		class EM_intro2_q2s_am_1_9
		{
			isVariants = 0;
			links[] = {"", "EM_intro2_q2s_am_1_9_HQ_0"};
		};
		class EM_intro2_q2s_am_1_9_HQ_0
		{
			folder = "Human";
			loop = 0;
			soundStrong = "EM_intro2_q2s_am_1_9_HQ_0_S";
			soundWeak = "EM_intro2_q2s_am_1_9_HQ_0_S";
			text = "Do not let anybody wander off. Out.";
			textRaw = "Do not let anybody wander off. Out.";
			type = "HQ";
			variants = 1;
			vehicle = "EM_intro2_q2s_am_1_9_HQ_0_F";
			volumeStrong = "1.5 * (0.5 * 	CustomSoundController1)";
			volumeWeak = "0";
		};
		class EM_intro2_q2s_am_1_loop
		{
			isVariants = 0;
			links[] = {"", "EM_intro2_q2s_am_1_loop_HQ_0"};
		};
		class EM_intro2_q2s_am_1_loop_HQ_0
		{
			folder = "Human";
			loop = 0;
			soundStrong = "EM_intro2_q2s_am_1_loop_HQ_0_S";
			soundWeak = "EM_intro2_q2s_am_1_loop_HQ_0_S";
			text = "Acknowledged, give us the next one. Over.";
			textRaw = "Acknowledged give us the next one. Over.";
			type = "HQ";
			variants = 1;
			vehicle = "EM_intro2_q2s_am_1_loop_HQ_0_F";
			volumeStrong = "1.5 * (0.5 * 	CustomSoundController1)";
			volumeWeak = "0";
		};
		class EM_intro2_q_am_3_1
		{
			isVariants = 0;
			links[] = {"", "EM_intro2_q_am_3_1_UNKNOWN_0"};
		};
		class EM_intro2_q_am_3_1_UNKNOWN_0
		{
			folder = "Human";
			loop = 0;
			soundStrong = "EM_intro2_q_am_3_1_UNKNOWN_0_S";
			soundWeak = "EM_intro2_q_am_3_1_UNKNOWN_0_S";
			text = "Garbled message.";
			textRaw = "Garbled message.";
			type = "UNKNOWN";
			variants = 1;
			vehicle = "EM_intro2_q_am_3_1_UNKNOWN_0_F";
			volumeStrong = "1.5 * (0.5 * 	CustomSoundController1)";
			volumeWeak = "0";
		};
		class EM_intro2_q_am_3_2
		{
			isVariants = 0;
			links[] = {"", "EM_intro2_q_am_3_2_HQ_0"};
		};
		class EM_intro2_q_am_3_2_HQ_0
		{
			folder = "Human";
			loop = 0;
			soundStrong = "EM_intro2_q_am_3_2_HQ_0_S";
			soundWeak = "EM_intro2_q_am_3_2_HQ_0_S";
			text = "Okay - lock it down.";
			textRaw = "Okay - lock it down.";
			type = "HQ";
			variants = 1;
			vehicle = "EM_intro2_q_am_3_2_HQ_0_F";
			volumeStrong = "1.5 * (0.5 * 	CustomSoundController1)";
			volumeWeak = "0";
		};
		class EM_intro2_q_am_3_3
		{
			isVariants = 0;
			links[] = {"", "EM_intro2_q_am_3_3_HQ_0"};
		};
		class EM_intro2_q_am_3_3_HQ_0
		{
			folder = "Human";
			loop = 0;
			soundStrong = "EM_intro2_q_am_3_3_HQ_0_S";
			soundWeak = "EM_intro2_q_am_3_3_HQ_0_S";
			text = "Camp Konrad should have gone a week ago. Over.";
			textRaw = "Camp Konrad should have gone a week ago. Over.";
			type = "HQ";
			variants = 1;
			vehicle = "EM_intro2_q_am_3_3_HQ_0_F";
			volumeStrong = "1.5 * (0.5 * 	CustomSoundController1)";
			volumeWeak = "0";
		};
		class EM_intro2_q_am_3_4
		{
			isVariants = 0;
			links[] = {"", "EM_intro2_q_am_3_4_UNKNOWN_0"};
		};
		class EM_intro2_q_am_3_4_UNKNOWN_0
		{
			folder = "Human";
			loop = 0;
			soundStrong = "EM_intro2_q_am_3_4_UNKNOWN_0_S";
			soundWeak = "EM_intro2_q_am_3_4_UNKNOWN_0_S";
			text = "Garbled message.";
			textRaw = "Garbled message.";
			type = "UNKNOWN";
			variants = 1;
			vehicle = "EM_intro2_q_am_3_4_UNKNOWN_0_F";
			volumeStrong = "1.5 * (0.5 * 	CustomSoundController1)";
			volumeWeak = "0";
		};
		class EM_intro2_q_am_3_5
		{
			isVariants = 0;
			links[] = {"", "EM_intro2_q_am_3_5_HQ_0"};
		};
		class EM_intro2_q_am_3_5_HQ_0
		{
			folder = "Human";
			loop = 0;
			soundStrong = "EM_intro2_q_am_3_5_HQ_0_S";
			soundWeak = "EM_intro2_q_am_3_5_HQ_0_S";
			text = "I don't give a damn!";
			textRaw = "I don't give a damn!";
			type = "HQ";
			variants = 1;
			vehicle = "EM_intro2_q_am_3_5_HQ_0_F";
			volumeStrong = "1.5 * (0.5 * 	CustomSoundController1)";
			volumeWeak = "0";
		};
		class EM_intro2_q_am_3_6
		{
			isVariants = 0;
			links[] = {"", "EM_intro2_q_am_3_6_HQ_0"};
		};
		class EM_intro2_q_am_3_6_HQ_0
		{
			folder = "Human";
			loop = 0;
			soundStrong = "EM_intro2_q_am_3_6_HQ_0_S";
			soundWeak = "EM_intro2_q_am_3_6_HQ_0_S";
			text = "It's a fucking circus over there...";
			textRaw = "It's a fucking circus over there...";
			type = "HQ";
			variants = 1;
			vehicle = "EM_intro2_q_am_3_6_HQ_0_F";
			volumeStrong = "1.5 * (0.5 * 	CustomSoundController1)";
			volumeWeak = "0";
		};
		class EM_intro2_q_am_3_7
		{
			isVariants = 0;
			links[] = {"", "EM_intro2_q_am_3_7_HQ_0"};
		};
		class EM_intro2_q_am_3_7_HQ_0
		{
			folder = "Human";
			loop = 0;
			soundStrong = "EM_intro2_q_am_3_7_HQ_0_S";
			soundWeak = "EM_intro2_q_am_3_7_HQ_0_S";
			text = "Tell them that the pit's off-limits and they can go to Andrzejów.";
			textRaw = "Tell them that the pit's off-limits and they can go to Andrezj�w.";
			type = "HQ";
			variants = 1;
			vehicle = "EM_intro2_q_am_3_7_HQ_0_F";
			volumeStrong = "1.5 * (0.5 * 	CustomSoundController1)";
			volumeWeak = "0";
		};
		class EM_intro2_q_am_3_8
		{
			isVariants = 0;
			links[] = {"", "EM_intro2_q_am_3_8_HQ_0"};
		};
		class EM_intro2_q_am_3_8_HQ_0
		{
			folder = "Human";
			loop = 0;
			soundStrong = "EM_intro2_q_am_3_8_HQ_0_S";
			soundWeak = "EM_intro2_q_am_3_8_HQ_0_S";
			text = "It's either that, or they leave the garbage where it is. Out.";
			textRaw = "It's either that or they leave the garbage where it is. Out.";
			type = "HQ";
			variants = 1;
			vehicle = "EM_intro2_q_am_3_8_HQ_0_F";
			volumeStrong = "1.5 * (0.5 * 	CustomSoundController1)";
			volumeWeak = "0";
		};
		class EM_intro2_q_am_3_loop
		{
			isVariants = 1;
			links[] = {"", "EM_intro2_q_am_3_loop_HQ_0", "EM_intro2_q_am_3_loop_HQ_1", "EM_intro2_q_am_3_loop_HQ_2"};
		};
		class EM_intro2_q_am_3_loop_HQ_0
		{
			folder = "Human";
			loop = 0;
			soundStrong = "EM_intro2_q_am_3_loop_HQ_0_S";
			soundWeak = "EM_intro2_q_am_3_loop_HQ_0_S";
			text = "Say again. Over.";
			textRaw = "Say again. Over.";
			type = "HQ";
			variants = 1;
			vehicle = "EM_intro2_q_am_3_loop_HQ_0_F";
			volumeStrong = "1.5 * (0.5 * 	CustomSoundController1)";
			volumeWeak = "0";
		};
		class EM_intro2_q_am_3_loop_HQ_1
		{
			folder = "Human";
			loop = 0;
			soundStrong = "EM_intro2_q_am_3_loop_HQ_1_S";
			soundWeak = "EM_intro2_q_am_3_loop_HQ_1_S";
			text = "Romeo, we didn't catch your last... say again. Over.";
			textRaw = "Romeo we didn't catch your last... say again. Over.";
			type = "HQ";
			variants = 1;
			vehicle = "EM_intro2_q_am_3_loop_HQ_1_F";
			volumeStrong = "1.5 * (0.5 * 	CustomSoundController1)";
			volumeWeak = "0";
		};
		class EM_intro2_q_am_3_loop_HQ_2
		{
			folder = "Human";
			loop = 0;
			soundStrong = "EM_intro2_q_am_3_loop_HQ_2_S";
			soundWeak = "EM_intro2_q_am_3_loop_HQ_2_S";
			text = "Romeo, words twice, we lost you for a while there. Over.";
			textRaw = "Romeo words twice we lost you for a while there. Over.";
			type = "HQ";
			variants = 1;
			vehicle = "EM_intro2_q_am_3_loop_HQ_2_F";
			volumeStrong = "1.5 * (0.5 * 	CustomSoundController1)";
			volumeWeak = "0";
		};
		class EM_intro2_s_am_2_1
		{
			isVariants = 0;
			links[] = {"", "EM_intro2_s_am_2_1_SQUAD_0"};
		};
		class EM_intro2_s_am_2_1_SQUAD_0
		{
			folder = "Human";
			loop = 0;
			soundStrong = "EM_intro2_s_am_2_1_SQUAD_0_S";
			soundWeak = "EM_intro2_s_am_2_1_SQUAD_0_S";
			text = "Those guys in the white suits won't let anybody near it.";
			textRaw = "Those guys in the white suits won't let anybody near it.";
			type = "SQUAD";
			variants = 1;
			vehicle = "EM_intro2_s_am_2_1_SQUAD_0_F";
			volumeStrong = "1.5 * (0.5 * 	CustomSoundController1)";
			volumeWeak = "0";
		};
		class EM_intro2_s_am_2_2
		{
			isVariants = 0;
			links[] = {"", "EM_intro2_s_am_2_2_AMBIENTA_0"};
		};
		class EM_intro2_s_am_2_2_AMBIENTA_0
		{
			folder = "Human";
			loop = 0;
			soundStrong = "EM_intro2_s_am_2_2_AMBIENTA_0_S";
			soundWeak = "EM_intro2_s_am_2_2_AMBIENTA_0_S";
			text = "You mean Astra?";
			textRaw = "You mean Astra?";
			type = "AMBIENTA";
			variants = 1;
			vehicle = "EM_intro2_s_am_2_2_AMBIENTA_0_F";
			volumeStrong = "1.5 * (0.5 * 	CustomSoundController1)";
			volumeWeak = "0";
		};
		class EM_intro2_s_am_2_3
		{
			isVariants = 0;
			links[] = {"", "EM_intro2_s_am_2_3_SQUAD_0"};
		};
		class EM_intro2_s_am_2_3_SQUAD_0
		{
			folder = "Human";
			loop = 0;
			soundStrong = "EM_intro2_s_am_2_3_SQUAD_0_S";
			soundWeak = "EM_intro2_s_am_2_3_SQUAD_0_S";
			text = "Astra, whoever.";
			textRaw = "Astra whoever.";
			type = "SQUAD";
			variants = 1;
			vehicle = "EM_intro2_s_am_2_3_SQUAD_0_F";
			volumeStrong = "1.5 * (0.5 * 	CustomSoundController1)";
			volumeWeak = "0";
		};
		class EM_intro2_s_am_2_4
		{
			isVariants = 0;
			links[] = {"", "EM_intro2_s_am_2_4_AMBIENTA_0"};
		};
		class EM_intro2_s_am_2_4_AMBIENTA_0
		{
			folder = "Human";
			loop = 0;
			soundStrong = "EM_intro2_s_am_2_4_AMBIENTA_0_S";
			soundWeak = "EM_intro2_s_am_2_4_AMBIENTA_0_S";
			text = "So, maybe it's a meteorite?";
			textRaw = "So maybe it's a meteorite?";
			type = "AMBIENTA";
			variants = 1;
			vehicle = "EM_intro2_s_am_2_4_AMBIENTA_0_F";
			volumeStrong = "1.5 * (0.5 * 	CustomSoundController1)";
			volumeWeak = "0";
		};
		class EM_intro2_s_am_2_5
		{
			isVariants = 0;
			links[] = {"", "EM_intro2_s_am_2_5_AMBIENTA_0"};
		};
		class EM_intro2_s_am_2_5_AMBIENTA_0
		{
			folder = "Human";
			loop = 0;
			soundStrong = "EM_intro2_s_am_2_5_AMBIENTA_0_S";
			soundWeak = "EM_intro2_s_am_2_5_AMBIENTA_0_S";
			text = "I mean, you heard them say interplanetary contamination, right?";
			textRaw = "I mean you heard them say interplanetary contamination right?";
			type = "AMBIENTA";
			variants = 1;
			vehicle = "EM_intro2_s_am_2_5_AMBIENTA_0_F";
			volumeStrong = "1.5 * (0.5 * 	CustomSoundController1)";
			volumeWeak = "0";
		};
		class EM_intro2_s_am_2_6
		{
			isVariants = 0;
			links[] = {"", "EM_intro2_s_am_2_6_SQUAD_0"};
		};
		class EM_intro2_s_am_2_6_SQUAD_0
		{
			folder = "Human";
			loop = 0;
			soundStrong = "EM_intro2_s_am_2_6_SQUAD_0_S";
			soundWeak = "EM_intro2_s_am_2_6_SQUAD_0_S";
			text = "Right. But what about the roots...?";
			textRaw = "Right. But what about the roots...?";
			type = "SQUAD";
			variants = 1;
			vehicle = "EM_intro2_s_am_2_6_SQUAD_0_F";
			volumeStrong = "1.5 * (0.5 * 	CustomSoundController1)";
			volumeWeak = "0";
		};
		class EM_intro2_s_am_2_7
		{
			isVariants = 0;
			links[] = {"", "EM_intro2_s_am_2_7_SQUAD_0"};
		};
		class EM_intro2_s_am_2_7_SQUAD_0
		{
			folder = "Human";
			loop = 0;
			soundStrong = "EM_intro2_s_am_2_7_SQUAD_0_S";
			soundWeak = "EM_intro2_s_am_2_7_SQUAD_0_S";
			text = "Friendly fire aside, you think we'd kick the Americans out for a bit of space rock?";
			textRaw = "Friendly fire aside you think we'd kick the Americans out for a bit of space rock?";
			type = "SQUAD";
			variants = 1;
			vehicle = "EM_intro2_s_am_2_7_SQUAD_0_F";
			volumeStrong = "1.5 * (0.5 * 	CustomSoundController1)";
			volumeWeak = "0";
		};
		class EM_intro2_s_am_2_8
		{
			isVariants = 0;
			links[] = {"", "EM_intro2_s_am_2_8_SQUAD_0"};
		};
		class EM_intro2_s_am_2_8_SQUAD_0
		{
			folder = "Human";
			loop = 0;
			soundStrong = "EM_intro2_s_am_2_8_SQUAD_0_S";
			soundWeak = "EM_intro2_s_am_2_8_SQUAD_0_S";
			text = "No - no way. Whatever it is, it's a bigger deal than that, man.";
			textRaw = "No - no way. Whatever it is it's a bigger deal than that man.";
			type = "SQUAD";
			variants = 1;
			vehicle = "EM_intro2_s_am_2_8_SQUAD_0_F";
			volumeStrong = "1.5 * (0.5 * 	CustomSoundController1)";
			volumeWeak = "0";
		};
		class EM_intro2_s_am_2_loop
		{
			isVariants = 0;
			links[] = {"", "EM_intro2_s_am_2_loop_SQUAD_0", "EM_intro2_s_am_2_loop_SQUAD_1", "EM_intro2_s_am_2_loop_SQUAD_2"};
		};
		class EM_intro2_s_am_2_loop_SQUAD_0
		{
			folder = "Human";
			loop = 0;
			soundStrong = "EM_intro2_s_am_2_loop_SQUAD_0_S";
			soundWeak = "EM_intro2_s_am_2_loop_SQUAD_0_S";
			text = "It's weird.";
			textRaw = "It's weird.";
			type = "SQUAD";
			variants = 1;
			vehicle = "EM_intro2_s_am_2_loop_SQUAD_0_F";
			volumeStrong = "1.5 * (0.5 * 	CustomSoundController1)";
			volumeWeak = "0";
		};
		class EM_intro2_s_am_2_loop_SQUAD_1
		{
			folder = "Human";
			loop = 0;
			soundStrong = "EM_intro2_s_am_2_loop_SQUAD_1_S";
			soundWeak = "EM_intro2_s_am_2_loop_SQUAD_1_S";
			text = "I don't know, whole situation's got me on edge.";
			textRaw = "I don't know whole situation's got me on edge.";
			type = "SQUAD";
			variants = 1;
			vehicle = "EM_intro2_s_am_2_loop_SQUAD_1_F";
			volumeStrong = "1.5 * (0.5 * 	CustomSoundController1)";
			volumeWeak = "0";
		};
		class EM_intro2_s_am_2_loop_SQUAD_2
		{
			folder = "Human";
			loop = 0;
			soundStrong = "EM_intro2_s_am_2_loop_SQUAD_2_S";
			soundWeak = "EM_intro2_s_am_2_loop_SQUAD_2_S";
			text = "Don't ask me. Nothing here adds up.";
			textRaw = "Don't ask me. Nothing here adds up.";
			type = "SQUAD";
			variants = 1;
			vehicle = "EM_intro2_s_am_2_loop_SQUAD_2_F";
			volumeStrong = "1.5 * (0.5 * 	CustomSoundController1)";
			volumeWeak = "0";
		};
		class EM_intro2_s_am_3_1
		{
			isVariants = 0;
			links[] = {"", "EM_intro2_s_am_3_1_SQUAD_0"};
		};
		class EM_intro2_s_am_3_1_SQUAD_0
		{
			folder = "Human";
			loop = 0;
			soundStrong = "EM_intro2_s_am_3_1_SQUAD_0_S";
			soundWeak = "EM_intro2_s_am_3_1_SQUAD_0_S";
			text = "He said it's alive.";
			textRaw = "He said it's alive.";
			type = "SQUAD";
			variants = 1;
			vehicle = "EM_intro2_s_am_3_1_SQUAD_0_F";
			volumeStrong = "1.5 * (0.5 * 	CustomSoundController1)";
			volumeWeak = "0";
		};
		class EM_intro2_s_am_3_2
		{
			isVariants = 0;
			links[] = {"", "EM_intro2_s_am_3_2_SQUAD_0"};
		};
		class EM_intro2_s_am_3_2_SQUAD_0
		{
			folder = "Human";
			loop = 0;
			soundStrong = "EM_intro2_s_am_3_2_SQUAD_0_S";
			soundWeak = "EM_intro2_s_am_3_2_SQUAD_0_S";
			text = "And what we can see is just the tip of it.";
			textRaw = "And what we can see is just the tip of it.";
			type = "SQUAD";
			variants = 1;
			vehicle = "EM_intro2_s_am_3_2_SQUAD_0_F";
			volumeStrong = "1.5 * (0.5 * 	CustomSoundController1)";
			volumeWeak = "0";
		};
		class EM_intro2_s_am_3_3
		{
			isVariants = 0;
			links[] = {"", "EM_intro2_s_am_3_3_AMBIENTB_0"};
		};
		class EM_intro2_s_am_3_3_AMBIENTB_0
		{
			folder = "Human";
			loop = 0;
			soundStrong = "EM_intro2_s_am_3_3_AMBIENTB_0_S";
			soundWeak = "EM_intro2_s_am_3_3_AMBIENTB_0_S";
			text = "Jesus.";
			textRaw = "Jesus.";
			type = "AMBIENTB";
			variants = 1;
			vehicle = "EM_intro2_s_am_3_3_AMBIENTB_0_F";
			volumeStrong = "1.5 * (0.5 * 	CustomSoundController1)";
			volumeWeak = "0";
		};
		class EM_intro2_s_am_3_4
		{
			isVariants = 0;
			links[] = {"", "EM_intro2_s_am_3_4_AMBIENTB_0"};
		};
		class EM_intro2_s_am_3_4_AMBIENTB_0
		{
			folder = "Human";
			loop = 0;
			soundStrong = "EM_intro2_s_am_3_4_AMBIENTB_0_S";
			soundWeak = "EM_intro2_s_am_3_4_AMBIENTB_0_S";
			text = "No wonder the Colonel wants a cover story.";
			textRaw = "No wonder the Colonel wants a cover story.";
			type = "AMBIENTB";
			variants = 1;
			vehicle = "EM_intro2_s_am_3_4_AMBIENTB_0_F";
			volumeStrong = "1.5 * (0.5 * 	CustomSoundController1)";
			volumeWeak = "0";
		};
		class EM_intro2_s_am_3_5
		{
			isVariants = 0;
			links[] = {"", "EM_intro2_s_am_3_5_AMBIENTB_0"};
		};
		class EM_intro2_s_am_3_5_AMBIENTB_0
		{
			folder = "Human";
			loop = 0;
			soundStrong = "EM_intro2_s_am_3_5_AMBIENTB_0_S";
			soundWeak = "EM_intro2_s_am_3_5_AMBIENTB_0_S";
			text = "Any idea how long that thing's been down there?";
			textRaw = "Any idea how long that thing's been down there?";
			type = "AMBIENTB";
			variants = 1;
			vehicle = "EM_intro2_s_am_3_5_AMBIENTB_0_F";
			volumeStrong = "1.5 * (0.5 * 	CustomSoundController1)";
			volumeWeak = "0";
		};
		class EM_intro2_s_am_3_6
		{
			isVariants = 0;
			links[] = {"", "EM_intro2_s_am_3_6_SQUAD_0"};
		};
		class EM_intro2_s_am_3_6_SQUAD_0
		{
			folder = "Human";
			loop = 0;
			soundStrong = "EM_intro2_s_am_3_6_SQUAD_0_S";
			soundWeak = "EM_intro2_s_am_3_6_SQUAD_0_S";
			text = "Not really.";
			textRaw = "Not really.";
			type = "SQUAD";
			variants = 1;
			vehicle = "EM_intro2_s_am_3_6_SQUAD_0_F";
			volumeStrong = "1.5 * (0.5 * 	CustomSoundController1)";
			volumeWeak = "0";
		};
		class EM_intro2_s_am_3_7
		{
			isVariants = 0;
			links[] = {"", "EM_intro2_s_am_3_7_SQUAD_0"};
		};
		class EM_intro2_s_am_3_7_SQUAD_0
		{
			folder = "Human";
			loop = 0;
			soundStrong = "EM_intro2_s_am_3_7_SQUAD_0_S";
			soundWeak = "EM_intro2_s_am_3_7_SQUAD_0_S";
			text = "The scientists are asking for engineers to dig a pilot hole.";
			textRaw = "The scientists are asking for engineers to dig a pilot hole.";
			type = "SQUAD";
			variants = 1;
			vehicle = "EM_intro2_s_am_3_7_SQUAD_0_F";
			volumeStrong = "1.5 * (0.5 * 	CustomSoundController1)";
			volumeWeak = "0";
		};
		class EM_intro2_s_am_3_8
		{
			isVariants = 0;
			links[] = {"", "EM_intro2_s_am_3_8_SQUAD_0"};
		};
		class EM_intro2_s_am_3_8_SQUAD_0
		{
			folder = "Human";
			loop = 0;
			soundStrong = "EM_intro2_s_am_3_8_SQUAD_0_S";
			soundWeak = "EM_intro2_s_am_3_8_SQUAD_0_S";
			text = "If it's down that deep...? Could be it's always been there.";
			textRaw = "If it's down that deep...? Could be it's always been there.";
			type = "SQUAD";
			variants = 1;
			vehicle = "EM_intro2_s_am_3_8_SQUAD_0_F";
			volumeStrong = "1.5 * (0.5 * 	CustomSoundController1)";
			volumeWeak = "0";
		};
		class EM_intro2_s_am_3_loop
		{
			isVariants = 0;
			links[] = {"", "EM_intro2_s_am_3_loop_SQUAD_0", "EM_intro2_s_am_3_loop_SQUAD_1", "EM_intro2_s_am_3_loop_SQUAD_2"};
		};
		class EM_intro2_s_am_3_loop_SQUAD_0
		{
			folder = "Human";
			loop = 0;
			soundStrong = "EM_intro2_s_am_3_loop_SQUAD_0_S";
			soundWeak = "EM_intro2_s_am_3_loop_SQUAD_0_S";
			text = "Affirmative. I shit you not. Go and ask Jankowski.";
			textRaw = "Affirmative. I shit you not. Go and ask Jankowski.";
			type = "SQUAD";
			variants = 1;
			vehicle = "EM_intro2_s_am_3_loop_SQUAD_0_F";
			volumeStrong = "1.5 * (0.5 * 	CustomSoundController1)";
			volumeWeak = "0";
		};
		class EM_intro2_s_am_3_loop_SQUAD_1
		{
			folder = "Human";
			loop = 0;
			soundStrong = "EM_intro2_s_am_3_loop_SQUAD_1_S";
			soundWeak = "EM_intro2_s_am_3_loop_SQUAD_1_S";
			text = "Copy. I heard it from Jankowski. He says he's seen it.";
			textRaw = "Copy. I heard it from Jankowski. He says he's seen it.";
			type = "SQUAD";
			variants = 1;
			vehicle = "EM_intro2_s_am_3_loop_SQUAD_1_F";
			volumeStrong = "1.5 * (0.5 * 	CustomSoundController1)";
			volumeWeak = "0";
		};
		class EM_intro2_s_am_3_loop_SQUAD_2
		{
			folder = "Human";
			loop = 0;
			soundStrong = "EM_intro2_s_am_3_loop_SQUAD_2_S";
			soundWeak = "EM_intro2_s_am_3_loop_SQUAD_2_S";
			text = "Copy. I talked to Jankowski, he got a good look at it.";
			textRaw = "Copy. I talked to Jankowski he got a good look at it.";
			type = "SQUAD";
			variants = 1;
			vehicle = "EM_intro2_s_am_3_loop_SQUAD_2_F";
			volumeStrong = "1.5 * (0.5 * 	CustomSoundController1)";
			volumeWeak = "0";
		};
		class EM_Mission_FreeRoam1_01
		{
			displayName = "class EM_Mission_FreeRoam1_01";
			folder = "Missions";
			loop = 0;
			soundStrong = "EM_Mission_FreeRoam1_01_S";
			soundWeak = "EM_Mission_FreeRoam1_01_S";
			texture = "\a3\UI_F_Contact\Data\CfgContact\EM\Signals\EM_Mission_FreeRoam1_01_ca.paa";
			type = "Missions";
			variants = 1;
			vehicle = "EM_Mission_FreeRoam1_01_F";
			volumeStrong = "1.5 * (0.3 * 	CustomSoundController1)";
			volumeWeak = "0";
		};
		class EM_Mission_FreeRoam2_01
		{
			displayName = "class EM_Mission_FreeRoam2_01";
			folder = "Missions";
			loop = 0;
			soundStrong = "EM_Mission_FreeRoam2_01_S";
			soundWeak = "EM_Mission_FreeRoam2_01_S";
			texture = "\a3\UI_F_Contact\Data\CfgContact\EM\Signals\EM_Mission_FreeRoam2_01_ca.paa";
			type = "Missions";
			variants = 1;
			vehicle = "EM_Mission_FreeRoam2_01_F";
			volumeStrong = "1.5 * (0.3 * 	CustomSoundController1)";
			volumeWeak = "0";
		};
		class EM_Mission_Intro1_01
		{
			displayName = "class EM_Mission_Intro1_01";
			folder = "Missions";
			loop = 0;
			soundStrong = "EM_Mission_Intro1_01_S";
			soundWeak = "EM_Mission_Intro1_01_S";
			texture = "\a3\UI_F_Contact\Data\CfgContact\EM\Signals\EM_Mission_Intro1_01_ca.paa";
			type = "Missions";
			variants = 1;
			vehicle = "EM_Mission_Intro1_01_F";
			volumeStrong = "1.5 * (0.3 * 	CustomSoundController1)";
			volumeWeak = "0";
		};
		class EM_Mission_Intro2_01
		{
			displayName = "class EM_Mission_Intro2_01";
			folder = "Missions";
			loop = 0;
			soundStrong = "EM_Mission_Intro2_01_S";
			soundWeak = "EM_Mission_Intro2_01_S";
			texture = "\a3\UI_F_Contact\Data\CfgContact\EM\Signals\EM_Mission_Intro2_01_ca.paa";
			type = "Missions";
			variants = 1;
			vehicle = "EM_Mission_Intro2_01_F";
			volumeStrong = "1.5 * (0.3 * 	CustomSoundController1)";
			volumeWeak = "0";
		};
		class EM_Mission_Intro3_01
		{
			displayName = "class EM_Mission_Intro3_01";
			folder = "Missions";
			loop = 0;
			soundStrong = "EM_Mission_Intro3_01_S";
			soundWeak = "EM_Mission_Intro3_01_S";
			texture = "\a3\UI_F_Contact\Data\CfgContact\EM\Signals\EM_Mission_Intro3_01_ca.paa";
			type = "Missions";
			variants = 1;
			vehicle = "EM_Mission_Intro3_01_F";
			volumeStrong = "1.5 * (0.3 * 	CustomSoundController1)";
			volumeWeak = "0";
		};
		class EM_Mission_Outro2_01
		{
			displayName = "class EM_Mission_Outro2_01";
			folder = "Missions";
			loop = 0;
			soundStrong = "EM_Mission_Outro2_01_S";
			soundWeak = "EM_Mission_Outro2_01_S";
			texture = "\a3\UI_F_Contact\Data\CfgContact\EM\Signals\EM_Mission_Outro2_01_ca.paa";
			type = "Missions";
			variants = 1;
			vehicle = "EM_Mission_Outro2_01_F";
			volumeStrong = "1.5 * (0.3 * 	CustomSoundController1)";
			volumeWeak = "0";
		};
		class EM_Mission_Outro3_01
		{
			displayName = "class EM_Mission_Outro3_01";
			folder = "Missions";
			loop = 0;
			soundStrong = "EM_Mission_Outro3_01_S";
			soundWeak = "EM_Mission_Outro3_01_S";
			texture = "\a3\UI_F_Contact\Data\CfgContact\EM\Signals\EM_Mission_Outro3_01_ca.paa";
			type = "Missions";
			variants = 1;
			vehicle = "EM_Mission_Outro3_01_F";
			volumeStrong = "1.5 * (0.3 * 	CustomSoundController1)";
			volumeWeak = "0";
		};
		class EM_Missions
		{
			isVariants = 1;
			links[] = {"", "EM_Mission_Intro1_01", "EM_Mission_Intro2_01", "EM_Mission_Intro3_01", "EM_Mission_FreeRoam1_01", "EM_Mission_FreeRoam2_01", "EM_Mission_Outro2_01", "EM_Mission_Outro3_01"};
		};
		class EM_MorseCode_01
		{
			displayName = "class EM_MorseCode_01";
			folder = "Human";
			loop = 1;
			soundStrong = "EM_MorseCode_01_S";
			soundWeak = "EM_MorseCode_01_S";
			type = "Human";
			variants = 1;
			vehicle = "EM_MorseCode_01_F";
			volumeStrong = "1.5 * (0.25 * (	CustomSoundController1 factor [0,1]) * 	CustomSoundController1 max 0)";
			volumeWeak = "0";
		};
		class EM_MotherShip_01
		{
			displayName = "class EM_MotherShip_01";
			folder = "Alien";
			loop = 1;
			soundStrong = "EM_MotherShip_01_S";
			soundWeak = "EM_MotherShip_01_S";
			type = "Alien";
			variants = 1;
			vehicle = "EM_MotherShip_01_F";
			volumeStrong = "1.5 * (0.13 * (	CustomSoundController1 factor [0.1,1]))";
			volumeWeak = "0";
		};
		class EM_Mothership_01_Tracking_01
		{
			displayName = "class EM_Mothership_01_Tracking_01";
			folder = "Alien";
			loop = 1;
			soundStrong = "EM_Mothership_01_Tracking_01_S";
			soundWeak = "EM_Mothership_01_Tracking_01_W";
			type = "Alien";
			variants = 2;
			vehicle = "EM_Mothership_01_Tracking_01_F";
			volumeStrong = "(1.5 * (1.45 * (	CustomSoundController1 factor [0.25,1]))) min 0.6";
			volumeWeak = "1.5 * (1 * (	CustomSoundController1 factor [0.65,0.1]) * 	CustomSoundController1 max 0)";
		};
		class EM_Noise
		{
			isVariants = 1;
			links[] = {"", "EM_Base_Noise_01", "EM_Base_Noise_01_Outro3", "EM_Send_Signal_01", "EM_Send_Hack_01", "EM_Silence_01"};
		};
		class EM_outro2_aet_jammed
		{
			isVariants = 0;
			links[] = {"", "EM_outro2_aet_jammed_SOLDIERA_0"};
		};
		class EM_outro2_aet_jammed_2
		{
			isVariants = 0;
			links[] = {"", "EM_outro2_aet_jammed_2_SOLDIERB_0"};
		};
		class EM_outro2_aet_jammed_2_SOLDIERB_0
		{
			folder = "Human";
			loop = 0;
			soundStrong = "EM_outro2_aet_jammed_2_SOLDIERB_0_S";
			soundWeak = "EM_outro2_aet_jammed_2_SOLDIERB_0_S";
			text = "Gray Wolf. Foxtrot. Someone's interfering with our comms! Respond! Authenticate: Bravo, Echo! Over.";
			textRaw = "Gray Wolf. Foxtrot. Someone's interfering with our comms! Respond! Authenticate: Bravo Echo! Over.";
			type = "SOLDIERB";
			variants = 1;
			vehicle = "EM_outro2_aet_jammed_2_SOLDIERB_0_F";
			volumeStrong = "1.5 * (0.5 * 	CustomSoundController1)";
			volumeWeak = "0";
		};
		class EM_outro2_aet_jammed_3
		{
			isVariants = 0;
			links[] = {"", "EM_outro2_aet_jammed_3_SOLDIERC_0"};
		};
		class EM_outro2_aet_jammed_3_SOLDIERC_0
		{
			folder = "Human";
			loop = 0;
			soundStrong = "EM_outro2_aet_jammed_3_SOLDIERC_0_S";
			soundWeak = "EM_outro2_aet_jammed_3_SOLDIERC_0_S";
			text = "Golf to Gray Wolf. Suspect COMSEC compromised! Can you confirm and authenticate on Charlie, Romeo? Over.";
			textRaw = "Golf to Gray Wolf. Suspect COMSEC compromised! Can you confirm and authenticate on Charlie Romeo? Over.";
			type = "SOLDIERC";
			variants = 1;
			vehicle = "EM_outro2_aet_jammed_3_SOLDIERC_0_F";
			volumeStrong = "1.5 * (0.5 * 	CustomSoundController1)";
			volumeWeak = "0";
		};
		class EM_outro2_aet_jammed_4
		{
			isVariants = 0;
			links[] = {"", "EM_outro2_aet_jammed_4_SOLDIERA_0"};
		};
		class EM_outro2_aet_jammed_4_SOLDIERA_0
		{
			folder = "Human";
			loop = 0;
			soundStrong = "EM_outro2_aet_jammed_4_SOLDIERA_0_S";
			soundWeak = "EM_outro2_aet_jammed_4_SOLDIERA_0_S";
			text = "Gray Wolf, this is Delta. The Russians? They're screwing with our net! Advise and, er, authenticate: November, Tango! Over.";
			textRaw = "Gray Wolf this is Delta. The Russians? They're screwing with our net! Advise and er authenticate: November Tango! Over.";
			type = "SOLDIERA";
			variants = 1;
			vehicle = "EM_outro2_aet_jammed_4_SOLDIERA_0_F";
			volumeStrong = "1.5 * (0.5 * 	CustomSoundController1)";
			volumeWeak = "0";
		};
		class EM_outro2_aet_jammed_SOLDIERA_0
		{
			folder = "Human";
			loop = 0;
			soundStrong = "EM_outro2_aet_jammed_SOLDIERA_0_S";
			soundWeak = "EM_outro2_aet_jammed_SOLDIERA_0_S";
			text = "Gray Wolf, it's Echo Actual. There's suspicious transmissions on our channel. Verify and authenticate: Foxtrot, Yankee. Over.";
			textRaw = "Gray Wolf it's Echo Actual. There's suspicious transmissions on our channel. Verify and authenticate: Foxtrot Yankee. Over.";
			type = "SOLDIERA";
			variants = 1;
			vehicle = "EM_outro2_aet_jammed_SOLDIERA_0_F";
			volumeStrong = "1.5 * (0.5 * 	CustomSoundController1)";
			volumeWeak = "0";
		};
		class EM_outro2_aet_resuming
		{
			isVariants = 0;
			links[] = {"", "EM_outro2_aet_resuming_SOLDIERA_0"};
		};
		class EM_outro2_aet_resuming_2
		{
			isVariants = 0;
			links[] = {"", "EM_outro2_aet_resuming_2_SOLDIERB_0"};
		};
		class EM_outro2_aet_resuming_2_SOLDIERB_0
		{
			folder = "Human";
			loop = 0;
			soundStrong = "EM_outro2_aet_resuming_2_SOLDIERB_0_S";
			soundWeak = "EM_outro2_aet_resuming_2_SOLDIERB_0_S";
			text = "Gray Wolf. Nothing heard, we're following protocol and adopting radio silence. Resuming the mission as instructed. Out.";
			textRaw = "Gray Wolf. Nothing heard we're following protocol and adopting radio silence. Resuming the mission as instructed. Out.";
			type = "SOLDIERB";
			variants = 1;
			vehicle = "EM_outro2_aet_resuming_2_SOLDIERB_0_F";
			volumeStrong = "1.5 * (0.5 * 	CustomSoundController1)";
			volumeWeak = "0";
		};
		class EM_outro2_aet_resuming_3
		{
			isVariants = 0;
			links[] = {"", "EM_outro2_aet_resuming_3_SOLDIERC_0"};
		};
		class EM_outro2_aet_resuming_3_SOLDIERC_0
		{
			folder = "Human";
			loop = 0;
			soundStrong = "EM_outro2_aet_resuming_3_SOLDIERC_0_S";
			soundWeak = "EM_outro2_aet_resuming_3_SOLDIERC_0_S";
			text = "Nothing heard, Gray Wolf, we're going dark. Observing radio silence and executing prior orders. Out.";
			textRaw = "Nothing heard Gray Wolf we're going dark. Observing radio silence and executing prior orders. Out.";
			type = "SOLDIERC";
			variants = 1;
			vehicle = "EM_outro2_aet_resuming_3_SOLDIERC_0_F";
			volumeStrong = "1.5 * (0.5 * 	CustomSoundController1)";
			volumeWeak = "0";
		};
		class EM_outro2_aet_resuming_4
		{
			isVariants = 0;
			links[] = {"", "EM_outro2_aet_resuming_4_SOLDIERA_0"};
		};
		class EM_outro2_aet_resuming_4_SOLDIERA_0
		{
			folder = "Human";
			loop = 0;
			soundStrong = "EM_outro2_aet_resuming_4_SOLDIERA_0_S";
			soundWeak = "EM_outro2_aet_resuming_4_SOLDIERA_0_S";
			text = "Do not answer, Gray Wolf, we're assuming radio silence and engaging primary target Kilo, Out.";
			textRaw = "Do not answer Gray Wolf we're assuming radio silence and engaging primary target Kilo Out.";
			type = "SOLDIERA";
			variants = 1;
			vehicle = "EM_outro2_aet_resuming_4_SOLDIERA_0_F";
			volumeStrong = "1.5 * (0.5 * 	CustomSoundController1)";
			volumeWeak = "0";
		};
		class EM_outro2_aet_resuming_SOLDIERA_0
		{
			folder = "Human";
			loop = 0;
			soundStrong = "EM_outro2_aet_resuming_SOLDIERA_0_S";
			soundWeak = "EM_outro2_aet_resuming_SOLDIERA_0_S";
			text = "Gray Wolf. Do not answer, our station's staying on task and going silent. Out.";
			textRaw = "Gray Wolf. Do not answer our station's staying on task and going silent. Out.";
			type = "SOLDIERA";
			variants = 1;
			vehicle = "EM_outro2_aet_resuming_SOLDIERA_0_F";
			volumeStrong = "1.5 * (0.5 * 	CustomSoundController1)";
			volumeWeak = "0";
		};
		class EM_outro2_fox_2
		{
			isVariants = 0;
			links[] = {"", "EM_outro2_fox_2_SOLDIERA_0", "EM_outro2_fox_2_HQ_0"};
		};
		class EM_outro2_fox_2_HQ_0
		{
			folder = "Human";
			loop = 0;
			soundStrong = "EM_outro2_fox_2_HQ_0_S";
			soundWeak = "EM_outro2_fox_2_HQ_0_S";
			text = "Gray Wolf to Hawk 1. Minimize! Keep those damn 90's, pop-culture references to yourself! Out.";
			textRaw = "Gray Wolf to Hawk 1. Minimize! Keep those damn 90's pop-culture references to yourself! Out.";
			type = "HQ";
			variants = 1;
			vehicle = "EM_outro2_fox_2_HQ_0_F";
			volumeStrong = "1.5 * (0.5 * 	CustomSoundController1)";
			volumeWeak = "0";
		};
		class EM_outro2_fox_2_SOLDIERA_0
		{
			folder = "Human";
			loop = 0;
			soundStrong = "EM_outro2_fox_2_SOLDIERA_0_S";
			soundWeak = "EM_outro2_fox_2_SOLDIERA_0_S";
			text = "Eagle 20, Fox 2!";
			textRaw = "Eagle 20 Fox 2!";
			type = "SOLDIERA";
			variants = 1;
			vehicle = "EM_outro2_fox_2_SOLDIERA_0_F";
			volumeStrong = "1.5 * (0.5 * 	CustomSoundController1)";
			volumeWeak = "0";
		};
		class EM_outro2_ldf_counterattack
		{
			isVariants = 1;
			links[] = {"", "EM_outro2_ldf_counterattack_HQ_0", "EM_outro2_ldf_counterattack_HQ_1", "EM_outro2_ldf_counterattack_HQ_2", "EM_outro2_ldf_counterattack_HQ_3", "EM_outro2_ldf_counterattack_HQ_4"};
		};
		class EM_outro2_ldf_counterattack_HQ_0
		{
			folder = "Human";
			loop = 0;
			soundStrong = "EM_outro2_ldf_counterattack_HQ_0_S";
			soundWeak = "EM_outro2_ldf_counterattack_HQ_0_S";
			text = "Gray Wolf to all callsigns.";
			textRaw = "Gray Wolf to all callsigns.";
			type = "HQ";
			variants = 1;
			vehicle = "EM_outro2_ldf_counterattack_HQ_0_F";
			volumeStrong = "1.5 * (0.5 * 	CustomSoundController1)";
			volumeWeak = "0";
		};
		class EM_outro2_ldf_counterattack_HQ_1
		{
			folder = "Human";
			loop = 0;
			soundStrong = "EM_outro2_ldf_counterattack_HQ_1_S";
			soundWeak = "EM_outro2_ldf_counterattack_HQ_1_S";
			text = "Regroup! Fall back to the objective rally point.";
			textRaw = "Regroup! Fall back to the objective rally point.";
			type = "HQ";
			variants = 1;
			vehicle = "EM_outro2_ldf_counterattack_HQ_1_F";
			volumeStrong = "1.5 * (0.5 * 	CustomSoundController1)";
			volumeWeak = "0";
		};
		class EM_outro2_ldf_counterattack_HQ_2
		{
			folder = "Human";
			loop = 0;
			soundStrong = "EM_outro2_ldf_counterattack_HQ_2_S";
			soundWeak = "EM_outro2_ldf_counterattack_HQ_2_S";
			text = "Reassess, and regain control of the situation! Do not let those Russian dogs dig in.";
			textRaw = "Reassess and regain control of the situation! Do not let those Russian dogs dig-in.";
			type = "HQ";
			variants = 1;
			vehicle = "EM_outro2_ldf_counterattack_HQ_2_F";
			volumeStrong = "1.5 * (0.5 * 	CustomSoundController1)";
			volumeWeak = "0";
		};
		class EM_outro2_ldf_counterattack_HQ_3
		{
			folder = "Human";
			loop = 0;
			soundStrong = "EM_outro2_ldf_counterattack_HQ_3_S";
			soundWeak = "EM_outro2_ldf_counterattack_HQ_3_S";
			text = "Expect moderate resistance.";
			textRaw = "Expect moderate resistance.";
			type = "HQ";
			variants = 1;
			vehicle = "EM_outro2_ldf_counterattack_HQ_3_F";
			volumeStrong = "1.5 * (0.5 * 	CustomSoundController1)";
			volumeWeak = "0";
		};
		class EM_outro2_ldf_counterattack_HQ_4
		{
			folder = "Human";
			loop = 0;
			soundStrong = "EM_outro2_ldf_counterattack_HQ_4_S";
			soundWeak = "EM_outro2_ldf_counterattack_HQ_4_S";
			text = "Push forwards, drive them back, and destroy that... that thing! Out.";
			textRaw = "Push forwards drive them back and destroy that - that thing! Out.";
			type = "HQ";
			variants = 1;
			vehicle = "EM_outro2_ldf_counterattack_HQ_4_F";
			volumeStrong = "1.5 * (0.5 * 	CustomSoundController1)";
			volumeWeak = "0";
		};
		class EM_outro2_probe_explosives
		{
			isVariants = 0;
			links[] = {"", "EM_outro2_probe_explosives_HQ_0", "EM_outro2_probe_explosives_SOLDIERB_0", "EM_outro2_probe_explosives_HQ_1", "EM_outro2_probe_explosives_SOLDIERB_1", "EM_outro2_probe_explosives_HQ_2", "EM_outro2_probe_explosives_SOLDIERB_2"};
		};
		class EM_outro2_probe_explosives_HQ_0
		{
			folder = "Human";
			loop = 0;
			soundStrong = "EM_outro2_probe_explosives_HQ_0_S";
			soundWeak = "EM_outro2_probe_explosives_HQ_0_S";
			text = "Black Fox. This is Gray Wolf. Report! Are your charges set? Over.";
			textRaw = "Black Fox. This is Gray Wolf. Report! Are your charges set? Over.";
			type = "HQ";
			variants = 1;
			vehicle = "EM_outro2_probe_explosives_HQ_0_F";
			volumeStrong = "1.5 * (0.5 * 	CustomSoundController1)";
			volumeWeak = "0";
		};
		class EM_outro2_probe_explosives_HQ_1
		{
			folder = "Human";
			loop = 0;
			soundStrong = "EM_outro2_probe_explosives_HQ_1_S";
			soundWeak = "EM_outro2_probe_explosives_HQ_1_S";
			text = "What's the hold up?";
			textRaw = "What's the hold up?";
			type = "HQ";
			variants = 1;
			vehicle = "EM_outro2_probe_explosives_HQ_1_F";
			volumeStrong = "1.5 * (0.5 * 	CustomSoundController1)";
			volumeWeak = "0";
		};
		class EM_outro2_probe_explosives_HQ_2
		{
			folder = "Human";
			loop = 0;
			soundStrong = "EM_outro2_probe_explosives_HQ_2_S";
			soundWeak = "EM_outro2_probe_explosives_HQ_2_S";
			text = "No excuses, Captain! It's imperative we stop the Russians from claiming the factory! Clear? Over.";
			textRaw = "No excuses Captain! It's imperative we stop the Russians from claiming the factory! Clear? Over.";
			type = "HQ";
			variants = 1;
			vehicle = "EM_outro2_probe_explosives_HQ_2_F";
			volumeStrong = "1.5 * (0.5 * 	CustomSoundController1)";
			volumeWeak = "0";
		};
		class EM_outro2_probe_explosives_SOLDIERB_0
		{
			folder = "Human";
			loop = 0;
			soundStrong = "EM_outro2_probe_explosives_SOLDIERB_0_S";
			soundWeak = "EM_outro2_probe_explosives_SOLDIERB_0_S";
			text = "Negative, not yet, we are trying to rig them to the roots.";
			textRaw = "Negative not yet we are trying to rig them to the roots.";
			type = "SOLDIERB";
			variants = 1;
			vehicle = "EM_outro2_probe_explosives_SOLDIERB_0_F";
			volumeStrong = "1.5 * (0.5 * 	CustomSoundController1)";
			volumeWeak = "0";
		};
		class EM_outro2_probe_explosives_SOLDIERB_1
		{
			folder = "Human";
			loop = 0;
			soundStrong = "EM_outro2_probe_explosives_SOLDIERB_1_S";
			soundWeak = "EM_outro2_probe_explosives_SOLDIERB_1_S";
			text = "There's lots of... floating debris. It's complicating the job, Colonel!";
			textRaw = "There's lots of... floating debris. It's complicating the job Colonel!";
			type = "SOLDIERB";
			variants = 1;
			vehicle = "EM_outro2_probe_explosives_SOLDIERB_1_F";
			volumeStrong = "1.5 * (0.5 * 	CustomSoundController1)";
			volumeWeak = "0";
		};
		class EM_outro2_probe_explosives_SOLDIERB_2
		{
			folder = "Human";
			loop = 0;
			soundStrong = "EM_outro2_probe_explosives_SOLDIERB_2_S";
			soundWeak = "EM_outro2_probe_explosives_SOLDIERB_2_S";
			text = "Copy that! Once they're in place we'll retreat back towards the perimeter and blow it all to hell! Out.";
			textRaw = "Copy that! Once they're in place we'll retreat back towards the perimeter and blow it all to hell! Out.";
			type = "SOLDIERB";
			variants = 1;
			vehicle = "EM_outro2_probe_explosives_SOLDIERB_2_F";
			volumeStrong = "1.5 * (0.5 * 	CustomSoundController1)";
			volumeWeak = "0";
		};
		class EM_outro2_probe_target
		{
			isVariants = 1;
			links[] = {"", "EM_outro2_probe_target_HQ_0", "EM_outro2_probe_target_HQ_1"};
		};
		class EM_outro2_probe_target_HQ_0
		{
			folder = "Human";
			loop = 0;
			soundStrong = "EM_outro2_probe_target_HQ_0_S";
			soundWeak = "EM_outro2_probe_target_HQ_0_S";
			text = "Gray Wolf to all units.";
			textRaw = "Gray Wolf to all units.";
			type = "HQ";
			variants = 1;
			vehicle = "EM_outro2_probe_target_HQ_0_F";
			volumeStrong = "1.5 * (0.5 * 	CustomSoundController1)";
			volumeWeak = "0";
		};
		class EM_outro2_probe_target_HQ_1
		{
			folder = "Human";
			loop = 0;
			soundStrong = "EM_outro2_probe_target_HQ_1_S";
			soundWeak = "EM_outro2_probe_target_HQ_1_S";
			text = "Redirect your heavy weapons fire on priority target Kilo! Out.";
			textRaw = "Redirect your heavy weapons fire on priority target Kilo! Out.";
			type = "HQ";
			variants = 1;
			vehicle = "EM_outro2_probe_target_HQ_1_F";
			volumeStrong = "1.5 * (0.5 * 	CustomSoundController1)";
			volumeWeak = "0";
		};
		class EM_outro3_am_aan_radio_news
		{
			isVariants = 0;
			links[] = {"", "EM_outro3_am_aan_radio_news_NEWSREADERB_0", "EM_outro3_am_aan_radio_news_NEWSREADERB_1", "EM_outro3_am_aan_radio_news_NEWSREADERB_2", "EM_outro3_am_aan_radio_news_NEWSREADERB_3", "EM_outro3_am_aan_radio_news_NEWSREADERB_4", "EM_outro3_am_aan_radio_news_NEWSREADERB_5", "EM_outro3_am_aan_radio_news_NEWSREADERB_6", "EM_outro3_am_aan_radio_news_NEWSREADERB_7", "EM_outro3_am_aan_radio_news_NEWSREADERB_8"};
		};
		class EM_outro3_am_aan_radio_news_merged
		{
			displayName = "class EM_outro3_am_aan_radio_news_merged";
			folder = "Credits";
			loop = 0;
			soundStrong = "EM_outro3_am_aan_radio_news_merged_S";
			soundWeak = "EM_outro3_am_aan_radio_news_merged_S";
			type = "Credits";
			variants = 1;
			vehicle = "EM_outro3_am_aan_radio_news_merged_F";
			volumeStrong = "1.1 * (	CustomSoundController1 factor [0,0.1])";
			volumeWeak = "0";
		};
		class EM_outro3_am_aan_radio_news_NEWSREADERB_0
		{
			folder = "Human";
			loop = 0;
			soundStrong = "EM_outro3_am_aan_radio_news_NEWSREADERB_0_S";
			soundWeak = "EM_outro3_am_aan_radio_news_NEWSREADERB_0_S";
			text = "Six weeks have passed and still there is no scientific consensus on the mysterious objects collected by The Visitors.";
			textRaw = "Six weeks have passed and still there is no scientific consensus on the mysterious objects collected by The Visitors.";
			type = "NEWSREADERB";
			variants = 1;
			vehicle = "EM_outro3_am_aan_radio_news_NEWSREADERB_0_F";
			volumeStrong = "1.5 * (	CustomSoundController1 factor [0,0.25])";
			volumeWeak = "0";
		};
		class EM_outro3_am_aan_radio_news_NEWSREADERB_1
		{
			folder = "Human";
			loop = 0;
			soundStrong = "EM_outro3_am_aan_radio_news_NEWSREADERB_1_S";
			soundWeak = "EM_outro3_am_aan_radio_news_NEWSREADERB_1_S";
			text = "One popular theory is that the giant, subterranean, root-like networks were a type of Von Neumann probe which swept across the cosmos billions of years ago, when the Earth was one large supercontinent.";
			textRaw = "One popular theory is that the giant subterranean root-like networks were a type of Von Neumann probe which swept across the cosmos billions of years ago when the Earth was one large supercontinent.";
			type = "NEWSREADERB";
			variants = 1;
			vehicle = "EM_outro3_am_aan_radio_news_NEWSREADERB_1_F";
			volumeStrong = "1.5 * (	CustomSoundController1 factor [0,0.25])";
			volumeWeak = "0";
		};
		class EM_outro3_am_aan_radio_news_NEWSREADERB_2
		{
			folder = "Human";
			loop = 0;
			soundStrong = "EM_outro3_am_aan_radio_news_NEWSREADERB_2_S";
			soundWeak = "EM_outro3_am_aan_radio_news_NEWSREADERB_2_S";
			text = "It is thought that all 11 of the alien craft were positioned above these artifacts, buried deep beneath the ground at seemingly random locations, around the world.";
			textRaw = "It is thought that all 11 of the alien craft were positioned above these artifacts buried deep beneath the ground at seemingly random locations around the world.";
			type = "NEWSREADERB";
			variants = 1;
			vehicle = "EM_outro3_am_aan_radio_news_NEWSREADERB_2_F";
			volumeStrong = "1.5 * (	CustomSoundController1 factor [0,0.25])";
			volumeWeak = "0";
		};
		class EM_outro3_am_aan_radio_news_NEWSREADERB_3
		{
			folder = "Human";
			loop = 0;
			soundStrong = "EM_outro3_am_aan_radio_news_NEWSREADERB_3_S";
			soundWeak = "EM_outro3_am_aan_radio_news_NEWSREADERB_3_S";
			text = "Of these, half were situated at sea and only the big three were located near populated areas...";
			textRaw = "Of these half were situated at sea and only the big three were located near populated areas...";
			type = "NEWSREADERB";
			variants = 1;
			vehicle = "EM_outro3_am_aan_radio_news_NEWSREADERB_3_F";
			volumeStrong = "1.5 * (	CustomSoundController1 factor [0,0.25])";
			volumeWeak = "0";
		};
		class EM_outro3_am_aan_radio_news_NEWSREADERB_4
		{
			folder = "Human";
			loop = 0;
			soundStrong = "EM_outro3_am_aan_radio_news_NEWSREADERB_4_S";
			soundWeak = "EM_outro3_am_aan_radio_news_NEWSREADERB_4_S";
			text = "One left behind, following the Hopi Incident in Livonia, has now almost completely withered away, presumably due to measures taken by The Vistors themselves.";
			textRaw = "One left behind following the Hopi Incident in Livonia has now almost completely withered away presumably due to measures taken by The Vistors themselves.";
			type = "NEWSREADERB";
			variants = 1;
			vehicle = "EM_outro3_am_aan_radio_news_NEWSREADERB_4_F";
			volumeStrong = "1.5 * (	CustomSoundController1 factor [0,0.25])";
			volumeWeak = "0";
		};
		class EM_outro3_am_aan_radio_news_NEWSREADERB_5
		{
			folder = "Human";
			loop = 0;
			soundStrong = "EM_outro3_am_aan_radio_news_NEWSREADERB_5_S";
			soundWeak = "EM_outro3_am_aan_radio_news_NEWSREADERB_5_S";
			text = "Stories continue to abound regarding this failed 'extraction', with many claiming authorities made a discovery some weeks before First Contact was established.";
			textRaw = "Stories continue to abound regarding this failed 'extraction' with many claiming authorities made a discovery some weeks before First Contact was established.";
			type = "NEWSREADERB";
			variants = 1;
			vehicle = "EM_outro3_am_aan_radio_news_NEWSREADERB_5_F";
			volumeStrong = "1.5 * (	CustomSoundController1 factor [0,0.25])";
			volumeWeak = "0";
		};
		class EM_outro3_am_aan_radio_news_NEWSREADERB_6
		{
			folder = "Human";
			loop = 0;
			soundStrong = "EM_outro3_am_aan_radio_news_NEWSREADERB_6_S";
			soundWeak = "EM_outro3_am_aan_radio_news_NEWSREADERB_6_S";
			text = "Reliable information on events, however, is difficult to confirm...";
			textRaw = "Reliable information on events however is difficult to confirm...";
			type = "NEWSREADERB";
			variants = 1;
			vehicle = "EM_outro3_am_aan_radio_news_NEWSREADERB_6_F";
			volumeStrong = "1.5 * (	CustomSoundController1 factor [0,0.25])";
			volumeWeak = "0";
		};
		class EM_outro3_am_aan_radio_news_NEWSREADERB_7
		{
			folder = "Human";
			loop = 0;
			soundStrong = "EM_outro3_am_aan_radio_news_NEWSREADERB_7_S";
			soundWeak = "EM_outro3_am_aan_radio_news_NEWSREADERB_7_S";
			text = "Russian military units remain active beyond the Kaliningrad border and biosecurity protocols mean access to the Visitation Site is restricted.";
			textRaw = "Russian military units remain active beyond the Kaliningrad border and biosecurity protocols mean access to the Visitation Site is restricted.";
			type = "NEWSREADERB";
			variants = 1;
			vehicle = "EM_outro3_am_aan_radio_news_NEWSREADERB_7_F";
			volumeStrong = "1.5 * (	CustomSoundController1 factor [0,0.25])";
			volumeWeak = "0";
		};
		class EM_outro3_am_aan_radio_news_NEWSREADERB_8
		{
			folder = "Human";
			loop = 0;
			soundStrong = "EM_outro3_am_aan_radio_news_NEWSREADERB_8_S";
			soundWeak = "EM_outro3_am_aan_radio_news_NEWSREADERB_8_S";
			text = "Tensions elsewhere in the country remain high, with CSAT member state, Belarus, also intervening to prevent cross-contamination - leading to widespread fears that legitimate concerns are being exploited in a strategic powerplay.";
			textRaw = "Tensions elsewhere in the country remain high with CSAT member state Belarus also intervening to prevent cross-contamination - leading to widespread fears that legitimate concerns are being exploited in a strategic powerplay.";
			type = "NEWSREADERB";
			variants = 1;
			vehicle = "EM_outro3_am_aan_radio_news_NEWSREADERB_8_F";
			volumeStrong = "1.5 * (	CustomSoundController1 factor [0,0.25])";
			volumeWeak = "0";
		};
		class EM_outro3_am_cbn_radio_news
		{
			isVariants = 0;
			links[] = {"", "EM_outro3_am_cbn_radio_news_NEWSREADERC_0", "EM_outro3_am_cbn_radio_news_NEWSREADERC_1", "EM_outro3_am_cbn_radio_news_NEWSREADERC_2", "EM_outro3_am_cbn_radio_news_NEWSREADERC_3", "EM_outro3_am_cbn_radio_news_NEWSREADERC_4", "EM_outro3_am_cbn_radio_news_NEWSREADERC_5", "EM_outro3_am_cbn_radio_news_NEWSREADERC_6", "EM_outro3_am_cbn_radio_news_NEWSREADERC_7", "EM_outro3_am_cbn_radio_news_NEWSREADERC_8", "EM_outro3_am_cbn_radio_news_NEWSREADERC_9"};
		};
		class EM_outro3_am_cbn_radio_news_merged
		{
			displayName = "class EM_outro3_am_cbn_radio_news_merged";
			folder = "Credits";
			loop = 0;
			soundStrong = "EM_outro3_am_cbn_radio_news_merged_S";
			soundWeak = "EM_outro3_am_cbn_radio_news_merged_S";
			type = "Credits";
			variants = 1;
			vehicle = "EM_outro3_am_cbn_radio_news_merged_F";
			volumeStrong = "1.2 * (	CustomSoundController1 factor [0,0.1])";
			volumeWeak = "0";
		};
		class EM_outro3_am_cbn_radio_news_NEWSREADERC_0
		{
			folder = "Human";
			loop = 0;
			soundStrong = "EM_outro3_am_cbn_radio_news_NEWSREADERC_0_S";
			soundWeak = "EM_outro3_am_cbn_radio_news_NEWSREADERC_0_S";
			text = "In other news, Astra, the international space agency, has confirmed reports that they will go ahead with the ambitious 'Acaronar' project.";
			textRaw = "In other news Astra the international space agency has confirmed reports that they will go ahead with the ambitious 'Acaronar' project.";
			type = "NEWSREADERC";
			variants = 1;
			vehicle = "EM_outro3_am_cbn_radio_news_NEWSREADERC_0_F";
			volumeStrong = "1.5 * (	CustomSoundController1 factor [0,0.25])";
			volumeWeak = "0";
		};
		class EM_outro3_am_cbn_radio_news_NEWSREADERC_1
		{
			folder = "Human";
			loop = 0;
			soundStrong = "EM_outro3_am_cbn_radio_news_NEWSREADERC_1_S";
			soundWeak = "EM_outro3_am_cbn_radio_news_NEWSREADERC_1_S";
			text = "Previously cancelled due to soaring costs, the undertaking has now been resumed, with significant financial support coming in from almost every nation in the world.";
			textRaw = "Previously cancelled due to soaring costs the undertaking has now been resumed with significant financial support coming in from almost every nation in the world.";
			type = "NEWSREADERC";
			variants = 1;
			vehicle = "EM_outro3_am_cbn_radio_news_NEWSREADERC_1_F";
			volumeStrong = "1.5 * (	CustomSoundController1 factor [0,0.25])";
			volumeWeak = "0";
		};
		class EM_outro3_am_cbn_radio_news_NEWSREADERC_2
		{
			folder = "Human";
			loop = 0;
			soundStrong = "EM_outro3_am_cbn_radio_news_NEWSREADERC_2_S";
			soundWeak = "EM_outro3_am_cbn_radio_news_NEWSREADERC_2_S";
			text = "Dubbed the 'journey to end all journeys', Acaronar will see a series of miniscule, waferlike robotic probes sent deep into space at a velocity one quarter the speed of light.";
			textRaw = "Dubbed the 'journey to end all journeys' Acaronar will see a series of miniscule waferlike robotic probes sent deep into space at a velocity one quarter the speed of light.";
			type = "NEWSREADERC";
			variants = 1;
			vehicle = "EM_outro3_am_cbn_radio_news_NEWSREADERC_2_F";
			volumeStrong = "1.5 * (	CustomSoundController1 factor [0,0.25])";
			volumeWeak = "0";
		};
		class EM_outro3_am_cbn_radio_news_NEWSREADERC_3
		{
			folder = "Human";
			loop = 0;
			soundStrong = "EM_outro3_am_cbn_radio_news_NEWSREADERC_3_S";
			soundWeak = "EM_outro3_am_cbn_radio_news_NEWSREADERC_3_S";
			text = "The spacecraft themselves, designed by Vantland Industries, weigh as little as a gram and boast a series of special sensors, which will send information back to Earth.";
			textRaw = "The spacecraft themselves designed by Vantland Industries weigh as little as a gram and boast a series of special sensors which will send information back to Earth.";
			type = "NEWSREADERC";
			variants = 1;
			vehicle = "EM_outro3_am_cbn_radio_news_NEWSREADERC_3_F";
			volumeStrong = "1.5 * (	CustomSoundController1 factor [0,0.25])";
			volumeWeak = "0";
		};
		class EM_outro3_am_cbn_radio_news_NEWSREADERC_4
		{
			folder = "Human";
			loop = 0;
			soundStrong = "EM_outro3_am_cbn_radio_news_NEWSREADERC_4_S";
			soundWeak = "EM_outro3_am_cbn_radio_news_NEWSREADERC_4_S";
			text = "The first step, however, involves constructing a huge, 10 kilometer laser array in orbit - employing 70 gigawatts of power.";
			textRaw = "The first step however involves constructing a huge 10 kilometer laser array in orbit - employing 70 gigawatts of power.";
			type = "NEWSREADERC";
			variants = 1;
			vehicle = "EM_outro3_am_cbn_radio_news_NEWSREADERC_4_F";
			volumeStrong = "1.5 * (	CustomSoundController1 factor [0,0.25])";
			volumeWeak = "0";
		};
		class EM_outro3_am_cbn_radio_news_NEWSREADERC_5
		{
			folder = "Human";
			loop = 0;
			soundStrong = "EM_outro3_am_cbn_radio_news_NEWSREADERC_5_S";
			soundWeak = "EM_outro3_am_cbn_radio_news_NEWSREADERC_5_S";
			text = "The probes will be propelled by the laser and could return photos of planets near Proxima Centauri as early as the 2060's.";
			textRaw = "The probes will be propelled by the laser and could return photos of planets in the Centauri galaxies as early as the 2060's.";
			type = "NEWSREADERC";
			variants = 1;
			vehicle = "EM_outro3_am_cbn_radio_news_NEWSREADERC_5_F";
			volumeStrong = "1.5 * (	CustomSoundController1 factor [0,0.25])";
			volumeWeak = "0";
		};
		class EM_outro3_am_cbn_radio_news_NEWSREADERC_6
		{
			folder = "Human";
			loop = 0;
			soundStrong = "EM_outro3_am_cbn_radio_news_NEWSREADERC_6_S";
			soundWeak = "EM_outro3_am_cbn_radio_news_NEWSREADERC_6_S";
			text = "Lead engineer on the project, Katya Rosing, has said components for the laser array will be launched on the anniversary of First Contact in the summer of next year.";
			textRaw = "Lead engineer on the project Katya Rosing has said components for the laser array will be launched on the anniversary of First Contact in the summer of next year.";
			type = "NEWSREADERC";
			variants = 1;
			vehicle = "EM_outro3_am_cbn_radio_news_NEWSREADERC_6_F";
			volumeStrong = "1.5 * (	CustomSoundController1 factor [0,0.25])";
			volumeWeak = "0";
		};
		class EM_outro3_am_cbn_radio_news_NEWSREADERC_7
		{
			folder = "Human";
			loop = 0;
			soundStrong = "EM_outro3_am_cbn_radio_news_NEWSREADERC_7_S";
			soundWeak = "EM_outro3_am_cbn_radio_news_NEWSREADERC_7_S";
			text = "A parallel project, 'Eter', is also commencing this week.";
			textRaw = "A parallel project 'Eter' is also commencing this week.";
			type = "NEWSREADERC";
			variants = 1;
			vehicle = "EM_outro3_am_cbn_radio_news_NEWSREADERC_7_F";
			volumeStrong = "1.5 * (	CustomSoundController1 factor [0,0.25])";
			volumeWeak = "0";
		};
		class EM_outro3_am_cbn_radio_news_NEWSREADERC_8
		{
			folder = "Human";
			loop = 0;
			soundStrong = "EM_outro3_am_cbn_radio_news_NEWSREADERC_8_S";
			soundWeak = "EM_outro3_am_cbn_radio_news_NEWSREADERC_8_S";
			text = "It hopes to trace the trajectory of The Visitors within the Sagittarius constellation - and then, to beam a message at a fixed point using the medium of neutrinos.";
			textRaw = "It hopes to trace the trajectory of The Visitors within the Sagittarius constellation - and then to beam a message at a fixed point using the medium of neutrinos.";
			type = "NEWSREADERC";
			variants = 1;
			vehicle = "EM_outro3_am_cbn_radio_news_NEWSREADERC_8_F";
			volumeStrong = "1.5 * (	CustomSoundController1 factor [0,0.25])";
			volumeWeak = "0";
		};
		class EM_outro3_am_cbn_radio_news_NEWSREADERC_9
		{
			folder = "Human";
			loop = 0;
			soundStrong = "EM_outro3_am_cbn_radio_news_NEWSREADERC_9_S";
			soundWeak = "EM_outro3_am_cbn_radio_news_NEWSREADERC_9_S";
			text = "The message itself will be composed by the UN's 'One Voice' council and marks the first of many attempts to reconnect with alien life.";
			textRaw = "The message itself will be composed by the UN's 'One Voice' council and marks the first of many attempts to reconnect with alien life.";
			type = "NEWSREADERC";
			variants = 1;
			vehicle = "EM_outro3_am_cbn_radio_news_NEWSREADERC_9_F";
			volumeStrong = "1.5 * (	CustomSoundController1 factor [0,0.25])";
			volumeWeak = "0";
		};
		class EM_outro3_am_conspiracy_radio
		{
			isVariants = 0;
			links[] = {"", "EM_outro3_am_conspiracy_radio_THEORIST_0", "EM_outro3_am_conspiracy_radio_THEORIST_1", "EM_outro3_am_conspiracy_radio_THEORIST_2", "EM_outro3_am_conspiracy_radio_THEORIST_3", "EM_outro3_am_conspiracy_radio_THEORIST_4", "EM_outro3_am_conspiracy_radio_THEORIST_5", "EM_outro3_am_conspiracy_radio_THEORIST_6", "EM_outro3_am_conspiracy_radio_THEORIST_7", "EM_outro3_am_conspiracy_radio_THEORIST_8", "EM_outro3_am_conspiracy_radio_THEORIST_9", "EM_outro3_am_conspiracy_radio_THEORIST_10", "EM_outro3_am_conspiracy_radio_THEORIST_11", "EM_outro3_am_conspiracy_radio_THEORIST_12", "EM_outro3_am_conspiracy_radio_THEORIST_13", "EM_outro3_am_conspiracy_radio_THEORIST_14", "EM_outro3_am_conspiracy_radio_THEORIST_15", "EM_outro3_am_conspiracy_radio_THEORIST_16", "EM_outro3_am_conspiracy_radio_THEORIST_17", "EM_outro3_am_conspiracy_radio_THEORIST_18", "EM_outro3_am_conspiracy_radio_THEORIST_19", "EM_outro3_am_conspiracy_radio_THEORIST_20", "EM_outro3_am_conspiracy_radio_THEORIST_21"};
		};
		class EM_outro3_am_conspiracy_radio_merged
		{
			displayName = "class EM_outro3_am_conspiracy_radio_merged";
			folder = "Credits";
			loop = 0;
			soundStrong = "EM_outro3_am_conspiracy_radio_merged_S";
			soundWeak = "EM_outro3_am_conspiracy_radio_merged_S";
			type = "Credits";
			variants = 1;
			vehicle = "EM_outro3_am_conspiracy_radio_merged_F";
			volumeStrong = "1.2 * (	CustomSoundController1 factor [0,0.1])";
			volumeWeak = "0";
		};
		class EM_outro3_am_conspiracy_radio_THEORIST_0
		{
			folder = "Human";
			loop = 0;
			soundStrong = "EM_outro3_am_conspiracy_radio_THEORIST_0_S";
			soundWeak = "EM_outro3_am_conspiracy_radio_THEORIST_0_S";
			text = "Rise and shine, out there!";
			textRaw = "Rise and shine out there!";
			type = "THEORIST";
			variants = 1;
			vehicle = "EM_outro3_am_conspiracy_radio_THEORIST_0_F";
			volumeStrong = "1.5 * (	CustomSoundController1 factor [0,0.25])";
			volumeWeak = "0";
		};
		class EM_outro3_am_conspiracy_radio_THEORIST_1
		{
			folder = "Human";
			loop = 0;
			soundStrong = "EM_outro3_am_conspiracy_radio_THEORIST_1_S";
			soundWeak = "EM_outro3_am_conspiracy_radio_THEORIST_1_S";
			text = "Truthseekers, believers-now-knowers, fellow CT's, and counterculture revolutionaires!";
			textRaw = "Truthseekers believers-now-knowers fellow CT's and counterculture revolutionaires!";
			type = "THEORIST";
			variants = 1;
			vehicle = "EM_outro3_am_conspiracy_radio_THEORIST_1_F";
			volumeStrong = "1.5 * (	CustomSoundController1 factor [0,0.25])";
			volumeWeak = "0";
		};
		class EM_outro3_am_conspiracy_radio_THEORIST_10
		{
			folder = "Human";
			loop = 0;
			soundStrong = "EM_outro3_am_conspiracy_radio_THEORIST_10_S";
			soundWeak = "EM_outro3_am_conspiracy_radio_THEORIST_10_S";
			text = "Those Ruskies stole a page straight out of our own playbook, man.";
			textRaw = "Those Ruskies stole a page straight from our own playbook man.";
			type = "THEORIST";
			variants = 1;
			vehicle = "EM_outro3_am_conspiracy_radio_THEORIST_10_F";
			volumeStrong = "1.5 * (	CustomSoundController1 factor [0,0.25])";
			volumeWeak = "0";
		};
		class EM_outro3_am_conspiracy_radio_THEORIST_11
		{
			folder = "Human";
			loop = 0;
			soundStrong = "EM_outro3_am_conspiracy_radio_THEORIST_11_S";
			soundWeak = "EM_outro3_am_conspiracy_radio_THEORIST_11_S";
			text = "Deny everything.";
			textRaw = "Deny everything.";
			type = "THEORIST";
			variants = 1;
			vehicle = "EM_outro3_am_conspiracy_radio_THEORIST_11_F";
			volumeStrong = "1.5 * (	CustomSoundController1 factor [0,0.25])";
			volumeWeak = "0";
		};
		class EM_outro3_am_conspiracy_radio_THEORIST_12
		{
			folder = "Human";
			loop = 0;
			soundStrong = "EM_outro3_am_conspiracy_radio_THEORIST_12_S";
			soundWeak = "EM_outro3_am_conspiracy_radio_THEORIST_12_S";
			text = "Deny the probes growing underneath our feet!";
			textRaw = "Deny the probes growing underneath our feet!";
			type = "THEORIST";
			variants = 1;
			vehicle = "EM_outro3_am_conspiracy_radio_THEORIST_12_F";
			volumeStrong = "1.5 * (	CustomSoundController1 factor [0,0.25])";
			volumeWeak = "0";
		};
		class EM_outro3_am_conspiracy_radio_THEORIST_13
		{
			folder = "Human";
			loop = 0;
			soundStrong = "EM_outro3_am_conspiracy_radio_THEORIST_13_S";
			soundWeak = "EM_outro3_am_conspiracy_radio_THEORIST_13_S";
			text = "And the UN?";
			textRaw = "And the UN?";
			type = "THEORIST";
			variants = 1;
			vehicle = "EM_outro3_am_conspiracy_radio_THEORIST_13_F";
			volumeStrong = "1.5 * (	CustomSoundController1 factor [0,0.25])";
			volumeWeak = "0";
		};
		class EM_outro3_am_conspiracy_radio_THEORIST_14
		{
			folder = "Human";
			loop = 0;
			soundStrong = "EM_outro3_am_conspiracy_radio_THEORIST_14_S";
			soundWeak = "EM_outro3_am_conspiracy_radio_THEORIST_14_S";
			text = "They'll keep it quiet...";
			textRaw = "They'll keep it quiet...";
			type = "THEORIST";
			variants = 1;
			vehicle = "EM_outro3_am_conspiracy_radio_THEORIST_14_F";
			volumeStrong = "1.5 * (	CustomSoundController1 factor [0,0.25])";
			volumeWeak = "0";
		};
		class EM_outro3_am_conspiracy_radio_THEORIST_15
		{
			folder = "Human";
			loop = 0;
			soundStrong = "EM_outro3_am_conspiracy_radio_THEORIST_15_S";
			soundWeak = "EM_outro3_am_conspiracy_radio_THEORIST_15_S";
			text = "Those neutrino messages? Somebody's gotta crack 'em.";
			textRaw = "Those neutrino messages? Somebody's gonna crack 'em.";
			type = "THEORIST";
			variants = 1;
			vehicle = "EM_outro3_am_conspiracy_radio_THEORIST_15_F";
			volumeStrong = "1.5 * (	CustomSoundController1 factor [0,0.25])";
			volumeWeak = "0";
		};
		class EM_outro3_am_conspiracy_radio_THEORIST_16
		{
			folder = "Human";
			loop = 0;
			soundStrong = "EM_outro3_am_conspiracy_radio_THEORIST_16_S";
			soundWeak = "EM_outro3_am_conspiracy_radio_THEORIST_16_S";
			text = "And y'know, when they do, we ain't gonna hear about it.";
			textRaw = "And y'know when they do we're not gonna hear about it.";
			type = "THEORIST";
			variants = 1;
			vehicle = "EM_outro3_am_conspiracy_radio_THEORIST_16_F";
			volumeStrong = "1.5 * (	CustomSoundController1 factor [0,0.25])";
			volumeWeak = "0";
		};
		class EM_outro3_am_conspiracy_radio_THEORIST_17
		{
			folder = "Human";
			loop = 0;
			soundStrong = "EM_outro3_am_conspiracy_radio_THEORIST_17_S";
			soundWeak = "EM_outro3_am_conspiracy_radio_THEORIST_17_S";
			text = "Maybe, these things are telling the entire universe how weak our planet is? Or, how easy it'd be to invade?";
			textRaw = "Maybe these things are telling the entire universe how weak our planet is? Or how easy it'd be to invade?";
			type = "THEORIST";
			variants = 1;
			vehicle = "EM_outro3_am_conspiracy_radio_THEORIST_17_F";
			volumeStrong = "1.5 * (	CustomSoundController1 factor [0,0.25])";
			volumeWeak = "0";
		};
		class EM_outro3_am_conspiracy_radio_THEORIST_18
		{
			folder = "Human";
			loop = 0;
			soundStrong = "EM_outro3_am_conspiracy_radio_THEORIST_18_S";
			soundWeak = "EM_outro3_am_conspiracy_radio_THEORIST_18_S";
			text = "Think about it.";
			textRaw = "Think about it.";
			type = "THEORIST";
			variants = 1;
			vehicle = "EM_outro3_am_conspiracy_radio_THEORIST_18_F";
			volumeStrong = "1.5 * (	CustomSoundController1 factor [0,0.25])";
			volumeWeak = "0";
		};
		class EM_outro3_am_conspiracy_radio_THEORIST_19
		{
			folder = "Human";
			loop = 0;
			soundStrong = "EM_outro3_am_conspiracy_radio_THEORIST_19_S";
			soundWeak = "EM_outro3_am_conspiracy_radio_THEORIST_19_S";
			text = "In Livonia, the army tried to destroy a probe, to stop it sending out more intel!";
			textRaw = "In Livonia the army tried to destroy a probe to stop it sending out more intel!";
			type = "THEORIST";
			variants = 1;
			vehicle = "EM_outro3_am_conspiracy_radio_THEORIST_19_F";
			volumeStrong = "1.5 * (	CustomSoundController1 factor [0,0.25])";
			volumeWeak = "0";
		};
		class EM_outro3_am_conspiracy_radio_THEORIST_2
		{
			folder = "Human";
			loop = 0;
			soundStrong = "EM_outro3_am_conspiracy_radio_THEORIST_2_S";
			soundWeak = "EM_outro3_am_conspiracy_radio_THEORIST_2_S";
			text = "It's day 42 of me saying 'I told you so', and what a great summer it is to be alive!";
			textRaw = "It's day 42 of me saying 'I told you so' and what a great summer it is to be alive!";
			type = "THEORIST";
			variants = 1;
			vehicle = "EM_outro3_am_conspiracy_radio_THEORIST_2_F";
			volumeStrong = "1.5 * (	CustomSoundController1 factor [0,0.25])";
			volumeWeak = "0";
		};
		class EM_outro3_am_conspiracy_radio_THEORIST_20
		{
			folder = "Human";
			loop = 0;
			soundStrong = "EM_outro3_am_conspiracy_radio_THEORIST_20_S";
			soundWeak = "EM_outro3_am_conspiracy_radio_THEORIST_20_S";
			text = "Imagine! Cosmic war parties are probably converging on the Earth as I speak...";
			textRaw = "Imagine! Cosmic war parties are probably converging on the Earth as I speak...";
			type = "THEORIST";
			variants = 1;
			vehicle = "EM_outro3_am_conspiracy_radio_THEORIST_20_F";
			volumeStrong = "1.5 * (	CustomSoundController1 factor [0,0.25])";
			volumeWeak = "0";
		};
		class EM_outro3_am_conspiracy_radio_THEORIST_21
		{
			folder = "Human";
			loop = 0;
			soundStrong = "EM_outro3_am_conspiracy_radio_THEORIST_21_S";
			soundWeak = "EM_outro3_am_conspiracy_radio_THEORIST_21_S";
			text = "Preppers, I'm talking to you, don't stop prepping, guys.";
			textRaw = "Preppers I'm talking to you don't stop prepping guys.";
			type = "THEORIST";
			variants = 1;
			vehicle = "EM_outro3_am_conspiracy_radio_THEORIST_21_F";
			volumeStrong = "1.5 * (	CustomSoundController1 factor [0,0.25])";
			volumeWeak = "0";
		};
		class EM_outro3_am_conspiracy_radio_THEORIST_3
		{
			folder = "Human";
			loop = 0;
			soundStrong = "EM_outro3_am_conspiracy_radio_THEORIST_3_S";
			soundWeak = "EM_outro3_am_conspiracy_radio_THEORIST_3_S";
			text = "So, okay, er, what are we gonna talk about?";
			textRaw = "So okay er what do we wanna talk about?";
			type = "THEORIST";
			variants = 1;
			vehicle = "EM_outro3_am_conspiracy_radio_THEORIST_3_F";
			volumeStrong = "1.5 * (	CustomSoundController1 factor [0,0.25])";
			volumeWeak = "0";
		};
		class EM_outro3_am_conspiracy_radio_THEORIST_4
		{
			folder = "Human";
			loop = 0;
			soundStrong = "EM_outro3_am_conspiracy_radio_THEORIST_4_S";
			soundWeak = "EM_outro3_am_conspiracy_radio_THEORIST_4_S";
			text = "The summit in Buenos Aires? Well, I didn't get an invite...";
			textRaw = "The summit in Buenos Aires? Well I didn't get an invite...";
			type = "THEORIST";
			variants = 1;
			vehicle = "EM_outro3_am_conspiracy_radio_THEORIST_4_F";
			volumeStrong = "1.5 * (	CustomSoundController1 factor [0,0.25])";
			volumeWeak = "0";
		};
		class EM_outro3_am_conspiracy_radio_THEORIST_5
		{
			folder = "Human";
			loop = 0;
			soundStrong = "EM_outro3_am_conspiracy_radio_THEORIST_5_S";
			soundWeak = "EM_outro3_am_conspiracy_radio_THEORIST_5_S";
			text = "A bunch of exploiticians, all pretending like they never knew about us never being alone. Hell...";
			textRaw = "A bunch of exploiticians all pretending like they never knew about us never bein' alone. Hell...";
			type = "THEORIST";
			variants = 1;
			vehicle = "EM_outro3_am_conspiracy_radio_THEORIST_5_F";
			volumeStrong = "1.5 * (	CustomSoundController1 factor [0,0.25])";
			volumeWeak = "0";
		};
		class EM_outro3_am_conspiracy_radio_THEORIST_6
		{
			folder = "Human";
			loop = 0;
			soundStrong = "EM_outro3_am_conspiracy_radio_THEORIST_6_S";
			soundWeak = "EM_outro3_am_conspiracy_radio_THEORIST_6_S";
			text = "I mean - talk about awkward, right?";
			textRaw = "I mean - talk about awkward right?";
			type = "THEORIST";
			variants = 1;
			vehicle = "EM_outro3_am_conspiracy_radio_THEORIST_6_F";
			volumeStrong = "1.5 * (	CustomSoundController1 factor [0,0.25])";
			volumeWeak = "0";
		};
		class EM_outro3_am_conspiracy_radio_THEORIST_7
		{
			folder = "Human";
			loop = 0;
			soundStrong = "EM_outro3_am_conspiracy_radio_THEORIST_7_S";
			soundWeak = "EM_outro3_am_conspiracy_radio_THEORIST_7_S";
			text = "And that business down at Olom, you heard it here first, folks.";
			textRaw = "And that business down at Olom you heard it here first folks.";
			type = "THEORIST";
			variants = 1;
			vehicle = "EM_outro3_am_conspiracy_radio_THEORIST_7_F";
			volumeStrong = "1.5 * (	CustomSoundController1 factor [0,0.25])";
			volumeWeak = "0";
		};
		class EM_outro3_am_conspiracy_radio_THEORIST_8
		{
			folder = "Human";
			loop = 0;
			soundStrong = "EM_outro3_am_conspiracy_radio_THEORIST_8_S";
			soundWeak = "EM_outro3_am_conspiracy_radio_THEORIST_8_S";
			text = "Yours truly, I been saying it and I been saying it.";
			textRaw = "Yours truly I been saying it and I been saying it.";
			type = "THEORIST";
			variants = 1;
			vehicle = "EM_outro3_am_conspiracy_radio_THEORIST_8_F";
			volumeStrong = "1.5 * (	CustomSoundController1 factor [0,0.25])";
			volumeWeak = "0";
		};
		class EM_outro3_am_conspiracy_radio_THEORIST_9
		{
			folder = "Human";
			loop = 0;
			soundStrong = "EM_outro3_am_conspiracy_radio_THEORIST_9_S";
			soundWeak = "EM_outro3_am_conspiracy_radio_THEORIST_9_S";
			text = "NNDM. Never No Damn Meteor!";
			textRaw = "NNDM. Never No Damn Meteor!";
			type = "THEORIST";
			variants = 1;
			vehicle = "EM_outro3_am_conspiracy_radio_THEORIST_9_F";
			volumeStrong = "1.5 * (	CustomSoundController1 factor [0,0.25])";
			volumeWeak = "0";
		};
		class EM_outro3_am_polish_radio_news
		{
			isVariants = 0;
			links[] = {"", "EM_outro3_am_polish_radio_news_NEWSREADERA_0", "EM_outro3_am_polish_radio_news_NEWSREADERA_1", "EM_outro3_am_polish_radio_news_NEWSREADERA_2", "EM_outro3_am_polish_radio_news_NEWSREADERA_3", "EM_outro3_am_polish_radio_news_NEWSREADERA_4", "EM_outro3_am_polish_radio_news_NEWSREADERA_5", "EM_outro3_am_polish_radio_news_NEWSREADERA_6", "EM_outro3_am_polish_radio_news_NEWSREADERA_7", "EM_outro3_am_polish_radio_news_NEWSREADERA_8", "EM_outro3_am_polish_radio_news_NEWSREADERA_9"};
		};
		class EM_outro3_am_polish_radio_news_merged
		{
			displayName = "class EM_outro3_am_polish_radio_news_merged";
			folder = "Credits";
			loop = 0;
			soundStrong = "EM_outro3_am_polish_radio_news_merged_S";
			soundWeak = "EM_outro3_am_polish_radio_news_merged_S";
			type = "Credits";
			variants = 1;
			vehicle = "EM_outro3_am_polish_radio_news_merged_F";
			volumeStrong = "1.2 * (	CustomSoundController1 factor [0,0.1])";
			volumeWeak = "0";
		};
		class EM_outro3_am_polish_radio_news_NEWSREADERA_0
		{
			folder = "Human";
			loop = 0;
			soundStrong = "EM_outro3_am_polish_radio_news_NEWSREADERA_0_S";
			soundWeak = "EM_outro3_am_polish_radio_news_NEWSREADERA_0_S";
			text = "Good morning, Livonia.";
			textRaw = "Good morning Livonia.";
			type = "NEWSREADERA";
			variants = 1;
			vehicle = "EM_outro3_am_polish_radio_news_NEWSREADERA_0_F";
			volumeStrong = "1.5 * (	CustomSoundController1 factor [0,0.25])";
			volumeWeak = "0";
		};
		class EM_outro3_am_polish_radio_news_NEWSREADERA_1
		{
			folder = "Human";
			loop = 0;
			soundStrong = "EM_outro3_am_polish_radio_news_NEWSREADERA_1_S";
			soundWeak = "EM_outro3_am_polish_radio_news_NEWSREADERA_1_S";
			text = "You're listening to Talk FM, and I'm Filip Oleski. Here is the news.";
			textRaw = "You're listening to Liwonia FM and I'm Filip Oleski. Here is the news.";
			type = "NEWSREADERA";
			variants = 1;
			vehicle = "EM_outro3_am_polish_radio_news_NEWSREADERA_1_F";
			volumeStrong = "1.5 * (	CustomSoundController1 factor [0,0.25])";
			volumeWeak = "0";
		};
		class EM_outro3_am_polish_radio_news_NEWSREADERA_2
		{
			folder = "Human";
			loop = 0;
			soundStrong = "EM_outro3_am_polish_radio_news_NEWSREADERA_2_S";
			soundWeak = "EM_outro3_am_polish_radio_news_NEWSREADERA_2_S";
			text = "Prime minister Natasza Palka has again apologized for the army's premature response to The Visitors.";
			textRaw = "Prime minister Natasza Palka has again apologized for the army's premature response to The Visitors.";
			type = "NEWSREADERA";
			variants = 1;
			vehicle = "EM_outro3_am_polish_radio_news_NEWSREADERA_2_F";
			volumeStrong = "1.5 * (	CustomSoundController1 factor [0,0.25])";
			volumeWeak = "0";
		};
		class EM_outro3_am_polish_radio_news_NEWSREADERA_3
		{
			folder = "Human";
			loop = 0;
			soundStrong = "EM_outro3_am_polish_radio_news_NEWSREADERA_3_S";
			soundWeak = "EM_outro3_am_polish_radio_news_NEWSREADERA_3_S";
			text = "Speaking yesterday at the UN's Post Arrival Action Summit in Buenos Aires, she said that an unfortunate breakdown in communications had indirectly led to the tragic events following First Contact.";
			textRaw = "Speaking yesterday at the UN's Post Arrival Action Summit in Buenos Aires she said that an unfortunate breakdown in communications had indirectly led to the tragic events following First Contact.";
			type = "NEWSREADERA";
			variants = 1;
			vehicle = "EM_outro3_am_polish_radio_news_NEWSREADERA_3_F";
			volumeStrong = "1.5 * (	CustomSoundController1 factor [0,0.25])";
			volumeWeak = "0";
		};
		class EM_outro3_am_polish_radio_news_NEWSREADERA_4
		{
			folder = "Human";
			loop = 0;
			soundStrong = "EM_outro3_am_polish_radio_news_NEWSREADERA_4_S";
			soundWeak = "EM_outro3_am_polish_radio_news_NEWSREADERA_4_S";
			text = "This, she claimed, was further complicated by tensions with the US after Exercise Electron, and Russian infractions across the Kaliningrad border.";
			textRaw = "This she claimed was further complicated by tensions with the US after Exercise Electron and Russian infractions across the Kaliningrad border.";
			type = "NEWSREADERA";
			variants = 1;
			vehicle = "EM_outro3_am_polish_radio_news_NEWSREADERA_4_F";
			volumeStrong = "1.5 * (	CustomSoundController1 factor [0,0.25])";
			volumeWeak = "0";
		};
		class EM_outro3_am_polish_radio_news_NEWSREADERA_5
		{
			folder = "Human";
			loop = 0;
			soundStrong = "EM_outro3_am_polish_radio_news_NEWSREADERA_5_S";
			soundWeak = "EM_outro3_am_polish_radio_news_NEWSREADERA_5_S";
			text = "According to an official investigation, the information that reached the Ministry of Defense initially implied that The Visitors were hostile.";
			textRaw = "According to an official investigation the information that reached the Ministry of Defense initially implied The Visitors were hostile.";
			type = "NEWSREADERA";
			variants = 1;
			vehicle = "EM_outro3_am_polish_radio_news_NEWSREADERA_5_F";
			volumeStrong = "1.5 * (	CustomSoundController1 factor [0,0.25])";
			volumeWeak = "0";
		};
		class EM_outro3_am_polish_radio_news_NEWSREADERA_6
		{
			folder = "Human";
			loop = 0;
			soundStrong = "EM_outro3_am_polish_radio_news_NEWSREADERA_6_S";
			soundWeak = "EM_outro3_am_polish_radio_news_NEWSREADERA_6_S";
			text = "This erroneous conclusion was based on the high-powered microwave pulse and the misunderstanding that US and local soldiers were fired on first by one of the alien entities.";
			textRaw = "This erroneous conclusion was based on the high-powered microwave pulse and the misunderstanding that US and local soldiers were fired on first by one of the alien entities.";
			type = "NEWSREADERA";
			variants = 1;
			vehicle = "EM_outro3_am_polish_radio_news_NEWSREADERA_6_F";
			volumeStrong = "1.5 * (	CustomSoundController1 factor [0,0.25])";
			volumeWeak = "0";
		};
		class EM_outro3_am_polish_radio_news_NEWSREADERA_7
		{
			folder = "Human";
			loop = 0;
			soundStrong = "EM_outro3_am_polish_radio_news_NEWSREADERA_7_S";
			soundWeak = "EM_outro3_am_polish_radio_news_NEWSREADERA_7_S";
			text = "In response to allegations that future relations with extraterrestrial life had been undermined, Mrs. Palka argued that conditions for a peaceful encounter had been 'less than perfect'.";
			textRaw = "In response to allegations that future relations with extraterrestrial life had been undermined Mrs. Palka argued that conditions for a peaceful encounter had been 'less than perfect'.";
			type = "NEWSREADERA";
			variants = 1;
			vehicle = "EM_outro3_am_polish_radio_news_NEWSREADERA_7_F";
			volumeStrong = "1.5 * (	CustomSoundController1 factor [0,0.25])";
			volumeWeak = "0";
		};
		class EM_outro3_am_polish_radio_news_NEWSREADERA_8
		{
			folder = "Human";
			loop = 0;
			soundStrong = "EM_outro3_am_polish_radio_news_NEWSREADERA_8_S";
			soundWeak = "EM_outro3_am_polish_radio_news_NEWSREADERA_8_S";
			text = "She added that 'it could have happened anywhere', and 'any nation in similar circumstances would have done the same'.";
			textRaw = "She added that 'it could have happened anywhere' and 'any nation in similar circumstances would have done the same'.";
			type = "NEWSREADERA";
			variants = 1;
			vehicle = "EM_outro3_am_polish_radio_news_NEWSREADERA_8_F";
			volumeStrong = "1.5 * (	CustomSoundController1 factor [0,0.25])";
			volumeWeak = "0";
		};
		class EM_outro3_am_polish_radio_news_NEWSREADERA_9
		{
			folder = "Human";
			loop = 0;
			soundStrong = "EM_outro3_am_polish_radio_news_NEWSREADERA_9_S";
			soundWeak = "EM_outro3_am_polish_radio_news_NEWSREADERA_9_S";
			text = "In Andrzejów, ongoing demonstrations against foreign forces turned violent last night as police started to kettle protesters outside the Russian embassy...";
			textRaw = "In Andrzej?w ongoing demonstrations against foreign forces turned violent last night as police started to kettle protesters outside the Russian embassy...";
			type = "NEWSREADERA";
			variants = 1;
			vehicle = "EM_outro3_am_polish_radio_news_NEWSREADERA_9_F";
			volumeStrong = "1.5 * (	CustomSoundController1 factor [0,0.25])";
			volumeWeak = "0";
		};
		class EM_outro3_am_science_chat
		{
			isVariants = 0;
			links[] = {"", "EM_outro3_am_science_chat_SCIENTIST_0", "EM_outro3_am_science_chat_INTERVIEWERB_0", "EM_outro3_am_science_chat_INTERVIEWERB_1", "EM_outro3_am_science_chat_SCIENTIST_1", "EM_outro3_am_science_chat_SCIENTIST_2", "EM_outro3_am_science_chat_INTERVIEWERB_2", "EM_outro3_am_science_chat_SCIENTIST_3", "EM_outro3_am_science_chat_SCIENTIST_4", "EM_outro3_am_science_chat_SCIENTIST_5", "EM_outro3_am_science_chat_INTERVIEWERB_3", "EM_outro3_am_science_chat_SCIENTIST_6", "EM_outro3_am_science_chat_SCIENTIST_7", "EM_outro3_am_science_chat_SCIENTIST_8", "EM_outro3_am_science_chat_SCIENTIST_9"};
		};
		class EM_outro3_am_science_chat_INTERVIEWERB_0
		{
			folder = "Human";
			loop = 0;
			soundStrong = "EM_outro3_am_science_chat_INTERVIEWERB_0_S";
			soundWeak = "EM_outro3_am_science_chat_INTERVIEWERB_0_S";
			text = "Okay, walk us through it, Dr. Rook.";
			textRaw = "Okay walk us through it Dr. Rook.";
			type = "INTERVIEWERB";
			variants = 1;
			vehicle = "EM_outro3_am_science_chat_INTERVIEWERB_0_F";
			volumeStrong = "1.5 * (	CustomSoundController1 factor [0,0.25])";
			volumeWeak = "0";
		};
		class EM_outro3_am_science_chat_INTERVIEWERB_1
		{
			folder = "Human";
			loop = 0;
			soundStrong = "EM_outro3_am_science_chat_INTERVIEWERB_1_S";
			soundWeak = "EM_outro3_am_science_chat_INTERVIEWERB_1_S";
			text = "Is there any noteworthy conjecture?";
			textRaw = "Is there any noteworthy conjecture?";
			type = "INTERVIEWERB";
			variants = 1;
			vehicle = "EM_outro3_am_science_chat_INTERVIEWERB_1_F";
			volumeStrong = "1.5 * (	CustomSoundController1 factor [0,0.25])";
			volumeWeak = "0";
		};
		class EM_outro3_am_science_chat_INTERVIEWERB_2
		{
			folder = "Human";
			loop = 0;
			soundStrong = "EM_outro3_am_science_chat_INTERVIEWERB_2_S";
			soundWeak = "EM_outro3_am_science_chat_INTERVIEWERB_2_S";
			text = "Alright. That's a lot of air miles!";
			textRaw = "Alright. That's a lot of air miles!";
			type = "INTERVIEWERB";
			variants = 1;
			vehicle = "EM_outro3_am_science_chat_INTERVIEWERB_2_F";
			volumeStrong = "1.5 * (	CustomSoundController1 factor [0,0.25])";
			volumeWeak = "0";
		};
		class EM_outro3_am_science_chat_INTERVIEWERB_3
		{
			folder = "Human";
			loop = 0;
			soundStrong = "EM_outro3_am_science_chat_INTERVIEWERB_3_S";
			soundWeak = "EM_outro3_am_science_chat_INTERVIEWERB_3_S";
			text = "And he believes what? That lightspeed isn't a cosmic limit?";
			textRaw = "And he believes what? That lightspeed isn't a cosmic limit?";
			type = "INTERVIEWERB";
			variants = 1;
			vehicle = "EM_outro3_am_science_chat_INTERVIEWERB_3_F";
			volumeStrong = "1.5 * (	CustomSoundController1 factor [0,0.25])";
			volumeWeak = "0";
		};
		class EM_outro3_am_science_chat_merged
		{
			displayName = "class EM_outro3_am_science_chat_merged";
			folder = "Credits";
			loop = 0;
			soundStrong = "EM_outro3_am_science_chat_merged_S";
			soundWeak = "EM_outro3_am_science_chat_merged_S";
			type = "Credits";
			variants = 1;
			vehicle = "EM_outro3_am_science_chat_merged_F";
			volumeStrong = "1.2 * (	CustomSoundController1 factor [0,0.1])";
			volumeWeak = "0";
		};
		class EM_outro3_am_science_chat_SCIENTIST_0
		{
			folder = "Human";
			loop = 0;
			soundStrong = "EM_outro3_am_science_chat_SCIENTIST_0_S";
			soundWeak = "EM_outro3_am_science_chat_SCIENTIST_0_S";
			text = "The big question is, if the Electron Exercises triggered something, how did The Visitors get here so quickly?";
			textRaw = "The big question is if the Electron Exercises triggered something how did The Visitors get here so quickly?";
			type = "SCIENTIST";
			variants = 1;
			vehicle = "EM_outro3_am_science_chat_SCIENTIST_0_F";
			volumeStrong = "1.5 * (	CustomSoundController1 factor [0,0.25])";
			volumeWeak = "0";
		};
		class EM_outro3_am_science_chat_SCIENTIST_1
		{
			folder = "Human";
			loop = 0;
			soundStrong = "EM_outro3_am_science_chat_SCIENTIST_1_S";
			soundWeak = "EM_outro3_am_science_chat_SCIENTIST_1_S";
			text = "At the moment, the scientific community is, well - honestly? It's divided.";
			textRaw = "At the moment the scientific community is well - honestly? It's divided.";
			type = "SCIENTIST";
			variants = 1;
			vehicle = "EM_outro3_am_science_chat_SCIENTIST_1_F";
			volumeStrong = "1.5 * (	CustomSoundController1 factor [0,0.25])";
			volumeWeak = "0";
		};
		class EM_outro3_am_science_chat_SCIENTIST_2
		{
			folder = "Human";
			loop = 0;
			soundStrong = "EM_outro3_am_science_chat_SCIENTIST_2_S";
			soundWeak = "EM_outro3_am_science_chat_SCIENTIST_2_S";
			text = "Famed cosmologist, Moravec, claims they were travelling for hundreds, maybe thousands of years. The buried objects, according to him, only became active once the 11 craft entered our solar system.";
			textRaw = "Famed cosmologist Karl?k Moravec claims they were travelling for hundreds maybe thousands of years. The buried objects according to him only became active once the 11 craft entered our solar system.";
			type = "SCIENTIST";
			variants = 1;
			vehicle = "EM_outro3_am_science_chat_SCIENTIST_2_F";
			volumeStrong = "1.5 * (	CustomSoundController1 factor [0,0.25])";
			volumeWeak = "0";
		};
		class EM_outro3_am_science_chat_SCIENTIST_3
		{
			folder = "Human";
			loop = 0;
			soundStrong = "EM_outro3_am_science_chat_SCIENTIST_3_S";
			soundWeak = "EM_outro3_am_science_chat_SCIENTIST_3_S";
			text = "Yes, it is.";
			textRaw = "Yes it is.";
			type = "SCIENTIST";
			variants = 1;
			vehicle = "EM_outro3_am_science_chat_SCIENTIST_3_F";
			volumeStrong = "1.5 * (	CustomSoundController1 factor [0,0.25])";
			volumeWeak = "0";
		};
		class EM_outro3_am_science_chat_SCIENTIST_4
		{
			folder = "Human";
			loop = 0;
			soundStrong = "EM_outro3_am_science_chat_SCIENTIST_4_S";
			soundWeak = "EM_outro3_am_science_chat_SCIENTIST_4_S";
			text = "His supposition, of course, is in line with what we already know about physics, and it preserves the concept of the speed of light being some unbreakable barrier.";
			textRaw = "His supposition of course is in line with what we already know about physics and it preserves the concept of the speed of light being some unbreakable barrier.";
			type = "SCIENTIST";
			variants = 1;
			vehicle = "EM_outro3_am_science_chat_SCIENTIST_4_F";
			volumeStrong = "1.5 * (	CustomSoundController1 factor [0,0.25])";
			volumeWeak = "0";
		};
		class EM_outro3_am_science_chat_SCIENTIST_5
		{
			folder = "Human";
			loop = 0;
			soundStrong = "EM_outro3_am_science_chat_SCIENTIST_5_S";
			soundWeak = "EM_outro3_am_science_chat_SCIENTIST_5_S";
			text = "However, British astrophysicist Simon Alcroft argues we should not be thinking linearly. It is a known fact that time's relative.";
			textRaw = "However British astrophysicist Simon Alcroft argues we should not be thinking linearly. It is a known fact that time's relative.";
			type = "SCIENTIST";
			variants = 1;
			vehicle = "EM_outro3_am_science_chat_SCIENTIST_5_F";
			volumeStrong = "1.5 * (	CustomSoundController1 factor [0,0.25])";
			volumeWeak = "0";
		};
		class EM_outro3_am_science_chat_SCIENTIST_6
		{
			folder = "Human";
			loop = 0;
			soundStrong = "EM_outro3_am_science_chat_SCIENTIST_6_S";
			soundWeak = "EM_outro3_am_science_chat_SCIENTIST_6_S";
			text = "He does not suggest The Visitors got here at speeds faster than light, no. But rather, that the neutrino messages sent from Earth arrived even before they were sent.";
			textRaw = "He does not suggest The Visitors got here at speeds faster than light no. Nut rather that the neutrino messages sent from Earth arrived even before they were sent.";
			type = "SCIENTIST";
			variants = 1;
			vehicle = "EM_outro3_am_science_chat_SCIENTIST_6_F";
			volumeStrong = "1.5 * (	CustomSoundController1 factor [0,0.25])";
			volumeWeak = "0";
		};
		class EM_outro3_am_science_chat_SCIENTIST_7
		{
			folder = "Human";
			loop = 0;
			soundStrong = "EM_outro3_am_science_chat_SCIENTIST_7_S";
			soundWeak = "EM_outro3_am_science_chat_SCIENTIST_7_S";
			text = "I know, crazy, huh? But it's not...";
			textRaw = "I know crazy huh? But it's not...";
			type = "SCIENTIST";
			variants = 1;
			vehicle = "EM_outro3_am_science_chat_SCIENTIST_7_F";
			volumeStrong = "1.5 * (	CustomSoundController1 factor [0,0.25])";
			volumeWeak = "0";
		};
		class EM_outro3_am_science_chat_SCIENTIST_8
		{
			folder = "Human";
			loop = 0;
			soundStrong = "EM_outro3_am_science_chat_SCIENTIST_8_S";
			soundWeak = "EM_outro3_am_science_chat_SCIENTIST_8_S";
			text = "The dark energy, widely believed to be episodically powering the hidden artifacts on Earth, could have been opening and closing miniature black holes all over the universe.";
			textRaw = "The dark energy widely believed to be episodically powering the hidden artifacts on Earth could have been opening and closing miniature black holes all over the universe.";
			type = "SCIENTIST";
			variants = 1;
			vehicle = "EM_outro3_am_science_chat_SCIENTIST_8_F";
			volumeStrong = "1.5 * (	CustomSoundController1 factor [0,0.25])";
			volumeWeak = "0";
		};
		class EM_outro3_am_science_chat_SCIENTIST_9
		{
			folder = "Human";
			loop = 0;
			soundStrong = "EM_outro3_am_science_chat_SCIENTIST_9_S";
			soundWeak = "EM_outro3_am_science_chat_SCIENTIST_9_S";
			text = "And, I don't need to tell you, those really do open the door to exciting possibilities.";
			textRaw = "And I don't need to tell you those really do open the door to exciting possibilities.";
			type = "SCIENTIST";
			variants = 1;
			vehicle = "EM_outro3_am_science_chat_SCIENTIST_9_F";
			volumeStrong = "1.5 * (	CustomSoundController1 factor [0,0.25])";
			volumeWeak = "0";
		};
		class EM_outro3_am_talkshow_radio
		{
			isVariants = 0;
			links[] = {"", "EM_outro3_am_talkshow_radio_INTERVIEWERA_0", "EM_outro3_am_talkshow_radio_INTERVIEWERA_1", "EM_outro3_am_talkshow_radio_PHYSICIST_0", "EM_outro3_am_talkshow_radio_INTERVIEWERA_2", "EM_outro3_am_talkshow_radio_PHYSICIST_1", "EM_outro3_am_talkshow_radio_PHYSICIST_2", "EM_outro3_am_talkshow_radio_PHYSICIST_3", "EM_outro3_am_talkshow_radio_INTERVIEWERA_3", "EM_outro3_am_talkshow_radio_INTERVIEWERA_4", "EM_outro3_am_talkshow_radio_PHYSICIST_4", "EM_outro3_am_talkshow_radio_PHYSICIST_5", "EM_outro3_am_talkshow_radio_PHYSICIST_6", "EM_outro3_am_talkshow_radio_INTERVIEWERA_5", "EM_outro3_am_talkshow_radio_PHYSICIST_7", "EM_outro3_am_talkshow_radio_INTERVIEWERA_6", "EM_outro3_am_talkshow_radio_PHYSICIST_8", "EM_outro3_am_talkshow_radio_PHYSICIST_9", "EM_outro3_am_talkshow_radio_INTERVIEWERA_7", "EM_outro3_am_talkshow_radio_PHYSICIST_10", "EM_outro3_am_talkshow_radio_INTERVIEWERA_8", "EM_outro3_am_talkshow_radio_INTERVIEWERA_9", "EM_outro3_am_talkshow_radio_INTERVIEWERA_10", "EM_outro3_am_talkshow_radio_PHYSICIST_11", "EM_outro3_am_talkshow_radio_PHYSICIST_12", "EM_outro3_am_talkshow_radio_PHYSICIST_13", "EM_outro3_am_talkshow_radio_PHYSICIST_14"};
		};
		class EM_outro3_am_talkshow_radio_INTERVIEWERA_0
		{
			folder = "Human";
			loop = 0;
			soundStrong = "EM_outro3_am_talkshow_radio_INTERVIEWERA_0_S";
			soundWeak = "EM_outro3_am_talkshow_radio_INTERVIEWERA_0_S";
			text = "In the studio now is Dr. Ian Kesson, a theoretical physicist and eyewitness to the chaotic events in Livonia.";
			textRaw = "In the studio now is Dr. Ian Kesson a theoretical physicist and eyewitness to the chaotic events in Livonia.";
			type = "INTERVIEWERA";
			variants = 1;
			vehicle = "EM_outro3_am_talkshow_radio_INTERVIEWERA_0_F";
			volumeStrong = "1.5 * (	CustomSoundController1 factor [0,0.25])";
			volumeWeak = "0";
		};
		class EM_outro3_am_talkshow_radio_INTERVIEWERA_1
		{
			folder = "Human";
			loop = 0;
			soundStrong = "EM_outro3_am_talkshow_radio_INTERVIEWERA_1_S";
			soundWeak = "EM_outro3_am_talkshow_radio_INTERVIEWERA_1_S";
			text = "Dr. Kesson, welcome to the show.";
			textRaw = "Dr. Kesson welcome to the show.";
			type = "INTERVIEWERA";
			variants = 1;
			vehicle = "EM_outro3_am_talkshow_radio_INTERVIEWERA_1_F";
			volumeStrong = "1.5 * (	CustomSoundController1 factor [0,0.25])";
			volumeWeak = "0";
		};
		class EM_outro3_am_talkshow_radio_INTERVIEWERA_10
		{
			folder = "Human";
			loop = 0;
			soundStrong = "EM_outro3_am_talkshow_radio_INTERVIEWERA_10_S";
			soundWeak = "EM_outro3_am_talkshow_radio_INTERVIEWERA_10_S";
			text = "You didn't know there were 11 ships in total, at the time...";
			textRaw = "You didn't know there were 11 ships in total at the time...";
			type = "INTERVIEWERA";
			variants = 1;
			vehicle = "EM_outro3_am_talkshow_radio_INTERVIEWERA_10_F";
			volumeStrong = "1.5 * (	CustomSoundController1 factor [0,0.25])";
			volumeWeak = "0";
		};
		class EM_outro3_am_talkshow_radio_INTERVIEWERA_2
		{
			folder = "Human";
			loop = 0;
			soundStrong = "EM_outro3_am_talkshow_radio_INTERVIEWERA_2_S";
			soundWeak = "EM_outro3_am_talkshow_radio_INTERVIEWERA_2_S";
			text = "You've only just come back from Russia, is that correct?";
			textRaw = "You've only just come back from Russia is that correct?";
			type = "INTERVIEWERA";
			variants = 1;
			vehicle = "EM_outro3_am_talkshow_radio_INTERVIEWERA_2_F";
			volumeStrong = "1.5 * (	CustomSoundController1 factor [0,0.25])";
			volumeWeak = "0";
		};
		class EM_outro3_am_talkshow_radio_INTERVIEWERA_3
		{
			folder = "Human";
			loop = 0;
			soundStrong = "EM_outro3_am_talkshow_radio_INTERVIEWERA_3_S";
			soundWeak = "EM_outro3_am_talkshow_radio_INTERVIEWERA_3_S";
			text = "I can imagine!";
			textRaw = "I can imagine!";
			type = "INTERVIEWERA";
			variants = 1;
			vehicle = "EM_outro3_am_talkshow_radio_INTERVIEWERA_3_F";
			volumeStrong = "1.5 * (	CustomSoundController1 factor [0,0.25])";
			volumeWeak = "0";
		};
		class EM_outro3_am_talkshow_radio_INTERVIEWERA_4
		{
			folder = "Human";
			loop = 0;
			soundStrong = "EM_outro3_am_talkshow_radio_INTERVIEWERA_4_S";
			soundWeak = "EM_outro3_am_talkshow_radio_INTERVIEWERA_4_S";
			text = "And, they gave you the all clear, I hope?";
			textRaw = "And they gave you the all clear I hope?";
			type = "INTERVIEWERA";
			variants = 1;
			vehicle = "EM_outro3_am_talkshow_radio_INTERVIEWERA_4_F";
			volumeStrong = "1.5 * (	CustomSoundController1 factor [0,0.25])";
			volumeWeak = "0";
		};
		class EM_outro3_am_talkshow_radio_INTERVIEWERA_5
		{
			folder = "Human";
			loop = 0;
			soundStrong = "EM_outro3_am_talkshow_radio_INTERVIEWERA_5_S";
			soundWeak = "EM_outro3_am_talkshow_radio_INTERVIEWERA_5_S";
			text = "From the buried probe?";
			textRaw = "From the buried probe?";
			type = "INTERVIEWERA";
			variants = 1;
			vehicle = "EM_outro3_am_talkshow_radio_INTERVIEWERA_5_F";
			volumeStrong = "1.5 * (	CustomSoundController1 factor [0,0.25])";
			volumeWeak = "0";
		};
		class EM_outro3_am_talkshow_radio_INTERVIEWERA_6
		{
			folder = "Human";
			loop = 0;
			soundStrong = "EM_outro3_am_talkshow_radio_INTERVIEWERA_6_S";
			soundWeak = "EM_outro3_am_talkshow_radio_INTERVIEWERA_6_S";
			text = "Even though there wasn't any danger from alien bacteria?";
			textRaw = "Even though there wasn't any danger from alien bacteria?";
			type = "INTERVIEWERA";
			variants = 1;
			vehicle = "EM_outro3_am_talkshow_radio_INTERVIEWERA_6_F";
			volumeStrong = "1.5 * (	CustomSoundController1 factor [0,0.25])";
			volumeWeak = "0";
		};
		class EM_outro3_am_talkshow_radio_INTERVIEWERA_7
		{
			folder = "Human";
			loop = 0;
			soundStrong = "EM_outro3_am_talkshow_radio_INTERVIEWERA_7_S";
			soundWeak = "EM_outro3_am_talkshow_radio_INTERVIEWERA_7_S";
			text = "Do you mean to say populated areas?";
			textRaw = "Do you mean to say populated areas?";
			type = "INTERVIEWERA";
			variants = 1;
			vehicle = "EM_outro3_am_talkshow_radio_INTERVIEWERA_7_F";
			volumeStrong = "1.5 * (	CustomSoundController1 factor [0,0.25])";
			volumeWeak = "0";
		};
		class EM_outro3_am_talkshow_radio_INTERVIEWERA_8
		{
			folder = "Human";
			loop = 0;
			soundStrong = "EM_outro3_am_talkshow_radio_INTERVIEWERA_8_S";
			soundWeak = "EM_outro3_am_talkshow_radio_INTERVIEWERA_8_S";
			text = "That's a terrifying thought!";
			textRaw = "That's a terrifying thought!";
			type = "INTERVIEWERA";
			variants = 1;
			vehicle = "EM_outro3_am_talkshow_radio_INTERVIEWERA_8_F";
			volumeStrong = "1.5 * (	CustomSoundController1 factor [0,0.25])";
			volumeWeak = "0";
		};
		class EM_outro3_am_talkshow_radio_INTERVIEWERA_9
		{
			folder = "Human";
			loop = 0;
			soundStrong = "EM_outro3_am_talkshow_radio_INTERVIEWERA_9_S";
			soundWeak = "EM_outro3_am_talkshow_radio_INTERVIEWERA_9_S";
			text = "And what was your reaction when you learned The Visitors were elsewhere in the world?";
			textRaw = "And what was your reaction when you learned The Visitors were elsewhere in the world?";
			type = "INTERVIEWERA";
			variants = 1;
			vehicle = "EM_outro3_am_talkshow_radio_INTERVIEWERA_9_F";
			volumeStrong = "1.5 * (	CustomSoundController1 factor [0,0.25])";
			volumeWeak = "0";
		};
		class EM_outro3_am_talkshow_radio_merged
		{
			displayName = "class EM_outro3_am_talkshow_radio_merged";
			folder = "Credits";
			loop = 0;
			soundStrong = "EM_outro3_am_talkshow_radio_merged_S";
			soundWeak = "EM_outro3_am_talkshow_radio_merged_S";
			type = "Credits";
			variants = 1;
			vehicle = "EM_outro3_am_talkshow_radio_merged_F";
			volumeStrong = "1.3 * (	CustomSoundController1 factor [0,0.1])";
			volumeWeak = "0";
		};
		class EM_outro3_am_talkshow_radio_PHYSICIST_0
		{
			folder = "Human";
			loop = 0;
			soundStrong = "EM_outro3_am_talkshow_radio_PHYSICIST_0_S";
			soundWeak = "EM_outro3_am_talkshow_radio_PHYSICIST_0_S";
			text = "Thanks. Good to be here.";
			textRaw = "Thanks. Good to be here.";
			type = "PHYSICIST";
			variants = 1;
			vehicle = "EM_outro3_am_talkshow_radio_PHYSICIST_0_F";
			volumeStrong = "1.5 * (	CustomSoundController1 factor [0,0.25])";
			volumeWeak = "0";
		};
		class EM_outro3_am_talkshow_radio_PHYSICIST_1
		{
			folder = "Human";
			loop = 0;
			soundStrong = "EM_outro3_am_talkshow_radio_PHYSICIST_1_S";
			soundWeak = "EM_outro3_am_talkshow_radio_PHYSICIST_1_S";
			text = "Yeah, we had a 40 day quarantine in Kaliningrad.";
			textRaw = "Yeah we had a 40 day quarantine in Kaliningrad.";
			type = "PHYSICIST";
			variants = 1;
			vehicle = "EM_outro3_am_talkshow_radio_PHYSICIST_1_F";
			volumeStrong = "1.5 * (	CustomSoundController1 factor [0,0.25])";
			volumeWeak = "0";
		};
		class EM_outro3_am_talkshow_radio_PHYSICIST_10
		{
			folder = "Human";
			loop = 0;
			soundStrong = "EM_outro3_am_talkshow_radio_PHYSICIST_10_S";
			soundWeak = "EM_outro3_am_talkshow_radio_PHYSICIST_10_S";
			text = "In some places, yeah.";
			textRaw = "In some places yeah.";
			type = "PHYSICIST";
			variants = 1;
			vehicle = "EM_outro3_am_talkshow_radio_PHYSICIST_10_F";
			volumeStrong = "1.5 * (	CustomSoundController1 factor [0,0.25])";
			volumeWeak = "0";
		};
		class EM_outro3_am_talkshow_radio_PHYSICIST_11
		{
			folder = "Human";
			loop = 0;
			soundStrong = "EM_outro3_am_talkshow_radio_PHYSICIST_11_S";
			soundWeak = "EM_outro3_am_talkshow_radio_PHYSICIST_11_S";
			text = "I was relieved, I guess.";
			textRaw = "I was relieved I guess.";
			type = "PHYSICIST";
			variants = 1;
			vehicle = "EM_outro3_am_talkshow_radio_PHYSICIST_11_F";
			volumeStrong = "1.5 * (	CustomSoundController1 factor [0,0.25])";
			volumeWeak = "0";
		};
		class EM_outro3_am_talkshow_radio_PHYSICIST_12
		{
			folder = "Human";
			loop = 0;
			soundStrong = "EM_outro3_am_talkshow_radio_PHYSICIST_12_S";
			soundWeak = "EM_outro3_am_talkshow_radio_PHYSICIST_12_S";
			text = "I mean, I figured, not everybody could have messed it up quite as bad as we did.";
			textRaw = "I mean I figured not everybody could have messed it up quite as bad as we did.";
			type = "PHYSICIST";
			variants = 1;
			vehicle = "EM_outro3_am_talkshow_radio_PHYSICIST_12_F";
			volumeStrong = "1.5 * (	CustomSoundController1 factor [0,0.25])";
			volumeWeak = "0";
		};
		class EM_outro3_am_talkshow_radio_PHYSICIST_13
		{
			folder = "Human";
			loop = 0;
			soundStrong = "EM_outro3_am_talkshow_radio_PHYSICIST_13_S";
			soundWeak = "EM_outro3_am_talkshow_radio_PHYSICIST_13_S";
			text = "Seeing those kids in fishing boats, off the coast of Cuba? That made me a very happy man.";
			textRaw = "Seeing those kids in fishing boats off the coast of Cuba? That made me a very happy man.";
			type = "PHYSICIST";
			variants = 1;
			vehicle = "EM_outro3_am_talkshow_radio_PHYSICIST_13_F";
			volumeStrong = "1.5 * (	CustomSoundController1 factor [0,0.25])";
			volumeWeak = "0";
		};
		class EM_outro3_am_talkshow_radio_PHYSICIST_14
		{
			folder = "Human";
			loop = 0;
			soundStrong = "EM_outro3_am_talkshow_radio_PHYSICIST_14_S";
			soundWeak = "EM_outro3_am_talkshow_radio_PHYSICIST_14_S";
			text = "I'm just glad they saw us as we are. In our infuriating complexity, y'know?";
			textRaw = "I'm just glad they saw us as we are. In our infuriating complexity y'know?";
			type = "PHYSICIST";
			variants = 1;
			vehicle = "EM_outro3_am_talkshow_radio_PHYSICIST_14_F";
			volumeStrong = "1.5 * (	CustomSoundController1 factor [0,0.25])";
			volumeWeak = "0";
		};
		class EM_outro3_am_talkshow_radio_PHYSICIST_2
		{
			folder = "Human";
			loop = 0;
			soundStrong = "EM_outro3_am_talkshow_radio_PHYSICIST_2_S";
			soundWeak = "EM_outro3_am_talkshow_radio_PHYSICIST_2_S";
			text = "But, nah, don't get me wrong. I was glad for it.";
			textRaw = "But nah don't get me wrong. I was glad for it.";
			type = "PHYSICIST";
			variants = 1;
			vehicle = "EM_outro3_am_talkshow_radio_PHYSICIST_2_F";
			volumeStrong = "1.5 * (	CustomSoundController1 factor [0,0.25])";
			volumeWeak = "0";
		};
		class EM_outro3_am_talkshow_radio_PHYSICIST_3
		{
			folder = "Human";
			loop = 0;
			soundStrong = "EM_outro3_am_talkshow_radio_PHYSICIST_3_S";
			soundWeak = "EM_outro3_am_talkshow_radio_PHYSICIST_3_S";
			text = "There was quite a lot to process...";
			textRaw = "There was quite a lot to process...";
			type = "PHYSICIST";
			variants = 1;
			vehicle = "EM_outro3_am_talkshow_radio_PHYSICIST_3_F";
			volumeStrong = "1.5 * (	CustomSoundController1 factor [0,0.25])";
			volumeWeak = "0";
		};
		class EM_outro3_am_talkshow_radio_PHYSICIST_4
		{
			folder = "Human";
			loop = 0;
			soundStrong = "EM_outro3_am_talkshow_radio_PHYSICIST_4_S";
			soundWeak = "EM_outro3_am_talkshow_radio_PHYSICIST_4_S";
			text = "Try not to look so nervous!";
			textRaw = "Try not to look so nervous!";
			type = "PHYSICIST";
			variants = 1;
			vehicle = "EM_outro3_am_talkshow_radio_PHYSICIST_4_F";
			volumeStrong = "1.5 * (	CustomSoundController1 factor [0,0.25])";
			volumeWeak = "0";
		};
		class EM_outro3_am_talkshow_radio_PHYSICIST_5
		{
			folder = "Human";
			loop = 0;
			soundStrong = "EM_outro3_am_talkshow_radio_PHYSICIST_5_S";
			soundWeak = "EM_outro3_am_talkshow_radio_PHYSICIST_5_S";
			text = "It's fine - we're all fine, we were lucky out there.";
			textRaw = "It's fine - we're all fine we were lucky out there.";
			type = "PHYSICIST";
			variants = 1;
			vehicle = "EM_outro3_am_talkshow_radio_PHYSICIST_5_F";
			volumeStrong = "1.5 * (	CustomSoundController1 factor [0,0.25])";
			volumeWeak = "0";
		};
		class EM_outro3_am_talkshow_radio_PHYSICIST_6
		{
			folder = "Human";
			loop = 0;
			soundStrong = "EM_outro3_am_talkshow_radio_PHYSICIST_6_S";
			soundWeak = "EM_outro3_am_talkshow_radio_PHYSICIST_6_S";
			text = "A small team of Americans helped us get some biological samples.";
			textRaw = "A small team of Americans helped us get some biological samples.";
			type = "PHYSICIST";
			variants = 1;
			vehicle = "EM_outro3_am_talkshow_radio_PHYSICIST_6_F";
			volumeStrong = "1.5 * (	CustomSoundController1 factor [0,0.25])";
			volumeWeak = "0";
		};
		class EM_outro3_am_talkshow_radio_PHYSICIST_7
		{
			folder = "Human";
			loop = 0;
			soundStrong = "EM_outro3_am_talkshow_radio_PHYSICIST_7_S";
			soundWeak = "EM_outro3_am_talkshow_radio_PHYSICIST_7_S";
			text = "Ah, we can call it that? Sure, yeah, and the data? It saved lives.";
			textRaw = "Ah we can call it that? Sure yeah and the data? It saved lives.";
			type = "PHYSICIST";
			variants = 1;
			vehicle = "EM_outro3_am_talkshow_radio_PHYSICIST_7_F";
			volumeStrong = "1.5 * (	CustomSoundController1 factor [0,0.25])";
			volumeWeak = "0";
		};
		class EM_outro3_am_talkshow_radio_PHYSICIST_8
		{
			folder = "Human";
			loop = 0;
			soundStrong = "EM_outro3_am_talkshow_radio_PHYSICIST_8_S";
			soundWeak = "EM_outro3_am_talkshow_radio_PHYSICIST_8_S";
			text = "Right. But, what you've got to remember is an unknown threat... it can be as dangerous as a known one.";
			textRaw = "Right. But what you got to remember is an unknown threat? It can be as dangerous as a known one.";
			type = "PHYSICIST";
			variants = 1;
			vehicle = "EM_outro3_am_talkshow_radio_PHYSICIST_8_F";
			volumeStrong = "1.5 * (	CustomSoundController1 factor [0,0.25])";
			volumeWeak = "0";
		};
		class EM_outro3_am_talkshow_radio_PHYSICIST_9
		{
			folder = "Human";
			loop = 0;
			soundStrong = "EM_outro3_am_talkshow_radio_PHYSICIST_9_S";
			soundWeak = "EM_outro3_am_talkshow_radio_PHYSICIST_9_S";
			text = "Let's just say there were a couple of tinpot regimes. Weighing up options and firebombing visitation sites wasn't exactly off the table.";
			textRaw = "Let's just say there were a couple of tinpot regimes weighing up options and firebombing visitation sites wasn't exactly off the table.";
			type = "PHYSICIST";
			variants = 1;
			vehicle = "EM_outro3_am_talkshow_radio_PHYSICIST_9_F";
			volumeStrong = "1.5 * (	CustomSoundController1 factor [0,0.25])";
			volumeWeak = "0";
		};
		class EM_Ping
		{
			isVariants = 1;
			links[] = {"", "EM_Squad_Id_01", "EM_Squad_Id_02", "EM_Squad_Id_03", "EM_Squad_Id_04", "EM_Squad_Id_05", "EM_Squad_Id_06", "EM_Squad_Id_07", "EM_Squad_Id_08"};
		};
		class EM_PingRequest: EM_Squad_Id_08
		{
			displayName = "Request Ping";
			duration = 1.74551;
			selection = "Base";
			selectionAntenna = "Antenna_01";
			selectionPriority = 3;
			texture = "\a3\UI_F_Contact\Data\CfgContact\EM\Signals\EM_Squad_Id_08_ca.paa";
			type = "ArmyBase";
		};
		class EM_Puzzle_01
		{
			displayName = "class EM_Puzzle_01";
			folder = "Alien";
			loop = 1;
			soundStrong = "EM_Puzzle_01_S";
			soundWeak = "EM_Puzzle_01_S";
			type = "Alien";
			variants = 1;
			vehicle = "EM_Puzzle_01_F";
			volumeStrong = "1.5 * (1.4 * (	CustomSoundController1 factor [0.01,1]))";
			volumeWeak = "0";
		};
		class EM_Puzzle_02
		{
			displayName = "class EM_Puzzle_02";
			folder = "Alien";
			loop = 1;
			soundStrong = "EM_Puzzle_02_S";
			soundWeak = "EM_Puzzle_02_S";
			type = "Alien";
			variants = 1;
			vehicle = "EM_Puzzle_02_F";
			volumeStrong = "1.5 * (1.4 * (	CustomSoundController1 factor [0.01,1]))";
			volumeWeak = "0";
		};
		class EM_Puzzle_03
		{
			displayName = "class EM_Puzzle_03";
			folder = "Alien";
			loop = 1;
			soundStrong = "EM_Puzzle_03_S";
			soundWeak = "EM_Puzzle_03_S";
			type = "Alien";
			variants = 1;
			vehicle = "EM_Puzzle_03_F";
			volumeStrong = "1.5 * (1.4 * (	CustomSoundController1 factor [0.01,1]))";
			volumeWeak = "0";
		};
		class EM_RadioStation_Song_01
		{
			displayName = "class EM_RadioStation_Song_01";
			folder = "Human";
			loop = 1;
			soundStrong = "EM_RadioStation_Song_01_S";
			soundWeak = "EM_RadioStation_Song_01_W";
			type = "Human";
			variants = 2;
			vehicle = "EM_RadioStation_Song_01_F";
			volumeStrong = "1.5 * (0.22 * (	CustomSoundController1 factor [0.25,1]))";
			volumeWeak = "1.5 * (0.25 * (	CustomSoundController1 factor [0.75,0.5]) * (	CustomSoundController1 factor [0,0.5]))";
		};
		class EM_RadioStation_Song_01_Transmission
		{
			displayName = "Music (Smetana)";
			folder = "Human";
			loop = 0;
			selection = "Default";
			selectionPriority = 3;
			soundStrong = "EM_RadioStation_Song_01_Transmission_S";
			soundWeak = "EM_RadioStation_Song_01_Transmission_S";
			texture = "\a3\UI_F_Contact\Data\CfgContact\EM\Signals\EM_RadioStation_Song_01_Transmission_ca.paa";
			type = "Human";
			variants = 1;
			vehicle = "EM_RadioStation_Song_01_Transmission_F";
			volumeStrong = "1.5 * (0.5 * 	CustomSoundController1)";
			volumeWeak = "0";
		};
		class EM_RadioStation_Song_02
		{
			displayName = "class EM_RadioStation_Song_02";
			folder = "Human";
			loop = 1;
			soundStrong = "EM_RadioStation_Song_02_S";
			soundWeak = "EM_RadioStation_Song_02_W";
			type = "Human";
			variants = 2;
			vehicle = "EM_RadioStation_Song_02_F";
			volumeStrong = "1.5 * (0.22 * (	CustomSoundController1 factor [0.45,1]))";
			volumeWeak = "1.5 * (0.25 * (	CustomSoundController1 factor [0.7,0.6]) * (	CustomSoundController1 factor [0,0.5]))";
		};
		class EM_RadioStation_Song_02_Transmission
		{
			displayName = "Music (Tchaikovsky)";
			folder = "Human";
			loop = 0;
			selection = "Default";
			selectionPriority = 3;
			soundStrong = "EM_RadioStation_Song_02_Transmission_S";
			soundWeak = "EM_RadioStation_Song_02_Transmission_S";
			texture = "\a3\UI_F_Contact\Data\CfgContact\EM\Signals\EM_RadioStation_Song_02_Transmission_ca.paa";
			type = "Human";
			variants = 1;
			vehicle = "EM_RadioStation_Song_02_Transmission_F";
			volumeStrong = "1.5 * (0.5 * 	CustomSoundController1)";
			volumeWeak = "0";
		};
		class EM_RadioStation_Song_03
		{
			displayName = "class EM_RadioStation_Song_03";
			folder = "Human";
			loop = 1;
			soundStrong = "EM_RadioStation_Song_03_S";
			soundWeak = "EM_RadioStation_Song_03_W";
			type = "Human";
			variants = 2;
			vehicle = "EM_RadioStation_Song_03_F";
			volumeStrong = "1.5 * (0.22 * (	CustomSoundController1 factor [0.45,1]))";
			volumeWeak = "1.5 * (0.25 * (	CustomSoundController1 factor [0.7,0.6]) * (	CustomSoundController1 factor [0,0.5]))";
		};
		class EM_RadioStation_Song_03_Transmission
		{
			displayName = "class EM_RadioStation_Song_03_Transmission";
			folder = "Human";
			loop = 0;
			soundStrong = "EM_RadioStation_Song_03_Transmission_S";
			soundWeak = "EM_RadioStation_Song_03_Transmission_S";
			type = "Human";
			variants = 1;
			vehicle = "EM_RadioStation_Song_03_Transmission_F";
			volumeStrong = "1.5 * (0.7 * 	CustomSoundController1)";
			volumeWeak = "0";
		};
		class EM_RussianBeacon_01
		{
			displayName = "class EM_RussianBeacon_01";
			folder = "Human";
			loop = 1;
			soundStrong = "EM_RussianBeacon_01_S";
			soundWeak = "EM_RussianBeacon_01_S";
			type = "Human";
			variants = 1;
			vehicle = "EM_RussianBeacon_01_F";
			volumeStrong = "1.5 * (0.5 * (	CustomSoundController1 factor [0,1]) * 	CustomSoundController1 max 0)";
			volumeWeak = "0";
		};
		class EM_Send_Hack_01
		{
			displayName = "Drone Hack";
			folder = "Noise";
			loop = 0;
			selection = "Default";
			selectionAntenna = "Antenna_02";
			selectionPriority = 2;
			soundStrong = "EM_Send_Hack_01_S";
			soundWeak = "EM_Send_Hack_01_S";
			texture = "\a3\UI_F_Contact\Data\CfgContact\EM\Signals\EM_Send_Hack_01_ca.paa";
			type = "Noise";
			variants = 1;
			vehicle = "EM_Send_Hack_01_F";
			volumeStrong = "1.5 * (0.3 * 	CustomSoundController1)";
			volumeWeak = "0";
		};
		class EM_Send_Signal_01
		{
			displayName = "Noise";
			folder = "Noise";
			loop = 1;
			selection = "Default";
			selectionPriority = 1;
			soundStrong = "EM_Send_Signal_01_S";
			soundWeak = "EM_Send_Signal_01_S";
			texture = "\a3\UI_F_Contact\Data\CfgContact\EM\Signals\EM_Send_Signal_01_ca.paa";
			type = "Noise";
			variants = 1;
			vehicle = "EM_Send_Signal_01_F";
			volumeStrong = "1.5 * (0.3 * 	CustomSoundController1)";
			volumeWeak = "0";
		};
		class EM_Silence_01
		{
			displayName = "class EM_Silence_01";
			folder = "Noise";
			loop = 1;
			soundStrong = "EM_Silence_01_S";
			soundWeak = "EM_Silence_01_S";
			type = "Noise";
			variants = 1;
			vehicle = "EM_Silence_01_F";
			volumeStrong = "1.5 * (0.3 * 	CustomSoundController1)";
			volumeWeak = "0";
		};
		class EM_squad_compromised
		{
			isVariants = 1;
			links[] = {"", "EM_squad_compromised_SQUAD_0", "EM_squad_compromised_SQUAD_1", "EM_squad_compromised_SQUAD_2"};
		};
		class EM_squad_compromised_SQUAD_0
		{
			folder = "Human";
			loop = 0;
			soundStrong = "EM_squad_compromised_SQUAD_0_S";
			soundWeak = "EM_squad_compromised_SQUAD_0_S";
			text = "The enemy's messing with our net. Over.";
			textRaw = "The enemy's messing with our net. Over.";
			type = "SQUAD";
			variants = 1;
			vehicle = "EM_squad_compromised_SQUAD_0_F";
			volumeStrong = "1.5 * (0.5 * 	CustomSoundController1)";
			volumeWeak = "0";
		};
		class EM_squad_compromised_SQUAD_1
		{
			folder = "Human";
			loop = 0;
			soundStrong = "EM_squad_compromised_SQUAD_1_S";
			soundWeak = "EM_squad_compromised_SQUAD_1_S";
			text = "Someone's screwing with our comms. Over.";
			textRaw = "Someone's screwing with our comms. Over.";
			type = "SQUAD";
			variants = 1;
			vehicle = "EM_squad_compromised_SQUAD_1_F";
			volumeStrong = "1.5 * (0.5 * 	CustomSoundController1)";
			volumeWeak = "0";
		};
		class EM_squad_compromised_SQUAD_2
		{
			folder = "Human";
			loop = 0;
			soundStrong = "EM_squad_compromised_SQUAD_2_S";
			soundWeak = "EM_squad_compromised_SQUAD_2_S";
			text = "I don't think this frequency's secure. Advise! Over.";
			textRaw = "I don't think this frequency's secure. Advise! Over.";
			type = "SQUAD";
			variants = 1;
			vehicle = "EM_squad_compromised_SQUAD_2_F";
			volumeStrong = "1.5 * (0.5 * 	CustomSoundController1)";
			volumeWeak = "0";
		};
		class EM_squad_confused
		{
			isVariants = 1;
			links[] = {"", "EM_squad_confused_SQUAD_0", "EM_squad_confused_SQUAD_1", "EM_squad_confused_SQUAD_2"};
		};
		class EM_squad_confused_SQUAD_0
		{
			folder = "Human";
			loop = 0;
			soundStrong = "EM_squad_confused_SQUAD_0_S";
			soundWeak = "EM_squad_confused_SQUAD_0_S";
			text = "Er, copy, Gray Wolf, we already got that order. Over.";
			textRaw = "Er copy Gray Wolf we already got that order. Over.";
			type = "SQUAD";
			variants = 1;
			vehicle = "EM_squad_confused_SQUAD_0_F";
			volumeStrong = "1.5 * (0.5 * 	CustomSoundController1)";
			volumeWeak = "0";
		};
		class EM_squad_confused_SQUAD_1
		{
			folder = "Human";
			loop = 0;
			soundStrong = "EM_squad_confused_SQUAD_1_S";
			soundWeak = "EM_squad_confused_SQUAD_1_S";
			text = "Er, okay. Copy, Gray Wolf. We did get the message. Over.";
			textRaw = "Er okay. Copy Gray Wolf. We did get the message. Over.";
			type = "SQUAD";
			variants = 1;
			vehicle = "EM_squad_confused_SQUAD_1_F";
			volumeStrong = "1.5 * (0.5 * 	CustomSoundController1)";
			volumeWeak = "0";
		};
		class EM_squad_confused_SQUAD_2
		{
			folder = "Human";
			loop = 0;
			soundStrong = "EM_squad_confused_SQUAD_2_S";
			soundWeak = "EM_squad_confused_SQUAD_2_S";
			text = "Roger, Gray Wolf - on task... we, er, we did hear you the first time. Over.";
			textRaw = "Roger Gray Wolf - on task... we er we did hear you the first time. Over.";
			type = "SQUAD";
			variants = 1;
			vehicle = "EM_squad_confused_SQUAD_2_F";
			volumeStrong = "1.5 * (0.5 * 	CustomSoundController1)";
			volumeWeak = "0";
		};
		class EM_squad_event_e
		{
			isVariants = 1;
			links[] = {"", "EM_squad_event_e_SQUAD_0", "EM_squad_event_e_SQUAD_1", "EM_squad_event_e_SQUAD_2"};
		};
		class EM_squad_event_e_SQUAD_0
		{
			folder = "Human";
			loop = 0;
			soundStrong = "EM_squad_event_e_SQUAD_0_S";
			soundWeak = "EM_squad_event_e_SQUAD_0_S";
			text = "It looks like we got some activity. East of our position. Over.";
			textRaw = "It looks like we got some activity. East of our position. Over.";
			type = "SQUAD";
			variants = 1;
			vehicle = "EM_squad_event_e_SQUAD_0_F";
			volumeStrong = "1.5 * (0.5 * 	CustomSoundController1)";
			volumeWeak = "0";
		};
		class EM_squad_event_e_SQUAD_1
		{
			folder = "Human";
			loop = 0;
			soundStrong = "EM_squad_event_e_SQUAD_1_S";
			soundWeak = "EM_squad_event_e_SQUAD_1_S";
			text = "There's something unusual going on. East of our position. Over.";
			textRaw = "There's something unusual going on. East of our position. Over.";
			type = "SQUAD";
			variants = 1;
			vehicle = "EM_squad_event_e_SQUAD_1_F";
			volumeStrong = "1.5 * (0.5 * 	CustomSoundController1)";
			volumeWeak = "0";
		};
		class EM_squad_event_e_SQUAD_2
		{
			folder = "Human";
			loop = 0;
			soundStrong = "EM_squad_event_e_SQUAD_2_S";
			soundWeak = "EM_squad_event_e_SQUAD_2_S";
			text = "Seems we've got movement, somewhere east of our position. Over.";
			textRaw = "Seems we've got movement somewhere east of our position. Over.";
			type = "SQUAD";
			variants = 1;
			vehicle = "EM_squad_event_e_SQUAD_2_F";
			volumeStrong = "1.5 * (0.5 * 	CustomSoundController1)";
			volumeWeak = "0";
		};
		class EM_squad_event_n
		{
			isVariants = 1;
			links[] = {"", "EM_squad_event_n_SQUAD_0", "EM_squad_event_n_SQUAD_1", "EM_squad_event_n_SQUAD_2"};
		};
		class EM_squad_event_n_SQUAD_0
		{
			folder = "Human";
			loop = 0;
			soundStrong = "EM_squad_event_n_SQUAD_0_S";
			soundWeak = "EM_squad_event_n_SQUAD_0_S";
			text = "It looks like we got some activity. North of our position. Over.";
			textRaw = "It looks like we got some activity. North of our position. Over.";
			type = "SQUAD";
			variants = 1;
			vehicle = "EM_squad_event_n_SQUAD_0_F";
			volumeStrong = "1.5 * (0.5 * 	CustomSoundController1)";
			volumeWeak = "0";
		};
		class EM_squad_event_n_SQUAD_1
		{
			folder = "Human";
			loop = 0;
			soundStrong = "EM_squad_event_n_SQUAD_1_S";
			soundWeak = "EM_squad_event_n_SQUAD_1_S";
			text = "There's something unusual going on. North of our position. Over.";
			textRaw = "There's something unusual going on. North of our position. Over.";
			type = "SQUAD";
			variants = 1;
			vehicle = "EM_squad_event_n_SQUAD_1_F";
			volumeStrong = "1.5 * (0.5 * 	CustomSoundController1)";
			volumeWeak = "0";
		};
		class EM_squad_event_n_SQUAD_2
		{
			folder = "Human";
			loop = 0;
			soundStrong = "EM_squad_event_n_SQUAD_2_S";
			soundWeak = "EM_squad_event_n_SQUAD_2_S";
			text = "Seems we've got movement, somewhere north of our position. Over.";
			textRaw = "Seems we've got movement somewhere north of our position. Over.";
			type = "SQUAD";
			variants = 1;
			vehicle = "EM_squad_event_n_SQUAD_2_F";
			volumeStrong = "1.5 * (0.5 * 	CustomSoundController1)";
			volumeWeak = "0";
		};
		class EM_squad_event_s
		{
			isVariants = 1;
			links[] = {"", "EM_squad_event_s_SQUAD_0", "EM_squad_event_s_SQUAD_1", "EM_squad_event_s_SQUAD_2"};
		};
		class EM_squad_event_s_SQUAD_0
		{
			folder = "Human";
			loop = 0;
			soundStrong = "EM_squad_event_s_SQUAD_0_S";
			soundWeak = "EM_squad_event_s_SQUAD_0_S";
			text = "It looks like we got some activity. South of our position. Over.";
			textRaw = "It looks like we got some activity. South of our position. Over.";
			type = "SQUAD";
			variants = 1;
			vehicle = "EM_squad_event_s_SQUAD_0_F";
			volumeStrong = "1.5 * (0.5 * 	CustomSoundController1)";
			volumeWeak = "0";
		};
		class EM_squad_event_s_SQUAD_1
		{
			folder = "Human";
			loop = 0;
			soundStrong = "EM_squad_event_s_SQUAD_1_S";
			soundWeak = "EM_squad_event_s_SQUAD_1_S";
			text = "There's something unusual going on. South of our position. Over.";
			textRaw = "There's something unusual going on. South of our position. Over.";
			type = "SQUAD";
			variants = 1;
			vehicle = "EM_squad_event_s_SQUAD_1_F";
			volumeStrong = "1.5 * (0.5 * 	CustomSoundController1)";
			volumeWeak = "0";
		};
		class EM_squad_event_s_SQUAD_2
		{
			folder = "Human";
			loop = 0;
			soundStrong = "EM_squad_event_s_SQUAD_2_S";
			soundWeak = "EM_squad_event_s_SQUAD_2_S";
			text = "Seems we've got movement, somewhere south of our position. Over.";
			textRaw = "Seems we've got movement somewhere south of our position. Over.";
			type = "SQUAD";
			variants = 1;
			vehicle = "EM_squad_event_s_SQUAD_2_F";
			volumeStrong = "1.5 * (0.5 * 	CustomSoundController1)";
			volumeWeak = "0";
		};
		class EM_squad_event_w
		{
			isVariants = 1;
			links[] = {"", "EM_squad_event_w_SQUAD_0", "EM_squad_event_w_SQUAD_1", "EM_squad_event_w_SQUAD_2"};
		};
		class EM_squad_event_w_SQUAD_0
		{
			folder = "Human";
			loop = 0;
			soundStrong = "EM_squad_event_w_SQUAD_0_S";
			soundWeak = "EM_squad_event_w_SQUAD_0_S";
			text = "It looks like we got some activity. West of our position. Over.";
			textRaw = "It looks like we got some activity. West of our position. Over.";
			type = "SQUAD";
			variants = 1;
			vehicle = "EM_squad_event_w_SQUAD_0_F";
			volumeStrong = "1.5 * (0.5 * 	CustomSoundController1)";
			volumeWeak = "0";
		};
		class EM_squad_event_w_SQUAD_1
		{
			folder = "Human";
			loop = 0;
			soundStrong = "EM_squad_event_w_SQUAD_1_S";
			soundWeak = "EM_squad_event_w_SQUAD_1_S";
			text = "There's something unusual going on. West of our position. Over.";
			textRaw = "There's something unusual going on. West of our position. Over.";
			type = "SQUAD";
			variants = 1;
			vehicle = "EM_squad_event_w_SQUAD_1_F";
			volumeStrong = "1.5 * (0.5 * 	CustomSoundController1)";
			volumeWeak = "0";
		};
		class EM_squad_event_w_SQUAD_2
		{
			folder = "Human";
			loop = 0;
			soundStrong = "EM_squad_event_w_SQUAD_2_S";
			soundWeak = "EM_squad_event_w_SQUAD_2_S";
			text = "Seems we've got movement, somewhere west of our position. Over.";
			textRaw = "Seems we've got movement somewhere west of our position. Over.";
			type = "SQUAD";
			variants = 1;
			vehicle = "EM_squad_event_w_SQUAD_2_F";
			volumeStrong = "1.5 * (0.5 * 	CustomSoundController1)";
			volumeWeak = "0";
		};
		class EM_squad_explosion_e
		{
			isVariants = 0;
			links[] = {"", "EM_squad_explosion_e_SQUAD_0", "EM_squad_explosion_e_SQUAD_1", "EM_squad_explosion_e_SQUAD_2"};
		};
		class EM_squad_explosion_e_SQUAD_0
		{
			folder = "Human";
			loop = 0;
			soundStrong = "EM_squad_explosion_e_SQUAD_0_S";
			soundWeak = "EM_squad_explosion_e_SQUAD_0_S";
			text = "We think we heard an explosion, due east! Over.";
			textRaw = "We think we heard an explosion due east! Over.";
			type = "SQUAD";
			variants = 1;
			vehicle = "EM_squad_explosion_e_SQUAD_0_F";
			volumeStrong = "1.5 * (0.5 * 	CustomSoundController1)";
			volumeWeak = "0";
		};
		class EM_squad_explosion_e_SQUAD_1
		{
			folder = "Human";
			loop = 0;
			soundStrong = "EM_squad_explosion_e_SQUAD_1_S";
			soundWeak = "EM_squad_explosion_e_SQUAD_1_S";
			text = "It sounded like something to the east of us just exploded! Over.";
			textRaw = "It sounded like something to the east of us just exploded! Over.";
			type = "SQUAD";
			variants = 1;
			vehicle = "EM_squad_explosion_e_SQUAD_1_F";
			volumeStrong = "1.5 * (0.5 * 	CustomSoundController1)";
			volumeWeak = "0";
		};
		class EM_squad_explosion_e_SQUAD_2
		{
			folder = "Human";
			loop = 0;
			soundStrong = "EM_squad_explosion_e_SQUAD_2_S";
			soundWeak = "EM_squad_explosion_e_SQUAD_2_S";
			text = "A few of us thought we heard an explosion, somewhere to the east! Over.";
			textRaw = "A few of us thought we heard an explosion somewhere to the east! Over.";
			type = "SQUAD";
			variants = 1;
			vehicle = "EM_squad_explosion_e_SQUAD_2_F";
			volumeStrong = "1.5 * (0.5 * 	CustomSoundController1)";
			volumeWeak = "0";
		};
		class EM_squad_explosion_n
		{
			isVariants = 0;
			links[] = {"", "EM_squad_explosion_n_SQUAD_0", "EM_squad_explosion_n_SQUAD_1", "EM_squad_explosion_n_SQUAD_2"};
		};
		class EM_squad_explosion_n_SQUAD_0
		{
			folder = "Human";
			loop = 0;
			soundStrong = "EM_squad_explosion_n_SQUAD_0_S";
			soundWeak = "EM_squad_explosion_n_SQUAD_0_S";
			text = "We think we heard an explosion, due north! Over.";
			textRaw = "We think we heard an explosion due north! Over.";
			type = "SQUAD";
			variants = 1;
			vehicle = "EM_squad_explosion_n_SQUAD_0_F";
			volumeStrong = "1.5 * (0.5 * 	CustomSoundController1)";
			volumeWeak = "0";
		};
		class EM_squad_explosion_n_SQUAD_1
		{
			folder = "Human";
			loop = 0;
			soundStrong = "EM_squad_explosion_n_SQUAD_1_S";
			soundWeak = "EM_squad_explosion_n_SQUAD_1_S";
			text = "It sounded like something to the north of us just exploded! Over.";
			textRaw = "It sounded like something to the north of us just exploded! Over.";
			type = "SQUAD";
			variants = 1;
			vehicle = "EM_squad_explosion_n_SQUAD_1_F";
			volumeStrong = "1.5 * (0.5 * 	CustomSoundController1)";
			volumeWeak = "0";
		};
		class EM_squad_explosion_n_SQUAD_2
		{
			folder = "Human";
			loop = 0;
			soundStrong = "EM_squad_explosion_n_SQUAD_2_S";
			soundWeak = "EM_squad_explosion_n_SQUAD_2_S";
			text = "A few of us thought we heard an explosion, somewhere to the north! Over.";
			textRaw = "A few of us thought we heard an explosion somewhere to the north! Over.";
			type = "SQUAD";
			variants = 1;
			vehicle = "EM_squad_explosion_n_SQUAD_2_F";
			volumeStrong = "1.5 * (0.5 * 	CustomSoundController1)";
			volumeWeak = "0";
		};
		class EM_squad_explosion_s
		{
			isVariants = 0;
			links[] = {"", "EM_squad_explosion_s_SQUAD_0", "EM_squad_explosion_s_SQUAD_1", "EM_squad_explosion_s_SQUAD_2"};
		};
		class EM_squad_explosion_s_SQUAD_0
		{
			folder = "Human";
			loop = 0;
			soundStrong = "EM_squad_explosion_s_SQUAD_0_S";
			soundWeak = "EM_squad_explosion_s_SQUAD_0_S";
			text = "We think we heard an explosion, due south! Over.";
			textRaw = "We think we heard an explosion due south! Over.";
			type = "SQUAD";
			variants = 1;
			vehicle = "EM_squad_explosion_s_SQUAD_0_F";
			volumeStrong = "1.5 * (0.5 * 	CustomSoundController1)";
			volumeWeak = "0";
		};
		class EM_squad_explosion_s_SQUAD_1
		{
			folder = "Human";
			loop = 0;
			soundStrong = "EM_squad_explosion_s_SQUAD_1_S";
			soundWeak = "EM_squad_explosion_s_SQUAD_1_S";
			text = "It sounded like something to the south of us just exploded! Over.";
			textRaw = "It sounded like something to the south of us just exploded! Over.";
			type = "SQUAD";
			variants = 1;
			vehicle = "EM_squad_explosion_s_SQUAD_1_F";
			volumeStrong = "1.5 * (0.5 * 	CustomSoundController1)";
			volumeWeak = "0";
		};
		class EM_squad_explosion_s_SQUAD_2
		{
			folder = "Human";
			loop = 0;
			soundStrong = "EM_squad_explosion_s_SQUAD_2_S";
			soundWeak = "EM_squad_explosion_s_SQUAD_2_S";
			text = "A few of us thought we heard an explosion, somewhere to the south! Over.";
			textRaw = "A few of us thought we heard an explosion somewhere to the south! Over.";
			type = "SQUAD";
			variants = 1;
			vehicle = "EM_squad_explosion_s_SQUAD_2_F";
			volumeStrong = "1.5 * (0.5 * 	CustomSoundController1)";
			volumeWeak = "0";
		};
		class EM_squad_explosion_w
		{
			isVariants = 0;
			links[] = {"", "EM_squad_explosion_w_SQUAD_0", "EM_squad_explosion_w_SQUAD_1", "EM_squad_explosion_w_SQUAD_2"};
		};
		class EM_squad_explosion_w_SQUAD_0
		{
			folder = "Human";
			loop = 0;
			soundStrong = "EM_squad_explosion_w_SQUAD_0_S";
			soundWeak = "EM_squad_explosion_w_SQUAD_0_S";
			text = "We think we heard an explosion, due west! Over.";
			textRaw = "We think we heard an explosion due west! Over.";
			type = "SQUAD";
			variants = 1;
			vehicle = "EM_squad_explosion_w_SQUAD_0_F";
			volumeStrong = "1.5 * (0.5 * 	CustomSoundController1)";
			volumeWeak = "0";
		};
		class EM_squad_explosion_w_SQUAD_1
		{
			folder = "Human";
			loop = 0;
			soundStrong = "EM_squad_explosion_w_SQUAD_1_S";
			soundWeak = "EM_squad_explosion_w_SQUAD_1_S";
			text = "It sounded like something to the west of us just exploded! Over.";
			textRaw = "It sounded like something to the west of us just exploded! Over.";
			type = "SQUAD";
			variants = 1;
			vehicle = "EM_squad_explosion_w_SQUAD_1_F";
			volumeStrong = "1.5 * (0.5 * 	CustomSoundController1)";
			volumeWeak = "0";
		};
		class EM_squad_explosion_w_SQUAD_2
		{
			folder = "Human";
			loop = 0;
			soundStrong = "EM_squad_explosion_w_SQUAD_2_S";
			soundWeak = "EM_squad_explosion_w_SQUAD_2_S";
			text = "A few of us thought we heard an explosion, somewhere to the west! Over.";
			textRaw = "A few of us thought we heard an explosion somewhere to the west! Over.";
			type = "SQUAD";
			variants = 1;
			vehicle = "EM_squad_explosion_w_SQUAD_2_F";
			volumeStrong = "1.5 * (0.5 * 	CustomSoundController1)";
			volumeWeak = "0";
		};
		class EM_squad_flare_e
		{
			isVariants = 1;
			links[] = {"", "EM_squad_flare_e_SQUAD_0", "EM_squad_flare_e_SQUAD_1", "EM_squad_flare_e_SQUAD_2"};
		};
		class EM_squad_flare_e_SQUAD_0
		{
			folder = "Human";
			loop = 0;
			soundStrong = "EM_squad_flare_e_SQUAD_0_S";
			soundWeak = "EM_squad_flare_e_SQUAD_0_S";
			text = "We see a flare, due east. Over.";
			textRaw = "We see a flare due east. Over.";
			type = "SQUAD";
			variants = 1;
			vehicle = "EM_squad_flare_e_SQUAD_0_F";
			volumeStrong = "1.5 * (0.5 * 	CustomSoundController1)";
			volumeWeak = "0";
		};
		class EM_squad_flare_e_SQUAD_1
		{
			folder = "Human";
			loop = 0;
			soundStrong = "EM_squad_flare_e_SQUAD_1_S";
			soundWeak = "EM_squad_flare_e_SQUAD_1_S";
			text = "Someone's fired a flare, east of our position. Over.";
			textRaw = "Someone's fired a flare east of our position. Over.";
			type = "SQUAD";
			variants = 1;
			vehicle = "EM_squad_flare_e_SQUAD_1_F";
			volumeStrong = "1.5 * (0.5 * 	CustomSoundController1)";
			volumeWeak = "0";
		};
		class EM_squad_flare_e_SQUAD_2
		{
			folder = "Human";
			loop = 0;
			soundStrong = "EM_squad_flare_e_SQUAD_2_S";
			soundWeak = "EM_squad_flare_e_SQUAD_2_S";
			text = "Somebody just popped a flare to the east of us, over.";
			textRaw = "Somebody just popped a flare to the east of us over.";
			type = "SQUAD";
			variants = 1;
			vehicle = "EM_squad_flare_e_SQUAD_2_F";
			volumeStrong = "1.5 * (0.5 * 	CustomSoundController1)";
			volumeWeak = "0";
		};
		class EM_squad_flare_n
		{
			isVariants = 1;
			links[] = {"", "EM_squad_flare_n_SQUAD_0", "EM_squad_flare_n_SQUAD_1", "EM_squad_flare_n_SQUAD_2"};
		};
		class EM_squad_flare_n_SQUAD_0
		{
			folder = "Human";
			loop = 0;
			soundStrong = "EM_squad_flare_n_SQUAD_0_S";
			soundWeak = "EM_squad_flare_n_SQUAD_0_S";
			text = "We see a flare, due north. Over.";
			textRaw = "We see a flare due north. Over.";
			type = "SQUAD";
			variants = 1;
			vehicle = "EM_squad_flare_n_SQUAD_0_F";
			volumeStrong = "1.5 * (0.5 * 	CustomSoundController1)";
			volumeWeak = "0";
		};
		class EM_squad_flare_n_SQUAD_1
		{
			folder = "Human";
			loop = 0;
			soundStrong = "EM_squad_flare_n_SQUAD_1_S";
			soundWeak = "EM_squad_flare_n_SQUAD_1_S";
			text = "Someone's fired a flare, north of our position. Over.";
			textRaw = "Someone's fired a flare north of our position. Over.";
			type = "SQUAD";
			variants = 1;
			vehicle = "EM_squad_flare_n_SQUAD_1_F";
			volumeStrong = "1.5 * (0.5 * 	CustomSoundController1)";
			volumeWeak = "0";
		};
		class EM_squad_flare_n_SQUAD_2
		{
			folder = "Human";
			loop = 0;
			soundStrong = "EM_squad_flare_n_SQUAD_2_S";
			soundWeak = "EM_squad_flare_n_SQUAD_2_S";
			text = "Somebody just popped a flare to the north of us, over.";
			textRaw = "Somebody just popped a flare to the north of us over.";
			type = "SQUAD";
			variants = 1;
			vehicle = "EM_squad_flare_n_SQUAD_2_F";
			volumeStrong = "1.5 * (0.5 * 	CustomSoundController1)";
			volumeWeak = "0";
		};
		class EM_squad_flare_s
		{
			isVariants = 1;
			links[] = {"", "EM_squad_flare_s_SQUAD_0", "EM_squad_flare_s_SQUAD_1", "EM_squad_flare_s_SQUAD_2"};
		};
		class EM_squad_flare_s_SQUAD_0
		{
			folder = "Human";
			loop = 0;
			soundStrong = "EM_squad_flare_s_SQUAD_0_S";
			soundWeak = "EM_squad_flare_s_SQUAD_0_S";
			text = "We see a flare, due south. Over.";
			textRaw = "We see a flare due south. Over.";
			type = "SQUAD";
			variants = 1;
			vehicle = "EM_squad_flare_s_SQUAD_0_F";
			volumeStrong = "1.5 * (0.5 * 	CustomSoundController1)";
			volumeWeak = "0";
		};
		class EM_squad_flare_s_SQUAD_1
		{
			folder = "Human";
			loop = 0;
			soundStrong = "EM_squad_flare_s_SQUAD_1_S";
			soundWeak = "EM_squad_flare_s_SQUAD_1_S";
			text = "Someone's fired a flare, south of our position. Over.";
			textRaw = "Someone's fired a flare south of our position. Over.";
			type = "SQUAD";
			variants = 1;
			vehicle = "EM_squad_flare_s_SQUAD_1_F";
			volumeStrong = "1.5 * (0.5 * 	CustomSoundController1)";
			volumeWeak = "0";
		};
		class EM_squad_flare_s_SQUAD_2
		{
			folder = "Human";
			loop = 0;
			soundStrong = "EM_squad_flare_s_SQUAD_2_S";
			soundWeak = "EM_squad_flare_s_SQUAD_2_S";
			text = "Somebody just popped a flare to the south of us, over.";
			textRaw = "Somebody just popped a flare to the south of us over.";
			type = "SQUAD";
			variants = 1;
			vehicle = "EM_squad_flare_s_SQUAD_2_F";
			volumeStrong = "1.5 * (0.5 * 	CustomSoundController1)";
			volumeWeak = "0";
		};
		class EM_squad_flare_w
		{
			isVariants = 1;
			links[] = {"", "EM_squad_flare_w_SQUAD_0", "EM_squad_flare_w_SQUAD_1", "EM_squad_flare_w_SQUAD_2"};
		};
		class EM_squad_flare_w_SQUAD_0
		{
			folder = "Human";
			loop = 0;
			soundStrong = "EM_squad_flare_w_SQUAD_0_S";
			soundWeak = "EM_squad_flare_w_SQUAD_0_S";
			text = "We see a flare, due west. Over.";
			textRaw = "We see a flare due west. Over.";
			type = "SQUAD";
			variants = 1;
			vehicle = "EM_squad_flare_w_SQUAD_0_F";
			volumeStrong = "1.5 * (0.5 * 	CustomSoundController1)";
			volumeWeak = "0";
		};
		class EM_squad_flare_w_SQUAD_1
		{
			folder = "Human";
			loop = 0;
			soundStrong = "EM_squad_flare_w_SQUAD_1_S";
			soundWeak = "EM_squad_flare_w_SQUAD_1_S";
			text = "Someone's fired a flare, west of our position. Over.";
			textRaw = "Someone's fired a flare west of our position. Over.";
			type = "SQUAD";
			variants = 1;
			vehicle = "EM_squad_flare_w_SQUAD_1_F";
			volumeStrong = "1.5 * (0.5 * 	CustomSoundController1)";
			volumeWeak = "0";
		};
		class EM_squad_flare_w_SQUAD_2
		{
			folder = "Human";
			loop = 0;
			soundStrong = "EM_squad_flare_w_SQUAD_2_S";
			soundWeak = "EM_squad_flare_w_SQUAD_2_S";
			text = "Somebody just popped a flare to the west of us, over.";
			textRaw = "Somebody just popped a flare to the west of us over.";
			type = "SQUAD";
			variants = 1;
			vehicle = "EM_squad_flare_w_SQUAD_2_F";
			volumeStrong = "1.5 * (0.5 * 	CustomSoundController1)";
			volumeWeak = "0";
		};
		class EM_squad_gunfire_e
		{
			isVariants = 0;
			links[] = {"", "EM_squad_gunfire_e_SQUAD_0", "EM_squad_gunfire_e_SQUAD_1", "EM_squad_gunfire_e_SQUAD_2"};
		};
		class EM_squad_gunfire_e_SQUAD_0
		{
			folder = "Human";
			loop = 0;
			soundStrong = "EM_squad_gunfire_e_SQUAD_0_S";
			soundWeak = "EM_squad_gunfire_e_SQUAD_0_S";
			text = "Possible shots fired, east of our location, over.";
			textRaw = "Possible shots fired east of our location over.";
			type = "SQUAD";
			variants = 1;
			vehicle = "EM_squad_gunfire_e_SQUAD_0_F";
			volumeStrong = "1.5 * (0.5 * 	CustomSoundController1)";
			volumeWeak = "0";
		};
		class EM_squad_gunfire_e_SQUAD_1
		{
			folder = "Human";
			loop = 0;
			soundStrong = "EM_squad_gunfire_e_SQUAD_1_S";
			soundWeak = "EM_squad_gunfire_e_SQUAD_1_S";
			text = "We think we heard gunfire - somewhere to the east. Over.";
			textRaw = "We think we heard gunfire - somewhere to the east. Over.";
			type = "SQUAD";
			variants = 1;
			vehicle = "EM_squad_gunfire_e_SQUAD_1_F";
			volumeStrong = "1.5 * (0.5 * 	CustomSoundController1)";
			volumeWeak = "0";
		};
		class EM_squad_gunfire_e_SQUAD_2
		{
			folder = "Human";
			loop = 0;
			soundStrong = "EM_squad_gunfire_e_SQUAD_2_S";
			soundWeak = "EM_squad_gunfire_e_SQUAD_2_S";
			text = "A few of us thought we heard some shooting. A short distance east of here. Over.";
			textRaw = "A few of us thought we heard some shooting. A short distance east of here. Over.";
			type = "SQUAD";
			variants = 1;
			vehicle = "EM_squad_gunfire_e_SQUAD_2_F";
			volumeStrong = "1.5 * (0.5 * 	CustomSoundController1)";
			volumeWeak = "0";
		};
		class EM_squad_gunfire_n
		{
			isVariants = 0;
			links[] = {"", "EM_squad_gunfire_n_SQUAD_0", "EM_squad_gunfire_n_SQUAD_1", "EM_squad_gunfire_n_SQUAD_2"};
		};
		class EM_squad_gunfire_n_SQUAD_0
		{
			folder = "Human";
			loop = 0;
			soundStrong = "EM_squad_gunfire_n_SQUAD_0_S";
			soundWeak = "EM_squad_gunfire_n_SQUAD_0_S";
			text = "Possible shots fired, north of our location, over.";
			textRaw = "Possible shots fired north of our location over.";
			type = "SQUAD";
			variants = 1;
			vehicle = "EM_squad_gunfire_n_SQUAD_0_F";
			volumeStrong = "1.5 * (0.5 * 	CustomSoundController1)";
			volumeWeak = "0";
		};
		class EM_squad_gunfire_n_SQUAD_1
		{
			folder = "Human";
			loop = 0;
			soundStrong = "EM_squad_gunfire_n_SQUAD_1_S";
			soundWeak = "EM_squad_gunfire_n_SQUAD_1_S";
			text = "We think we heard gunfire - somewhere to the north. Over.";
			textRaw = "We think we heard gunfire - somewhere to the north. Over.";
			type = "SQUAD";
			variants = 1;
			vehicle = "EM_squad_gunfire_n_SQUAD_1_F";
			volumeStrong = "1.5 * (0.5 * 	CustomSoundController1)";
			volumeWeak = "0";
		};
		class EM_squad_gunfire_n_SQUAD_2
		{
			folder = "Human";
			loop = 0;
			soundStrong = "EM_squad_gunfire_n_SQUAD_2_S";
			soundWeak = "EM_squad_gunfire_n_SQUAD_2_S";
			text = "A few of us thought we heard some shooting. A short distance north of here. Over.";
			textRaw = "A few of us thought we heard some shooting. A short distance north of here. Over.";
			type = "SQUAD";
			variants = 1;
			vehicle = "EM_squad_gunfire_n_SQUAD_2_F";
			volumeStrong = "1.5 * (0.5 * 	CustomSoundController1)";
			volumeWeak = "0";
		};
		class EM_squad_gunfire_s
		{
			isVariants = 0;
			links[] = {"", "EM_squad_gunfire_s_SQUAD_0", "EM_squad_gunfire_s_SQUAD_1", "EM_squad_gunfire_s_SQUAD_2"};
		};
		class EM_squad_gunfire_s_SQUAD_0
		{
			folder = "Human";
			loop = 0;
			soundStrong = "EM_squad_gunfire_s_SQUAD_0_S";
			soundWeak = "EM_squad_gunfire_s_SQUAD_0_S";
			text = "Possible shots fired, south of our location, over.";
			textRaw = "Possible shots fired south of our location over.";
			type = "SQUAD";
			variants = 1;
			vehicle = "EM_squad_gunfire_s_SQUAD_0_F";
			volumeStrong = "1.5 * (0.5 * 	CustomSoundController1)";
			volumeWeak = "0";
		};
		class EM_squad_gunfire_s_SQUAD_1
		{
			folder = "Human";
			loop = 0;
			soundStrong = "EM_squad_gunfire_s_SQUAD_1_S";
			soundWeak = "EM_squad_gunfire_s_SQUAD_1_S";
			text = "We think we heard gunfire - somewhere to the south. Over.";
			textRaw = "We think we heard gunfire - somewhere to the south. Over.";
			type = "SQUAD";
			variants = 1;
			vehicle = "EM_squad_gunfire_s_SQUAD_1_F";
			volumeStrong = "1.5 * (0.5 * 	CustomSoundController1)";
			volumeWeak = "0";
		};
		class EM_squad_gunfire_s_SQUAD_2
		{
			folder = "Human";
			loop = 0;
			soundStrong = "EM_squad_gunfire_s_SQUAD_2_S";
			soundWeak = "EM_squad_gunfire_s_SQUAD_2_S";
			text = "A few of us thought we heard some shooting. A short distance south of here. Over.";
			textRaw = "A few of us thought we heard some shooting. A short distance south of here. Over.";
			type = "SQUAD";
			variants = 1;
			vehicle = "EM_squad_gunfire_s_SQUAD_2_F";
			volumeStrong = "1.5 * (0.5 * 	CustomSoundController1)";
			volumeWeak = "0";
		};
		class EM_squad_gunfire_w
		{
			isVariants = 0;
			links[] = {"", "EM_squad_gunfire_w_SQUAD_0", "EM_squad_gunfire_w_SQUAD_1", "EM_squad_gunfire_w_SQUAD_2"};
		};
		class EM_squad_gunfire_w_SQUAD_0
		{
			folder = "Human";
			loop = 0;
			soundStrong = "EM_squad_gunfire_w_SQUAD_0_S";
			soundWeak = "EM_squad_gunfire_w_SQUAD_0_S";
			text = "Possible shots fired, west of our location, over.";
			textRaw = "Possible shots fired west of our location over.";
			type = "SQUAD";
			variants = 1;
			vehicle = "EM_squad_gunfire_w_SQUAD_0_F";
			volumeStrong = "1.5 * (0.5 * 	CustomSoundController1)";
			volumeWeak = "0";
		};
		class EM_squad_gunfire_w_SQUAD_1
		{
			folder = "Human";
			loop = 0;
			soundStrong = "EM_squad_gunfire_w_SQUAD_1_S";
			soundWeak = "EM_squad_gunfire_w_SQUAD_1_S";
			text = "We think we heard gunfire - somewhere to the west. Over.";
			textRaw = "We think we heard gunfire - somewhere to the west. Over.";
			type = "SQUAD";
			variants = 1;
			vehicle = "EM_squad_gunfire_w_SQUAD_1_F";
			volumeStrong = "1.5 * (0.5 * 	CustomSoundController1)";
			volumeWeak = "0";
		};
		class EM_squad_gunfire_w_SQUAD_2
		{
			folder = "Human";
			loop = 0;
			soundStrong = "EM_squad_gunfire_w_SQUAD_2_S";
			soundWeak = "EM_squad_gunfire_w_SQUAD_2_S";
			text = "A few of us thought we heard some shooting. A short distance west of here. Over.";
			textRaw = "A few of us thought we heard some shooting. A short distance west of here. Over.";
			type = "SQUAD";
			variants = 1;
			vehicle = "EM_squad_gunfire_w_SQUAD_2_F";
			volumeStrong = "1.5 * (0.5 * 	CustomSoundController1)";
			volumeWeak = "0";
		};
		class EM_Squad_Id_01
		{
			displayName = "class EM_Squad_Id_01";
			folder = "Ping";
			loop = 0;
			soundStrong = "EM_Squad_Id_01_S";
			soundWeak = "EM_Squad_Id_01_S";
			type = "Ping";
			variants = 1;
			vehicle = "EM_Squad_Id_01_F";
			volumeStrong = "1.5 * (0.25 * (	CustomSoundController1 factor [0,1]) * 	CustomSoundController1 max 0)";
			volumeWeak = "0";
		};
		class EM_Squad_Id_02
		{
			displayName = "class EM_Squad_Id_02";
			folder = "Ping";
			loop = 0;
			soundStrong = "EM_Squad_Id_02_S";
			soundWeak = "EM_Squad_Id_02_S";
			type = "Ping";
			variants = 1;
			vehicle = "EM_Squad_Id_02_F";
			volumeStrong = "1.5 * (0.25 * (	CustomSoundController1 factor [0,1]) * 	CustomSoundController1 max 0)";
			volumeWeak = "0";
		};
		class EM_Squad_Id_03
		{
			displayName = "class EM_Squad_Id_03";
			folder = "Ping";
			loop = 0;
			soundStrong = "EM_Squad_Id_03_S";
			soundWeak = "EM_Squad_Id_03_S";
			type = "Ping";
			variants = 1;
			vehicle = "EM_Squad_Id_03_F";
			volumeStrong = "1.5 * (0.25 * (	CustomSoundController1 factor [0,1]) * 	CustomSoundController1 max 0)";
			volumeWeak = "0";
		};
		class EM_Squad_Id_04
		{
			displayName = "class EM_Squad_Id_04";
			folder = "Ping";
			loop = 0;
			soundStrong = "EM_Squad_Id_04_S";
			soundWeak = "EM_Squad_Id_04_S";
			type = "Ping";
			variants = 1;
			vehicle = "EM_Squad_Id_04_F";
			volumeStrong = "1.5 * (0.25 * (	CustomSoundController1 factor [0,1]) * 	CustomSoundController1 max 0)";
			volumeWeak = "0";
		};
		class EM_Squad_Id_05
		{
			displayName = "class EM_Squad_Id_05";
			folder = "Ping";
			loop = 0;
			soundStrong = "EM_Squad_Id_05_S";
			soundWeak = "EM_Squad_Id_05_S";
			type = "Ping";
			variants = 1;
			vehicle = "EM_Squad_Id_05_F";
			volumeStrong = "1.5 * (0.25 * (	CustomSoundController1 factor [0,1]) * 	CustomSoundController1 max 0)";
			volumeWeak = "0";
		};
		class EM_Squad_Id_06
		{
			displayName = "class EM_Squad_Id_06";
			folder = "Ping";
			loop = 0;
			soundStrong = "EM_Squad_Id_06_S";
			soundWeak = "EM_Squad_Id_06_S";
			type = "Ping";
			variants = 1;
			vehicle = "EM_Squad_Id_06_F";
			volumeStrong = "1.5 * (0.25 * (	CustomSoundController1 factor [0,1]) * 	CustomSoundController1 max 0)";
			volumeWeak = "0";
		};
		class EM_Squad_Id_07
		{
			displayName = "class EM_Squad_Id_07";
			folder = "Ping";
			loop = 0;
			soundStrong = "EM_Squad_Id_07_S";
			soundWeak = "EM_Squad_Id_07_S";
			type = "Ping";
			variants = 1;
			vehicle = "EM_Squad_Id_07_F";
			volumeStrong = "1.5 * (0.25 * (	CustomSoundController1 factor [0,1]) * 	CustomSoundController1 max 0)";
			volumeWeak = "0";
		};
		class EM_Squad_Id_08
		{
			displayName = "class EM_Squad_Id_08";
			folder = "Ping";
			loop = 0;
			soundStrong = "EM_Squad_Id_08_S";
			soundWeak = "EM_Squad_Id_08_S";
			type = "Ping";
			variants = 1;
			vehicle = "EM_Squad_Id_08_F";
			volumeStrong = "1.5 * (0.25 * (	CustomSoundController1 factor [0,1]) * 	CustomSoundController1 max 0)";
			volumeWeak = "0";
		};
		class EM_squad_identify
		{
			isVariants = 1;
			links[] = {"", "EM_squad_identify_SQUAD_0", "EM_squad_identify_SQUAD_1", "EM_squad_identify_SQUAD_2"};
		};
		class EM_squad_identify_SQUAD_0
		{
			folder = "Human";
			loop = 0;
			soundStrong = "EM_squad_identify_SQUAD_0_S";
			soundWeak = "EM_squad_identify_SQUAD_0_S";
			text = "Hold, who is this? Authenticate: Zulu, Oscar, over.";
			textRaw = "Hold who is this? Authenticate: Zulu Oscar over.";
			type = "SQUAD";
			variants = 1;
			vehicle = "EM_squad_identify_SQUAD_0_F";
			volumeStrong = "1.5 * (0.5 * 	CustomSoundController1)";
			volumeWeak = "0";
		};
		class EM_squad_identify_SQUAD_1
		{
			folder = "Human";
			loop = 0;
			soundStrong = "EM_squad_identify_SQUAD_1_S";
			soundWeak = "EM_squad_identify_SQUAD_1_S";
			text = "Hold, unknown station. Authenticate: Tango, Charlie, over.";
			textRaw = "Hold unknown station. Authenticate: Tango Charlie over.";
			type = "SQUAD";
			variants = 1;
			vehicle = "EM_squad_identify_SQUAD_1_F";
			volumeStrong = "1.5 * (0.5 * 	CustomSoundController1)";
			volumeWeak = "0";
		};
		class EM_squad_identify_SQUAD_2
		{
			folder = "Human";
			loop = 0;
			soundStrong = "EM_squad_identify_SQUAD_2_S";
			soundWeak = "EM_squad_identify_SQUAD_2_S";
			text = "Hey, wait - you on the right frequency? Authenticate: Lima, Yankee. Over.";
			textRaw = "Hey wait - you on the right frequency? Authenticate: Lima Yankee. Over.";
			type = "SQUAD";
			variants = 1;
			vehicle = "EM_squad_identify_SQUAD_2_F";
			volumeStrong = "1.5 * (0.5 * 	CustomSoundController1)";
			volumeWeak = "0";
		};
		class EM_squad_negative
		{
			isVariants = 1;
			links[] = {"", "EM_squad_negative_SQUAD_0", "EM_squad_negative_SQUAD_1", "EM_squad_negative_SQUAD_2"};
		};
		class EM_squad_negative_combat
		{
			isVariants = 1;
			links[] = {"", "EM_squad_negative_combat_SQUAD_0", "EM_squad_negative_combat_SQUAD_1", "EM_squad_negative_combat_SQUAD_2"};
		};
		class EM_squad_negative_combat_SQUAD_0
		{
			folder = "Human";
			loop = 0;
			soundStrong = "EM_squad_negative_combat_SQUAD_0_S";
			soundWeak = "EM_squad_negative_combat_SQUAD_0_S";
			text = "Cannot execute - we're engaging! Over.";
			textRaw = "Cannot execute - we're engaging! Over.";
			type = "SQUAD";
			variants = 1;
			vehicle = "EM_squad_negative_combat_SQUAD_0_F";
			volumeStrong = "1.5 * (0.5 * 	CustomSoundController1)";
			volumeWeak = "0";
		};
		class EM_squad_negative_combat_SQUAD_1
		{
			folder = "Human";
			loop = 0;
			soundStrong = "EM_squad_negative_combat_SQUAD_1_S";
			soundWeak = "EM_squad_negative_combat_SQUAD_1_S";
			text = "Negative, Gray Wolf - what the hell? We're in combat! Over.";
			textRaw = "Negative Gray Wolf - what the hell? We're in combat! Over.";
			type = "SQUAD";
			variants = 1;
			vehicle = "EM_squad_negative_combat_SQUAD_1_F";
			volumeStrong = "1.5 * (0.5 * 	CustomSoundController1)";
			volumeWeak = "0";
		};
		class EM_squad_negative_combat_SQUAD_2
		{
			folder = "Human";
			loop = 0;
			soundStrong = "EM_squad_negative_combat_SQUAD_2_S";
			soundWeak = "EM_squad_negative_combat_SQUAD_2_S";
			text = "In combat - cannot comply! Check your station, Gray Wolf! Over.";
			textRaw = "In combat - cannot comply! Check your station Gray Wolf! Over.";
			type = "SQUAD";
			variants = 1;
			vehicle = "EM_squad_negative_combat_SQUAD_2_F";
			volumeStrong = "1.5 * (0.5 * 	CustomSoundController1)";
			volumeWeak = "0";
		};
		class EM_squad_negative_move
		{
			isVariants = 1;
			links[] = {"", "EM_squad_negative_move_SQUAD_0", "EM_squad_negative_move_SQUAD_1", "EM_squad_negative_move_SQUAD_2"};
		};
		class EM_squad_negative_move_SQUAD_0
		{
			folder = "Human";
			loop = 0;
			soundStrong = "EM_squad_negative_move_SQUAD_0_S";
			soundWeak = "EM_squad_negative_move_SQUAD_0_S";
			text = "Gray Wolf, that will put us outside our AO...? Over.";
			textRaw = "Gray Wolf that will put us outside our AO...? Over.";
			type = "SQUAD";
			variants = 1;
			vehicle = "EM_squad_negative_move_SQUAD_0_F";
			volumeStrong = "1.5 * (0.5 * 	CustomSoundController1)";
			volumeWeak = "0";
		};
		class EM_squad_negative_move_SQUAD_1
		{
			folder = "Human";
			loop = 0;
			soundStrong = "EM_squad_negative_move_SQUAD_1_S";
			soundWeak = "EM_squad_negative_move_SQUAD_1_S";
			text = "I'm not sure we can execute that order, Gray Wolf... we can't get there! Over.";
			textRaw = "I'm not sure we can execute that order Gray Wolf... we can't get there! Over.";
			type = "SQUAD";
			variants = 1;
			vehicle = "EM_squad_negative_move_SQUAD_1_F";
			volumeStrong = "1.5 * (0.5 * 	CustomSoundController1)";
			volumeWeak = "0";
		};
		class EM_squad_negative_move_SQUAD_2
		{
			folder = "Human";
			loop = 0;
			soundStrong = "EM_squad_negative_move_SQUAD_2_S";
			soundWeak = "EM_squad_negative_move_SQUAD_2_S";
			text = "Gray Wolf, that's outside our area of operations...? Over.";
			textRaw = "Gray Wolf that's outside our area of operations...? Over.";
			type = "SQUAD";
			variants = 1;
			vehicle = "EM_squad_negative_move_SQUAD_2_F";
			volumeStrong = "1.5 * (0.5 * 	CustomSoundController1)";
			volumeWeak = "0";
		};
		class EM_squad_negative_SQUAD_0
		{
			folder = "Human";
			loop = 0;
			soundStrong = "EM_squad_negative_SQUAD_0_S";
			soundWeak = "EM_squad_negative_SQUAD_0_S";
			text = "That's a negative, Gray Wolf, you know we can't do that! Check your station. Out.";
			textRaw = "That's a negative Gray Wolf you know we can't do that! Check your station. Out.";
			type = "SQUAD";
			variants = 1;
			vehicle = "EM_squad_negative_SQUAD_0_F";
			volumeStrong = "1.5 * (0.5 * 	CustomSoundController1)";
			volumeWeak = "0";
		};
		class EM_squad_negative_SQUAD_1
		{
			folder = "Human";
			loop = 0;
			soundStrong = "EM_squad_negative_SQUAD_1_S";
			soundWeak = "EM_squad_negative_SQUAD_1_S";
			text = "Negative, we can't comply with that order. Out.";
			textRaw = "Negative we can't comply with that order. Out.";
			type = "SQUAD";
			variants = 1;
			vehicle = "EM_squad_negative_SQUAD_1_F";
			volumeStrong = "1.5 * (0.5 * 	CustomSoundController1)";
			volumeWeak = "0";
		};
		class EM_squad_negative_SQUAD_2
		{
			folder = "Human";
			loop = 0;
			soundStrong = "EM_squad_negative_SQUAD_2_S";
			soundWeak = "EM_squad_negative_SQUAD_2_S";
			text = "Negative, Gray Wolf. COMSEC. That's just not an option. Out.";
			textRaw = "Negative Gray Wolf. COMSEC. That's just not an option. Out.";
			type = "SQUAD";
			variants = 1;
			vehicle = "EM_squad_negative_SQUAD_2_F";
			volumeStrong = "1.5 * (0.5 * 	CustomSoundController1)";
			volumeWeak = "0";
		};
		class EM_squad_positive
		{
			isVariants = 1;
			links[] = {"", "EM_squad_positive_SQUAD_0", "EM_squad_positive_SQUAD_1", "EM_squad_positive_SQUAD_2", "EM_squad_positive_SQUAD_3", "EM_squad_positive_SQUAD_4", "EM_squad_positive_SQUAD_5"};
		};
		class EM_squad_positive_move
		{
			isVariants = 1;
			links[] = {"", "EM_squad_positive_move_SQUAD_0", "EM_squad_positive_move_SQUAD_1", "EM_squad_positive_move_SQUAD_2", "EM_squad_positive_move_SQUAD_3", "EM_squad_positive_move_SQUAD_4", "EM_squad_positive_move_SQUAD_5"};
		};
		class EM_squad_positive_move_SQUAD_0
		{
			folder = "Human";
			loop = 0;
			soundStrong = "EM_squad_positive_move_SQUAD_0_S";
			soundWeak = "EM_squad_positive_move_SQUAD_0_S";
			text = "Affirmative, we're on the move. Out.";
			textRaw = "Affirmative we're on the move. Out.";
			type = "SQUAD";
			variants = 1;
			vehicle = "EM_squad_positive_move_SQUAD_0_F";
			volumeStrong = "1.5 * (0.5 * 	CustomSoundController1)";
			volumeWeak = "0";
		};
		class EM_squad_positive_move_SQUAD_1
		{
			folder = "Human";
			loop = 0;
			soundStrong = "EM_squad_positive_move_SQUAD_1_S";
			soundWeak = "EM_squad_positive_move_SQUAD_1_S";
			text = "Alright, understood - we're moving. Out.";
			textRaw = "Alright understood - we're moving. Out.";
			type = "SQUAD";
			variants = 1;
			vehicle = "EM_squad_positive_move_SQUAD_1_F";
			volumeStrong = "1.5 * (0.5 * 	CustomSoundController1)";
			volumeWeak = "0";
		};
		class EM_squad_positive_move_SQUAD_2
		{
			folder = "Human";
			loop = 0;
			soundStrong = "EM_squad_positive_move_SQUAD_2_S";
			soundWeak = "EM_squad_positive_move_SQUAD_2_S";
			text = "Affirmative, Gray Wolf, we're on our way. Out.";
			textRaw = "Affirmative Gray Wolf we're on our way. Out.";
			type = "SQUAD";
			variants = 1;
			vehicle = "EM_squad_positive_move_SQUAD_2_F";
			volumeStrong = "1.5 * (0.5 * 	CustomSoundController1)";
			volumeWeak = "0";
		};
		class EM_squad_positive_move_SQUAD_3
		{
			folder = "Human";
			loop = 0;
			soundStrong = "EM_squad_positive_move_SQUAD_3_S";
			soundWeak = "EM_squad_positive_move_SQUAD_3_S";
			text = "Copy, wilco. Stepping off. Out.";
			textRaw = "Copy wilco. Stepping off. Out.";
			type = "SQUAD";
			variants = 1;
			vehicle = "EM_squad_positive_move_SQUAD_3_F";
			volumeStrong = "1.5 * (0.5 * 	CustomSoundController1)";
			volumeWeak = "0";
		};
		class EM_squad_positive_move_SQUAD_4
		{
			folder = "Human";
			loop = 0;
			soundStrong = "EM_squad_positive_move_SQUAD_4_S";
			soundWeak = "EM_squad_positive_move_SQUAD_4_S";
			text = "Roger that, we're stepping off now. Out.";
			textRaw = "Roger that we're stepping off now. Out.";
			type = "SQUAD";
			variants = 1;
			vehicle = "EM_squad_positive_move_SQUAD_4_F";
			volumeStrong = "1.5 * (0.5 * 	CustomSoundController1)";
			volumeWeak = "0";
		};
		class EM_squad_positive_move_SQUAD_5
		{
			folder = "Human";
			loop = 0;
			soundStrong = "EM_squad_positive_move_SQUAD_5_S";
			soundWeak = "EM_squad_positive_move_SQUAD_5_S";
			text = "Copy, Gray Wolf. Heading there now. Out.";
			textRaw = "Copy Gray Wolf. Heading there now. Out.";
			type = "SQUAD";
			variants = 1;
			vehicle = "EM_squad_positive_move_SQUAD_5_F";
			volumeStrong = "1.5 * (0.5 * 	CustomSoundController1)";
			volumeWeak = "0";
		};
		class EM_squad_positive_SQUAD_0
		{
			folder = "Human";
			loop = 0;
			soundStrong = "EM_squad_positive_SQUAD_0_S";
			soundWeak = "EM_squad_positive_SQUAD_0_S";
			text = "Affirmative, out.";
			textRaw = "Affirmative out.";
			type = "SQUAD";
			variants = 1;
			vehicle = "EM_squad_positive_SQUAD_0_F";
			volumeStrong = "1.5 * (0.5 * 	CustomSoundController1)";
			volumeWeak = "0";
		};
		class EM_squad_positive_SQUAD_1
		{
			folder = "Human";
			loop = 0;
			soundStrong = "EM_squad_positive_SQUAD_1_S";
			soundWeak = "EM_squad_positive_SQUAD_1_S";
			text = "Roger, understood. Out.";
			textRaw = "Roger understood. Out.";
			type = "SQUAD";
			variants = 1;
			vehicle = "EM_squad_positive_SQUAD_1_F";
			volumeStrong = "1.5 * (0.5 * 	CustomSoundController1)";
			volumeWeak = "0";
		};
		class EM_squad_positive_SQUAD_2
		{
			folder = "Human";
			loop = 0;
			soundStrong = "EM_squad_positive_SQUAD_2_S";
			soundWeak = "EM_squad_positive_SQUAD_2_S";
			text = "Okay, copy that, Gray Wolf. Out.";
			textRaw = "Okay copy that Gray Wolf. Out.";
			type = "SQUAD";
			variants = 1;
			vehicle = "EM_squad_positive_SQUAD_2_F";
			volumeStrong = "1.5 * (0.5 * 	CustomSoundController1)";
			volumeWeak = "0";
		};
		class EM_squad_positive_SQUAD_3
		{
			folder = "Human";
			loop = 0;
			soundStrong = "EM_squad_positive_SQUAD_3_S";
			soundWeak = "EM_squad_positive_SQUAD_3_S";
			text = "Acknowledged, will do. Out.";
			textRaw = "Acknowledged will do. Out.";
			type = "SQUAD";
			variants = 1;
			vehicle = "EM_squad_positive_SQUAD_3_F";
			volumeStrong = "1.5 * (0.5 * 	CustomSoundController1)";
			volumeWeak = "0";
		};
		class EM_squad_positive_SQUAD_4
		{
			folder = "Human";
			loop = 0;
			soundStrong = "EM_squad_positive_SQUAD_4_S";
			soundWeak = "EM_squad_positive_SQUAD_4_S";
			text = "Roger, no problem. Out.";
			textRaw = "Roger no problem. Out.";
			type = "SQUAD";
			variants = 1;
			vehicle = "EM_squad_positive_SQUAD_4_F";
			volumeStrong = "1.5 * (0.5 * 	CustomSoundController1)";
			volumeWeak = "0";
		};
		class EM_squad_positive_SQUAD_5
		{
			folder = "Human";
			loop = 0;
			soundStrong = "EM_squad_positive_SQUAD_5_S";
			soundWeak = "EM_squad_positive_SQUAD_5_S";
			text = "Copy, we'll see to it. Out.";
			textRaw = "Copy we'll see to it. Out.";
			type = "SQUAD";
			variants = 1;
			vehicle = "EM_squad_positive_SQUAD_5_F";
			volumeStrong = "1.5 * (0.5 * 	CustomSoundController1)";
			volumeWeak = "0";
		};
		class EM_squad_posrep_reply
		{
			isVariants = 1;
			links[] = {"", "EM_squad_posrep_reply_SQUAD_0", "EM_squad_posrep_reply_SQUAD_1", "EM_squad_posrep_reply_SQUAD_2", "EM_squad_posrep_reply_SQUAD_3", "EM_squad_posrep_reply_SQUAD_4", "EM_squad_posrep_reply_SQUAD_5"};
		};
		class EM_squad_posrep_reply_SQUAD_0
		{
			folder = "Human";
			loop = 0;
			soundStrong = "EM_squad_posrep_reply_SQUAD_0_S";
			soundWeak = "EM_squad_posrep_reply_SQUAD_0_S";
			text = "Copy, relaying. Out.";
			textRaw = "Copy relaying. Out.";
			type = "SQUAD";
			variants = 1;
			vehicle = "EM_squad_posrep_reply_SQUAD_0_F";
			volumeStrong = "1.5 * (0.5 * 	CustomSoundController1)";
			volumeWeak = "0";
		};
		class EM_squad_posrep_reply_SQUAD_1
		{
			folder = "Human";
			loop = 0;
			soundStrong = "EM_squad_posrep_reply_SQUAD_1_S";
			soundWeak = "EM_squad_posrep_reply_SQUAD_1_S";
			text = "Sending data packet, Gray Wolf. Out.";
			textRaw = "Sending data packet Gray Wolf. Out.";
			type = "SQUAD";
			variants = 1;
			vehicle = "EM_squad_posrep_reply_SQUAD_1_F";
			volumeStrong = "1.5 * (0.5 * 	CustomSoundController1)";
			volumeWeak = "0";
		};
		class EM_squad_posrep_reply_SQUAD_2
		{
			folder = "Human";
			loop = 0;
			soundStrong = "EM_squad_posrep_reply_SQUAD_2_S";
			soundWeak = "EM_squad_posrep_reply_SQUAD_2_S";
			text = "Roger. Transferring coordinates, out.";
			textRaw = "Roger. Transferring coordinates out.";
			type = "SQUAD";
			variants = 1;
			vehicle = "EM_squad_posrep_reply_SQUAD_2_F";
			volumeStrong = "1.5 * (0.5 * 	CustomSoundController1)";
			volumeWeak = "0";
		};
		class EM_squad_posrep_reply_SQUAD_3
		{
			folder = "Human";
			loop = 0;
			soundStrong = "EM_squad_posrep_reply_SQUAD_3_S";
			soundWeak = "EM_squad_posrep_reply_SQUAD_3_S";
			text = "Solid copy, Gray Wolf. Data's on its way. Out.";
			textRaw = "Solid copy Gray Wolf. Data's on its way. Out.";
			type = "SQUAD";
			variants = 1;
			vehicle = "EM_squad_posrep_reply_SQUAD_3_F";
			volumeStrong = "1.5 * (0.5 * 	CustomSoundController1)";
			volumeWeak = "0";
		};
		class EM_squad_posrep_reply_SQUAD_4
		{
			folder = "Human";
			loop = 0;
			soundStrong = "EM_squad_posrep_reply_SQUAD_4_S";
			soundWeak = "EM_squad_posrep_reply_SQUAD_4_S";
			text = "Packet data sent. Out.";
			textRaw = "Packet data sent. Out.";
			type = "SQUAD";
			variants = 1;
			vehicle = "EM_squad_posrep_reply_SQUAD_4_F";
			volumeStrong = "1.5 * (0.5 * 	CustomSoundController1)";
			volumeWeak = "0";
		};
		class EM_squad_posrep_reply_SQUAD_5
		{
			folder = "Human";
			loop = 0;
			soundStrong = "EM_squad_posrep_reply_SQUAD_5_S";
			soundWeak = "EM_squad_posrep_reply_SQUAD_5_S";
			text = "Copy, standby - forwarding our position now. Out.";
			textRaw = "Copy standby - forwarding our position now. Out.";
			type = "SQUAD";
			variants = 1;
			vehicle = "EM_squad_posrep_reply_SQUAD_5_F";
			volumeStrong = "1.5 * (0.5 * 	CustomSoundController1)";
			volumeWeak = "0";
		};
		class EM_squad_request_help
		{
			displayName = """Request Reinforcements""";
			isVariants = 1;
			links[] = {"", "EM_squad_request_help_SQUAD_0", "EM_squad_request_help_SQUAD_1", "EM_squad_request_help_SQUAD_2"};
			selection = "Squad";
			selectionAntenna = "Antenna_01";
			selectionPriority = 2;
			texture = "\a3\UI_F_Contact\Data\CfgContact\EM\Signals\EM_Squad_Request_Help_SQUAD_0_ca.paa";
		};
		class EM_squad_request_help_SQUAD_0
		{
			folder = "Human";
			loop = 0;
			soundStrong = "EM_squad_request_help_SQUAD_0_S";
			soundWeak = "EM_squad_request_help_SQUAD_0_S";
			text = "Enemy contact! Requesting QRF! Over.";
			textRaw = "Enemy contact! Requesting QRF! Over.";
			type = "SQUAD";
			variants = 1;
			vehicle = "EM_squad_request_help_SQUAD_0_F";
			volumeStrong = "1.5 * (0.5 * 	CustomSoundController1)";
			volumeWeak = "0";
		};
		class EM_squad_request_help_SQUAD_1
		{
			folder = "Human";
			loop = 0;
			soundStrong = "EM_squad_request_help_SQUAD_1_S";
			soundWeak = "EM_squad_request_help_SQUAD_1_S";
			text = "Requesting immediate reinforcements! Over.";
			textRaw = "Requesting immediate reinforcements! Over.";
			type = "SQUAD";
			variants = 1;
			vehicle = "EM_squad_request_help_SQUAD_1_F";
			volumeStrong = "1.5 * (0.5 * 	CustomSoundController1)";
			volumeWeak = "0";
		};
		class EM_squad_request_help_SQUAD_2
		{
			folder = "Human";
			loop = 0;
			soundStrong = "EM_squad_request_help_SQUAD_2_S";
			soundWeak = "EM_squad_request_help_SQUAD_2_S";
			text = "Enemy sighted! Send reinforcements! Over.";
			textRaw = "Enemy sighted! Send reinforcements! Over.";
			type = "SQUAD";
			variants = 1;
			vehicle = "EM_squad_request_help_SQUAD_2_F";
			volumeStrong = "1.5 * (0.5 * 	CustomSoundController1)";
			volumeWeak = "0";
		};
		class EM_squad_say_again
		{
			isVariants = 1;
			links[] = {"", "EM_squad_say_again_SQUAD_0", "EM_squad_say_again_SQUAD_1", "EM_squad_say_again_SQUAD_2"};
		};
		class EM_squad_say_again_SQUAD_0
		{
			folder = "Human";
			loop = 0;
			soundStrong = "EM_squad_say_again_SQUAD_0_S";
			soundWeak = "EM_squad_say_again_SQUAD_0_S";
			text = "Gray Wolf, words twice. Over.";
			textRaw = "Gray Wolf words twice. Over.";
			type = "SQUAD";
			variants = 1;
			vehicle = "EM_squad_say_again_SQUAD_0_F";
			volumeStrong = "1.5 * (0.5 * 	CustomSoundController1)";
			volumeWeak = "0";
		};
		class EM_squad_say_again_SQUAD_1
		{
			folder = "Human";
			loop = 0;
			soundStrong = "EM_squad_say_again_SQUAD_1_S";
			soundWeak = "EM_squad_say_again_SQUAD_1_S";
			text = "Say again, we didn't receive your last. Over.";
			textRaw = "Say again we didn't receive your last. Over.";
			type = "SQUAD";
			variants = 1;
			vehicle = "EM_squad_say_again_SQUAD_1_F";
			volumeStrong = "1.5 * (0.5 * 	CustomSoundController1)";
			volumeWeak = "0";
		};
		class EM_squad_say_again_SQUAD_2
		{
			folder = "Human";
			loop = 0;
			soundStrong = "EM_squad_say_again_SQUAD_2_S";
			soundWeak = "EM_squad_say_again_SQUAD_2_S";
			text = "Gray Wolf, we're losing you - say again. Over.";
			textRaw = "Gray Wolf we're losing you - say again. Over.";
			type = "SQUAD";
			variants = 1;
			vehicle = "EM_squad_say_again_SQUAD_2_F";
			volumeStrong = "1.5 * (0.5 * 	CustomSoundController1)";
			volumeWeak = "0";
		};
		class EM_squad_strange_signal
		{
			isVariants = 1;
			links[] = {"", "EM_squad_strange_signal_SQUAD_0", "EM_squad_strange_signal_SQUAD_1", "EM_squad_strange_signal_SQUAD_2"};
		};
		class EM_squad_strange_signal_SQUAD_0
		{
			folder = "Human";
			loop = 0;
			soundStrong = "EM_squad_strange_signal_SQUAD_0_S";
			soundWeak = "EM_squad_strange_signal_SQUAD_0_S";
			text = "Er, we're getting some weird interference here. Can you confirm? Over.";
			textRaw = "Er we're getting some weird interference here. Can you confirm? Over.";
			type = "SQUAD";
			variants = 1;
			vehicle = "EM_squad_strange_signal_SQUAD_0_F";
			volumeStrong = "1.5 * (0.5 * 	CustomSoundController1)";
			volumeWeak = "0";
		};
		class EM_squad_strange_signal_SQUAD_1
		{
			folder = "Human";
			loop = 0;
			soundStrong = "EM_squad_strange_signal_SQUAD_1_S";
			soundWeak = "EM_squad_strange_signal_SQUAD_1_S";
			text = "There's a lot of strange shit on our channel, can you verify your end? Over.";
			textRaw = "There's a lot of strange shit on our channel can you verify your end? Over.";
			type = "SQUAD";
			variants = 1;
			vehicle = "EM_squad_strange_signal_SQUAD_1_F";
			volumeStrong = "1.5 * (0.5 * 	CustomSoundController1)";
			volumeWeak = "0";
		};
		class EM_squad_strange_signal_SQUAD_2
		{
			folder = "Human";
			loop = 0;
			soundStrong = "EM_squad_strange_signal_SQUAD_2_S";
			soundWeak = "EM_squad_strange_signal_SQUAD_2_S";
			text = "Something's interfering with our signal. Anything coming through on your side? Over.";
			textRaw = "Something's interfering with our signal. Anything coming through on your side? Over.";
			type = "SQUAD";
			variants = 1;
			vehicle = "EM_squad_strange_signal_SQUAD_2_F";
			volumeStrong = "1.5 * (0.5 * 	CustomSoundController1)";
			volumeWeak = "0";
		};
		class EM_Stomper_Enc_01
		{
			displayName = "class EM_Stomper_Enc_01";
			folder = "Human";
			loop = 1;
			soundStrong = "EM_Stomper_Enc_01_S";
			soundWeak = "EM_Stomper_Enc_01_W";
			type = "Human";
			variants = 2;
			vehicle = "EM_Stomper_Enc_01_F";
			volumeStrong = "1.5 * (1 * (	CustomSoundController1 factor [0,1]) * 	CustomSoundController1 max 0)";
			volumeWeak = "1.5 * (0.75 * (	CustomSoundController1 factor [0.45,0.01]) * 	CustomSoundController1 max 0)";
		};
		class EM_Stomper_Jammed_01
		{
			displayName = "class EM_Stomper_Jammed_01";
			folder = "Human";
			loop = 1;
			soundStrong = "EM_Stomper_Jammed_01_S";
			soundWeak = "EM_Stomper_Jammed_01_W";
			type = "Human";
			variants = 2;
			vehicle = "EM_Stomper_Jammed_01_F";
			volumeStrong = "1.5 * (1 * (	CustomSoundController1 factor [0,1]) * 	CustomSoundController1 max 0)";
			volumeWeak = "1.5 * (0.75 * (	CustomSoundController1 factor [0.45,0.01]) * 	CustomSoundController1 max 0)";
		};
		class EM_Ugv_Enc_01
		{
			displayName = "class EM_Ugv_Enc_01";
			folder = "Human";
			loop = 1;
			soundStrong = "EM_Ugv_Enc_01_S";
			soundWeak = "EM_Ugv_Enc_01_W";
			type = "Human";
			variants = 2;
			vehicle = "EM_Ugv_Enc_01_F";
			volumeStrong = "1.5 * (1 * (	CustomSoundController1 factor [0,1]) * 	CustomSoundController1 max 0)";
			volumeWeak = "1.5 * (0.75 * (	CustomSoundController1 factor [0.45,0.01]) * 	CustomSoundController1 max 0)";
		};
		class EM_Ugv_Jammed_01
		{
			displayName = "class EM_Ugv_Jammed_01";
			folder = "Human";
			loop = 1;
			soundStrong = "EM_Ugv_Jammed_01_S";
			soundWeak = "EM_Ugv_Jammed_01_W";
			type = "Human";
			variants = 2;
			vehicle = "EM_Ugv_Jammed_01_F";
			volumeStrong = "1.5 * (1 * (	CustomSoundController1 factor [0,1]) * 	CustomSoundController1 max 0)";
			volumeWeak = "1.5 * (0.75 * (	CustomSoundController1 factor [0.45,0.01]) * 	CustomSoundController1 max 0)";
		};
	};
	class SignalSelection
	{
		class Base
		{
			displayName = "HQ";
			selectionAntenna = "Antenna_01";
			texture = "\a3\Ui_f\data\GUI\Cfg\Hints\Commanding_ca.paa";
		};
		class Default
		{
			displayName = "Misc";
			texture = "\a3\Ui_f\data\GUI\Cfg\Hints\Rules_ca.paa";
		};
		class Squad
		{
			displayName = "Squad";
			selectionAntenna = "Antenna_01";
			texture = "\a3\Ui_f\data\GUI\Cfg\Hints\BasicStances_ca.paa";
		};
	};
	class SignalTypes
	{
		class Alien {};
		class Ambient_1
		{
			base = "ArmyBase";
		};
		class Ambient_2
		{
			base = "ArmyBase";
		};
		class ArmyBase {};
		class ArmySquad {};
		class Credits {};
		class Default {};
		class East {};
		class HQ
		{
			base = "ArmyBase";
		};
		class Human {};
		class InterviewerA
		{
			base = "ArmySquad";
		};
		class InterviewerB
		{
			base = "ArmySquad";
		};
		class NewsreaderA
		{
			base = "ArmySquad";
		};
		class NewsreaderB
		{
			base = "ArmySquad";
		};
		class NewsreaderC
		{
			base = "ArmySquad";
		};
		class Noise {};
		class Officer
		{
			base = "ArmySquad";
		};
		class Physicist
		{
			base = "ArmyBase";
		};
		class Ping {};
		class Raven
		{
			base = "ArmySquad";
		};
		class Scientist
		{
			base = "ArmySquad";
		};
		class SoldierA
		{
			base = "ArmySquad";
		};
		class SoldierB
		{
			base = "ArmySquad";
		};
		class SoldierC
		{
			base = "ArmySquad";
		};
		class Squad
		{
			base = "ArmySquad";
		};
		class Theorist
		{
			base = "ArmySquad";
		};
		class Unknown
		{
			base = "ArmySquad";
		};
		class West {};
	};
	class Sites
	{
		defaultWorld = "Enoch";
		directory = "\a3\Missions_F_Contact\Sites\";
		class s_debug_00
		{
			area[] = {500, 700, 41.168, 0};
			layers[] = {{"internal", "cheatsEnabled && profilename == ""KarelMoricky"""}, {"uav", "true"}};
			layersPersistent[] = {"@persistent"};
			layersStart[] = {"@start"};
			position[] = {3684.84, 11744, 2.094};
			class DangerZones
			{
				s_debug_00_danger[] = {{3686.5, 11789, -0.157997}, 400, 500, 227.151, 0};
			};
		};
		class s_dolnik_00
		{
			area[] = {750, 750, 0, 0};
			layers[] = {{"terrain changes", "true"}, {"waypoints", "true"}, {"roadblock wp", "true"}, {"hill overwatch", "true"}, {"broken truck", "true"}, {"dirt road", "true"}, {"town", "true"}, {"q_probe_ambush", "!(""q_probe_ambush"" call bis_fnc_taskCompleted)"}, {"ldf", "true"}, {"intel", "true"}, {"probe tip", "true"}, {"crater", "true"}, {"floaters", "true"}, {"destroyed", "true"}};
			layersPersistent[] = {"@persistent"};
			layersStart[] = {"@start"};
			position[] = {10646.8, 1315.36, 3.8147e-006};
			class DangerZones
			{
				s_dolnik_00_danger[] = {{10659.9, 1369.49, -1.989}, 365.654, 534.66, 316.742, 0};
			};
		};
		class s_dolnik_01
		{
			area[] = {1979.24, 1854.13, 0, 0};
			layers[] = {};
			layersPersistent[] = {"@persistent"};
			layersStart[] = {"@start"};
			position[] = {10293, 1919.15, -39.952};
		};
		class s_dolnik_03
		{
			area[] = {232.234, 295.16, 0, 0};
			layers[] = {};
			layersPersistent[] = {"@persistent"};
			layersStart[] = {"@start"};
			position[] = {11120.8, 1237.77, -0.112938};
		};
		class s_dolnik_04
		{
			area[] = {171.485, 171.485, 0, 0};
			layers[] = {};
			layersPersistent[] = {"@persistent"};
			layersStart[] = {"@start"};
			position[] = {10158, 1342.35, 0};
		};
		class s_dolnik_05
		{
			area[] = {87.7186, 87.7186, 66.08, 0};
			layers[] = {};
			layersPersistent[] = {"@persistent"};
			layersStart[] = {"@start"};
			position[] = {11154.2, 2183.33, 0};
		};
		class s_dolnik_08
		{
			area[] = {263.039, 263.039, 0, 0};
			layers[] = {{"layer 4", "true"}};
			layersPersistent[] = {"@persistent"};
			layersStart[] = {"@start"};
			position[] = {10877.1, 947.947, 0};
		};
		class s_dolnik_09
		{
			area[] = {292.592, 292.592, 0, 0};
			layers[] = {{"layer 4", "true"}};
			layersPersistent[] = {"@persistent"};
			layersStart[] = {"@start"};
			position[] = {11373.6, 945.559, 0};
		};
		class s_factory_05
		{
			area[] = {1500, 1500, 0, 0};
			layers[] = {};
			layersPersistent[] = {"@persistent"};
			layersStart[] = {"@start"};
			position[] = {7243.94, 2706.84, 1.42747};
		};
		class s_kulno_01
		{
			area[] = {687.588, 687.588, 0, 0};
			layers[] = {{"s_kulno_01", "true"}, {"crater composition", "true"}, {"props", "true"}, {"system", "true"}, {"destroyed", "true"}, {"intel", "true"}, {"extra", "true"}, {"hill waypoint", "true"}, {"terrain changes", "true"}, {"gravity anomalies", "true"}, {"q_probe_forest", "true"}, {"gameplay objects", "true"}, {"ldf", "true"}};
			layersPersistent[] = {"@persistent"};
			layersStart[] = {"@start"};
			position[] = {10244.9, 2125.14, -0.00382996};
			class DangerZones
			{
				s_kulno_01_danger[] = {{10175.3, 2168.49, 29.205}, 510.298, 526.512, 0, 0};
			};
		};
		class s_kulno_03
		{
			area[] = {981.433, 416.689, 341.7, 0};
			layers[] = {};
			layersPersistent[] = {"@persistent"};
			layersStart[] = {"@start"};
			position[] = {10382.4, 1525.5, 64.1687};
		};
		class s_kulno_04
		{
			area[] = {250, 250, 0, 0};
			layers[] = {{"loot", "true"}, {"camp", "true"}, {"woods", "true"}};
			layersPersistent[] = {"@persistent"};
			layersStart[] = {"@start"};
			position[] = {10312.5, 2755.48, 0};
		};
		class s_kulno_05
		{
			area[] = {591.218, 678.083, 333.855, 0};
			layers[] = {{"layer 4", "true"}, {"layer 89", "true"}};
			layersPersistent[] = {"@persistent"};
			layersStart[] = {"@start"};
			position[] = {10855.9, 2536.64, -5.9949};
			class DangerZones
			{
				s_kulno_05_dangerZone[] = {{10699.6, 2319.25, 18.813}, 339.925, 543.853, 31.75, 0};
			};
		};
		class s_kulno_06
		{
			area[] = {750, 750, 0, 0};
			layers[] = {{"layer 22", "true"}};
			layersPersistent[] = {"@persistent"};
			layersStart[] = {"@start"};
			position[] = {10603.5, 1963.24, 7.62939e-006};
		};
		class s_kulno_07
		{
			area[] = {1307.73, 1083.85, 0, 0};
			layers[] = {{"layer 19", "true"}, {"end_scene", "true"}};
			layersPersistent[] = {"@persistent"};
			layersStart[] = {"@start"};
			position[] = {10471.2, 1917.36, 109.037};
			class DangerZones
			{
				s_kulno_07_dangerZone[] = {{11023.5, 2021.19, 0}, 217.07, 217.07, 0, 0};
			};
		};
		class s_kulno_08
		{
			area[] = {645.604, 1074.78, 102.62, 0};
			layers[] = {{"layer 25", "true"}};
			layersPersistent[] = {"@persistent"};
			layersStart[] = {"@start"};
			position[] = {11325.1, 1664.09, 62.4855};
			class DangerZones
			{
				s_kulno_08_dangerZone[] = {{11007.5, 1840.21, 4.57764e-005}, 301.569, 301.569, 338.66, 0};
			};
		};
		class s_kulno_09
		{
			area[] = {750, 750, 0, 0};
			layers[] = {};
			layersPersistent[] = {"@persistent"};
			layersStart[] = {"@start"};
			position[] = {11375.5, 2525.91, 0};
		};
		class s_polana_00
		{
			area[] = {450.246, 450.246, 0, 0};
			layers[] = {{"terrain changes", "true"}, {"camp composition", "true"}, {"before", "true"}, {"untouched", "true"}, {"sacked", "true"}, {"camp after russians", "true"}, {"briefing", "true"}, {"q_east_rtb", "true"}, {"game logics", "true"}, {"waypoints", "true"}};
			layersPersistent[] = {"@persistent"};
			layersStart[] = {"@start"};
			position[] = {3833.76, 1841.41, 0};
			class DangerZones
			{
				s_polana_00_danger[] = {{3838.08, 1837.41, 0}, 193.958, 193.958, 0, 0};
			};
		};
		class s_polana_01
		{
			area[] = {2587.66, 2587.66, 0, 0};
			layers[] = {{"q_probe_valley", "true"}, {"pre-probe bunker", "true"}, {"probe composition", "true"}, {"gravity anomaly", "true"}, {"destroyed", "true"}, {"ldf", "true"}};
			layersPersistent[] = {"@persistent"};
			layersStart[] = {"@start"};
			position[] = {3696.25, 2622.57, 0};
			class DangerZones
			{
				s_polana_01_danger[] = {{3693.77, 2510.94, 13.3867}, 238.992, 346.069, 316.752, 0};
			};
		};
		class s_polana_02
		{
			area[] = {664.937, 614.865, 0, 0};
			layers[] = {{"s_polana_02", "true"}, {"roadblock", "true"}, {"crash site", "true"}, {"terrain changes", "true"}, {"intel", "true"}, {"waypoints", "true"}, {"checkpoint wp", "true"}, {"forest path wp", "true"}, {"crash site wp", "true"}, {"mechanic objects", "true"}, {"terrain change", "true"}, {"ldf", "!(""q_east_device_hack"" call bis_fnc_taskcompleted)"}};
			layersPersistent[] = {"@persistent"};
			layersStart[] = {"@start"};
			position[] = {3123.27, 1902, -13.8679};
			class DangerZones
			{
				s_polana_02_danger[] = {{3131.63, 1874.82, 28.3461}, 473.526, 385.359, 0, 0};
			};
		};
		class s_polana_06
		{
			area[] = {750, 750, 0, 0};
			layers[] = {};
			layersPersistent[] = {"@persistent"};
			layersStart[] = {"@start"};
			position[] = {3967.85, 2306.77, 0.0473022};
		};
		class s_polana_07
		{
			area[] = {266.664, 266.664, 0, 0};
			layers[] = {};
			layersPersistent[] = {"@persistent"};
			layersStart[] = {"@start"};
			position[] = {3708.53, 2028.19, -0.110992};
		};
		class s_polana_09
		{
			area[] = {409.919, 409.919, 0, 0};
			layers[] = {};
			layersPersistent[] = {"@persistent"};
			layersStart[] = {"@start"};
			position[] = {3928.09, 2184.81, 0};
		};
		class s_polana_10
		{
			area[] = {633.906, 633.906, 0, 0};
			layers[] = {};
			layersPersistent[] = {"@persistent"};
			layersStart[] = {"@start"};
			position[] = {3987.96, 2628.5, 0};
			class DangerZones
			{
				s_polana_10_dangerZone[] = {{4058.44, 2582.77, 0}, 277.276, 292.255, 0, 0};
			};
		};
		class s_polana_12
		{
			area[] = {444.462, 403.858, 335.264, 0};
			layers[] = {};
			layersPersistent[] = {"@persistent"};
			layersStart[] = {"@start"};
			position[] = {3923.57, 2247.83, 15.8197};
			class DangerZones
			{
				s_polana_12_dangerZone[] = {{3927.83, 2238.94, 0.11734}, 222.175, 145.906, 330.053, 0};
			};
		};
		class s_polana_14
		{
			area[] = {513.007, 435.351, 0, 0};
			layers[] = {};
			layersPersistent[] = {"@persistent"};
			layersStart[] = {"@start"};
			position[] = {3668.09, 2155.53, 0};
			class DangerZones
			{
				s_polana_14_dangerZone[] = {{3658.33, 2157.88, 0}, 326.489, 152.027, 347.591, 0};
			};
		};
		class s_polana_15
		{
			area[] = {402.699, 402.699, 357.016, 0};
			layers[] = {};
			layersPersistent[] = {"@persistent"};
			layersStart[] = {"@start"};
			position[] = {4795.21, 2112.39, 52.1604};
			class DangerZones
			{
				s_polana_15_dangerZone[] = {{4801.41, 2093.92, 4.707}, 128.713, 250.063, 321.105, 0};
			};
		};
		class s_polana_16
		{
			area[] = {67.5469, 67.5469, 0, 0};
			layers[] = {};
			layersPersistent[] = {"@persistent"};
			layersStart[] = {"@start"};
			position[] = {3415.47, 1927.36, 0};
		};
		class s_polana_17
		{
			area[] = {418.901, 504.253, 0, 0};
			layers[] = {};
			layersPersistent[] = {"@persistent"};
			layersStart[] = {"@start"};
			position[] = {3386.97, 1823.92, 27.1872};
		};
		class s_polana_18
		{
			area[] = {503.983, 587.541, 342.321, 0};
			layers[] = {{"layer 229", "true"}, {"layer 426", "true"}};
			layersPersistent[] = {"@persistent"};
			layersStart[] = {"@start"};
			position[] = {3875.15, 1212.6, 39.1577};
			class DangerZones
			{
				s_polana_18_dangerZone[] = {{3891.52, 1216.77, 0}, 269.529, 269.529, 0, 0};
			};
		};
		class s_polana_19
		{
			area[] = {310.343, 310.343, 0, 0};
			layers[] = {};
			layersPersistent[] = {"@persistent"};
			layersStart[] = {"@start"};
			position[] = {3701.89, 2943.96, 0};
		};
		class s_polana_20
		{
			area[] = {208.288, 208.288, 0, 0};
			layers[] = {};
			layersPersistent[] = {"@persistent"};
			layersStart[] = {"@start"};
			position[] = {4026.44, 3028.66, 0};
		};
		class s_polana_22
		{
			area[] = {518.704, 518.704, 0, 0};
			layers[] = {};
			layersPersistent[] = {"@persistent"};
			layersStart[] = {"@start"};
			position[] = {3706.91, 2342.53, 6.10352e-005};
		};
		class s_polana_23
		{
			area[] = {447.401, 447.401, 0, 0};
			layers[] = {{"layer 2", "true"}, {"layer 1", "true"}};
			layersPersistent[] = {"@persistent"};
			layersStart[] = {"@start"};
			position[] = {3759.53, 2469.3, 0};
		};
		class s_polana_24
		{
			area[] = {383.429, 383.429, 0, 0};
			layers[] = {{"layer 4", "true"}};
			layersPersistent[] = {"@persistent"};
			layersStart[] = {"@start"};
			position[] = {3859.48, 2671.4, 0};
		};
		class s_polana_25
		{
			area[] = {2910.21, 2910.21, 0, 0};
			layers[] = {};
			layersPersistent[] = {"@persistent"};
			layersStart[] = {"@start"};
			position[] = {3832.2, 1842.85, 0};
		};
		class s_polana_26
		{
			area[] = {63.1921, 63.1921, 0, 0};
			layers[] = {};
			layersPersistent[] = {"@persistent"};
			layersStart[] = {"@start"};
			position[] = {3635.77, 1787.64, 0};
		};
		class s_polana_27
		{
			area[] = {921.217, 398.557, 0, 0};
			layers[] = {};
			layersPersistent[] = {"@persistent"};
			layersStart[] = {"@start"};
			position[] = {4594.8, 1965.85, 110.82};
		};
		class s_polana_28
		{
			area[] = {303.599, 303.599, 0, 0};
			layers[] = {};
			layersPersistent[] = {"@persistent"};
			layersStart[] = {"@start"};
			position[] = {3225.66, 2542, 0};
			class DangerZones
			{
				s_polana_28_dangerZone[] = {{3211.3, 2538.81, 0}, 310.28, 310.28, 0, 0};
			};
		};
		class s_rodzanica_00
		{
			area[] = {592.174, 756.456, 311.878, 0};
			layers[] = {{"q_alien_radiotower", "!(""q_alien_radioTower"" call bis_fnc_taskCompleted);"}, {"mechanic objects", "true"}, {"allied forces", "true"}, {"alien", "true"}, {"meeting", "true"}, {"briefing composition", "!(""q_probe_freeRoam2"" call bin_fnc_taskAdded)"}, {"briefing left-overs", "true"}, {"radio tower", "true"}, {"layout changes", "true"}, {"s_rodzanica_00", "true"}, {"lights", "true"}, {"sound controllers", "true"}, {"broadcasting station", "true"}, {"tractor location", "true"}, {"connector points", "true"}, {"during alien", "true"}, {"pre-alien", "true"}, {"post-alien", "true"}, {"briefing", "true"}, {"final attack", "true"}};
			layersPersistent[] = {"@persistent"};
			layersStart[] = {"@start"};
			position[] = {9085.97, 1768.17, 85.15};
			class DangerZones
			{
				s_rodzanica_00_danger[] = {{8922, 2045, 20.039}, 190, 190, 0, 0};
			};
		};
		class s_rodzanica_02
		{
			area[] = {500, 500, 0, 0};
			layers[] = {};
			layersPersistent[] = {"@persistent"};
			layersStart[] = {"@start"};
			position[] = {9664.79, 2707.86, 0};
		};
		class s_rodzanica_03
		{
			area[] = {257.664, 428.281, 0, 0};
			layers[] = {};
			layersPersistent[] = {"@persistent"};
			layersStart[] = {"@start"};
			position[] = {11022.6, 1558.2, -8.81697};
			class DangerZones
			{
				s_rodzanica_03_dangerZone[] = {{11031.9, 1382.93, 0}, 159.263, 159.263, 0, 0};
			};
		};
		class s_rodzanica_04
		{
			area[] = {750, 750, 0, 0};
			layers[] = {{"layer 4", "true"}, {"heli wreck", "true"}};
			layersPersistent[] = {"@persistent"};
			layersStart[] = {"@start"};
			position[] = {9892.14, 2523.24, 0};
		};
		class s_rodzanica_05
		{
			area[] = {500, 500, 247.24, 0};
			layers[] = {};
			layersPersistent[] = {"@persistent"};
			layersStart[] = {"@start"};
			position[] = {10011.6, 2029.14, 0.0309372};
		};
		class s_rodzanica_06
		{
			area[] = {351.108, 314.765, 0, 0};
			layers[] = {{"layer 4", "true"}, {"layer 5", "true"}, {"layer 11", "true"}};
			layersPersistent[] = {"@persistent"};
			layersStart[] = {"@start"};
			position[] = {8592.93, 1611.14, 4.09711};
		};
		class s_rodzanica_07
		{
			area[] = {543.906, 249.104, 10.3874, 0};
			layers[] = {};
			layersPersistent[] = {"@persistent"};
			layersStart[] = {"@start"};
			position[] = {9087.11, 1509.89, 9.82457};
		};
		class s_rodzanica_08
		{
			area[] = {392.4, 392.4, 0, 0};
			layers[] = {};
			layersPersistent[] = {"@persistent"};
			layersStart[] = {"@start"};
			position[] = {9572.54, 1059.43, 0};
		};
		class s_rodzanica_09
		{
			area[] = {472.033, 415.3, 0, 0};
			layers[] = {{"whiteboards", "true"}, {"camp_postcontact", "true"}, {"post_ugv", "true"}, {"tents", "true"}, {"layer 36", "true"}};
			layersPersistent[] = {"@persistent"};
			layersStart[] = {"@start"};
			position[] = {9208.56, 1647.84, -1.67479};
			class DangerZones
			{
				s_rodzanica_09_dangerZone[] = {{9185.66, 1673.9, 0}, 307.696, 307.696, 0, 0};
			};
		};
		class s_skala_01
		{
			area[] = {750, 750, 0, 0};
			layers[] = {};
			layersPersistent[] = {"@persistent"};
			layersStart[] = {"@start"};
			position[] = {3489.4, 1263.51, 0};
		};
		class s_swarog_00
		{
			area[] = {563.206, 561.94, 0, 0};
			layers[] = {{"q_probe_ugv", "true"}, {"mechanic objects", "true"}, {"ldf", "true"}, {"area changes", "true"}, {"checkpoint", "true"}, {"s_swarog_00", "true"}, {"intel", "true"}, {"roadblocks", "true"}, {"waypoints", "true"}, {"checkpoint waypoints", "true"}, {"roadblock waypoints", "true"}, {"entrance waypoints", "true"}, {"dirtroad waypoints", "true"}, {"basedefense waypoints", "true"}, {"sciencehq waypoints", "true"}, {"medicalhq waypoints", "true"}, {"ambient lighting", "true"}};
			layersPersistent[] = {"@persistent"};
			layersStart[] = {"@start"};
			position[] = {5036.51, 2064.74, 8.25385};
			class DangerZones
			{
				s_swarog_00_danger[] = {{5063.67, 2088.83, 17.8076}, 410.535, 460.14, 0, 0};
			};
		};
		class s_swarog_01
		{
			area[] = {415.563, 340.808, 0, 0};
			layers[] = {{"waypoints", "true"}, {"q_probe_ugv", "true"}, {"soldiers", "true"}, {"probe tip", "true"}, {"props", "true"}, {"temp construction", "true"}, {"craters", "true"}, {"road block", "true"}, {"lamps", "true"}, {"intel", "true"}, {"research", "true"}, {"post attack", "true"}, {"truck", "true"}, {"reinforcements", "true"}, {"reinforcements points", "true"}};
			layersPersistent[] = {"@persistent"};
			layersStart[] = {"@start"};
			position[] = {4272.17, 2225.57, 5.02271};
			class DangerZones
			{
				s_swarog_01_danger[] = {{4274.21, 2262.76, -1.21252}, 250.149, 196.569, 150.534, 0};
			};
		};
		class s_swarog_03
		{
			area[] = {3000, 3000, 0, 0};
			layers[] = {};
			layersPersistent[] = {"@persistent"};
			layersStart[] = {"@start", "danger zones"};
			position[] = {4282.19, 2574.1, 66.417};
			class DangerZones
			{
				s_swarog_03_danger_1[] = {{4430.29, 2624.7, 0}, 312.045, 312.045, 0, 0};
				s_swarog_03_danger_2[] = {{4035.16, 3320.65, 0}, 312.045, 312.045, 0, 0};
				s_swarog_03_danger_3[] = {{5459.21, 3024.93, -1.52588e-005}, 312.045, 312.045, 0, 0};
				s_swarog_03_danger_4[] = {{3718.65, 2932.64, 0}, 312.045, 312.045, 0, 0};
				s_swarog_03_danger_5[] = {{3478.21, 1275.46, 0}, 312.045, 312.045, 25.927, 0};
				s_swarog_03_danger_6[] = {{5004.44, 1267.81, 4.57764e-005}, 312.045, 312.045, 314.714, 0};
			};
		};
		class s_swarog_04
		{
			area[] = {335.955, 434.989, 0, 0};
			layers[] = {};
			layersPersistent[] = {"@persistent"};
			layersStart[] = {"@start"};
			position[] = {3301.61, 1707.52, -24.6646};
		};
		class s_swarog_05
		{
			area[] = {328.165, 328.165, 332.278, 0};
			layers[] = {{"shed", "true"}};
			layersPersistent[] = {"@persistent"};
			layersStart[] = {"@start"};
			position[] = {4475.43, 1760.6, 0};
		};
		class s_swarog_06
		{
			area[] = {336.416, 285.099, 0, 0};
			layers[] = {{"layer 7", "true"}, {"roadblock", "true"}, {"layer 33", "true"}, {"layer 34", "true"}};
			layersPersistent[] = {"@persistent"};
			layersStart[] = {"@start"};
			position[] = {4532.86, 2307.69, 0.528992};
			class DangerZones
			{
				s_swarog_06_dangerZone[] = {{4581.11, 2302.59, 0}, 130.944, 130.944, 0, 0};
			};
		};
		class s_swarog_08
		{
			area[] = {304.877, 223.837, 0, 0};
			layers[] = {};
			layersPersistent[] = {"@persistent"};
			layersStart[] = {"@start"};
			position[] = {4367.69, 1925.21, -2.96307};
		};
		class s_swarog_09
		{
			area[] = {533.857, 438.6, 349.252, 0};
			layers[] = {{"layer 13", "true"}};
			layersPersistent[] = {"@persistent"};
			layersStart[] = {"@start"};
			position[] = {4246.05, 2413.47, 46.0746};
			class DangerZones
			{
				s_swarog_09_dangerZone[] = {{4234.62, 2415.06, 0}, 251.55, 251.55, 0, 0};
			};
		};
		class s_swarog_10
		{
			area[] = {402.271, 402.271, 0, 0};
			layers[] = {};
			layersPersistent[] = {"@persistent"};
			layersStart[] = {"@start"};
			position[] = {5018.75, 1852.11, 2.31021};
			class DangerZones
			{
				s_swarog_10_dangerZone[] = {{5023.9, 1851.97, 0}, 217.107, 145.024, 43.742, 0};
			};
		};
		class s_swarog_11
		{
			area[] = {135.912, 135.912, 0, 0};
			layers[] = {};
			layersPersistent[] = {"@persistent"};
			layersStart[] = {"@start"};
			position[] = {4551.39, 2095.55, 0};
		};
		class s_swarog_12
		{
			area[] = {449.123, 449.123, 0, 0};
			layers[] = {};
			layersPersistent[] = {"@persistent"};
			layersStart[] = {"@start"};
			position[] = {4619.48, 2574.05, 0};
			class DangerZones
			{
				s_swarog_12_dangerZone[] = {{4629.35, 2567.09, 0.0212097}, 205.651, 136.522, 0, 0};
			};
		};
		class s_swarog_13
		{
			area[] = {233.123, 233.123, 0, 0};
			layers[] = {{"s_swarog_13_campbefore", "true"}};
			layersPersistent[] = {"@persistent"};
			layersStart[] = {"@start"};
			position[] = {4269.82, 1442.33, -0.0183411};
		};
		class s_swarog_15
		{
			area[] = {452.945, 220.403, 37.4626, 0};
			layers[] = {};
			layersPersistent[] = {"@persistent"};
			layersStart[] = {"@start"};
			position[] = {4246.36, 1675.03, -29.8168};
			class DangerZones
			{
				s_swarog_15_dangerZone[] = {{4351.68, 1580.43, 0}, 203.417, 203.417, 0, 0};
			};
		};
		class s_swarog_16
		{
			area[] = {249.042, 335.305, 0, 0};
			layers[] = {{"layer 16", "true"}};
			layersPersistent[] = {"@persistent"};
			layersStart[] = {"@start"};
			position[] = {5111.58, 2651.45, -1.49579};
			class DangerZones
			{
				s_swarog_16_dangerZone[] = {{5113.04, 2624.45, 0}, 93.948, 93.948, 0, 0};
			};
		};
		class s_swarog_17
		{
			area[] = {491.396, 494.669, 0, 0};
			layers[] = {{"s_swarog_17", "true"}, {"alwayspresent", "true"}, {"wrecks", "true"}, {"units", "true"}, {"postfight", "true"}, {"interactables", "true"}, {"logic objects", "true"}};
			layersPersistent[] = {"@persistent"};
			layersStart[] = {"@start"};
			position[] = {4839.43, 854.988, 0};
		};
		class s_swarog_19
		{
			area[] = {268.66, 269.227, 21.5661, 0};
			layers[] = {};
			layersPersistent[] = {"@persistent"};
			layersStart[] = {"@start"};
			position[] = {5457.22, 3000.26, -0.12677};
		};
		class s_swarog_20
		{
			area[] = {652.186, 787.202, 36.2753, 0};
			layers[] = {{"layer 4", "true"}, {"layer 15", "true"}, {"s_swarog_20_layer_afterfight", "true"}, {"s_swarog_20_layer_beforefight", "true"}, {"s_swarog_20_layer_destroyedtruck", "true"}};
			layersPersistent[] = {"@persistent"};
			layersStart[] = {"@start"};
			position[] = {5092.41, 1336.26, 0.856171};
			class DangerZones
			{
				s_swarog_20_dangerZone[] = {{4991.1, 1264.42, 0}, 500, 500, 0, 0};
			};
		};
		class s_swarog_21
		{
			area[] = {325.932, 325.932, 0, 0};
			layers[] = {};
			layersPersistent[] = {"@persistent"};
			layersStart[] = {"@start"};
			position[] = {4038.63, 3332.49, 0};
		};
		class s_swarog_22
		{
			area[] = {420.149, 420.149, 0, 0};
			layers[] = {};
			layersPersistent[] = {"@persistent"};
			layersStart[] = {"@start"};
			position[] = {4413.06, 2116.85, 0};
		};
		class s_swarog_23
		{
			area[] = {539.629, 539.629, 0, 0};
			layers[] = {};
			layersPersistent[] = {"@persistent"};
			layersStart[] = {"@start"};
			position[] = {5010.17, 1714.2, -1.46579};
		};
		class s_swarog_24
		{
			area[] = {604.75, 604.75, 0, 0};
			layers[] = {};
			layersPersistent[] = {"@persistent"};
			layersStart[] = {"@start"};
			position[] = {4506.61, 2533.37, 0.000152588};
			class DangerZones
			{
				s_swarog_24_dangerZone[] = {{4489.67, 2802.05, -9.15527e-005}, 215.843, 228.459, 0, 0};
			};
		};
		class s_swarog_26
		{
			area[] = {306.016, 306.016, 0, 0};
			layers[] = {{"layer 4", "true"}, {"layer 72", "true"}, {"layer 73", "true"}, {"layer 74", "true"}};
			layersPersistent[] = {"@persistent"};
			layersStart[] = {"@start"};
			position[] = {4706.45, 1873.81, 0.0663452};
			class DangerZones
			{
				s_swarog_26_dangerZone[] = {{4722.93, 1864.8, 0}, 200, 200, 0, 0};
			};
		};
		class s_swarog_27
		{
			area[] = {333.89, 333.89, 0, 0};
			layers[] = {};
			layersPersistent[] = {"@persistent"};
			layersStart[] = {"@start"};
			position[] = {4510.48, 1917.06, 0};
			class DangerZones
			{
				s_swarog_27_dangerZone[] = {{4507.1, 1914.41, 0}, 201.034, 140.709, 33.9524, 0};
			};
		};
		class s_swarog_28
		{
			area[] = {320.384, 320.384, 0, 0};
			layers[] = {};
			layersPersistent[] = {"@persistent"};
			layersStart[] = {"@start"};
			position[] = {4689.33, 2924.08, 0};
			class DangerZones
			{
				s_swarog_28_dangerZone[] = {{4674.98, 2895.23, 0}, 233.033, 277.193, 12.1655, 0};
			};
		};
		class s_tymbark_00
		{
			area[] = {750, 750, 0, 0};
			layers[] = {};
			layersPersistent[] = {"@persistent"};
			layersStart[] = {"@start"};
			position[] = {2992.67, 1138.01, 0};
		};
		class s_widok_00
		{
			area[] = {643.101, 643.101, 330.483, 0};
			layers[] = {{"s_widok_00", "true"}, {"system", "true"}, {"layer 34", "true"}, {"loot", "true"}, {"composition", "true"}, {"units", "true"}, {"postexplosion", "true"}};
			layersPersistent[] = {"@persistent"};
			layersStart[] = {"@start"};
			position[] = {10434.3, 1610.67, 0};
		};
		class s_widok_01
		{
			area[] = {529.086, 529.086, 0, 0};
			layers[] = {};
			layersPersistent[] = {"@persistent"};
			layersStart[] = {"@start"};
			position[] = {10083.5, 1570.32, -0.000320435};
		};
		class s_widok_02
		{
			area[] = {600.564, 600.564, 0, 0};
			layers[] = {};
			layersPersistent[] = {"@persistent"};
			layersStart[] = {"@start"};
			position[] = {10754.3, 1857.75, -11.3557};
		};
		class s_widok_04
		{
			area[] = {529.209, 529.209, 0, 0};
			layers[] = {};
			layersPersistent[] = {"@persistent"};
			layersStart[] = {"@start"};
			position[] = {10451.2, 1961.69, 0};
			class DangerZones
			{
				s_widok_04_dangerZone[] = {{10454.9, 1957.51, 0}, 228.481, 228.481, 359.214, 0};
			};
		};
		class s_widok_05
		{
			area[] = {750, 750, 0, 0};
			layers[] = {};
			layersPersistent[] = {"@persistent"};
			layersStart[] = {"@start"};
			position[] = {10559.1, 1766.94, 0};
		};
		class s_widok_06
		{
			area[] = {1573.47, 1573.47, 0, 0};
			layers[] = {};
			layersPersistent[] = {"@persistent"};
			layersStart[] = {"@start"};
			position[] = {10472.3, 1626.06, 0};
		};
		class s_widok_07
		{
			area[] = {318.453, 306.893, 0, 0};
			layers[] = {};
			layersPersistent[] = {"@persistent"};
			layersStart[] = {"@start"};
			position[] = {9594.16, 2035.72, -31.0491};
		};
		class s_widok_08
		{
			area[] = {296.876, 296.876, 0, 0};
			layers[] = {};
			layersPersistent[] = {"@persistent"};
			layersStart[] = {"@start"};
			position[] = {9633.21, 2226.84, 0};
		};
		class s_widok_09
		{
			area[] = {333.521, 419.5, 49.005, 0};
			layers[] = {{"layer 4", "true"}};
			layersPersistent[] = {"@persistent"};
			layersStart[] = {"@start"};
			position[] = {9925.37, 1697.45, -12.1658};
			class DangerZones
			{
				s_widok_09_dangerZone[] = {{9991.6, 1750.99, 0}, 189.786, 189.786, 0, 0};
			};
		};
		class s_widok_10
		{
			area[] = {536.479, 873.013, 46.116, 0};
			layers[] = {};
			layersPersistent[] = {"@persistent"};
			layersStart[] = {"@start"};
			position[] = {10945.5, 2405.6, -62.8004};
		};
		class s_widok_11
		{
			area[] = {447.349, 275.926, 10.9892, 0};
			layers[] = {};
			layersPersistent[] = {"@persistent"};
			layersStart[] = {"@start"};
			position[] = {10195.2, 1393.83, -26.3046};
			class DangerZones
			{
				s_widok_11_dangerZone[] = {{10190.9, 1379.48, 0}, 500, 190.003, 17.6906, 0};
			};
		};
		class s_widok_12
		{
			area[] = {750, 750, 0, 0};
			layers[] = {};
			layersPersistent[] = {"@persistent"};
			layersStart[] = {"@start"};
			position[] = {10160.2, 2364.18, 0};
			class DangerZones
			{
				s_widok_12_dangerZone[] = {{9959.67, 2522.82, 0}, 500, 190.003, 31.1336, 0};
			};
		};
		class s_widok_13
		{
			area[] = {750, 750, 0, 0};
			layers[] = {};
			layersPersistent[] = {"@persistent"};
			layersStart[] = {"@start"};
			position[] = {10755.1, 1552.35, 0};
			class DangerZones
			{
				s_widok_13_dangerZone[] = {{10838.2, 1603.69, 0}, 257.667, 257.667, 0, 0};
			};
		};
		class s_widok_14
		{
			area[] = {750, 750, 0, 0};
			layers[] = {};
			layersPersistent[] = {"@persistent"};
			layersStart[] = {"@start"};
			position[] = {10132.1, 2422.25, 0};
			class DangerZones
			{
				s_widok_14_dangerZone[] = {{10120.9, 2469.72, 0}, 267.916, 267.916, 0, 0};
			};
		};
		class s_widok_15
		{
			area[] = {750, 750, 0, 0};
			layers[] = {};
			layersPersistent[] = {"@persistent"};
			layersStart[] = {"@start"};
			position[] = {9781.21, 2185.45, 0};
			class DangerZones
			{
				s_widok_15_dangerZone[] = {{9766.59, 2251.52, 0}, 232.661, 232.661, 0, 0};
			};
		};
	};
	class SpectrumAnalyzers
	{
		class Default
		{
			renderTarget = "r2t_radarwindow";
			textureGhost = "#(argb,8,8,3)color(1,1,1,0.03)";
			textureGhostBackground = "#(argb,8,8,3)color(0.05,0.05,0.05,1)";
			vehicle = "Graph_01_F";
			vehicleBookmark = "Graph_01_arrow_F";
			vehicleGhost = "Graph_01_F";
		};
	};
	class Variables
	{
		class AntennaScans
		{
			defaultValue[] = {};
			onExit = "[] call bin_fnc_exitAntennas";
		};
		class CurrentMission
		{
			defaultValue = "";
		};
		class Daytime
		{
			defaultValue = 10;
		};
		class Diary
		{
			defaultValue[] = {};
			onExit = "[] call bin_fnc_exitDiary";
		};
		class EM_Player
		{
			defaultValue[] = {};
		};
		class Group
		{
			defaultValue[] = {"mg_01", "at_01"};
		};
		class GroupAvailable
		{
			defaultValue[] = {"mg_01", "at_01", "sniper_01"};
		};
		class HS_freeroamDone
		{
			defaultValue = 1;
		};
		class HS_hubDone
		{
			defaultValue = 1;
		};
		class Inventory
		{
			defaultValue[] = {};
			onExit = "getunitloadout player";
		};
		class mothershipCompleted
		{
			defaultValue = 0;
		};
		class PersistentObjects
		{
			defaultValue[] = {};
			onExit = "[] call bin_fnc_exitPersistentObjects";
		};
		class Position
		{
			defaultValue[] = {0, 0, 0};
			onExit = "getposatl player";
		};
		class probeDestroyed
		{
			defaultValue = 0;
		};
		class ProbeMap
		{
			defaultValue[] = {};
			onExit = "[] call BIN_fnc_saveIDWMap; private _data = BIN_fnc_IDWMap_saveData; [_data # 0,_data # 1,_data # 2,_data # 3]";
		};
		class Quests
		{
			defaultValue[] = {};
		};
		class russianLeafletFound
		{
			defaultValue = 0;
		};
		class Sites
		{
			defaultValue[] = {};
			onExit = "[] call bin_fnc_exitSites";
		};
		class Tasks
		{
			defaultValue[] = {};
		};
		class TestPersistence
		{
			defaultValue = 0;
		};
		class TravelPoint
		{
			defaultValue = "";
		};
		class TravelPoints
		{
			defaultValue[] = {};
		};
	};
	class Visions
	{
		class ProbeCore
		{
			class Stage1
			{
				duration = 2;
				pause = 0.5;
				seed = 93;
				texture = "\a3\Missions_F_Contact\Data\Img\Visions\vision1_1.jpg";
			};
			class Stage2
			{
				duration = 2;
				pause = 0.5;
				seed = 205;
				texture = "\a3\Missions_F_Contact\Data\Img\Visions\vision1_2.jpg";
			};
			class Stage3
			{
				duration = 2;
				pause = 0.8;
				seed = 76;
				texture = "\a3\Missions_F_Contact\Data\Img\Visions\vision1_3.jpg";
			};
		};
		class ProbeExplosion
		{
			class Stage1
			{
				seed = 240;
				texture = "\a3\Missions_F_Contact\Data\Img\Visions\vision5_1.jpg";
			};
			class Stage2
			{
				seed = 200;
				texture = "\a3\Missions_F_Contact\Data\Img\Visions\vision5_2.jpg";
			};
			class Stage3
			{
				pause = 0.8;
				seed = 245;
				texture = "\a3\Missions_F_Contact\Data\Img\Visions\vision5_3.jpg";
			};
		};
		class ProbeNetwork
		{
			class Stage1
			{
				seed = 40;
				texture = "\a3\Missions_F_Contact\Data\Img\Visions\vision4_1.jpg";
			};
			class Stage2
			{
				seed = 102;
				texture = "\a3\Missions_F_Contact\Data\Img\Visions\vision4_2.jpg";
			};
			class Stage3
			{
				pause = 0.8;
				seed = 221;
				texture = "\a3\Missions_F_Contact\Data\Img\Visions\vision4_3.jpg";
			};
		};
		class ProbePlanet
		{
			class Stage1
			{
				seed = 4;
				texture = "\a3\Missions_F_Contact\Data\Img\Visions\vision3_1.jpg";
			};
			class Stage2
			{
				seed = 84;
				texture = "\a3\Missions_F_Contact\Data\Img\Visions\vision3_2.jpg";
			};
			class Stage3
			{
				pause = 0.8;
				seed = 178;
				texture = "\a3\Missions_F_Contact\Data\Img\Visions\vision3_3.jpg";
			};
		};
		class ProbeUnderground
		{
			class Stage1
			{
				seed = 251;
				texture = "\a3\Missions_F_Contact\Data\Img\Visions\vision2_1.jpg";
			};
			class Stage2
			{
				seed = 135;
				texture = "\a3\Missions_F_Contact\Data\Img\Visions\vision2_2.jpg";
			};
			class Stage3
			{
				pause = 0.8;
				seed = 181;
				texture = "\a3\Missions_F_Contact\Data\Img\Visions\vision2_3.jpg";
			};
		};
		class System
		{
			class Default
			{
				duration = 2;
				pause = 0.5;
				scope = 1;
				seed = 1;
				texture = "\a3\UI_F_Contact\Data\RscTitles\RscVision\default.jpg";
			};
			class End
			{
				duration = 2;
				pause = 0;
				scope = 1;
				seed = 42;
				texture = "#(rgb,1,1,1)color(0,0,0,1)";
			};
		};
	};
	class VisionSequences
	{
		class Freeroam1_valley
		{
			sound = "Sfx_Contact_Vision_02";
			visions[] = {{"ProbeCore", "Stage2"}, {"ProbeCore", "Stage3"}, {"ProbeUnderground", "Stage1"}, {"ProbeUnderground", "Stage2"}, {"ProbeUnderground", "Stage3"}, {"ProbePlanet", "Stage1"}, {"ProbeNetwork", "Stage1"}};
		};
		class Freeroam2_ambush
		{
			sound = "Sfx_Contact_Vision_03";
			visions[] = {{"ProbeUnderground", "Stage3"}, {"ProbePlanet", "Stage1"}, {"ProbePlanet", "Stage2"}, {"ProbePlanet", "Stage3"}, {"ProbeNetwork", "Stage1"}, {"ProbeExplosion", "Stage1"}};
		};
		class Freeroam2_radioTowerBase
		{
			sound = "Sfx_Contact_Vision_04";
			visions[] = {{"ProbeUnderground", "Stage3"}, {"ProbePlanet", "Stage1"}, {"ProbePlanet", "Stage2"}, {"ProbePlanet", "Stage3"}, {"ProbeNetwork", "Stage1"}, {"ProbeNetwork", "Stage2"}, {"ProbeExplosion", "Stage1"}, {"ProbeExplosion", "Stage2"}};
		};
		class Freeroam2_radioTowerExtra
		{
			sound = "Sfx_Contact_Vision_05";
			visions[] = {{"ProbeUnderground", "Stage3"}, {"ProbePlanet", "Stage2"}, {"ProbePlanet", "Stage3"}, {"ProbeNetwork", "Stage2"}, {"ProbeNetwork", "Stage3"}, {"ProbeExplosion", "Stage1"}, {"ProbeExplosion", "Stage2"}, {"ProbeExplosion", "Stage3"}};
		};
		class Intro3
		{
			sound = "Sfx_Contact_Vision_01";
			visions[] = {{"ProbeCore", "Stage1"}, {"ProbeCore", "Stage2"}, {"ProbeUnderground", "Stage1"}, {"ProbeExplosion", "Stage1"}};
		};
	};
};
