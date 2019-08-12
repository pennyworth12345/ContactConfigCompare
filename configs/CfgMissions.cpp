class CfgMissions
{
	class Campaigns
	{
		class Contact
		{
			author = "Bohemia Interactive";
			briefingname = "First Contact";
			directory = "A3\Missions_F_Contact";
			featured = 1;
			overviewText = "In a remote region of Livonia, NATO soldiers are presented with a mysterious event that will change the face of human history forever.";
			class Campaign
			{
				author = "Bohemia Interactive";
				briefingName = "First Contact";
				disableMP = 1;
				firstBattle = "Missions";
				name = "";
				class MissionDefault
				{
					end1 = "";
					end2 = "";
					end3 = "";
					end4 = "";
					end5 = "";
					end6 = "";
					lives = -1;
					lost = "";
				};
				class Missions
				{
					cutscene = "";
					end1 = "";
					end2 = "";
					end3 = "";
					end4 = "";
					end5 = "";
					end6 = "";
					firstMission = "Intro1";
					lost = "";
					name = "Contact";
					class FreeRoam1: MissionDefault
					{
						briefingName = "Anomalous Phenomena";
						end1 = "FreeRoam2";
						end2 = "FreeRoam2";
						end3 = "FreeRoam2";
						end4 = "FreeRoam2";
						end5 = "FreeRoam2";
						end6 = "FreeRoam2";
						endDefault = "FreeRoam2";
						FreeRoam2 = "FreeRoam2";
						lost = "FreeRoam1";
						overviewPicture = "\a3\Missions_F_Contact\Data\Img\Loadscreens\FreeRoam1_co.paa";
						overviewText = "Efforts are made to regain control of a desperate situation.";
						signal = "EM_Mission_FreeRoam1_01";
						template = "FreeRoam1.Enoch";
					};
					class FreeRoam2: MissionDefault
					{
						briefingName = "Carpe Noctem";
						end1 = "Outro2";
						end2 = "Outro2";
						end3 = "Outro2";
						end4 = "Outro2";
						end5 = "Outro2";
						end6 = "Outro2";
						endDefault = "Outro2";
						lost = "FreeRoam2";
						Outro2 = "Outro2";
						overviewPicture = "\a3\Missions_F_Contact\Data\Img\Loadscreens\FreeRoam2_co.paa";
						overviewText = "As events slowly come to light, a new threat presents itself.";
						signal = "EM_Mission_FreeRoam2_01";
						template = "FreeRoam2.Enoch";
					};
					class Intro1: MissionDefault
					{
						briefingName = "False Negative";
						end1 = "Intro2";
						end2 = "Intro2";
						end3 = "Intro2";
						end4 = "Intro2";
						end5 = "Intro2";
						end6 = "Intro2";
						endDefault = "Intro2";
						Intro2 = "Intro2";
						lost = "Intro1";
						overviewPicture = "\a3\Missions_F_Contact\Data\Img\Loadscreens\Intro1_co.paa";
						overviewText = "NATO forces suffer a major disaster in Livonia.";
						signal = "EM_Mission_Intro1_01";
						template = "Intro1.Enoch";
					};
					class Intro2: MissionDefault
					{
						briefingName = "Going Dark";
						end1 = "Intro3";
						end2 = "Intro3";
						end3 = "Intro3";
						end4 = "Intro3";
						end5 = "Intro3";
						end6 = "Intro3";
						endDefault = "Intro3";
						Intro3 = "Intro3";
						lost = "Intro2";
						overviewPicture = "\a3\Missions_F_Contact\Data\Img\Loadscreens\Intro2_co.paa";
						overviewText = "Specialist Rudwell is coerced into finding answers.";
						signal = "EM_Mission_Intro2_01";
						template = "Intro2.Enoch";
					};
					class Intro3: MissionDefault
					{
						briefingName = "Close Encounters";
						end1 = "FreeRoam1";
						end2 = "FreeRoam1";
						end3 = "FreeRoam1";
						end4 = "FreeRoam1";
						end5 = "FreeRoam1";
						end6 = "FreeRoam1";
						endDefault = "FreeRoam1";
						FreeRoam1 = "FreeRoam1";
						lost = "Intro3";
						overviewPicture = "\a3\Missions_F_Contact\Data\Img\Loadscreens\Intro3_co.paa";
						overviewText = "Following the arrival of extraterrestrials, a small team tries to establish contact.";
						signal = "EM_Mission_Intro3_01";
						template = "Intro3.Enoch";
					};
					class Outro2: MissionDefault
					{
						briefingName = "Elimination Coda";
						end1 = "Outro3";
						end2 = "Outro3";
						end3 = "Outro3";
						end4 = "Outro3";
						end5 = "Outro3";
						end6 = "Outro3";
						endDefault = "Outro3";
						lost = "Outro2";
						Outro3 = "Outro3";
						overviewPicture = "\a3\Missions_F_Contact\Data\Img\Loadscreens\Outro2_co.paa";
						overviewText = "NATO and Russian forces stage a last ditch attack to prevent the LDF from destroying the alien network.";
						signal = "EM_Mission_Outro2_01";
						template = "Outro2.Enoch";
					};
					class Outro3: MissionDefault
					{
						briefingName = "Another Earth";
						overviewPicture = "\a3\Missions_F_Contact\Data\Img\Loadscreens\Outro3_co.paa";
						overviewText = "The world reflects on First Contact.";
						signal = "EM_Mission_Outro3_01";
						template = "Outro3.Enoch";
					};
				};
			};
		};
		class Orange
		{
			author = "Bohemia Interactive";
			briefingname = "Remnants of War";
			directory = "A3\Missions_F_Orange\Campaign";
			overviewPicture = "\a3\Missions_F_Orange\Data\Img\orange_overview_ca.paa";
			overviewText = "The war portrayed in ""The East Wind"" is over, but it left scars which will take years to heal. One town was hit particularly hard.";
		};
	};
	class Challenges
	{
		author = "Bohemia Interactive";
		briefingName = "Challenges";
		overviewPicture = "\a3\Missions_F_Beta\data\img\Challenges_overview_CA.paa";
		overviewText = "Firing Drills and Time Trials to hone your skills with weapons and vehicles";
		class Firing_Drills
		{
			author = "Bohemia Interactive";
			briefingName = "Firing Drills";
			overviewPicture = "\a3\Missions_F_Beta\data\img\FiringDrills_overview_CA.paa";
			overviewText = "Prove your skills: tactical movement and target scanning / acquisition / engagement";
			class Blue
			{
				author = "Bohemia Interactive";
				briefingName = "Blue";
				overviewPicture = "\a3\Missions_F_Gamma\data\img\FiringDrills_Blue_overview_CA.paa";
				overviewText = "Tactical Combatant: close-quarters environments with possible no-shoot targets";
				class SP_FD02
				{
					author = "Bohemia Interactive";
					briefingName = "CoF: Blue 1";
					directory = "a3\Missions_F_Beta\Challenges\firing_drills\sp_fd02.stratis";
					overviewPicture = "\a3\Missions_F_Gamma\data\img\SP_FD02_overview_CA.paa";
					overviewScript = "\A3\Modules_F_Beta\FiringDrills\scripts\overviewScript.sqf";
					overviewText = "A compressed course focusing on leaning and engaging from cover.";
				};
				class SP_FD07: SP_FD02
				{
					briefingName = "CoF: Blue 2";
					directory = "a3\Missions_F_Gamma\Challenges\firing_drills\sp_fd07.altis";
					overviewPicture = "\a3\Missions_F_Gamma\data\img\SP_FD07_overview_CA.paa";
					overviewText = "A night-time urban course making use of flashlights and night vision.";
				};
				class SP_FD08: SP_FD02
				{
					briefingName = "CoF: Blue 3";
					directory = "a3\Missions_F_Gamma\Challenges\firing_drills\sp_fd08.altis";
					overviewPicture = "\a3\Missions_F_Gamma\data\img\SP_FD08_overview_CA.paa";
					overviewText = "A different take on close-quarters combat set in heavy morning fog.";
				};
			};
			class Orange
			{
				author = "Bohemia Interactive";
				briefingName = "Orange";
				overviewPicture = "\a3\Missions_F_Gamma\data\img\FiringDrills_Orange_overview_CA.paa";
				overviewText = "Marksman: long-range engagements and use of accuracy targets";
				class SP_FD03
				{
					author = "Bohemia Interactive";
					briefingName = "CoF: Orange 1";
					directory = "a3\Missions_F_Beta\Challenges\firing_drills\sp_fd03.stratis";
					overviewPicture = "\a3\Missions_F_Gamma\data\img\SP_FD03_overview_CA.paa";
					overviewScript = "\A3\Modules_F_Beta\FiringDrills\scripts\overviewScript.sqf";
					overviewText = "A more traditional shooting range where the targets are further away and may require correct zeroing.";
				};
				class SP_FD09: SP_FD03
				{
					briefingName = "CoF: Orange 2";
					directory = "a3\Missions_F_Gamma\Challenges\firing_drills\sp_fd09.altis";
					overviewPicture = "\a3\Missions_F_Gamma\data\img\SP_FD09_overview_CA.paa";
					overviewText = "An event containing both close engagements and extreme long-range shooting.";
				};
				class SP_FD10: SP_FD03
				{
					briefingName = "CoF: Orange 3";
					directory = "a3\Missions_F_Gamma\Challenges\firing_drills\sp_fd10.altis";
					overviewPicture = "\a3\Missions_F_Gamma\data\img\SP_FD10_overview_CA.paa";
					overviewText = "A Course of Fire set on top of a hill with medium to long-range sniping.";
				};
			};
			class Purple
			{
				author = "Bohemia Interactive";
				briefingName = "Purple";
				overviewPicture = "\a3\Missions_F_Mark\data\img\FiringDrills_Purple_overview_CA.paa";
				overviewText = "Sharpshooter: a set of drills focused on weapon stabilization";
				class SP_FD11
				{
					author = "Bohemia Interactive";
					briefingName = "CoF: Purple 1";
					directory = "a3\Missions_F_Mark\Challenges\firing_drills\sp_fd11.altis";
					overviewPicture = "\a3\Missions_F_Mark\data\img\SP_FD11_overview_CA.paa";
					overviewPictureUnowned = "\a3\Missions_F_Mark\data\img\SP_FD11_overview_blackwhite_CA.paa";
					overviewScript = "\A3\Modules_F_Beta\FiringDrills\scripts\overviewScript.sqf";
					overviewText = "An improvised medium distance shooting range, sporting varied target groups at the Xirolimni dry dam.";
				};
				class SP_FD12: SP_FD11
				{
					briefingName = "CoF: Purple 2";
					directory = "a3\Missions_F_Mark\Challenges\firing_drills\sp_fd12.altis";
					overviewPicture = "\a3\Missions_F_Mark\data\img\SP_FD12_overview_CA.paa";
					overviewPictureUnowned = "\a3\Missions_F_Mark\data\img\SP_FD12_overview_blackwhite_CA.paa";
					overviewText = "An event during which you move between shooting stations on a quad bike and encounter a wide range of sharpshooter challenges.";
				};
				class SP_FD13: SP_FD11
				{
					briefingName = "CoF: Purple 3";
					directory = "a3\Missions_F_Mark\Challenges\firing_drills\sp_fd13.altis";
					overviewPicture = "\a3\Missions_F_Mark\data\img\SP_FD13_overview_CA.paa";
					overviewPictureUnowned = "\a3\Missions_F_Mark\data\img\SP_FD13_overview_blackwhite_CA.paa";
					overviewText = "An artificial hostage situation at the Ghost Hotel compound.";
				};
			};
			class Red
			{
				author = "Bohemia Interactive";
				briefingName = "Red";
				overviewPicture = "\a3\Missions_F_Gamma\data\img\FiringDrills_Red_overview_CA.paa";
				overviewText = "Multi-Gunner: specific weapons are to be used for consecutive segments of the drills";
				class SP_FD01
				{
					author = "Bohemia Interactive";
					briefingName = "CoF: Red 1";
					directory = "a3\Missions_F_Beta\Challenges\firing_drills\sp_fd01.stratis";
					overviewPicture = "\a3\Missions_F_Gamma\data\img\SP_FD01_overview_CA.paa";
					overviewScript = "\A3\Modules_F_Beta\FiringDrills\scripts\overviewScript.sqf";
					overviewText = "A stretched course which involves some running and sprinting - a mock-up house in the middle trains room clearing.";
				};
				class SP_FD05: SP_FD01
				{
					briefingName = "CoF: Red 3";
					directory = "a3\Missions_F_Gamma\Challenges\firing_drills\sp_fd05.altis";
					overviewPicture = "\a3\Missions_F_Gamma\data\img\SP_FD05_overview_CA.paa";
					overviewText = "An exploration of ancient castle ruins sets this unique multi-gun event apart.";
				};
				class SP_FD06: SP_FD01
				{
					briefingName = "CoF: Red 2";
					directory = "a3\Missions_F_Gamma\Challenges\firing_drills\sp_fd06.altis";
					overviewPicture = "\a3\Missions_F_Gamma\data\img\SP_FD06_overview_CA.paa";
					overviewText = "Clear a smaller course before driving to a primary objective near the mines.";
				};
			};
			class SP_FD04
			{
				author = "Bohemia Interactive";
				briefingName = "CoF: Green";
				directory = "a3\Missions_F_Beta\Challenges\firing_drills\sp_fd04.stratis";
				overviewPicture = "\a3\Missions_F_Gamma\data\img\SP_FD04_overview_CA.paa";
				overviewScript = "\A3\Modules_F_Beta\FiringDrills\scripts\overviewScript.sqf";
				overviewText = "An introduction to Firing Drills, the rules and target types.";
			};
		};
		class Time_Trials
		{
			author = "Bohemia Interactive";
			briefingName = "Time Trials";
			overviewPicture = "\a3\missions_f_kart\data\img\TimeTrials_overview_CA.paa";
			overviewText = "Beat the clock in a series of Check Point races. Put your vehicle handling, split-second decision making and course memorization skills to the test!";
			class Helicopters
			{
				author = "Bohemia Interactive";
				briefingName = "Helicopters";
				overviewPicture = "\a3\missions_f_heli\data\img\TimeTrials_Heli_overview_CA.paa";
				overviewText = "Fly helicopters through an increasingly challenging series of aerial courses. Split-second decisions, engine performance management and aerobatic maneuvers demand excellent piloting skills.";
				class SP_TT06
				{
					assetType = "Free";
					author = "Bohemia Interactive";
					briefingName = "TT6: Runway Lap";
					directory = "a3\Missions_F_Heli\Challenges\time_trials\sp_tt06.altis";
					overviewPicture = "\A3\missions_f_heli\data\img\SP_TT06_overview_CA.paa";
					overviewScript = "\A3\Modules_F_Beta\FiringDrills\scripts\overviewScript.sqf";
					overviewText = "This introductory helicopter trial consists of a simple loop around the airport's runways and taxiways.";
				};
				class SP_TT07
				{
					author = "Bohemia Interactive";
					briefingName = "TT7: Hillside Groove";
					directory = "a3\Missions_F_Heli\Challenges\time_trials\sp_tt07.altis";
					overviewPicture = "\A3\missions_f_heli\data\img\SP_TT07_overview_CA.paa";
					overviewPictureUnowned = "\A3\Missions_F_Heli\data\img\SP_TT07_overview_blackwhite_CA.paa";
					overviewScript = "\A3\Modules_F_Beta\FiringDrills\scripts\overviewScript.sqf";
					overviewText = "With its spaced out Check Points across the Altian countryside, this trial blends high speeds and terrain following abilities. Watch out for wind turbines and power lines!";
				};
				class SP_TT08: SP_TT07
				{
					briefingName = "TT8: King of the Hill";
					directory = "a3\Missions_F_Heli\Challenges\time_trials\sp_tt08.altis";
					overviewPicture = "\A3\missions_f_heli\data\img\SP_TT08_overview_CA.paa";
					overviewPictureUnowned = "\A3\Missions_F_Heli\data\img\SP_TT08_overview_blackwhite_CA.paa";
					overviewText = "In this trial your helicopter handling is put to the ultimate test. Complete tight turns, survive rapid descents and manage your RPMs well.";
				};
				class SP_TT09: SP_TT07
				{
					briefingName = "TT9: Kiss the Ground";
					directory = "a3\Missions_F_Heli\Challenges\time_trials\sp_tt09.altis";
					overviewPicture = "\A3\missions_f_heli\data\img\SP_TT09_overview_CA.paa";
					overviewPictureUnowned = "\A3\Missions_F_Heli\data\img\SP_TT09_overview_blackwhite_CA.paa";
					overviewText = "This special trial combines several special Check Points, where you need to hover or even land.";
				};
				class SP_TT10: SP_TT07
				{
					briefingName = "TT10: Kart Delivery";
					directory = "a3\Missions_F_Heli\Challenges\time_trials\sp_tt10.altis";
					overviewPicture = "\A3\missions_f_heli\data\img\SP_TT10_overview_CA.paa";
					overviewPictureUnowned = "\A3\Missions_F_Heli\data\img\SP_TT10_overview_blackwhite_CA.paa";
					overviewText = "A kart has broken down during a race at the Negades Speedway. Bring it back to base and junk another vehicle.";
				};
			};
			class IDAP
			{
				author = "Bohemia Interactive";
				briefingName = "IDAP";
				overviewPicture = "\a3\missions_f_orange\data\img\TimeTrials_Orange_overview_CA.paa";
				overviewText = "Participate in a series of humanitarian trials hosted by the International Development &amp; Aid Project. With challenges ranging from aid deliveries to leaflet drops, use various wheeled vehicles and utility drones to demonstrate your abilities!";
				class SP_TT11
				{
					assetType = "Free";
					author = "Bohemia Interactive";
					briefingName = "TT11: Downhill Rumble";
					directory = "a3\Missions_F_Orange\Challenges\time_trials\sp_tt11.altis";
					overviewPicture = "\A3\missions_f_orange\data\img\SP_TT11_overview_CA.paa";
					overviewPictureUnowned = "\a3\missions_f_orange\data\img\SP_TT11_overview_blackwhite_CA.paa";
					overviewScript = "\A3\Modules_F_Beta\FiringDrills\scripts\overviewScript.sqf";
					overviewText = "IDAP is raising awareness of their activities by holding an aid delivery race on Altis. Carefully manage the speed of your ambulance down the swirly roads towards the hillside stadium.";
				};
				class SP_TT12
				{
					author = "Bohemia Interactive";
					briefingName = "TT12: Jungle Fever";
					directory = "a3\Missions_F_Orange\Challenges\time_trials\sp_tt12.tanoa";
					overviewPicture = "\A3\missions_f_orange\data\img\SP_TT12_overview_CA.paa";
					overviewPictureUnowned = "\a3\missions_f_orange\data\img\SP_TT12_overview_blackwhite_CA.paa";
					overviewScript = "\A3\Modules_F_Beta\FiringDrills\scripts\overviewScript.sqf";
					overviewText = "Race your IDAP cargo van from the slopes of Mont Tanoa to the industrial port as quickly as possible in order to get critical supplies shipped out in time. Do mind the unexpected obstacles on the narrow jungle roads!";
				};
				class SP_TT13: SP_TT11
				{
					briefingName = "TT13: Turbulence";
					directory = "a3\Missions_F_Orange\Challenges\time_trials\sp_tt13.altis";
					overviewPicture = "\A3\missions_f_orange\data\img\SP_TT13_overview_CA.paa";
					overviewPictureUnowned = "\a3\missions_f_orange\data\img\SP_TT13_overview_blackwhite_CA.paa";
					overviewText = "IDAP's most skilled drone operators are put through their paces in this precision flying circuit race. Weave through a row of wind turbines and release information leaflets above sites along the way.";
				};
				class SP_TT14: SP_TT12
				{
					briefingName = "TT14: Life in Danger";
					directory = "a3\Missions_F_Orange\Challenges\time_trials\sp_tt14.tanoa";
					overviewPicture = "\A3\missions_f_orange\data\img\SP_TT14_overview_CA.paa";
					overviewPictureUnowned = "\a3\missions_f_orange\data\img\SP_TT14_overview_blackwhite_CA.paa";
					overviewText = "Rush an IDAP medical drone to a person in need through a perilous course across the Tanoan hilltops, jungles and towns.";
				};
				class SP_TT15: SP_TT12
				{
					briefingName = "TT15: Off Road Excavation";
					directory = "a3\Missions_F_Orange\Challenges\time_trials\sp_tt15.tanoa";
					overviewPicture = "\A3\missions_f_orange\data\img\SP_TT15_overview_CA.paa";
					overviewPictureUnowned = "\a3\missions_f_orange\data\img\SP_TT15_overview_blackwhite_CA.paa";
					overviewText = "The Red Spring surface mine provides a uniquely challenging off road driving experience for only the most talented IDAP competitors to navigate.";
				};
			};
			class Karts
			{
				author = "Bohemia Interactive";
				briefingName = "Karts";
				overviewPicture = "\a3\missions_f_kart\data\img\TimeTrials_Karts_overview_CA.paa";
				overviewText = "Steer go-karts through a set of circuit and point-to-point trials. Precise steering and optimal use of the kart's low center of mass are key here!";
				class SP_TT01
				{
					assetType = "Free";
					author = "Bohemia Interactive";
					briefingName = "TT1: Circuit Training";
					directory = "a3\Missions_F_Kart\Challenges\time_trials\sp_tt01.altis";
					overviewPicture = "\A3\missions_f_kart\data\img\SP_TT01_overview_CA.paa";
					overviewScript = "\A3\Modules_F_Beta\FiringDrills\scripts\overviewScript.sqf";
					overviewText = "This tight closed circuit sits right next to the Altis main airport terminal. Racing the quick loop often is ideal for getting a grip on the kart’s handling.";
				};
				class SP_TT02
				{
					author = "Bohemia Interactive";
					briefingName = "TT2: Kavala Chase";
					directory = "a3\Missions_F_Kart\Challenges\time_trials\sp_tt02.altis";
					overviewPicture = "\A3\missions_f_kart\data\img\SP_TT02_overview_CA.paa";
					overviewPictureUnowned = "\a3\Missions_F_Kart\data\img\SP_TT02_overview_blackwhite_CA.paa";
					overviewScript = "\A3\Modules_F_Beta\FiringDrills\scripts\overviewScript.sqf";
					overviewText = "Weave through the city of Kavala in an exciting and lengthy course. Frequent turns and narrow streets make this is a test of your spatial awareness.";
				};
				class SP_TT03: SP_TT02
				{
					briefingName = "TT3: Industrial Loop";
					directory = "a3\Missions_F_Kart\Challenges\time_trials\sp_tt03.altis";
					overviewPicture = "\A3\missions_f_kart\data\img\SP_TT03_overview_CA.paa";
					overviewPictureUnowned = "\a3\Missions_F_Kart\data\img\SP_TT03_overview_blackwhite_CA.paa";
					overviewText = "An improvised circuit set up in an abandoned factory complex. Watch out for the unprotected and unmarked obstacles!";
				};
				class SP_TT04: SP_TT02
				{
					briefingName = "TT4: Negades Speedway";
					directory = "a3\Missions_F_Kart\Challenges\time_trials\sp_tt04.altis";
					overviewPicture = "\A3\missions_f_kart\data\img\SP_TT04_overview_CA.paa";
					overviewPictureUnowned = "\a3\Missions_F_Kart\data\img\SP_TT04_overview_blackwhite_CA.paa";
					overviewText = "This looped trial on the open roads near Negades has you racing both uphill and downhill. Don't be distracted by the stunning views!";
				};
				class SP_TT05: SP_TT02
				{
					briefingName = "TT5: Terminal Velocity";
					directory = "a3\Missions_F_Kart\Challenges\time_trials\sp_tt05.altis";
					overviewPicture = "\A3\missions_f_kart\data\img\SP_TT05_overview_CA.paa";
					overviewPictureUnowned = "\a3\Missions_F_Kart\data\img\SP_TT05_overview_blackwhite_CA.paa";
					overviewText = "A more traditional kart racing circuit built on the Altis airport premises. Find the ideal racing line and hit the apex of every corner to set record times.";
				};
			};
			class Tanks
			{
				author = "Bohemia Interactive";
				briefingName = "Tanks";
				overviewPicture = "\A3\Missions_F_Tank\data\img\TimeTrials_Tank_overview_CO.paa";
				overviewText = "Decide whether to follow roads or chart new routes in a set of trials using armored vehicles. These challenges allow you to decide what obstacles to avoid and what shortcuts to take. Use the great mobility afforded by these steel beasts!";
				class SP_TT16
				{
					assetType = "Free";
					author = "Bohemia Interactive";
					briefingName = "TT16: Weasel Run";
					directory = "a3\Missions_F_Tank\Challenges\Time_Trials\SP_TT16.Altis";
					overviewPicture = "\A3\Missions_F_Tank\data\img\SP_TT16_overview_CO.paa";
					overviewPictureUnowned = "\A3\Missions_F_Tank\data\img\SP_TT16_overview_blackwhite_CO.paa";
					overviewScript = "\A3\Modules_F_Beta\FiringDrills\scripts\overviewScript.sqf";
					overviewText = "Master on and off road Nyx mobility by setting record lap times around the mountainside town of Abdera.";
				};
				class SP_TT17: SP_TT16
				{
					briefingName = "TT17: Shipping and Handling";
					directory = "a3\Missions_F_Tank\Challenges\Time_Trials\SP_TT17.Malden";
					overviewPicture = "\A3\Missions_F_Tank\data\img\SP_TT17_overview_CO.paa";
					overviewPictureUnowned = "\A3\Missions_F_Tank\data\img\SP_TT17_overview_blackwhite_CO.paa";
					overviewText = "Charge your Rhino down Mont Chauve and get it delivered to the airport as quickly as possible for airlift to the next event.";
				};
				class SP_TT18: SP_TT16
				{
					briefingName = "TT18: Hammer Time";
					directory = "a3\Missions_F_Tank\Challenges\Time_Trials\SP_TT18.Malden";
					overviewPicture = "\A3\Missions_F_Tank\data\img\SP_TT18_overview_CO.paa";
					overviewPictureUnowned = "\A3\Missions_F_Tank\data\img\SP_TT17_overview_blackwhite_CO.paa";
					overviewText = "Roll into honored tank commander Lt. Robert Hammer's tracks and trace his famed test of courage during the Malden Islands Crisis.";
				};
			};
		};
	};
	class Cutscenes
	{
		class Altis_intro1
		{
			directory = "a3\missions_f_orange\scenes\introOrange.Altis";
		};
		class Credits
		{
			directory = "A3\missions_f\data\scenes\credits1.Altis";
		};
		class Enoch_intro1
		{
			directory = "a3\Missions_F_Contact\Scenes\Enoch_intro1.Enoch";
		};
		class Malden_intro
		{
			directory = "a3\Map_Malden_Scenes_F\scenes\Malden_intro.Malden";
		};
		class Map_VR_anim01
		{
			directory = "a3\map_VR_scenes_f\scenes\introExp.VR";
		};
		class Stratis_intro1
		{
			directory = "a3\map_stratis_scenes_f\scenes\introExp.Stratis";
		};
		class Tanoa_intro1
		{
			directory = "a3\map_tanoa_scenes_f\scenes\tanoa_intro1.tanoa";
		};
	};
	class Development
	{
		class Sites
		{
			author = "Karel";
			briefing = 0;
			briefingName = "Sites";
			directory = "a3\Missions_F_Contact\Sites\_Sites.Enoch";
			overviewText = "Test dynamic sites.<br /><br /><t href='https://confluence.bistudio.com/display/CONTACT/Free+Roam+Architecture'>[Confluence Page]</t>";
		};
	};
	class Missions
	{
		displayName = "Scenarios";
		overview = "";
	};
	class MPMissions
	{
		class Apex
		{
			briefingName = "Apex Protocol";
			class EXP_m01
			{
				briefingName = "01 Keystone";
				directory = "a3\missions_f_exp\campaign\missions\exp_m01.tanoa";
			};
			class EXP_m02
			{
				briefingName = "02 Warm Welcome";
				directory = "a3\missions_f_exp\campaign\missions\exp_m02.tanoa";
			};
			class EXP_m03
			{
				briefingName = "03 Firestarter";
				directory = "a3\missions_f_exp\campaign\missions\exp_m03.tanoa";
			};
			class EXP_m04
			{
				briefingName = "04 Heart of Darkness";
				directory = "a3\missions_f_exp\campaign\missions\exp_m04.tanoa";
			};
			class EXP_m05
			{
				briefingName = "05 Extraction";
				directory = "a3\missions_f_exp\campaign\missions\exp_m05.tanoa";
			};
			class EXP_m06
			{
				briefingName = "06 Apex Protocol";
				directory = "a3\missions_f_exp\campaign\missions\exp_m06.tanoa";
			};
			class EXP_m07
			{
				briefingName = "07 End Game";
				directory = "a3\missions_f_exp\campaign\missions\exp_m07.tanoa";
			};
		};
		class EscapeFromMalden
		{
			briefingName = "Escape 10 Malden";
			directory = "A3\Missions_F_Patrol\MPScenarios\MP_EscapeFromMalden.Malden";
		};
		class EscapeFromTanoa
		{
			briefingName = "Escape 10 Tanoa";
			directory = "A3\Missions_F_Exp\MPScenarios\MP_EscapeFromTanoa.Tanoa";
		};
		class MP_Bootcamp_01
		{
			author = "Bohemia Interactive";
			briefingName = "Zeus 4+1 Bootcamp";
			directory = "A3\missions_f_bootcamp\mpscenarios\MP_Bootcamp_01.Altis";
			overview = "";
			overviewText = "Go through a series of bootcamp activities with friends.";
		};
		class MP_CombatPatrol_01
		{
			briefingName = "COOP 12 Combat Patrol";
			directory = "A3\Missions_F_Patrol\mpscenarios\MP_CombatPatrol_01.Altis";
		};
		class MP_CombatPatrol_02
		{
			briefingName = "COOP 12 Combat Patrol";
			directory = "A3\Missions_F_Patrol\mpscenarios\MP_CombatPatrol_02.Stratis";
		};
		class MP_CombatPatrol_03
		{
			briefingName = "COOP 12 Combat Patrol";
			directory = "A3\Missions_F_Patrol\mpscenarios\MP_CombatPatrol_03.Tanoa";
		};
		class MP_CombatPatrol_04
		{
			briefingName = "COOP 12 Combat Patrol";
			directory = "A3\Missions_F_Patrol\mpscenarios\MP_CombatPatrol_04.Malden";
		};
		class MP_CombatPatrol_Enoch
		{
			briefingName = "COOP 12 Combat Patrol";
			directory = "A3\Missions_F_Enoch\MPScenarios\combatPatrolEnoch.Enoch";
		};
		class MP_COOP_m01
		{
			briefingName = "@STR_A3_MP_COOP_m01_briefingName";
			directory = "A3\missions_f\mpscenarios\MP_COOP_m01.Stratis";
		};
		class MP_COOP_m02
		{
			briefingName = "@STR_A3_MP_COOP_m02_briefingName";
			directory = "A3\missions_f\mpscenarios\MP_COOP_m02.Stratis";
		};
		class MP_COOP_m03
		{
			directory = "A3\missions_f_gamma\mpscenarios\MP_COOP_m03.Altis";
		};
		class MP_COOP_m04
		{
			briefingName = "Zeus 10+1 Defend Kamino";
			directory = "A3\missions_f_curator\mpscenarios\MP_COOP_m04.Stratis";
		};
		class MP_COOP_m05
		{
			briefingName = "Zeus 10+1 Defend Syrta";
			directory = "A3\missions_f_curator\mpscenarios\MP_COOP_m05.Altis";
		};
		class MP_COOP_m06
		{
			briefingName = "Zeus 10+1 Seize Edoris";
			directory = "A3\missions_f_curator\mpscenarios\MP_COOP_m06.Altis";
		};
		class MP_COOP_m07
		{
			briefingName = "Zeus 10+1 Seize Feres";
			directory = "A3\missions_f_curator\mpscenarios\MP_COOP_m07.Altis";
		};
		class MP_COOP_m08
		{
			directory = "A3\missions_f_gamma\mpscenarios\MP_COOP_m08.Altis";
		};
		class MP_End_Game_02
		{
			briefingName = "End Game 32 Feres";
			directory = "A3\Missions_F_Exp_A\MPScenarios\MP_End_Game_02.Altis";
		};
		class MP_End_Game_03
		{
			briefingName = "End Game 16 Zaros";
			directory = "A3\Missions_F_Exp_A\MPScenarios\MP_End_Game_03.Altis";
		};
		class MP_End_Game_04
		{
			briefingName = "End Game 24 Balavu";
			directory = "A3\Missions_F_Exp\MPScenarios\MP_End_Game_04.Tanoa";
		};
		class MP_End_Game_05
		{
			briefingName = "End Game 16 Moddergat";
			directory = "A3\Missions_F_Exp\MPScenarios\MP_End_Game_05.Tanoa";
		};
		class MP_GroundSupport01
		{
			author = "Bohemia Interactive";
			briefingName = "Support 06 Katalaki";
			directory = "A3\Missions_F_Heli\MPScenarios\MP_GroundSupport01.Altis";
			overview = "";
			overviewText = "Invading NATO forces defend themselves from a CSAT counterattack.";
		};
		class MP_GroundSupport02
		{
			author = "Bohemia Interactive";
			briefingName = "Support 08 Sofia";
			directory = "A3\Missions_F_Heli\MPScenarios\MP_GroundSupport02.Altis";
			overview = "";
			overviewText = "Retreating AAF defend themselves from a NATO offensive.";
		};
		class MP_GroundSupport03
		{
			author = "Bohemia Interactive";
			briefingName = "Support 08 Pyrgos";
			directory = "A3\Missions_F_Heli\MPScenarios\MP_GroundSupport03.Altis";
			overview = "";
			overviewText = "CSAT-AAF relations have disintegrated. Both sides prepare to stake it all on Pyrgos, the capital.";
		};
		class MP_GroundSupport04
		{
			author = "Bohemia Interactive";
			briefingName = "Support 04 Rodopoli";
			directory = "A3\Missions_F_Heli\MPScenarios\MP_GroundSupport04.Altis";
			overview = "";
			overviewText = "Members of an elite CSAT Airborne Battalion launch an offensive against the FIA.";
		};
		class MP_GroundSupport05
		{
			author = "Bohemia Interactive";
			briefingName = "Support 05 Stratis";
			directory = "A3\Missions_F_Heli\MPScenarios\MP_GroundSupport05.Stratis";
			overview = "";
			overviewText = "The 111th Division launch their invasion of Stratis.";
		};
		class MP_Marksmen_01
		{
			author = "Bohemia Interactive";
			briefingName = "End Game 16 Kavala";
			directory = "A3\Missions_F_MP_Mark\MPScenarios\MP_Marksmen_01.Altis";
			overview = "Two forces compete to secure valuable schematics against a common enemy.";
			overviewText = "Two forces compete to secure valuable schematics against a common enemy.";
		};
		class MP_VANGUARD_APC_Airport
		{
			briefingName = "Vanguard 50 Power Plant";
			directory = "a3\Missions_F_Tank\MPmissions\MP_Vanguard_APC_Airport.Tanoa";
			overviewPicture = "a3\Missions_F_Tank\data\img\AK_Powerplant_CA.paa";
			overviewText = "$str_a3_vanguard_description_apc";
		};
		class MP_VANGUARD_LV_Chapoi
		{
			briefingName = "Vanguard 30 Chapoi";
			directory = "a3\Missions_F_Tank\MPmissions\MP_Vanguard_LV_Chapoi.Malden";
			overviewPicture = "a3\Missions_F_Tank\data\img\AK_Chapoi_CA.paa";
			overviewText = "$str_a3_vanguard_description_lv";
		};
		class MP_VANGUARD_TANK_Syrta
		{
			briefingName = "Vanguard 50 Syrta";
			directory = "a3\Missions_F_Tank\MPmissions\MP_Vanguard_TANK_Syrta.Altis";
			overviewPicture = "a3\Missions_F_Tank\data\img\AK_Syrta_CA.paa";
			overviewText = "$str_a3_vanguard_description_tank";
		};
		class MP_Warlords_Enoch
		{
			briefingName = "SC 24 Warlords";
			directory = "A3\Missions_F_Enoch\MPScenarios\WarlordsEnoch.Enoch";
		};
		class MP_Warlords_official_01
		{
			briefingName = "SC 32 Warlords (Whole Island)";
			directory = "A3\Missions_F_Warlords\MPScenarios\MP_Warlords_01.Altis";
			overview = "A3\Data_F_Warlords\Data\wl_logo_ca.paa";
			overviewText = "Capture sectors. Through them, advance to the enemy base and raid it. Parameters allow you to change various rules within the mission.";
		};
		class MP_Warlords_official_01_large: MP_Warlords_official_01
		{
			briefingName = "SC 64 Warlords (Whole Island)";
			directory = "A3\Missions_F_Warlords\MPScenarios\MP_Warlords_01_large.Altis";
		};
		class MP_Warlords_official_01_large2: MP_Warlords_official_01
		{
			briefingName = "SC 48 Warlords (Whole Island)";
			directory = "A3\Missions_F_Warlords\MPScenarios\MP_Warlords_01_large_ver2.Altis";
		};
		class MP_Warlords_official_01a: MP_Warlords_official_01
		{
			briefingName = "SC 16 Warlords (Central)";
			directory = "A3\Missions_F_Warlords\MPScenarios\MP_Warlords_01a.Altis";
		};
		class MP_Warlords_official_01b: MP_Warlords_official_01a
		{
			briefingName = "SC 16 Warlords (Pyrgos Gulf)";
			directory = "A3\Missions_F_Warlords\MPScenarios\MP_Warlords_01b.Altis";
		};
		class MP_Warlords_official_02: MP_Warlords_official_01
		{
			briefingName = "SC 16 Warlords";
			directory = "A3\Missions_F_Warlords\MPScenarios\MP_Warlords_02.Stratis";
		};
		class MP_Warlords_official_02_large: MP_Warlords_official_01
		{
			briefingName = "SC 32 Warlords";
			directory = "A3\Missions_F_Warlords\MPScenarios\MP_Warlords_02_large.Stratis";
		};
		class MP_Warlords_official_03: MP_Warlords_official_01
		{
			briefingName = "SC 16 Warlords (West)";
			directory = "A3\Missions_F_Warlords\MPScenarios\MP_Warlords_03.Tanoa";
		};
		class MP_Warlords_official_03a: MP_Warlords_official_01
		{
			briefingName = "SC 16 Warlords (South)";
			directory = "A3\Missions_F_Warlords\MPScenarios\MP_Warlords_03a.Tanoa";
		};
		class MP_Warlords_official_04: MP_Warlords_official_01
		{
			briefingName = "SC 16 Warlords";
			directory = "A3\Missions_F_Warlords\MPScenarios\MP_Warlords_04.Malden";
		};
		class MP_Warlords_official_04_large: MP_Warlords_official_01
		{
			briefingName = "SC 32 Warlords";
			directory = "A3\Missions_F_Warlords\MPScenarios\MP_Warlords_04_large.Malden";
		};
		class MP_ZGM_m11
		{
			briefingName = "Zeus 48+2 Master Altis";
			directory = "A3\missions_f_curator\mpscenarios\mp_zgm_m11.Altis";
		};
		class MP_ZGM_m11_EAST
		{
			briefingName = "Zeus 16+2 Master Altis (CSAT)";
			directory = "A3\missions_f_curator\mpscenarios\mp_zgm_m11_east.Altis";
		};
		class MP_ZGM_m11_GUER
		{
			briefingName = "Zeus 16+2 Master Altis (AAF)";
			directory = "A3\missions_f_curator\mpscenarios\mp_zgm_m11_guer.Altis";
		};
		class MP_ZGM_m11_WEST
		{
			briefingName = "Zeus 16+2 Master Altis (NATO)";
			directory = "A3\missions_f_curator\mpscenarios\mp_zgm_m11_west.Altis";
		};
		class MP_ZGM_m12
		{
			briefingName = "Zeus 48+2 Master Stratis";
			directory = "A3\missions_f_curator\mpscenarios\mp_zgm_m12.Stratis";
		};
		class MP_ZGM_m12_EAST
		{
			briefingName = "Zeus 16+2 Master Stratis (CSAT)";
			directory = "A3\missions_f_curator\mpscenarios\mp_zgm_m12_east.Stratis";
		};
		class MP_ZGM_m12_GUER
		{
			briefingName = "Zeus 16+2 Master Stratis (AAF)";
			directory = "A3\missions_f_curator\mpscenarios\mp_zgm_m12_guer.Stratis";
		};
		class MP_ZGM_m12_WEST
		{
			briefingName = "Zeus 16+2 Master Stratis (NATO)";
			directory = "A3\missions_f_curator\mpscenarios\mp_zgm_m12_west.Stratis";
		};
		class MP_ZGM_m13
		{
			briefingName = "Zeus 48+2 Master Virtual Reality";
			directory = "A3\missions_f_bootcamp\mpscenarios\mp_zgm_m13.VR";
		};
		class MP_ZGM_m13_EAST
		{
			briefingName = "Zeus 16+2 Master Virtual Reality (CSAT)";
			directory = "A3\missions_f_bootcamp\mpscenarios\mp_zgm_m13_east.VR";
		};
		class MP_ZGM_m13_GUER
		{
			briefingName = "Zeus 16+2 Master Virtual Reality (AAF)";
			directory = "A3\missions_f_bootcamp\mpscenarios\mp_zgm_m13_guer.VR";
		};
		class MP_ZGM_m13_WEST
		{
			briefingName = "Zeus 16+2 Master Virtual Reality (NATO)";
			directory = "A3\missions_f_bootcamp\mpscenarios\mp_zgm_m13_west.VR";
		};
		class MP_ZGM_m14
		{
			briefingName = "Zeus 48+2 Master Tanoa";
			directory = "A3\missions_f_exp\mpscenarios\mp_zgm_m14.Tanoa";
		};
		class MP_ZGM_m14_EAST
		{
			briefingName = "Zeus 16+2 Master Tanoa (CSAT)";
			directory = "A3\missions_f_exp\mpscenarios\mp_zgm_m14_east.Tanoa";
		};
		class MP_ZGM_m14_GUER
		{
			briefingName = "Zeus 16+2 Master Tanoa (Syndikat)";
			directory = "A3\missions_f_exp\mpscenarios\mp_zgm_m14_guer.Tanoa";
		};
		class MP_ZGM_m14_WEST
		{
			briefingName = "Zeus 16+2 Master Tanoa (NATO)";
			directory = "A3\missions_f_exp\mpscenarios\mp_zgm_m14_west.Tanoa";
		};
		class MP_ZGM_m15
		{
			briefingName = "Zeus 48+2 Master Malden";
			directory = "A3\missions_f_patrol\mpscenarios\mp_zgm_m15.Malden";
		};
		class MP_ZGM_m15_EAST
		{
			briefingName = "Zeus 16+2 Master Malden (CSAT)";
			directory = "A3\missions_f_patrol\mpscenarios\mp_zgm_m15_east.Malden";
		};
		class MP_ZGM_m15_GUER
		{
			briefingName = "Zeus 16+2 Master Malden (AAF)";
			directory = "A3\missions_f_patrol\mpscenarios\mp_zgm_m15_guer.Malden";
		};
		class MP_ZGM_m15_WEST
		{
			briefingName = "Zeus 16+2 Master Malden (NATO)";
			directory = "A3\missions_f_patrol\mpscenarios\mp_zgm_m15_west.Malden";
		};
		class MP_ZGM_m16
		{
			briefingName = "Zeus 48+2 Master Livonia";
			directory = "A3\Missions_F_Enoch\MPScenarios\MP_ZGM_m16.Enoch";
		};
		class MP_ZGM_m16_EAST
		{
			briefingName = "Zeus 16+2 Master Livonia (CSAT)";
			directory = "A3\Missions_F_Enoch\MPScenarios\MP_ZGM_m16_east.Enoch";
		};
		class MP_ZGM_m16_GUER
		{
			briefingName = "Zeus 16+2 Master Livonia (LDF)";
			directory = "A3\Missions_F_Enoch\MPScenarios\MP_ZGM_m16_guer.Enoch";
		};
		class MP_ZGM_m16_WEST
		{
			briefingName = "Zeus 16+2 Master Livonia (NATO)";
			directory = "A3\Missions_F_Enoch\MPScenarios\MP_ZGM_m16_west.Enoch";
		};
		class MP_ZR_8_Karts01
		{
			directory = "A3\missions_f_kart\mpscenarios\MP_ZR_8_Karts01.Altis";
		};
		class MP_ZR_8_Karts02
		{
			directory = "A3\missions_f_kart\mpscenarios\MP_ZR_8_Karts02.Stratis";
		};
		class MP_ZSC_m10
		{
			briefingName = "Zeus 32+2 Control Edessa";
			directory = "A3\missions_f_curator\mpscenarios\mp_zsc_m10.Altis";
		};
		class Showcase_Combined_arms
		{
			briefingName = "COOP 08 Combined Arms";
			directory = "a3\Missions_F_Beta\Showcases\Showcase_Combined_arms.Stratis";
		};
		class Showcase_FiringFromVehicles
		{
			briefingName = "COOP 04 Firing From Vehicles";
			directory = "a3\Missions_F_Mark\MPScenarios\MP_COOP_FiringFromVehicles.Altis";
			overviewPicture = "a3\Missions_F_Mark\data\img\Showcase_FiringFromVehicles_overview_CA.paa";
			overviewText = "Experience Firing From Vehicles as NATO forces race to rescue AAF hostages.";
		};
	};
	class MPTemplates {};
	class Showcases
	{
		author = "Bohemia Interactive";
		briefingName = "Showcases";
		displayName = "Showcases";
		overview = "";
		overviewPicture = "a3\Missions_F_Beta\data\img\Campaign_overview_CA.paa";
		overviewText = "Showcases";
		class Faction_BLUFOR
		{
			briefingName = "NATO";
			directory = "a3\Missions_F_Gamma\Showcases\Faction_BLUFOR.Altis";
		};
		class Faction_IDAP
		{
			briefingName = "IDAP";
			directory = "a3\Missions_F_Orange\Showcases\Faction_IDAP.Altis";
			overviewPicture = "\a3\Missions_F_Orange\data\img\Faction_IDAP_overview_CA.paa";
			overviewText = "Visit the IDAP NGO open day to learn about its mission, meet its staff and see live demos.";
		};
		class Faction_INDEPENDENT
		{
			briefingName = "AAF";
			directory = "a3\Missions_F_Gamma\Showcases\Faction_INDEPENDENT.Altis";
		};
		class Faction_OPFOR
		{
			briefingName = "CSAT";
			directory = "a3\Missions_F_Gamma\Showcases\Faction_OPFOR.Altis";
		};
		class Showcase_Arma
		{
			briefingName = "Armed Assault";
			directory = "a3\Missions_F_Gamma\Showcases\Showcase_Arma.Altis";
		};
		class Showcase_Combined_arms
		{
			briefingName = "Combined Arms";
			directory = "a3\Missions_F_Beta\Showcases\Showcase_Combined_arms.Stratis";
		};
		class Showcase_Commanding_I
		{
			briefingName = "Commanding";
			directory = "a3\missions_f_beta\showcases\Showcase_Commanding_I.Stratis";
		};
		class Showcase_Curator
		{
			briefingName = "Zeus";
			directory = "a3\missions_f_curator\showcases\Showcase_Curator.Altis";
		};
		class Showcase_Drones
		{
			briefingName = "Drones";
			directory = "a3\Missions_F_Gamma\Showcases\Showcase_Drones.Altis";
		};
		class Showcase_EndGame
		{
			briefingName = "End Game";
			directory = "a3\missions_f_exp\showcases\showcase_endgame.tanoa";
			overviewPicture = "a3\Missions_F_Exp\data\img\Showcase_EndGame_overview_CA.paa";
			overviewPictureUnowned = "a3\Missions_F_Exp\data\img\Showcase_EndGame_overview_blackwhite_CA.paa";
			overviewText = "Experience the End Game mode in a singleplayer environment. Secure and upload valuable schematics on Tanoa before the enemy is able to stop you.";
		};
		class Showcase_FiringFromVehicles
		{
			briefingName = "Firing From Vehicles";
			directory = "a3\missions_f_mark\showcases\showcase_firingfromvehicles.altis";
			overviewPicture = "a3\Missions_F_Mark\data\img\Showcase_FiringFromVehicles_overview_CA.paa";
			overviewText = "Experience Firing From Vehicles as NATO forces race to rescue AAF hostages.";
		};
		class Showcase_FixedWings
		{
			directory = "a3\missions_f_epa\showcases\showcase_fixedwings.altis";
		};
		class Showcase_Gunships
		{
			briefingName = "Gunships";
			directory = "a3\Missions_F_Gamma\Showcases\Showcase_Gunships.Altis";
		};
		class Showcase_Helicopters
		{
			briefingName = "@STR_A3_Showcase_Helicopters_Mission_Name";
			directory = "a3\missions_f\showcases\showcase_helicopters.stratis";
		};
		class Showcase_Infantry
		{
			briefingName = "@STR_A3_Showcase_Infantry_Mission_Name";
			directory = "a3\missions_f\showcases\showcase_infantry.stratis";
		};
		class Showcase_Jets
		{
			author = "Bravo Zero One Studios";
			briefingName = "Fighter Jets";
			directory = "A3\Missions_F_Jets\showcases\showcase_jets.altis";
			overviewPicture = "\a3\Missions_F_Jets\data\img\Showcase_Jets_overview_CA.paa";
			overviewPictureUnowned = "\a3\Missions_F_Jets\data\img\Showcase_Jets_overview_CA.paa";
			overviewText = "Dominate the skies of Altis in your fighter jet.";
		};
		class Showcase_LawsOfWar
		{
			briefingName = "Laws of War";
			directory = "a3\Missions_F_Orange\Showcases\Showcase_LawsOfWar.VR";
			overviewPicture = "\a3\Missions_F_Orange\data\img\Showcase_LawsOfWar_overview_CA.paa";
			overviewText = "Learn more about International Humanitarian Law in a training session by IDAP.";
		};
		class Showcase_Marksman
		{
			briefingName = "Marksmen";
			directory = "a3\missions_f_mark\showcases\showcase_marksman.altis";
			overviewPicture = "a3\Missions_F_Mark\data\img\Showcase_Marksman_overview_CA.paa";
			overviewPictureUnowned = "a3\Missions_F_Mark\data\img\Showcase_Marksman_overview_blackwhite_CA.paa";
			overviewText = "Utilize your marksman rifle and the new weapon stabilization features to carry out counter-insurgency operations against FIA forces.";
		};
		class Showcase_Night
		{
			briefingName = "Night";
			directory = "a3\missions_f_beta\showcases\Showcase_Night.Stratis";
		};
		class Showcase_SCUBA
		{
			briefingName = "@STR_A3_Showcase_SCUBA_briefingName";
			directory = "a3\missions_f\showcases\showcase_scuba.stratis";
		};
		class Showcase_SlingLoading
		{
			briefingName = "Sling Loading";
			directory = "a3\missions_f_heli\showcases\showcase_slingloading.altis";
			overviewPicture = "\a3\Missions_F_Heli\data\img\Showcase_SlingLoading_overview_CA.paa";
			overviewPictureUnowned = "\a3\Missions_F_Heli\data\img\Showcase_SlingLoading_overview_blackwhite_CA.paa";
			overviewText = "Use your heavy transport helicopter to support NATO forces on Altis.";
		};
		class Showcase_Supports
		{
			briefingName = "Supports";
			directory = "a3\missions_f_beta\showcases\Showcase_Supports.Stratis";
		};
		class Showcase_TankDestroyers
		{
			briefingName = "Tank Destroyers";
			directory = "a3\missions_f_tank\showcases\Showcase_TankDestroyers.Altis";
			overviewPicture = "A3\Missions_F_Tank\data\img\Showcase_TankDestroyers.paa";
			overviewText = "Take control of a tank destroyer and go head-to-head with enemy armor on the battlefield.";
		};
		class Showcase_Tanks
		{
			briefingName = "Tanks";
			directory = "a3\Missions_F_Gamma\Showcases\Showcase_Tanks.Altis";
		};
		class Showcase_Vehicles
		{
			briefingName = "@STR_A3_Showcase_Vehicles_briefingName";
			directory = "a3\missions_f\showcases\showcase_vehicles.stratis";
		};
		class VTOL
		{
			briefingName = "VTOL";
			directory = "a3\missions_f_exp\showcases\showcase_vtol.tanoa";
			overviewPicture = "a3\Missions_F_Exp\data\img\Showcase_VTOL_overview_CA.paa";
			overviewPictureUnowned = "a3\Missions_F_Exp\data\img\Showcase_VTOL_overview_blackwhite_CA.paa";
			overviewText = "VTOL aircraft, Overhauled radar functionality, New sensors and datalink features";
		};
	};
	class Templates {};
	class Tutorial {};
};
