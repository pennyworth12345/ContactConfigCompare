class CfgHints
{
	class Arma3
	{
		category = "Product";
		displayName = "Arma 3";
		logicalOrder = 1;
		class Feedback
		{
			arguments[] = {};
			description = "We intend this to involve you more directly in the development process and give you the opportunity to affect the final game. Your feedback and bug reports are welcome and can help us to improve the game significantly.%1Please visit %3<a href='http://feedback.arma3.com/'>feedback.arma3.com</a>%4 to learn how to submit feedback. To discuss the game and related topics, please visit %3<a href='http://forums.bistudio.com/'>forums.bistudio.com</a>%4. Thank you kindly for your support!";
			displayName = "Reports and Feedback";
			image = "\a3\ui_f\data\gui\cfg\hints\Miss_icon_ca.paa";
			logicalOrder = 4;
			tip = "";
		};
		class License
		{
			arguments[] = {"call BIS_fnc_advHintCredits"};
			description = "%11";
			displayName = "License Texts";
			image = "\a3\ui_f\data\gui\cfg\hints\License_ca.paa";
			logicalOrder = 5;
		};
		class Welcome1
		{
			arguments[] = {};
			description = "Arma 3 is a %3unique military game%4 with an %3infantry focus%4. Built upon %3appropriate%4, %3useful%4 and %3engaging%4 elements of %3simulation%4, it's an %3accessible platform%4 for a variety of official and community playable / sandbox content, based on the principles of %3authenticity%4, %3diversity%4 and %3opportunity%4.%1%1%2Richly detailed battlefields%1%2Diverse range of authentically simulated vehicles and weapons%1%2Varied pieces of playable content in singleplayer and multiplayer%1%2Powerful scenario editor, mod creation and a creative community%1%2Learn section with bootcamp and virtual reality trainings to get you started%1%1More at %3<a href='http://www.arma3.com'>arma3.com</a>%4";
			displayName = "New to Arma?";
			image = "\a3\ui_f\data\gui\cfg\hints\Miss_icon_ca.paa";
			logicalOrder = 2;
			tip = "";
			class HeliPitch_sub5
			{
				arguments[] = {{{"ShowMap"}}};
				description = "Some hints point to entries in the %3Field Manual%4. There, you will find more detailed information on the topic. %1%2Open the map by pressing %11.%1%2Select the Log tab from the list on the left.%1%2Select the Hints tab from the list that appears.%1%2Click the topic you want know more about.%1You will then be taken to the associated entry in the Field Manual.";
				displayName = "Field Manual";
				image = "\a3\Ui_f\data\GUI\Cfg\Hints\Rules_ca.paa";
				tip = "Hints that have been shown in the current session are highlited in the Field Manual by <img size='1' align='left' image = '\A3\Ui_f\data\Map\Markers\Military\warning_CA.paa'/>";
			};
		};
		class Welcome2
		{
			arguments[] = {};
			description = "As compared to Arma 2, you'll find the significantly updated %3Real Virtuality™ 4.0%4 engine powering your experience. With it, we're aiming to take the elements that make Arma great, enhance them where appropriate, and deliver a robust %3platform%4 for future growth.%1%1%2Fluid new animations%1%2Upgraded sound engine%1%2Ragdoll simulation%1%2PhysX™-supported vehicles%1%1More at %3<a href='http://www.arma3.com/whatsnew'>arma3.com/whatsnew</a>%4";
			displayName = "Arma Veteran?";
			image = "\a3\ui_f\data\gui\cfg\hints\Miss_icon_ca.paa";
			logicalOrder = 3;
			tip = "";
		};
		class Welcome4
		{
			arguments[] = {};
			description = "To get off to the best possible start - and to get the most out of your experience - please look through a quick set of options. Then, either have a look at what the game offers, or start exploring yourself!%1%1%2%3Video options%4 - improved automatic benchmark should provide better defaults, but have a look in the video options to hit the perfect balance between performance, quality, and personal preference.%1%2%3Controls%4 - some default bindings are different to Arma 2 (e.g. grenades and inventory). See how you like them, experiment with the different presets on offer, or configure your own set up.%1%2%3Playable Content%4 - check out showcases of our new features and gameplay, load up quick and fun challenges, cooperate with friends in multiplayer, or dig into the sandbox with the editor. More content will be added gradually!%1%2%3Feedback%4 - help us by reporting issues on the Feedback Tracker.%1%1Thank you for your support and cya on the battlefield!";
			displayName = "Prepare for War";
			image = "\a3\ui_f\data\gui\cfg\hints\Miss_icon_ca.paa";
			logicalOrder = 1;
			tip = "";
		};
	};
	class CombatantCodeOfConduct
	{
		category = "LOAC";
		displayName = "Code of Conduct for Combatants";
		logicalOrder = 2;
		class Civilians
		{
			arguments[] = {};
			description = "Non-combatants such as civilians should <t %5>never</t> be <t %5>targeted</t>.%1%1%2 Respect them.%1%2 Treat them humanely.%1%2 Protect them.%1%2 Respect their property.";
			displayName = "Civilians";
			image = "\a3\UI_F_Orange\Data\CfgHints\codeofconduct5_ca.paa";
			logicalOrder = 5;
			tip = "Protect civilians and treat them with respect!";
		};
		class CombatRules
		{
			arguments[] = {};
			description = "Always keep these basic rules in mind:%1%2 Fight only <t %5>combatants</t>.%1%2 Attack only <t %5>military targets</t>.%1%2 <t %5>Spare civilian</t> persons and objects.%1%2 <t %5>Limit destruction</t> to what your mission requires.";
			displayName = "Combat Rules";
			image = "\a3\UI_F_Orange\Data\CfgHints\codeofconduct1_ca.paa";
			logicalOrder = 1;
			tip = "Respect the laws of war!";
		};
		class HorsDeCombat
		{
			arguments[] = {};
			description = "When combatants are <t %5>hors de combat</t> (""out of fight"": e.g. wounded, captured, sick or shipwrecked), they should <t %5>not be targeted</t>.%1%1%2 Collect them.%1%2 Care for them.%1%2 Hand them over to a superior or nearest medical personnel.%1%2 Respect medical personnel, facilities and any civilians helping.";
			displayName = "Hors de Combat";
			image = "\a3\UI_F_Orange\Data\CfgHints\codeofconduct3_ca.paa";
			logicalOrder = 3;
			tip = "Don't target those who are hors de combat!";
		};
		class PrisonersOfWar
		{
			arguments[] = {};
			description = "Captured and surrendered enemy combatants should be <t %5>treated humanely</t>.%1%1%2 Spare them.%1%2 Disarm them.%1%2 Hand them over to a superior.%1%2 Treat them humanely.";
			displayName = "Prisoners of War";
			image = "\a3\UI_F_Orange\Data\CfgHints\codeofconduct4_ca.paa";
			logicalOrder = 4;
			tip = "Treat prisoners humanely!";
		};
		class ProtectiveSymbols
		{
			arguments[] = {"""<img size='1.5' image = 'A3\Data_f\Flags\flag_rcrystal_co' />"""};
			description = "<t %5>Symbols</t> such as the Red Crystal, Red Cross and Red Crescent should be <t %5>respected</t>.%1%11%1%1They protect:%1%2 Medical staff%1%2 Ambulances and relief transports%1%2 Hospitals and first-aid posts";
			displayName = "Protective Symbols";
			image = "\a3\UI_F_Orange\Data\CfgHints\codeofconduct2_ca.paa";
			logicalOrder = 2;
			tip = "Respect the protective signs!";
		};
	};
	class Command
	{
		displayName = "Commanding";
		logicalOrder = 17;
		class CombatModes
		{
			arguments[] = {"format [""color = '%1'"",(((configfile >> 'CfgInGameUI' >> 'CommandBar' >> 'UnitInfo' >> 'UnitCombatMode' >> 'colorGreen') call bis_fnc_colorConfigToRGBA) call bis_fnc_colorRGBAtoHTML)]", {"STR_A3_Orange_CfgHints_CombatModes_arg12"}, {"STR_A3_Orange_CfgHints_CombatModes_arg13"}, {"STR_A3_Orange_CfgHints_CombatModes_arg14"}, {"STR_A3_Orange_CfgHints_CombatModes_arg15"}};
			description = "%12%1%2%13%1%2%14%1%2%15%1%1The available combat modes are:%1%2<t %5>Open fire</t> - units will fire at any suitable target in range%1%2<t %5>Hold fire</t> <img size='1' %11 image='a3\UI_F\data\IGUI\Cfg\CommandBar\unitCombatMode_ca.paa' /> - units will not fire at will, unless explicitly ordered to do so%1%2<t %5>Fire</t> - units will eliminate only assigned targets";
			displayName = "Combat Modes";
			image = "\a3\ui_f\data\gui\cfg\hints\Commanding_ca.paa";
			tip = "Controlling RoE will let you set ambushes and avoid undesired escalations.";
			class Hint
			{
				arguments[] = {{"STR_A3_Orange_CfgHints_CombatModes_arg12"}, {"STR_A3_Orange_CfgHints_CombatModes_arg13"}, {"STR_A3_Orange_CfgHints_CombatModes_arg14"}, {"STR_A3_Orange_CfgHints_CombatModes_arg15"}};
				description = "%11%1%2%12%1%2%13%1%2%14";
				displayName = "Combat Modes";
				image = "\a3\ui_f\data\gui\cfg\hints\Commanding_ca.paa";
				tip = "Controlling RoE will let you set ambushes and avoid undesired escalations.";
			};
		};
		class Commandbar
		{
			arguments[] = {"format [""color = '%1'"",(((configfile >> 'CfgInGameUI' >> 'CommandBar' >> 'UnitInfo' >> 'UnitCombatMode' >> 'colorGreen') call bis_fnc_colorConfigToRGBA) call bis_fnc_colorRGBAtoHTML)]", "format [""color = '%1'"",(((configfile >> 'CfgInGameUI' >> 'CommandBar' >> 'UnitInfo' >> 'UnitStatus' >> 'colorWounded') call bis_fnc_colorConfigToRGBA) call bis_fnc_colorRGBAtoHTML)]", "format [""color = '%1'"",(((configfile >> 'CfgInGameUI' >> 'CommandBar' >> 'UnitInfo' >> 'UnitStatus' >> 'colorNoAmmo') call bis_fnc_colorConfigToRGBA) call bis_fnc_colorRGBAtoHTML)]", "format [""color = '%1'"",(((configfile >> 'CfgInGameUI' >> 'CommandBar' >> 'UnitInfo' >> 'UnitBehavior' >> 'colorStealth') call bis_fnc_colorConfigToRGBA) call bis_fnc_colorRGBAtoHTML)]", "format [""color = '%1'"",(((configfile >> 'CfgInGameUI' >> 'CommandBar' >> 'UnitInfo' >> 'UnitBehavior' >> 'colorCombat') call bis_fnc_colorConfigToRGBA) call bis_fnc_colorRGBAtoHTML)]"};
			description = "The command bar displays information about subordinate units. Each unit under your command shows: %1%2ID: 1, 2, 3 ...%1%2Rank (<img size='1'   image='a3\UI_F\data\GUI\Cfg\Ranks\private_gs.paa' /> <img size='1'   image='a3\UI_F\data\GUI\Cfg\Ranks\sergeant_gs.paa' /> <img size='1'   image='a3\UI_F\data\GUI\Cfg\Ranks\corporal_gs.paa' /> <img size='1'   image='a3\UI_F\data\GUI\Cfg\Ranks\major_gs.paa' />...) %1%2Specialization (<img size='1'   image='a3\UI_F\data\IGUI\Cfg\WeaponIcons\aa_ca.paa' /> <img size='1'   image='a3\UI_F\data\IGUI\Cfg\WeaponIcons\at_ca.paa' /> <img size='1'   image='a3\UI_F\data\IGUI\Cfg\WeaponIcons\gl_ca.paa' /> <img size='1'   image='a3\UI_F\data\IGUI\Cfg\WeaponIcons\mg_ca.paa' /> <img size='1'   image='a3\UI_F\data\IGUI\Cfg\WeaponIcons\scuba_ca.paa' /> <img size='1'   image='a3\UI_F\data\IGUI\Cfg\WeaponIcons\srifle_ca.paa' />)%1%2Vehicle occupation%1%2Vehicle role (<img size='1'   image='a3\UI_F\data\IGUI\Cfg\CommandBar\imageDriver_ca.paa' /> <img size='1'  image='a3\UI_F\data\IGUI\Cfg\CommandBar\imageCargo_ca.paa' /> <img size='1'  image='a3\UI_F\data\IGUI\Cfg\CommandBar\imageCommander_ca.paa' /> <img size='1'  image='a3\UI_F\data\IGUI\Cfg\CommandBar\imageGunner_ca.paa' />)%1%2Health Condition: Wounded <img size='1' %12 image='a3\UI_F\data\IGUI\Cfg\CommandBar\unitNameBackground_normal_ca.paa' />, No Ammo <img size='1' %13 image='a3\UI_F\data\IGUI\Cfg\CommandBar\unitNameBackground_normal_ca.paa' />%1%2Combat mode: Hold Fire <img size='1' %11 image='a3\UI_F\data\IGUI\Cfg\CommandBar\unitCombatMode_ca.paa' />%1%2Behavior: Stealth <img size='1' %14 image='a3\UI_F\data\IGUI\Cfg\CommandBar\unitBehavior_ca.paa' />, Combat <img size='1' %15 image='a3\UI_F\data\IGUI\Cfg\CommandBar\unitBehavior_ca.paa' />%1%2Current orders: 'Move'";
			displayName = "Command Bar";
			image = "\a3\ui_f\data\gui\cfg\hints\Commanding_ca.paa";
			tip = "";
		};
		class Complex
		{
			arguments[] = {{{"selectAll"}}};
			description = "Assign complex commands from the command menu.%1%2Open the quick command menu %11. This selects all your subordinate units.%1%2Press %3[Backspace]%4 to open complex commands.%1Alternatively access specific categories via predefined keys %3[0–9]:%4<t><t/>%1<t><t/>1 – Move%1<t><t/>2 – Target%1<t><t/>3 – Engage%1<t><t/>4 – Mount%1<t><t/>5 – Status%1<t><t/>6 – Action%1<t><t/>7 – Combat mode%1<t><t/>8 – Formation%1<t><t/>9 – Team%1<t><t/>0 – Reply%1%2%3[Backspace]%4 returns to the root menu for selected units or closes the menu.";
			displayName = "Complex Commands";
			image = "\a3\ui_f\data\gui\cfg\hints\Commanding_ca.paa";
			tip = "";
			class Behavior_sub
			{
				arguments[] = {};
				description = "You can change the behavior of your team - %3STEALTH%4, %3COMBAT%4, %3AWARE%4 or %3SAFE%4 - depending on the actual situation.%1%2Select your units %3[F2-F10]%4%1%2Press %3[7]%4 and select the behavior";
				displayName = "Behavior";
				dlc = -1;
				image = "\a3\ui_f\data\gui\cfg\hints\Rifles_ca.paa";
				tip = "";
			};
			class ChangingStances_sub
			{
				arguments[] = {{{"selectAll"}}};
				description = "As standing units are easily seen and hit, you can order your men to kneel or go prone.%1%2Select the desired unit with %3[F2-F10]%4.%1%2Press %3[7]%4 and choose the appropriate stance.";
				displayName = "Change Stances";
				dlc = -1;
				image = "\a3\ui_f\data\gui\cfg\hints\BasicStances_ca.paa";
				tip = "";
			};
			class CombatMode_sub
			{
				arguments[] = {};
				description = "To stay undetected or to prepare an ambush, it's best to order your subordinates to %3HOLD FIRE%4.%1If you are detected or you want to close the trap, order your men to %3OPEN FIRE%4.%1%2Select your units %3[F2-F10]%4%1%2Press %3[3]%4 and select the combat mode";
				displayName = "Combat Mode";
				dlc = -1;
				image = "\a3\ui_f\data\gui\cfg\hints\Rifles_ca.paa";
				tip = "";
			};
			class WatchDirection_sub
			{
				arguments[] = {{{"selectAll"}}};
				description = "You can adjust the direction your units are facing.%1%2Select the desired unit with %3[F2-F10]%4 %1%2Press %3[3]%4, %3[8]%4 and choose the direction";
				displayName = "Watch Direction";
				dlc = -1;
				image = "\a3\ui_f\data\gui\cfg\hints\Direction_ca.paa";
				tip = "";
			};
		};
		class Formations
		{
			arguments[] = {{{"selectAll"}}};
			description = "As you move, you can see that your subordinates are following you in a certain formation. Try changing the default %3Wedge%4 formation to %3Line%4 or %3Column%4.%1%2Select all your units with %11.%1%2Press %3[8]%4 and choose a %3new formation%4.";
			displayName = "Formations";
			image = "\a3\ui_f\data\gui\cfg\hints\Commanding_ca.paa";
			tip = "";
		};
		class MarkTarget
		{
			arguments[] = {{{"lockTarget"}}, {{"selectAll"}}};
			description = "As a team leader, you can assign targets to your teammates: %1%2Report a target for the whole team by pressing %11.%1You can also assign targets individually: %1%2Select a teammate %3[F2–F10]%4. %1%2Point at the target. %1%2Choose %3Attack%4.";
			displayName = "Target Assignment";
			image = "\a3\ui_f\data\gui\cfg\hints\Commanding_ca.paa";
			tip = "";
		};
		class Orbat
		{
			arguments[] = {};
			description = "Units are marked according to their side.%1<img size='1' %6 image='a3\UI_F\data\GUI\Cfg\Hints\icon_text\b_unknown_ca.paa' /> – BLUFOR (NATO, FIA)%1<img size='1' %7 image='a3\UI_F\data\GUI\Cfg\Hints\icon_text\o_unknown_ca.paa' /> – OPFOR (CSAT)%1<img size='1' %8 image='a3\UI_F\data\GUI\Cfg\Hints\icon_text\n_unknown_ca.paa' /> – Independent (AAF)%1<img size='1' %9 image='a3\UI_F\data\GUI\Cfg\Hints\icon_text\n_unknown_ca.paa' /> – Neutral (Civilians)";
			displayName = "Side Markers";
			image = "\a3\ui_f\data\gui\cfg\hints\Commanding_ca.paa";
			tip = "";
		};
		class Quick
		{
			arguments[] = {{{"selectAll"}}, {{"ActionContext"}}};
			description = "As a commander, you have access to quick commands via the quick command menu %11. The menu is context sensitive – commands change according to objects you point at. Select some units with %3[F2-F10]%4 and:%1%2Use %12 on a position to issue a move command.%1%2Use %12 on a target to issue an engage command.%1%2Use %12 on a vehicle to order mount.%1%2To change the direction your units are facing, use %12 while holding %3[Left Alt]%4 when pointing at a position.";
			displayName = "Quick Commands";
			image = "\a3\ui_f\data\gui\cfg\hints\Commanding_ca.paa";
			tip = "When you open quick commands, the whole squad is selected by default.";
			class DeactivatingMines_sub
			{
				arguments[] = {};
				description = "You can order your engineer to deactivate a revealed mine.%1%2Select your subordinate %3[F2-F10]%4, point at the mine and confirm the %3Deactivate mine%4 action%1%2Or select your subordinate, press %3[6]%4 for actions and choose %3Deactivate mine%4 option.";
				displayName = "Deactivating Mines";
				dlc = -1;
				image = "\a3\ui_f\data\gui\cfg\hints\Disarm_ca.paa";
				tip = "";
			};
			class FirstAid_sub
			{
				arguments[] = {};
				description = "You can order your medic to treat wounded units.%1%2Select your medic %3[F2-F10]%4, point at the wounded unit and confirm the %3Treat unit%4 action%1%2Or select your medic, press %3[6]%4 for actions and choose the nearest wounded unit.";
				displayName = "First Aid";
				dlc = -1;
				image = "\a3\ui_f\data\igui\cfg\actions\Heal_ca.paa";
				tip = "";
			};
			class Repairing_sub
			{
				arguments[] = {};
				description = "You can order your repair specialist to repair damaged vehicles to running condition.%1%2Select your subordinate %3[F2-F10]%4, point at the damaged vehicle and confirm the %3Repair%4 action%1%2Or select your subordinate, press %3[6]%4 for actions and choose the damaged vehicle";
				displayName = "Repairing";
				dlc = -1;
				image = "\a3\ui_f\data\igui\cfg\actions\Repair_ca.paa";
				tip = "";
			};
		};
		class Response
		{
			arguments[] = {{{"selectAll"}}};
			description = "As a subordinate unit in need of a quick response, press %11 to open the quick command menu. Here you can select one of the responses to your incoming commands:%1%2Done%1%2Negative%1%2Ready to fire%1%2Cannot fire%1%2Repeat%1%2Copy%1%2One less%1%2Where are you?%1%2Support%1%2Custom – used for more complex conversations such as support requests%1%2Radio";
			displayName = "Command Responses";
			image = "\a3\ui_f\data\gui\cfg\hints\Response_ca.paa";
			tip = "";
		};
		class Selecting
		{
			arguments[] = {{{"selectAll"}}, {{"switchCommand"}}};
			description = "%2Select your subordinates with %3[F2–F10] keys%4.%1%2Use %3[F11]%4 and %3[F12]%4 to scroll through command bar filled with more than 10 units.%1%2Select all subordinates with %11.";
			displayName = "Selecting";
			image = "\a3\ui_f\data\gui\cfg\hints\Commanding_ca.paa";
			tip = "";
			class Selecting_sub
			{
				arguments[] = {{{"selectAll"}}};
				description = "Select your subordinates with %3[F1-F10]%4 keys.";
				displayName = "Select Subordinates";
				dlc = -1;
				image = "\a3\ui_f\data\gui\cfg\hints\Commanding_ca.paa";
				tip = "";
			};
			class SelectSquad_sub
			{
				arguments[] = {{{"selectAll"}}};
				description = "Select all subordinates with %11.";
				displayName = "Select Squad";
				dlc = -1;
				image = "\a3\ui_f\data\gui\cfg\hints\Commanding_ca.paa";
				tip = "If you have more than 10 subordinates, use %3[F11]%4 and %3[F12]%4 to cycle through all available units.";
			};
		};
		class Stances
		{
			arguments[] = {};
			description = "You can adjust the direction your units are facing.%1%2Select the desired unit with %3[F2-F10]%4.%1%2Press %3[3]%4, %3[8]%4 and choose the azimuth.%1As standing units are easily seen and hit, you can order your men to kneel or go prone.%1%2Select your units with %3[F2-F10]%4.%1%2Press %3[7]%4 and choose the appropriate position.%1%2To watch for incoming enemy units on the horizon, press %3[3]%4, %3[7]%4 to %3Scan horizon%4.";
			displayName = "Stances";
			image = "\a3\ui_f\data\gui\cfg\hints\Commanding_ca.paa";
			tip = "";
		};
		class TeamGear
		{
			arguments[] = {{{"showMap"}}};
			description = "When you're a team leader, you can access your teammate's inventories via the Journal.  %1%2Open the Map %11. %1%2Click %3Units%4. %1%2Select a soldier with %3[F2–F10] keys%4. %1%2Click %3Inventory%4.";
			displayName = "Team Inventory";
			image = "\a3\ui_f\data\gui\cfg\hints\Commanding_ca.paa";
			tip = "";
		};
		class Teams
		{
			arguments[] = {};
			description = "Units can be organized into teams for a quick selection. This is useful when commanding a large number of units.%1%2Select units.%1%2Choose Assign %3[9]%4.%1%2Choose a team color from the menu.%1Alternatively:%1%2Select units.%1%2Press %3[Left Ctrl] + [F1-F5]%4 to create a team.%1To select the entire team:%1%2Use %3[Left Shift] + [F1-F5]%4.";
			displayName = "Teams";
			image = "\a3\ui_f\data\gui\cfg\hints\Commanding_ca.paa";
			tip = "White team is used for any unassigned units.";
		};
		class Vehicles
		{
			arguments[] = {};
			description = "Order your men to get in a certain vehicle:%1%2Select your units with %3[F2-F10]%4.%1%2Press %3[4]%4 to bring up the list of nearby vehicles.%1%2Select a vehicle from the list.%1According to the vehicle type, you have the option to choose between specific positions like driver, gunner or commander.";
			displayName = "Vehicles";
			image = "\a3\ui_f\data\gui\cfg\hints\Commanding_ca.paa";
			tip = "";
		};
		class Waypoints
		{
			arguments[] = {{{"showMap"}}, {{"ActionContext"}}};
			description = "When in command, you can issue move orders to your subordinates. %1To issue a single waypoint without entering the map:%1%2Select units with %3[F2–F10] keys%4.%1%2Point at the target location.%1%2Select %3Move there%4.%1%2Confirm with %12.%1Issue a waypoint <img size='1' %5  image='A3\Ui_f\data\Map\MapControl\waypoint_ca.paa'/> using the map: %1%2Open the map %11.  %1%2Select units with %3[F2–F10] keys%4.%1%2Select %3Move there%4.%1%2Confirm with %12.";
			displayName = "Move!";
			image = "\a3\ui_f\data\gui\cfg\hints\Waypoints_ca.paa";
			tip = "The %3Move there%4 order is only available when a unit can reach the place.";
			class MapWaypoints_sub
			{
				arguments[] = {{{"showMap"}}, {{"Action"}}};
				description = "Issue a waypoint <img size='1'   image='a3\UI_F\data\Map\MapControl\waypoint_ca.paa' /> using the map:%1%2Open map by pressing %11%1%2Select units with %3[F2-F10]%4 keys%1%2Point at the target location%1%2Select %3Move there%4 and confirm with %12";
				displayName = "Map Waypoints";
				dlc = -1;
				image = "\a3\ui_f\data\gui\cfg\hints\Map_ca.paa";
				tip = "";
			};
			class ReturnToFormation_sub
			{
				arguments[] = {};
				description = "To make your subordinates return back to formation, select them with %3[F2-F12]%4 and press %3[1]%4 and %3[1]%4.%1%2This command will also cancel their actual actions (as get in a vehicle or rearm)";
				displayName = "Return to formation";
				dlc = -1;
				image = "\a3\ui_f\data\gui\cfg\hints\BasicWalk_ca.paa";
				tip = "";
			};
			class Stop_sub
			{
				arguments[] = {{{"selectAll"}}};
				description = "Ordering your subordinates to Stop will make them hold their current position.%1%2Select all of your subordinates with the %11 key%1%2Press %3[1]%4, %3[6]%4 to order them to Stop";
				displayName = "Stop";
				dlc = -1;
				image = "\a3\ui_f\data\gui\cfg\hints\Commanding_ca.paa";
				tip = "";
			};
			class Waypoints_sub
			{
				arguments[] = {{{"Action"}}};
				description = "To issue a single waypoint without entering the map:%1%2Select your subordinate %3[F1-F10]%4%1%2Select Move there.%1%2Confirm with %11.";
				displayName = "Waypoints";
				dlc = -1;
				image = "\a3\ui_f\data\gui\cfg\hints\Waypoints_ca.paa";
				tip = "";
			};
		};
	};
	class Common
	{
		displayName = "General";
		logicalOrder = 4;
		class ActionMenu
		{
			arguments[] = {{{"NextAction"}}, {{"PrevAction"}}, {{"ActionContext"}}, {{"Action"}}};
			description = "The action menu is a context sensitive list of available actions. It changes depending on the object pointed at with the cursor. %3Icons%4 <img size='1' %5  image='A3\Ui_f\data\IGUI\Cfg\Actions\getindriver_ca.paa' /> <img size='1' %5  image='A3\Ui_f\data\IGUI\Cfg\Actions\gear_ca.paa' /> <img size='1' %5  image='A3\Ui_f\data\IGUI\Cfg\Actions\reload_ca.paa' /> near the weapon cursor indicate a new default action. %1%2Execute the given action directly with %14.%1Other actions are listed in the action menu. %1%2Open the menu with %11 or %12.%1%2Select an action.%1%2Execute the selected action with %13.";
			displayName = "Action Menu";
			image = "\a3\ui_f\data\gui\cfg\hints\ActionMenu_ca.paa";
			logicalOrder = 1;
			tip = "";
			class ActionMenu_sub
			{
				arguments[] = {{{"Action"}}};
				description = "The action menu is a context sensitive list of available actions.%1%2Execute the given action with %11.";
				displayName = "Action Menu";
				dlc = -1;
				image = "\a3\ui_f\data\gui\cfg\hints\ActionMenu_ca.paa";
				tip = "";
			};
		};
		class Clothes
		{
			arguments[] = {{{"Gear"}}};
			description = "You can change your uniform and bags in Inventory %11. Different items have different attributes. Thus replacing uniform, vest and bag will result in a different visage, load capacity and armor. Note that you can only wear uniforms of your own side, in line with the Geneva conventions.";
			displayName = "Clothes";
			image = "\a3\ui_f\data\gui\cfg\hints\Miss_icon_ca.paa";
			logicalOrder = 7;
			tip = "When changing a container for one with a smaller capacity, some items might not fit.";
		};
		class Containers
		{
			arguments[] = {{{"Gear"}}};
			description = "Uniforms, vests and backpacks work as containers in your inventory. To exchange a container:%1%2Open Inventory %11.%1%2Point the cursor at the container with this equipment.%1%2Drag the replacement to the specific position.";
			displayName = "Containers";
			image = "\a3\ui_f\data\gui\cfg\hints\Miss_icon_ca.paa";
			logicalOrder = 5;
			tip = "Each container has a limited capacity indicated by a load bar underneath its icon. It's possible that some items will not fit into one bag. So, go get a bigger one.";
			class EndGameVirtualArsenal_sub
			{
				arguments[] = {};
				description = "You can access the Arsenal from the supply crates at the FOB, allowing you to change your loadout as you wish. Your chosen loadout will be saved, and will be restored upon your respawn.";
				displayName = "Virtual Arsenal";
				image = "\A3\Ui_f\data\GUI\Cfg\Hints\Switch_ca.paa";
				tip = "";
			};
		};
		class Doors
		{
			arguments[] = {{{"Action"}}};
			description = "Most doors can be opened.%1%2Point the cursor at a door until the icon appears.  %1%2Press %11. %1%2You can also %3open/close doors%4 through the action menu.";
			displayName = "Doors";
			image = "\a3\ui_f\data\gui\cfg\hints\Doors_ca.paa";
			logicalOrder = 2;
			tip = "";
		};
		class FastEquip
		{
			arguments[] = {};
			description = "When in the inventory, %3RMB click%4 on any item will fast equip or fast un-equip it. %1%2Fast equipping anything from the ground will move it to its slot or one of your containers.%1%2Fast un-equipping anything from your slots or containers will move it to the ground or an opened ground container.";
			displayName = "Fast Equip";
			image = "\a3\ui_f\data\gui\cfg\hints\Miss_icon_ca.paa";
			logicalOrder = 10;
			tip = "";
		};
		class Gear
		{
			arguments[] = {{{"Gear"}}};
			description = "%2Access your Inventory <img size='1' %5  image='A3\Ui_f\data\IGUI\Cfg\Actions\gear_ca.paa' /> by pressing %11. %1%2Use %3drag and drop%4 to move items between slots and containers. %1%2Close the Inventory window by pressing %11 again.";
			displayName = "Inventory";
			image = "\a3\ui_f\data\gui\cfg\hints\Gear_ca.paa";
			logicalOrder = 4;
			tip = "This hint also applies to searching vehicles, bags, corpses or just piles of items on the ground.";
			class CloseInventory_sub
			{
				arguments[] = {{{"Gear"}}};
				description = "Close the inventory window by pressing %11.";
				displayName = "Close Inventory";
				dlc = -1;
				image = "\a3\ui_f\data\gui\cfg\hints\Gear_ca.paa";
				tip = "";
			};
			class OpenInventory_sub
			{
				arguments[] = {{{"Gear"}}};
				description = "You can change your equipment by accessing your inventory.%1%2Press %11 when <img size='1'   image='a3\UI_F\data\IGUI\Cfg\Actions\gear_ca.paa'/> appears.";
				displayName = "Open Inventory";
				dlc = -1;
				image = "\a3\ui_f\data\gui\cfg\hints\Gear_ca.paa";
				tip = "";
			};
		};
		class GPS
		{
			arguments[] = {{{"MiniMapToggle"}}};
			description = "Your GPS keeps track of the time, your location, direction and it even contains a detailed map of your surroundings.%1%2Activate the GPS %11 to gain instant awareness of your surroundings.";
			displayName = "GPS";
			image = "\a3\ui_f\data\gui\cfg\hints\Miss_icon_ca.paa";
			logicalOrder = 11;
			tip = "This handy device is capable of displaying a map, compass and time in one place. Don't lose it.";
		};
		class Head
		{
			arguments[] = {{{"binocular"}}, {{"nightvision"}}};
			description = "There are specific slots for special items in your inventory. You can equip and use Binoculars %11, Night Vision Goggles %12 and others to improve your tactical awareness.";
			displayName = "Binoculars";
			image = "\a3\ui_f\data\gui\cfg\hints\Head_ca.paa";
			logicalOrder = 12;
			tip = "You can have only one head-mounted display equipped.";
		};
		class Looting
		{
			arguments[] = {{{"Gear"}}};
			description = "To loot a dead body:%1%2Get close and point the cursor at the body.%1%2Press %11 to open the Inventory.%1%2%3Drag and drop%4 desired items into your inventory.%1%2Use %3double-click LMB%4 to open a bag/vest/uniform on the ground. It will open to a new tab.";
			displayName = "Looting";
			image = "\a3\ui_f\data\gui\cfg\hints\Miss_icon_ca.paa";
			logicalOrder = 8;
			tip = "";
		};
		class Panels
		{
			arguments[] = {{{"ListLeftVehicleDisplay"}}, {{"ListRightVehicleDisplay"}}, {{"NextModeLeftVehicleDisplay"}}, {{"NextModeRightVehicleDisplay"}}};
			description = "%1%2Press %11 or %12 to toggle panel modules. Depending on the vehicle or items, this can be a GPS, Sensor Display or one of the remote camera feeds.%1%2Press %13 or %14 to toggle mode (e.g. rotation in GPS, Sensor display range resolution or spectrum of the camera feeds).";
			displayName = "Left and Right Panels";
			image = "\a3\ui_f_jets\data\gui\cfg\hints\UIPanels_ca.paa";
			logicalOrder = 13;
			tip = "";
		};
		class Rearm
		{
			arguments[] = {{{"NextAction"}}};
			description = "You can easily replenish your magazines without opening the inventory.%1%2Approach an ammo box or a vehicle, point your cursor at it and open the action menu with %11.%1%2Select %3Rearm <img size='1' %5  image='a3\UI_F\data\IGUI\Cfg\Actions\reammo_ca.paa' />%4. This will replenish your magazines up to your default loadout count.";
			displayName = "Rearm";
			image = "\a3\ui_f\data\gui\cfg\hints\Miss_icon_ca.paa";
			logicalOrder = 3;
			tip = "When you are low on ammo, your commander will often issue a rearm order at an exact place.";
		};
		class Renegade
		{
			arguments[] = {{"STR_A3_Orange_CfgHints_Renegade_arg11"}};
			description = "Killing or destroying <t %5>unlawful targets</t> will have serious consequences. Repeatedly doing so will brand you an <t %5>enemy to everyone</t>. %11%1%1Unlawful targets include:%1%2 Civilians%1%2 Members of your faction%1%2 Members of allied factions";
			displayName = "Renegade";
			image = "\a3\ui_f\data\gui\cfg\hints\Miss_icon_ca.paa";
			logicalOrder = 14;
			tip = "Carefully identify your targets. Be aware of crossfire, projectile ricochets or penetrations, and indirect area of effect explosives!";
			class Hint
			{
				arguments[] = {""};
				description = "Killing or destroying <t %5>unlawful targets</t> will have serious consequences. Repeatedly doing so will brand you an <t %5>enemy to everyone</t>. %11%1%1Unlawful targets include:%1%2 Civilians%1%2 Members of your faction%1%2 Members of allied factions";
				displayName = "Renegade";
				image = "\a3\ui_f\data\gui\cfg\hints\Miss_icon_ca.paa";
				tip = "Carefully identify your targets. Be aware of crossfire, projectile ricochets or penetrations, and indirect area of effect explosives!";
			};
		};
		class Slots
		{
			arguments[] = {};
			description = "The inventory has designated slots for specific items. %3Drag and drop%4 an item from your containers. Available slots for the item will be highlighted.";
			displayName = "Slots";
			image = "\a3\ui_f\data\gui\cfg\hints\Slots_ca.paa";
			logicalOrder = 6;
			tip = "";
		};
		class Take
		{
			arguments[] = {{{"NextAction"}}, {{"Gear"}}, {{"ActionContext"}}};
			description = "To pick up a single item from the ground:%1%2Move close to the item.%1%2Point the cursor at the item until the <img size='1' %5  image='A3\Ui_f\data\IGUI\Cfg\Actions\take_ca.paa' /> icon appears.%1%2Press %13 to take the item.%1Or you can choose to %3Take%4 the item through the action menu %11.";
			displayName = "Take";
			image = "\a3\ui_f\data\gui\cfg\hints\Take_ca.paa";
			logicalOrder = 9;
			tip = "You can also move close to the item and open the Inventory %12. The item will be listed on the left side of the Gear window under the label %3Ground%4.";
		};
	};
	class Curator
	{
		displayName = "Zeus";
		logicalOrder = 23;
		class Attributes
		{
			arguments[] = {};
			description = "Scenarios can allow you to set specific entity attributes.%1Doubleclick %3[LMB]%4 on the entity icon or its name in the entity list to open the attributes window.<br /><br />Available attributes can be:%1%2Objects - health, skill, fuel, lock, ...%1%2Groups - callsign, combat mode, formation, ...%1%2Waypoints - combat mode, speed, ...%1%2Markers - text, color, ...";
			displayName = "Setting attributes";
			image = "\a3\ui_f\data\gui\cfg\hints\Zeus_ca.paa";
			tip = "Many modules won't even be initialized until you configure their attributes.";
		};
		class Camera
		{
			arguments[] = {{{17}}, {{30}}, {{31}}, {{32}}, {{16}}, {{44}}, {{42}}, {{"CuratorMoveCamTo"}}, {{"personView"}}, {{57}}};
			description = "The camera provides an aerial view over the battlefield.%1%2Move using %11, %12, %13, %14.%1%2Change altitude with %15 and %16.%1%2Hold %17 to accelerate.%1%2Press %18 to move to the selected unit.%1%2Press %19 to toggle the view of the selected unit.%1%2Press %20 to move to the last pinged player’s position.%1%2Press %3Ctrl + F1...F12%4 to save the camera position, and %3F1...F12%4 to restore it.%1%1In some scenarios, the camera’s movement area may be limited. While not visualized, you will recognize the border when you’ve reached it.";
			displayName = "Camera";
			image = "\a3\ui_f\data\gui\cfg\hints\Zeus_ca.paa";
			tip = "The camera moves faster when being higher up. Increase the altitude to easily cover long distances.";
		};
		class Curator
		{
			arguments[] = {"gettext (configfile >> ""CfgCurator"" >> ""icon"")"};
			description = "Project Zeus is a new concept where scenarios are curated by one or more %3Game Masters%4. Using a 3D real-time editor, they can expand and manipulate scenario content in order to provide more interesting gameplay for other players.<br />Specific goals and limitations prevent them from becoming too powerful and ensures they also have some challenges to overcome themselves.";
			displayName = "Zeus";
			image = "\a3\ui_f\data\gui\cfg\hints\Zeus_ca.paa";
			tip = "To become a Zeus, take the slot marked by <img image='%11' size='2' /> in the multiplayer lobby.";
		};
		class EntityConnect
		{
			arguments[] = {{{"CuratorGroupMod"}}};
			description = "Hold %11, click %3[LMB]%4 on an object and drag the line.%1%2Release the button on another object to connect them together.%1%2Release the button over an empty space to disconnect objects.<br /><br />Two types of connection exist:%1%2<img image='\a3\Ui_f\data\GUI\Rsc\RscDisplayArcadeMap\icon_toolbox_units_ca.paa' size='1.5' shadow='0' /><img image='\a3\Ui_f\data\GUI\Rsc\RscDisplayArcadeMap\icon_toolbox_groups_ca.paa' size='1.5' shadow='0' /> Grouping - when Units or Groups modes are selected, you can group them together. Works only with AI units (e.g. soldiers or manned vehicles).%1%2<img image='\a3\Ui_f\data\GUI\Rsc\RscDisplayArcadeMap\icon_toolbox_modules_ca.paa' size='1.5' shadow='0' /> Syncing - when Modules mode is selected, objects are synchronized. Some modules may require synchronization to affected objects.";
			displayName = "Connecting";
			image = "\a3\ui_f\data\gui\cfg\hints\Zeus_ca.paa";
			tip = "";
		};
		class EntityEdit
		{
			arguments[] = {{{"CuratorMoveY"}}, {{"CuratorRotateMod"}}, "gettext (configfile >> ""cfgWrapperUI"" >> ""Cursors"" >> ""CuratorMove"" >> ""texture"")", "((configfile >> ""cfgWrapperUI"" >> ""Cursors"" >> ""CuratorMove"" >> ""color"") call BIS_fnc_colorConfigToRGBA) call BIS_fnc_colorRGBAtoHTML", "gettext (configfile >> ""cfgWrapperUI"" >> ""Cursors"" >> ""CuratorMoveZ"" >> ""texture"")", "((configfile >> ""cfgWrapperUI"" >> ""Cursors"" >> ""CuratorMoveZ"" >> ""color"") call BIS_fnc_colorConfigToRGBA) call BIS_fnc_colorRGBAtoHTML", "gettext (configfile >> ""cfgWrapperUI"" >> ""Cursors"" >> ""CuratorMoveIn"" >> ""texture"")", "((configfile >> ""cfgWrapperUI"" >> ""Cursors"" >> ""CuratorMoveIn"" >> ""color"") call BIS_fnc_colorConfigToRGBA) call BIS_fnc_colorRGBAtoHTML", "gettext (configfile >> ""cfgWrapperUI"" >> ""Cursors"" >> ""CuratorRotate"" >> ""texture"")", "((configfile >> ""cfgWrapperUI"" >> ""Cursors"" >> ""CuratorRotate"" >> ""color"") call BIS_fnc_colorConfigToRGBA) call BIS_fnc_colorRGBAtoHTML", "gettext (configfile >> ""cfgWrapperUI"" >> ""Cursors"" >> ""CuratorMoveDisabled"" >> ""texture"")", "((configfile >> ""cfgWrapperUI"" >> ""Cursors"" >> ""CuratorMoveDisabled"" >> ""color"") call BIS_fnc_colorConfigToRGBA) call BIS_fnc_colorRGBAtoHTML"};
			description = "Click and drag an entity using %3[LMB]%4 to edit it.%1%2<img image='%13' color='%14' /> Move it around by default. When vehicle crew is selected, it will be moved out of their vehicle.%1%2<img image='%15' color='%16' /> Hold %11 to change the height.%1%2<img image='%17' color='%18' /> When a vehicle is under the cursor, selected soldiers are moved inside.%1%2<img image='%19' color='%20' /> Hold %12 to rotate it.%1%2<img image='%21' color='%22' /> When the entity is outside of the editing area or is being dragged into it, editing is not possible.<br /><br />Some scenarios may limit the editing area. Its borders are visualized in the scene by blue walls and by icons on the map.";
			displayName = "Editing";
			image = "\a3\ui_f\data\gui\cfg\hints\Zeus_ca.paa";
			tip = "Soldiers and ground vehicles moved to a high altitude will parachute to the ground.";
		};
		class EntityEditAdvanced
		{
			arguments[] = {{{"CuratorGetOut"}}, {{"CuratorDestroy"}}, {{"CuratorDelete"}}};
			description = "Additional keys let you to further manipulate an entity:%1%2Press %11 to order soldiers in vehicles to get out.%1%2Press %12 to destroy objects.%1%2Press %13 to delete entities.%1Objects can be destroyed or deleted only when inside editing areas. Modules, waypoints and markers can be removed anywhere.";
			displayName = "Editing (Advanced)";
			image = "\a3\ui_f\data\gui\cfg\hints\Zeus_ca.paa";
			tip = "";
		};
		class EntityPlace
		{
			arguments[] = {{{"CuratorMultipleMod"}}};
			description = "Zeus can place new entities in the scene:%1%2Select editing mode%1 %2<img image='\a3\Ui_f\data\GUI\Rsc\RscDisplayArcadeMap\icon_toolbox_units_ca.paa' size='1.0' shadow='0' /> - Objects (soldier, vehicles and objects, can be placed only in the editing area)%1 %2<img image='\a3\Ui_f\data\GUI\Rsc\RscDisplayArcadeMap\icon_toolbox_groups_ca.paa' size='1.0' shadow='0' /> - Groups of objects%1 %2<img image='\a3\Ui_f\data\GUI\Rsc\RscDisplayArcadeMap\icon_toolbox_modules_ca.paa' size='1.0' shadow='0' /> - Modules (systems like artillery strikes, respawn points, weather settings, ...). Can usually be placed anywhere.%1 %2<img image='\a3\Ui_f\data\GUI\Rsc\RscDisplayArcadeMap\icon_toolbox_markers_ca.paa' size='1.0' shadow='0' /> - Markers (visible to every player, can be placed anywhere for free)%1%2Pick a side (<img image='\a3\ui_f_curator\Data\Displays\RscDisplayCurator\side_west_ca.paa' size='1.0' shadow='0' %6 /><img image='\a3\ui_f_curator\Data\Displays\RscDisplayCurator\side_east_ca.paa' size='1.0' shadow='0' %7 /><img image='\a3\ui_f_curator\Data\Displays\RscDisplayCurator\side_guer_ca.paa' size='1.0' shadow='0' %8 /><img image='\a3\ui_f_curator\Data\Displays\RscDisplayCurator\side_civ_ca.paa' size='1.0' shadow='0' %9 /><img image='\a3\ui_f_curator\Data\Displays\RscDisplayCurator\side_unknown_ca.paa' size='1.0' shadow='0' %10 />).%1%2Select an entity to place.%1%2Click %3[LMB]%4 on the ground to place the entity.%1%2Hold %11 while clicking %3[LMB]%4 to continue with placement afterwards.<br /><br />Object cost is previewed on the resources bar at the top of the screen. Entities which are too expensive are greyed out and cannot be placed.";
			displayName = "Placing";
			image = "\a3\ui_f\data\gui\cfg\hints\Zeus_ca.paa";
			tip = "";
		};
		class EntitySelect
		{
			arguments[] = {{{"CuratorMultipleMod"}}, {{42}}, "gettext (configfile >> ""cfgCurator"" >> ""drawWaypoint"" >> ""3D"" >> ""texture"")"};
			description = "Select an entity by clicking %3[LMB]%4 on its icon or name in the entity list.%1%2 Hold %11 to select add / remove the entity from selection.%1%2 Hold %12 to select multiple entities (works only in the list).%1%2 Click and drag %3[LMB]%4 to select multiple entities in the frame.<br /><br />While all entities can be selected, not all of them can be edited:%1<img image='\a3\Ui_F_Curator\Data\CfgHints\entitySelect_object_ca.paa' size='1.5' shadow='0' /> Normal object, can be edited%1<img image='\a3\Ui_F_Curator\Data\CfgHints\entitySelect_objectDestroyed_ca.paa' size='1.5' shadow='0' /> Destroyed object, can be edited%1<img image='\a3\Ui_F_Curator\Data\CfgHints\entitySelect_objectDisabled_ca.paa' size='1.5' shadow='0' /> Not in the editing area, cannot be edited%1<img image='\a3\Ui_F_Curator\Data\CfgHints\entitySelect_objectPlayer_ca.paa' size='1.5' shadow='0' /> Player, cannot be edited%1<img image='%13' size='1.5' shadow='0' /> Waypoint, can always be edited";
			displayName = "Selecting";
			image = "\a3\ui_f\data\gui\cfg\hints\Zeus_ca.paa";
			tip = "";
		};
		class Interface
		{
			arguments[] = {{{"diary"}}, {{"nightVision"}}, {{"watch"}}, {{"compass"}}, {{14}}};
			description = "The Zeus interface provides additional features for simplified control over the scenario:%1%2Press %11 to show your briefing and tasks.%1%2Press %12 to toggle between vision modes (when available).%1%2Press %13 to toggle the clock.%1%2Press %14 to toggle the compass.%1%2Press %15 to toggle the interface.";
			displayName = "Interface";
			image = "\a3\ui_f\data\gui\cfg\hints\Zeus_ca.paa";
			tip = "";
		};
		class Map
		{
			arguments[] = {{{"showMap"}}, {{"hideMap"}}, {{1}}, {{20}}, "gettext (configfile >> ""cfgCurator"" >> ""drawCamera"" >> ""2D"" >> ""texture"")"};
			description = "The map provides an unprecedented overview of everything under your control.%1%2Open it by pressing %11.%1%2Zoom in or out on the map using %3[mouse-wheel up and down]%4.%1%2Click %3[MMB]%4 to quickly teleport the camera under the cursor.%1%2Close the map by pressing %12 or %13.%1%2Press %14 to toggle textures.<br /><br />The current camera position is represented by <img image='%15' size='1' /> and an approximate view cone.";
			displayName = "Map";
			image = "\a3\ui_f\data\gui\cfg\hints\Zeus_ca.paa";
			tip = "";
		};
		class OpenInterface
		{
			arguments[] = {{{"curatorInterface"}}};
			description = "Press %11 to toggle the Zeus interface.<br /><br />It can be available in these two forms:%1%2%3Free%4 - Zeus is a soldier on the battlefield who can at any time open the interface to curate the scenario, but risks being killed.%1%2%3Forced%4 - the interface is opened automatically and cannot be closed by pressing the key. Zeus is not represented in the world and is safe from any danger.";
			displayName = "Accessing Zeus";
			image = "\a3\ui_f\data\gui\cfg\hints\Zeus_ca.paa";
			tip = "";
		};
		class Ping
		{
			arguments[] = {{{"curatorInterface"}}};
			description = "When playing a Zeus scenario, but not in the role of a Zeus, press %11 to ping him. He'll receive a sound cue and your name will briefly be highlighted. Use this to attract his attention towards a problem or an opportunity ahead.";
			displayName = "Pinging Zeus";
			image = "\a3\ui_f\data\gui\cfg\hints\Zeus_ca.paa";
			tip = "Don't bother pressing %11 in rapid succession to spam Zeus, as messages are sent only once per second.";
		};
		class PlaceMines
		{
			arguments[] = {{{"curatorDestroy"}}};
			description = "Explosives and mines placed by Zeus have a special behavior:%1%2All selected explosives can be detonated by pressing %11.%1%2Explosives are instantly revealed to everyone who's on the same side as Zeus.%1%2Approximate minefield areas are visualized on the map for everyone.";
			displayName = "Placing explosives";
			image = "\a3\ui_f_curator\data\CfgHints\PlaceMines_ca.paa";
			tip = "Anti-Personnel (AP) mines are banned by international laws of war. Use them with caution!";
		};
		class PlaceOrdnance
		{
			arguments[] = {};
			description = "Zeus can quickly send fire support to any location. However, it takes a few seconds for it to arrive, and players are meanwhile warned and can seek cover.%1The fire support module is visualized as an area of expected damage:%1%2All vehicles and soldiers in the <t color='#ff0000'>red zone</t> will be destroyed or disabled.%1%2The <t color='#ff8000'>orange zone</t> represents the maximal blast radius able to kill soldiers who are not in cover.";
			displayName = "Placing fire support";
			image = "\a3\ui_f_curator\data\CfgHints\PlaceOrdnance_ca.paa";
			tip = "Keep in mind that sending fire support onto or near civilian objects opposes international laws of war. Additionally, using cluster ammunition is controversial at best.";
		};
		class RemoteControl
		{
			arguments[] = {{{"curatorInterface"}}};
			description = "When you have the 'Remote Control' module available, place it on any non-player unit to take it over.%1Once in possession of the unit, you can move, shoot and perform actions as if it were you. However, there are some limitations:%1%2 When controlling a squad leader, you cannot give any orders.%1%2 UAV Terminal is not available.%1Press %11 to return back to the Zeus interface.";
			displayName = "Taking over units";
			image = "\a3\ui_f\data\gui\cfg\hints\Zeus_ca.paa";
			tip = "";
		};
		class WPPlace
		{
			arguments[] = {{{"CuratorMultipleMod"}}, "gettext (configfile >> ""cfgWrapperUI"" >> ""Cursors"" >> ""CuratorPlaceWaypoint"" >> ""texture"")", "((configfile >> ""cfgWrapperUI"" >> ""Cursors"" >> ""CuratorPlaceWaypoint"" >> ""color"") call BIS_fnc_colorConfigToRGBA) call BIS_fnc_colorRGBAtoHTML", "gettext (configfile >> ""cfgWrapperUI"" >> ""Cursors"" >> ""CuratorPlaceWaypointGetIn"" >> ""texture"")", "((configfile >> ""cfgWrapperUI"" >> ""Cursors"" >> ""CuratorPlaceWaypointGetIn"" >> ""color"") call BIS_fnc_colorConfigToRGBA) call BIS_fnc_colorRGBAtoHTML", "gettext (configfile >> ""cfgWrapperUI"" >> ""Cursors"" >> ""CuratorPlaceWaypointDestroy"" >> ""texture"")", "((configfile >> ""cfgWrapperUI"" >> ""Cursors"" >> ""CuratorPlaceWaypointDestroy"" >> ""color"") call BIS_fnc_colorConfigToRGBA) call BIS_fnc_colorRGBAtoHTML", "gettext (configfile >> ""cfgWrapperUI"" >> ""Cursors"" >> ""CuratorPlaceWaypointCycle"" >> ""texture"")", "((configfile >> ""cfgWrapperUI"" >> ""Cursors"" >> ""CuratorPlaceWaypointCycle"" >> ""color"") call BIS_fnc_colorConfigToRGBA) call BIS_fnc_colorRGBAtoHTML", {{"CuratorContentWaypoint"}}};
			description = "When a group (or its member) is selected, you can give it waypoints. They can be created anywhere on the map, no matter where the editing area is.%1%2 Click %3[RMB]%4 to place a waypoint (it will replace all existing waypoints).%1%2 Hold %11 while clicking to add a new waypoint, preserving the existing ones.%1%1Type is based on what you clicked on:%1%2<img image='%12' color='%13' /> MOVE having clicked on an empty space%1%2<img image='%14' color='%15' /> GET IN having clicked on a vehicle%1%2<img image='%16' color='%17' /> DESTROY having clicked on an enemy%1%2<img image='%18' color='%13' /> CYCLE when %20 is held - upon reaching it, the unit will repeat the waypoints from the first one.";
			displayName = "Placing waypoints";
			image = "\a3\ui_f\data\gui\cfg\hints\Zeus_ca.paa";
			tip = "";
		};
	};
	class Damage
	{
		displayName = "Health";
		logicalOrder = 16;
		class FAK
		{
			arguments[] = {{{"NextAction"}}, {{"ActionContext"}}};
			description = "The First Aid Kit (FAK) is used to treat small wounds.%1%2Point the cursor at a wounded soldier.%1%2Open the action menu %11.%1%2Select %3treat%4.%1%2Confirm with %12 to use the FAK.%1You can even use it on yourself.";
			displayName = "First Aid Kit";
			image = "\a3\ui_f\data\gui\cfg\hints\Miss_icon_ca.paa";
			logicalOrder = 7;
			tip = "FAK is depleted after a single use and is removed from your inventory.";
		};
		class FireDamage
		{
			arguments[] = {};
			description = "Don't stay near fire or you will get burned. Fire damage is as dangerous as being hit by a bullet. Luckily, your armor protects you the same way.";
			displayName = "Fire";
			image = "\a3\ui_f\data\gui\cfg\hints\Miss_icon_ca.paa";
			logicalOrder = 4;
			tip = "Vehicles can withstand a fire for a time before taking damage. This time increases with their armor.";
		};
		class HitDamage
		{
			arguments[] = {};
			description = "When you fall from certain heights, you suffer damage according to your gained momentum (speed and mass). The same applies to vehicles and also for being hit by them.";
			displayName = "Fall and Hit Damage";
			image = "\a3\ui_f\data\gui\cfg\hints\Miss_icon_ca.paa";
			logicalOrder = 3;
			tip = "The damage caused by hits and falls is mitigated by armor. This is especially useful while being in vehicles as their armor counts towards protecting their crewmen.";
		};
		class Injury
		{
			arguments[] = {{{"selectAll"}}};
			description = "A few hits usually result in death, but for now you are just injured <img size='1' %5  image='A3\Ui_f\data\IGUI\Cfg\Cursors\unitInjured_ca.paa' />. Your condition affects your view, aim and speed, but it is treatable. Now, call for a medic: %1%2Press %11 to open fast commands.%1%2Report %3Injured%4.%1Alternative call procedure:%1%2Press %3[5]%4 for status reports.%1%2Press %3[4]%4 for %3Injured%4.";
			displayName = "Injury";
			image = "\a3\ui_f\data\gui\cfg\hints\Injury_ca.paa";
			logicalOrder = 2;
			tip = "";
		};
		class Medikit
		{
			arguments[] = {{{"NextAction"}}, {{"Action"}}};
			description = "Medics are trained to use a %3Medkit%4, which can permanently heal any damage. When healing yourself as a Medic equipped with a Medkit:%1%2Open the action menu %11.%1%2Select %3Treat yourself%4.%1%2Confirm with %12.";
			displayName = "Medkit";
			image = "\a3\ui_f\data\gui\cfg\hints\Miss_icon_ca.paa";
			logicalOrder = 6;
			tip = "Unlike the First Aid Kit, only Medics can use a Medkit.";
		};
		class NormalDamage
		{
			arguments[] = {};
			description = "Damage from bullets and explosives is mitigated by armor. The more armor your uniform or vehicle has, the less damage is received. %1For increased protection, don't forget to equip a helmet and vest, as they add armor.";
			displayName = "Damage";
			image = "\a3\ui_f\data\gui\cfg\hints\NormalDamage_ca.paa";
			logicalOrder = 1;
			tip = "Damage also affects movement and aim. When shot in the leg, you will barely be able to walk. When shot in the arm, aiming will become harder.";
		};
		class WaterDamage
		{
			arguments[] = {};
			description = "When you are underwater without a rebreather for a longer time, your oxygen supply will start to run out. Tunnel vision indicates that you are lacking oxygen and start taking drowning damage. Go to the surface fast.";
			displayName = "Drowning";
			image = "\a3\ui_f\data\gui\cfg\hints\Miss_icon_ca.paa";
			logicalOrder = 5;
			tip = "This damage is also inflicted in other situations where the oxygen level is limited, like in sealed rooms or while using gas weapons.";
		};
	};
	class Default {};
	class DlcMessage
	{
		displayName = "";
		dlc = -1;
		class Dlc1021790
		{
			arguments[] = {{{"OpenDlcScreen"}}};
			description = "This record is part of an unowned premium content package.%1We've provided this asset for everyone to try. To fully unlock it and support the game, press %11 to open the store page.";
			displayName = "Arma 3 Contact (Platform)";
			dlc = -1;
			image = "\A3\Data_F_Enoch\Logos\arma3_enoch_hint_icon_ca";
			tip = "Full use of premium content is exclusive to owners.";
		};
		class Dlc1021790FM
		{
			arguments[] = {{{"OpenDlcScreen"}}};
			description = "This record is part of an unowned premium content package.%1We've provided this asset for everyone to try. To fully unlock it and support the game, press %11 to open the store page.";
			displayName = "Arma 3 Contact (Platform)";
			dlc = -1;
			image = "\A3\Data_F_Enoch\Logos\arma3_enoch_hint_icon_ca";
			tip = "Full use of premium content is exclusive to owners.";
		};
		class Dlc288520
		{
			arguments[] = {{{"OpenDlcScreen"}}};
			description = "This record is part of an unowned premium content package.%1We've provided this asset for everyone to try. To fully unlock it and support the game, press %11 to open the store page.";
			displayName = "Arma 3 Karts";
			dlc = -1;
			image = "\a3\data_f_kart\logos\arma3_karts_icon_hint_ca.paa";
			tip = "Full use of premium content is exclusive to owners.";
		};
		class Dlc288520FM
		{
			arguments[] = {{{"OpenDlcScreen"}}};
			description = "This record is part of an unowned premium content package.%1We've provided this asset for everyone to try. To fully unlock it and support the game, press %11 to open the store page.";
			displayName = "Arma 3 Karts";
			dlc = -1;
			image = "\a3\data_f_kart\logos\arma3_karts_icon_hint_ca.paa";
			tip = "Full use of premium content is exclusive to owners.";
		};
		class Dlc304380
		{
			arguments[] = {{{"OpenDlcScreen"}}};
			description = "This record is part of an unowned premium content package.%1We've provided this asset for everyone to try. To fully unlock it and support the game, press %11 to open the store page.";
			displayName = "Arma 3 Helicopters";
			dlc = -1;
			image = "\a3\data_f_heli\logos\arma3_heli_icon_hint_ca.paa";
			tip = "Full use of premium content is exclusive to owners.";
		};
		class Dlc304380FM
		{
			arguments[] = {{{"OpenDlcScreen"}}};
			description = "This record is part of an unowned premium content package.%1We've provided this asset for everyone to try. To fully unlock it and support the game, press %11 to open the store page.";
			displayName = "Arma 3 Helicopters";
			dlc = -1;
			image = "\a3\data_f_heli\logos\arma3_heli_icon_hint_ca.paa";
			tip = "Full use of premium content is exclusive to owners.";
		};
		class Dlc332350
		{
			arguments[] = {{{"OpenDlcScreen"}}};
			description = "This record is part of an unowned premium content package.%1We've provided this asset for everyone to try. To fully unlock it and support the game, press %11 to open the store page.";
			displayName = "Arma 3 Marksmen";
			dlc = -1;
			image = "\a3\data_f_mark\logos\arma3_mark_icon_hint_ca.paa";
			tip = "Full use of premium content is exclusive to owners.";
		};
		class Dlc332350FM
		{
			arguments[] = {{{"OpenDlcScreen"}}};
			description = "This record is part of an unowned premium content package.%1We've provided this asset for everyone to try. To fully unlock it and support the game, press %11 to open the store page.";
			displayName = "Arma 3 Marksmen";
			dlc = -1;
			image = "\a3\data_f_mark\logos\arma3_mark_icon_hint_ca.paa";
			tip = "Full use of premium content is exclusive to owners.";
		};
		class Dlc395180
		{
			arguments[] = {{{"OpenDlcScreen"}}};
			description = "This record is part of an unowned premium content package.%1We've provided this asset for everyone to try. To fully unlock it and support the game, press %11 to open the store page.";
			displayName = "Arma 3 Apex";
			dlc = -1;
			image = "\a3\data_f_exp\logos\arma3_exp_icon_hint_ca.paa";
			tip = "Full use of premium content is exclusive to owners.";
		};
		class Dlc395180FM
		{
			arguments[] = {{{"OpenDlcScreen"}}};
			description = "This record is part of an unowned premium content package.%1We've provided this asset for everyone to try. To fully unlock it and support the game, press %11 to open the store page.";
			displayName = "Arma 3 Apex";
			dlc = -1;
			image = "\a3\data_f_exp\logos\arma3_exp_icon_hint_ca.paa";
			tip = "Full use of premium content is exclusive to owners.";
		};
		class Dlc571710
		{
			arguments[] = {{{"OpenDlcScreen"}}};
			description = "This record is part of an unowned premium content package.%1We've provided this asset for everyone to try. To fully unlock it and support the game, press %11 to open the store page.";
			displayName = "Arma 3 Laws of War";
			dlc = -1;
			image = "\a3\data_f_orange\logos\arma3_orange_icon_hint_ca.paa";
			tip = "Full use of premium content is exclusive to owners.";
		};
		class Dlc571710FM
		{
			arguments[] = {{{"OpenDlcScreen"}}};
			description = "This record is part of an unowned premium content package.%1We've provided this asset for everyone to try. To fully unlock it and support the game, press %11 to open the store page.";
			displayName = "Arma 3 Laws of War";
			dlc = -1;
			image = "\a3\data_f_orange\logos\arma3_orange_icon_hint_ca.paa";
			tip = "Full use of premium content is exclusive to owners.";
		};
		class Dlc601670
		{
			arguments[] = {{{"OpenDlcScreen"}}};
			description = "This record is part of an unowned premium content package.%1We've provided this asset for everyone to try. To fully unlock it and support the game, press %11 to open the store page.";
			displayName = "Arma 3 Jets";
			dlc = -1;
			image = "\a3\data_f_jets\logos\jets_icon_hint_ca.paa";
			tip = "Full use of premium content is exclusive to owners.";
		};
		class Dlc601670FM
		{
			arguments[] = {{{"OpenDlcScreen"}}};
			description = "This record is part of an unowned premium content package.%1We've provided this asset for everyone to try. To fully unlock it and support the game, press %11 to open the store page.";
			displayName = "Arma 3 Jets";
			dlc = -1;
			image = "\a3\data_f_jets\logos\jets_icon_hint_ca.paa";
			tip = "Full use of premium content is exclusive to owners.";
		};
		class Dlc744950: Dlc571710
		{
			displayName = "Tac-Ops DLC";
			image = "\a3\Data_F_tacops\logos\arma3_tacops_logo_hint_ca.paa";
		};
		class Dlc744950FM: Dlc744950 {};
		class Dlc798390: Dlc571710
		{
			displayName = "Arma 3 Tanks";
			image = "\a3\Data_F_tank\logos\arma3_tank_logo_hint_ca.paa";
		};
		class Dlc798390FM: Dlc798390 {};
	};
	class DynamicGroups
	{
		displayName = "Dynamic Groups";
		dlc = -1;
		class DG_DynamicGroups
		{
			arguments[] = {{{"TeamSwitch"}}};
			description = "Join or create your own group, invite other players and form your own squad.";
			displayName = "Dynamic Groups";
			displayNameShort = "Groups";
			dlc = -1;
			image = "\A3\Ui_f\data\GUI\Cfg\Hints\Commanding_ca.paa";
			tip = "Press %11 to open/close the Dynamic Groups interface";
		};
	};
	class EdenUpdate
	{
		category = "Product";
		displayName = "Eden Update";
		logicalOrder = 20;
		class Analytics: EdenUpdate
		{
			description = "We're very interested in finding out %3how Arma 3 is played%4, so that we can learn from it and improve the game further. Analytics integration provides us with %3anonymous data%4 about the modes being played, the most popular mods, applied difficulty options, configured video settings, and more. We intend to use such data in addition to our valuable existing methods for gathering feedback. All you need to do is %3play the game%4.%1%1<a href='https://community.bistudio.com/wiki/Arma_3_Analytics'>More about analytics</a>";
			displayName = "Analytics";
			logicalOrder = 6;
		};
		class CombatAudio: EdenUpdate
		{
			description = "<img size='9' shadow='0' image='\a3\Data_F_Exp_B\Data\FM_LEARN_CombatAudio_ca.paa' />%1By utilizing a new %3mutli-channel amplitude panner%4 and %3distance-based samples%4 for weapons and explosives, the combat soundscape reaches a much higher level of fidelity. Players will find themselves more deeply immersed and they will be able to achieve greater situational awareness under fire. Modders will have the opportunity to achieve amazing sound effects by using the new configuration.";
			displayName = "Combat Audio";
			logicalOrder = 3;
		};
		class EdenEditor: EdenUpdate
		{
			description = "<img size='9' shadow='0' image='\a3\Data_F_Exp_B\Data\FM_LEARN_EdenEditor_ca.paa' />%1The new Eden Editor for%3 3D scenario%4 design retains the %3ease-of-use%4 of its predecessor while %3enhancing%4 the editing experience many-fold. Please refer to the %3in-editor tutorials%4 for detailed user guides.%1%1Highlighted features include:%1%2 3D Interaction%1%2 Undo / Redo%1%2 Layers%1%2 Asset Filtering / Searching%1%2 Character Load-Outs%1%2 Custom Compositions%1%2 Scenario Configuration%1%2 Vehicle Crews%1%2 Modding%1%1<a href='https://community.bistudio.com/wiki/Eden_Editor'>More about Eden Editor</a>";
			displayName = "Eden Editor";
			logicalOrder = 2;
		};
		class EdenUpdate
		{
			arguments[] = {};
			description = "Our focus for Eden Update was on bringing %3scenario editing%4 forward in a big way. Many other exciting improvements to the core user experience were included as well:%1%2Combat Audio%1%2Launcher-Based Server Browser%1%2Font%1%2Analytics%1%2Steam Leaderboards%1%2Scripted System Optimizations%1%2Parallax Ground Surfaces%1%1<a href='http://www.arma3.com/eden'>More about Eden Update</a>";
			displayName = "Eden Update";
			image = "\a3\ui_f\data\gui\cfg\hints\Commanding_ca.paa";
			logicalOrder = 1;
		};
		class Font: EdenUpdate
		{
			description = "We've changed Arma 3's font for a more %3legible one%4 - in-game, in our Launcher and on our <a href='https://arma3.com/'>website</a>. In addition, we've improved our font rendering technology for better %3kerning%4 of characters.";
			displayName = "Font";
			logicalOrder = 5;
		};
		class LauncherServerBrowser: EdenUpdate
		{
			description = "<img size='9' shadow='0' image='\a3\Data_F_Exp_B\Data\FM_LEARN_LauncherServerBrowser_ca.paa' />%1The game's official Launcher now contains a server browser that offers greater functionality and usability as compared to its in-game counterpart. Players can skip the main menu and jump straight into a session.%1%2%3Filtering%4 - effectively find a server matching your preferences.%1%2%3<a href='http://steamcommunity.com/workshop/browse/?appid=107410'>Workshop Mod Support%4</a> - let the Launcher automatically resolve dependencies required by properly configured servers.%1%1<a href='https://dev.arma3.com/post/oprep-the-future-of-server-browsing'>More about the Launcher Server Browser</a>";
			displayName = "Launcher Server Browser";
			logicalOrder = 4;
		};
		class SteamLeaderboards: EdenUpdate
		{
			description = "You can now %3compete%4 with your friends in the game's %3Firing Drill%4 and %3Time Trial Challenges%4. These modes will log your best competitive times onto <a href='http://steamcommunity.com/stats/107410/leaderboards/'>Steam Leaderboards</a>. Compare your performance to your own friends or the best competitors in the world!";
			displayName = "Steam Leaderboards";
			logicalOrder = 7;
		};
	};
	class ExplosivesList
	{
		category = "Assets";
		displayName = "Explosives Info";
		logicalOrder = 25;
		class apboundingmine
		{
			ammo = "APERSBoundingMine_Range_Ammo";
			arguments[] = {{"str_a3_cfgmagazines_bouncingminerangemagazine0"}, {"str_a3_cfgmagazines_bouncingminerangemagazine_library0"}};
			description = "%12";
			displayName = "%11";
			image = "\a3\ui_f\data\gui\cfg\hints\Miss_icon_ca.paa";
			logicalOrder = 1;
			modelScale = 2;
			tip = "";
		};
		class APERSMineDispenser
		{
			ammo = "APERSMineDispenser_Ammo";
			arguments[] = {{"STR_A3_CfgMagazines_APERSMineDispenser_Mag0"}, {"STR_A3_CfgMagazines_APERSMineDispenser_Mag_Library0"}};
			description = "%12";
			displayName = "%11";
			dlc = 571710;
			image = "\a3\ui_f\data\gui\cfg\hints\Miss_icon_ca.paa";
			logicalOrder = 2;
			tip = "";
		};
		class apmine
		{
			ammo = "APERSMine_Range_Ammo";
			arguments[] = {{"str_a3_cfgmagazines_classicminerangemagazine0"}, {"str_a3_cfgmagazines_classicminerangemagazine_library0"}};
			description = "%12";
			displayName = "%11";
			image = "\a3\ui_f\data\gui\cfg\hints\Miss_icon_ca.paa";
			logicalOrder = 2;
			modelScale = 2;
			tip = "";
		};
		class atmine
		{
			ammo = "ATMine_Range_Ammo";
			arguments[] = {{"str_a3_cfgmagazines_mine0"}, {"STR_A3_cfgMagazines_Mine_Library0"}};
			description = "%12";
			displayName = "%11";
			image = "\a3\ui_f\data\gui\cfg\hints\Miss_icon_ca.paa";
			logicalOrder = 3;
			tip = "";
		};
		class claymore
		{
			ammo = "ClaymoreDirectionalMine_Remote_Ammo";
			arguments[] = {{"str_a3_cfgmagazines_directionalmineremotemagazine0"}, {"str_a3_cfgmagazines_directionalmineremotemagazine_library0"}};
			description = "%12";
			displayName = "%11";
			image = "\a3\ui_f\data\gui\cfg\hints\Miss_icon_ca.paa";
			logicalOrder = 4;
			modelScale = 1.5;
			tip = "";
		};
		class explosivecharge
		{
			ammo = "DemoCharge_Remote_Ammo";
			arguments[] = {{"str_a3_cfgmagazines_democharge0"}, {"str_a3_cfgmagazines_democharge_library0"}};
			description = "%12";
			displayName = "%11";
			image = "\a3\ui_f\data\gui\cfg\hints\Miss_icon_ca.paa";
			logicalOrder = 5;
			tip = "";
		};
		class explosivesatchel
		{
			ammo = "SatchelCharge_Remote_Ammo";
			arguments[] = {{"str_a3_cfgmagazines_pipebomb0"}, {"str_a3_cfgmagazines_pipebomb_library0"}};
			description = "%12";
			displayName = "%11";
			image = "\a3\ui_f\data\gui\cfg\hints\Miss_icon_ca.paa";
			logicalOrder = 6;
			tip = "";
		};
		class ied
		{
			ammo = "IEDUrbanBig_Remote_Ammo";
			arguments[] = {};
			description = "Improvised Explosive Devices of various kinds are usually used by irregular forces against regular army adversary. Made out of artillery shells, land mines or basically any explosive materials, remotely-detonated IEDs are capable of inflicting heavy casualties on unsuspecting patrols and convoys.";
			displayName = "IEDs";
			image = "\a3\ui_f\data\gui\cfg\hints\Miss_icon_ca.paa";
			logicalOrder = 7;
			modelScale = 0.5;
			tip = "";
		};
		class navalbotommine
		{
			ammo = "UnderwaterMineAB_Range_Ammo";
			arguments[] = {{"str_a3_cfgvehicles_underwaterminerangeab0"}, {"str_a3_cfgvehicles_underwaterminerangeab_library0"}};
			description = "%12";
			displayName = "%11";
			image = "\a3\ui_f\data\gui\cfg\hints\Miss_icon_ca.paa";
			logicalOrder = 9;
			modelScale = 0.5;
			tip = "";
		};
		class navalmooredmine
		{
			ammo = "UnderwaterMine_Range_Ammo";
			arguments[] = {{"str_a3_cfgvehicles_underwaterminerange0"}, {"str_a3_cfgvehicles_underwaterminerange_library0"}};
			description = "%12";
			displayName = "%11";
			image = "\a3\ui_f\data\gui\cfg\hints\Miss_icon_ca.paa";
			logicalOrder = 10;
			modelScale = 0.4;
			tip = "";
		};
		class navalshallowmine
		{
			ammo = "UnderwaterMinePDM_Range_Ammo";
			arguments[] = {{"STR_A3_CFGVEHICLES_UNDERWATERMINEPDM0"}, {"STR_A3_CFGVEHICLES_UNDERWATERMINEPDM_LIBRARY0"}};
			description = "%12";
			displayName = "%11";
			image = "\a3\ui_f\data\gui\cfg\hints\Miss_icon_ca.paa";
			logicalOrder = 11;
			modelScale = 0.5;
			tip = "";
		};
		class slammine
		{
			ammo = "SLAMDirectionalMine_Wire_Ammo";
			arguments[] = {{"str_a3_cfgmagazines_directionalminerangemagazine0"}, {"str_a3_cfgmagazines_directionalminerangemagazine_library0"}};
			description = "%12";
			displayName = "%11";
			image = "\a3\ui_f\data\gui\cfg\hints\Miss_icon_ca.paa";
			logicalOrder = 8;
			modelScale = 1.5;
			tip = "";
		};
		class TrainingMine
		{
			ammo = "TrainingMine_Ammo";
			arguments[] = {{"STR_A3_CfgMagazines_TrainingMine_Mag0"}, {"STR_A3_CfgMagazines_TrainingMine_Mag_Library0"}};
			description = "%12";
			displayName = "%11";
			dlc = 571710;
			image = "\a3\ui_f\data\gui\cfg\hints\Miss_icon_ca.paa";
			logicalOrder = 13;
			tip = "";
		};
		class UXO
		{
			ammo = "Mo_cluster_AP_UXO1_Ammo_F";
			arguments[] = {{"STR_A3_Orange_CfgHints_UXO_displayName"}, {"STR_A3_Orange_CfgHints_UXO_description"}};
			description = "%12";
			displayName = "%11";
			dlc = 571710;
			image = "\a3\ui_f\data\gui\cfg\hints\Miss_icon_ca.paa";
			logicalOrder = 14;
			tip = "";
		};
	};
	class FiringDrills
	{
		displayName = "Firing Drills";
		logicalOrder = 21;
		class CheckPoints
		{
			arguments[] = {};
			description = "When a CoF uses Check Points, competitors move between them and usually engage all available targets before moving on.";
			displayName = "Check Points";
			image = "\a3\ui_f\data\gui\cfg\hints\Checkpoints_ca.paa";
			tip = "Each Check Point may define special requirements such as the use of a specific weapon type or stance.%1%1Keep an eye on the Check Point briefing and other indicators and memorize the CoF well by training often.";
		};
		class FiringDrills
		{
			arguments[] = {};
			description = "Firing Drills are a fun shooting sport to train and compete in.%1%1Competitors complete a Course of Fire (CoF), usually consisting of a series of Check Points with targets to engage at each one.";
			displayName = "Firing Drills";
			image = "\a3\ui_f\data\gui\cfg\hints\FiringDrills_ca.paa";
			tip = "They refine their skills in the areas of movement, environmental awareness, weapon handling, shooting, prioritization and creativity.";
		};
		class Rules
		{
			arguments[] = {};
			description = "Firing Drills can be completed using one of two rule-sets: training and competitive.";
			displayName = "Rules";
			image = "\a3\ui_f\data\gui\cfg\hints\Rules_ca.paa";
			tip = "%2Training: less strict and about familiarizing with the course. Medal times cannot be challenged while training.%1%1%2Competitive: stricter rules and competitors are penalized when breaking rules. Medal times can be beaten here!";
		};
		class ShootingBoxes
		{
			arguments[] = {};
			description = "Check Points can define specific shooting boxes. When present, it's always better to engage from within these marked boxes.";
			displayName = "Shooting Boxes";
			image = "\a3\ui_f\data\gui\cfg\hints\ShootingBoxes_ca.paa";
			tip = "";
		};
		class Stances
		{
			arguments[] = {};
			description = "You may be asked to employ a specific stance at a Check Point.";
			displayName = "Stances";
			image = "\a3\ui_f\data\gui\cfg\hints\BasicStances_ca.paa";
			tip = "Doing this correctly can result in bonuses. Failure to do so may be penalized.";
		};
		class Targets
		{
			arguments[] = {};
			description = "There are various types of targets that appear at Check Points:";
			displayName = "Targets";
			image = "\a3\ui_f\data\gui\cfg\hints\Targets_ca.paa";
			tip = "%2Targets can appear immediately or after a little while.%1%2Targets can disappear after a short time.%1%2Targets can move along rails.%1%2Targets can activate after hitting another target.%1%2Sometimes only specifically colored targets should be hit.%1%2Targets may require multiple hits.%1%2Accuracy zones on targets can reduce your time when struck.%1%2Optional bonus targets lower your time.%1%2No-shoot targets must not be engaged!%1%1Targets can sometimes be randomly positioned or randomly appearing.";
		};
		class Timing
		{
			arguments[] = {};
			description = "A competitor's raw time is the amount of time it takes to reach the final Check Point, or to clear all targets for some courses.";
			displayName = "Timing";
			image = "\a3\ui_f\data\gui\cfg\hints\Timing_ca.paa";
			tip = "Time may be deducted when you are awarded bonuses, or added when you are penalized.%1%1When competing for medals, you can beat the bronze, silver and gold times. Sometimes a special time is available.";
		};
		class Tips
		{
			arguments[] = {};
			description = "%2 Firing Drills are not meant to be aced in one attempt. Study the courses, find shortcuts and get creative.%1%1%2Observe on-screen Check Point briefings, voice instructions and other indicators to know which stance and weapon to use.%1%1%2Plan your reloads and weapon switches well! Doing this in a smart way can save you many seconds.";
			displayName = "Tips";
			image = "\a3\ui_f\data\gui\cfg\hints\Chat_ca.paa";
			tip = "%2Don't always trust the most direct route. Sometimes a detour can be quicker if there are no obstacles in your path.%1%1%2Consider what will cost you more time: missing a target and re-engaging it, or moving on and taking the penalty.%1%1%2Think about your aiming path from target to target, as well as clever use of fire modes. Remember that some targets offer bonuses for accuracy.%1%1%2Scan for bonus targets, but balance your search time against the gained bonuses. Check your map for clues.%1%1%2Not all targets appear upon arriving at a Check Point. Remain vigilant until the all clear is given.%1%1%2Consider your fatigue and how often you sprint. It all affects your continued performance and aiming.";
		};
		class Weapons
		{
			arguments[] = {};
			description = "You may be urged to use a specific weapon type at a Check Point.";
			displayName = "Weapons";
			image = "\a3\ui_f\data\gui\cfg\hints\Rifles_ca.paa";
			tip = "Doing this will be rewarded with bonuses. Not doing this may incur penalties.";
		};
	};
	class GroundSupport
	{
		displayName = "Support";
		dlc = -1;
		class GS_CASRequest
		{
			description = "A Close-Air-Support request was registered and a new task was added. To complete the task, destroy the enemy vehicle marked by the waypoint.";
			displayName = "CAS Request";
			image = "\a3\ui_f\data\gui\cfg\hints\Radar_ca.paa";
			tip = "This is a high priority task as the vehicle can decimate several units if it's not quickly dispatched. This task has the highest Score reward.";
		};
		class GS_CrashLanding
		{
			description = "You have survived, but your helicopter is out of action. Because you were not killed in the crash, you do not receive the score penalty for dying. As a bonus, your respawn time has also been decreased.";
			displayName = "Crash Landing";
			image = "\a3\ui_f\data\gui\cfg\hints\Incapacitated_ca.paa";
			tip = "";
		};
		class GS_GroupMarkers
		{
			arguments[] = {{{"TeamSwitch"}}};
			description = "By pressing %11 you can toggle group markers on friendly units. The group markers consist of several elements:<br/>%2 middle - unit type.<br/>%2 left - request type.<br/>%2 right - selected by player.";
			displayName = "Group Markers";
			image = "\a3\ui_f\data\gui\cfg\hints\UnitType_CA.paa";
			tip = "";
		};
		class GS_MedevacRequest
		{
			description = "A medevac request was registered and a new task was added. To complete the task, land close to the group leader and wait until the group gets in. Afterwards, transport the group to the medevac area at base.";
			displayName = "Medevac Request";
			image = "\a3\ui_f\data\gui\cfg\hints\Injury_ca.paa";
			tip = "This is a medium priority task as the successful extraction of the affected group will free up the used Manpower by them, and allow another fresh group to join the battle.";
		};
		class GS_ResupplyRequest
		{
			description = "A resupply request was registered and a new task was added. To complete the task, sling load an ammo create stored at the maintenance area at the base and drop it close to the requested group leader.";
			displayName = "Resupply Request";
			image = "\a3\ui_f\data\gui\cfg\hints\Slots_ca.paa";
			tip = "This is a medium priority task as soldiers without ammunition will not be effective on the battlefield.";
		};
		class GS_ScoreAwarded
		{
			description = "Your %3Score%4 was just increased as a reward for completing a task, and you have directly contributed to your side's next %3Tactical Strike%4.";
			displayName = "Score Increased";
			image = "\a3\ui_f\data\gui\cfg\hints\CompetitiveRules_ca.paa";
			tip = "Check the %3Tips%4 section for more information about %3Score%4 and %3Tactical Strikes%4.";
		};
		class GS_TacticalStrikes
		{
			description = "Well done! A %3Tactical Strike%4 was just initiated by Headquarters.";
			displayName = "Tactical Strikes";
			image = "\a3\ui_f\data\gui\cfg\hints\Target_ca.paa";
			tip = "The approximate location of the %3Tactical Strike% is marked on the map.";
		};
		class GS_TransportRequest
		{
			arguments[] = {{{"TeamSwitch"}}};
			description = "A transport request was registered and a new task was added. To complete the task, land close to the group leader and wait until the group gets in. Afterwards, transport the group to the designated sector (marked by the waypoint) %3OR%4 any other sector that is not under our control.";
			displayName = "Transport Request";
			image = "\a3\ui_f\data\gui\cfg\hints\Waypoint_ca.paa";
			tip = "This is the most common task. It has lower priority then the other tasks as the units can reach their destinations unassisted. Although, transport logistics can be of high tactical significance.";
		};
	};
	class Guide
	{
		category = "TacticalGuide";
		displayName = "Tactical Guide";
		logicalOrder = 3;
		class airattack
		{
			arguments[] = {};
			description = "Coming under air attack as an infantry force is a serious issue, compounded more so if your unit doesn't have any organic air defense assets. You must know how to avoid being spotted by an enemy air asset, and if spotted, how to react.%1%1%2%3If you hear the sound of a jet or helicopter%4 coming in the direction of friendly forces, call it out over the radio to alert other units.%1%2%3If the aircraft doesn't know%4 your position and is just scouting, the best course of action is to move the unit into concealment and wait until it has passed.%1%2%3Minimize movement%4 when the aircraft is near, as this makes it harder for the crew to spot camouflaged troops.%1%2%3If the aircraft does spot%4 your element, ensure that everyone spreads out and avoids bunching up. This will minimize the effects of the enemy weapon systems such as FFARs.%1%2%3Assess the terrain and situation%4 and prepare to move. You'll want to head for terrain that will minimize the effects of the aircraft. Move into dense trees/forests, urban terrain, or try to get into a valley or on the reverse slope of a hill to reduce the angles that the aircraft can attack from.%1%2%3Avoid firing on the aircraft with small-arms%4 unless absolutely necessary. This typically only alerts them to your position and is generally ineffective unless massed against helicopters.";
			displayName = "C06 Reaction to Air Attack";
			image = "\a3\ui_f\data\gui\cfg\hints\Miss_icon_ca.paa";
			logicalOrder = 26;
			tip = "";
		};
		class ambush
		{
			arguments[] = {};
			description = "Ambushes are an extremely favorable way to engage the enemy. The combination of surprise and fierce, accurate fire can rip an enemy element to pieces before they have time to react.%1%1%3Key Elements of an Ambush%4%1%2%3Friendly Positioning.%4 The best ambushes have the friendly forces located in good cover and concealment, firing from an elevated position. This makes it the most difficult for the ambushed enemy to be able to effectively retaliate.%1<img size='9' shadow='0' image='A3\Ui_f\data\GUI\Cfg\Hints\TGuide\ambush1_ca.paa' /> <t %10>(Linear ambush)</t> %1%1%2%3Location of the Kill Zone.%4 The kill zone is the area in which fire is focused at the initiation of the ambush. An ideal kill zone has very little cover or concealment, and no significant terrain features that might cause “dead zones” to exist. A kill zone should be well-covered by friendly lines of fire, and any potential exits from it should be able to be fired at/into without friendly forces shifting positions.%1<img size='9' shadow='0' image='A3\Ui_f\data\GUI\Cfg\Hints\TGuide\ambush2_ca.paa' /> <t %10>(L-shaped ambush)</t> %1%1%2%3Proper Initiation of Fires.%4 The signal to start the ambush is usually given by the element leader. Once the order is given, all friendlies should begin firing a heavy and accurate volume of fire into the kill zone. Continue firing until all enemies are confirmed dead or the element leader gives a command to shift or cease fire. If a friendly accidentally fires before the element leader, the ambush is initiated whether it should have been or not.%1%2%3Using explosives.%4 You must also consider the use of explosives devices like satchel charges and claymore mines. These are usually not practical for a hasty ambush, but a vehicle ambush or deliberate ambush can benefit greatly from their usage.";
			displayName = "B06 Conducting an Ambush";
			image = "\a3\ui_f\data\gui\cfg\hints\Miss_icon_ca.paa";
			logicalOrder = 16;
			tip = "";
		};
		class antiair
		{
			arguments[] = {};
			description = "An anti-air missile team consists of a gunner and assistant gunner. Equipped with a manportable AA missile system such as the Titan MPRL, and an additional missile, the two must be ready to use their launcher to engage and destroy any enemy air threats that might appear over the battlefield.%1%1Basic Anti-Air Missile Gunner Guidelines:%1%1%2%3Fire high-probability shots only.%4 Try to hit the aircraft when it's flying away, or flying at a shallow oblique angle relative to you. The closer they are (to a reasonable degree), the more likely the missile will be able to hit them before their flare countermeasures can be effective.%1<img size='4.2' shadow='0' image='A3\Ui_f\data\GUI\Cfg\Hints\TGuide\good_shot01_ca.paa' /> <t %10>(Good shots: rear, rear oblique)</t> %1%2%3Seek positions that give good visibility %4 over large areas of terrain, with clear lines of fire into the sky. An anti-air team sitting at the bottom of a valley is far less effective than one positioned in a concealed ridgeline location. Likewise, a missile team hidden in thick forest isn’t in a position to do much should the enemy appear suddenly.%1<img size='4.2' shadow='0' image='A3\Ui_f\data\GUI\Cfg\Hints\TGuide\bad_shot01_ca.paa' /> <t %10>(Bad shots: flank, frontal)</t> %1%2%3Avoid shots against a jet aircraft that is flying perpendicular to you.%4 You will usually be better off waiting for a rear shot when firing on jets. Close-range flank shots against fast-moving helicopters can also be risky, but generally helos are flying at a speed that allows almost any aspect shot to work on them with equal effectiveness.%1<img size='4.2' shadow='0' image='A3\Ui_f\data\GUI\Cfg\Hints\TGuide\good_shot02_ca.paa' /> <t %10>(Good shots: flank, rear oblique, rear)</t> %1%2%3Be aware of friendly positions.%4 Shooting down an aircraft and having it land on top of a nearby friendly squad is less than desirable.";
			displayName = "C04 Anti-Air Team Tips";
			image = "\a3\ui_f\data\gui\cfg\hints\Miss_icon_ca.paa";
			logicalOrder = 24;
			tip = "";
		};
		class antiarmor
		{
			arguments[] = {};
			description = "Arma 3 offers two categories of anti-tank weapons: medium (PCML and RPG-42 Alamut) and heavy (Titan launcher). The following tips should give you an edge when using them.%1%1%2%3Know your rocket types.%4 PCML uses only one type of rocket but Alamut and Titan can be loaded with standard anti-tank rocket or heavy explosive variant which is excellent when dealing with large groups of soldiers.%1%2%3When not fighting armor,%4 the launcher’s optic can be used to assist the infantry in spotting concealed or distant targets.%1%2%3Reload in cover.%4 Fire from different positions each time, as the situation permits. Backblast will give you away most of the time, so ensure that you move away from it after each shot.%1%2%3Do not waste your missiles%4 on light armored targets. MAT teams can deal with light armor just fine - save the HAT missiles for enemy main battle tanks or other high-priority threats.";
			displayName = "C05 Anti-Armor Gunner Tips";
			image = "\a3\ui_f\data\gui\cfg\hints\Miss_icon_ca.paa";
			logicalOrder = 25;
			tip = "";
		};
		class armor
		{
			arguments[] = {};
			description = "Armored vehicles are powerful force multipliers in combined arms battle. When properly employed with the support of infantry, the combination is difficult to match. As infantryman you should follow these guidelines:%1%1%2%3Keep a healthy distance from the armor.%4 Armored vehicles have a hard time seeing infantry close to them. In particular, you want to avoid being behind armored vehicles unless they are deliberately providing cover for friendly infantry. If not, they are apt to throw into reverse without any warning, which can result in pancaked infantry quite easily.%1%2%3Screen the tank in close terrain,%4 ensure infantry are moving ahead of it as well. Infantry should be moving in a fashion that allows them to observe and cover any threat avenues before the tank becomes visible to them. This is intended to spot ATGMs, RPG teams, and other infantry threats so that the armor can be warned, or the infantry can kill them before they have a chance to do anything.%1%2%3Identify and communicate any threats%4 to the infantry that the armor can handle instead. Some threats will exist that will not be a danger to the armor, but may pose a severe threat to infantry. Typically these take the form of enemy infantry concentrations, snipers, machinegun bunkers, and other forces that can hurt infantry yet do not pose a threat to armor. When these are identified, it's the job of the infantry to direct the armor so that the armor can eliminate the threat.%1%2%3Armor can act as part of the base of fire,%4 freeing up more infantry to participate in an assault. While you will generally want to keep infantry with the armored base of fire to provide close protection, you won’t need as many people in the actual base of fire due to the magnified optics and powerful weapons of the armor being a force multiplier.";
			displayName = "C10 Working with Armor";
			image = "\a3\ui_f\data\gui\cfg\hints\Miss_icon_ca.paa";
			logicalOrder = 30;
			tip = "";
		};
		class attack
		{
			arguments[] = {};
			description = "Attacks have three elements to them when employed at the platoon level or higher - the assault, support, and security elements - while a squad attack only has assault and support elements. Let’s take a look at what the responsibilities of each are in further detail.%1%1%2%3Assault Element.%4 The assault element attacks with speed and intensity and avoids getting bogged down. The assault element cannot afford to get stuck out in the open and must be prepared to leave their wounded and dead where they fall and let follow-on forces tend to them, in order to maintain the momentum of their attack.%1%2%3Support Element.%4 The key thing for the support element is that it must have the ability to provide a high volume of fire. This is often more dependent on the weapons that it employs, versus the number of personnel in it. Placing extra machineguns in the support element helps to facilitate this volume.%1%2%3Security Element.%4 A security element provides local security for forces during a platoon-level or higher assault. This typically means that they are focused on preventing exterior enemy forces from disrupting the conduct of the assault on an enemy position. The security element is the first line of observation for and defense against any spoiling attacks the enemy may attempt. Security elements can also be merged in with the support element as part of the base of fire.";
			displayName = "B05 Elements of an Attack";
			image = "\a3\ui_f\data\gui\cfg\hints\Miss_icon_ca.paa";
			logicalOrder = 15;
			tip = "";
		};
		class awareness
		{
			arguments[] = {};
			description = "One of the most fundamental combat survival skills is that of situational awareness. This simply means that you are alert to your surrounding environment and can leverage your knowledge of the battlefield’s state to make tactical decisions and judgment calls. Basic Situational Awareness Guidelines:%1%1%2%3Scan for the enemy.%4 Whether you’re moving or halted, you should always be scanning for the enemy. Murphy’s Laws of Combat tell you that the moment you let your guard down and stop scanning is the moment the enemy will appear.%1%2%3Cover assigned areas.%4 Additionally, you should cover whatever area seems to need coverage. Adapt to the situation as needed, and be able to pick out areas that may be more dangerous, and warrant more observation, than others.%1<img size='9' shadow='0' image='A3\Ui_f\data\GUI\Cfg\Hints\TGuide\cover1_ca.paa' /> <t %10>(Covering sectors in the urban environment)</t> %1%1%2%3Stay alert!%4 There is no “safe” time in a combat zone. If you let your guard down, either you will die from it, or, worse, you will get a teammate killed because of it.%1<img size='9' shadow='0' image='A3\Ui_f\data\GUI\Cfg\Hints\TGuide\cover2_ca.paa' /> <t %10>(Covering sectors in more open terrain)</t> %1%1%2%3Be aware of “tunnel vision”.%4 Don't get fixated on a specific target, object, or area. Remember that for every enemy you see, there are probably others that you do not. Fixating on a single enemy at the expense of everything else is likely to get you flanked and killed.%1%2%3Check the map frequently.%4 Maintain awareness of friendly positions, suspected enemy locations, and more. The map can be used to mark enemy contacts as well as friendly positions.";
			displayName = "A01 Situational Awareness";
			image = "\a3\ui_f\data\gui\cfg\hints\Miss_icon_ca.paa";
			logicalOrder = 1;
			tip = "";
		};
		class contact
		{
			arguments[] = {};
			description = "If your element comes under fire, follow these basic guidelines, depending on what level of leadership you’re at.%1%1%3Fireteam Leader%4%1%2%3Ensure that your fireteam has positioned itself appropriately.%4 If not, order them to a covered or concealed position. If necessary due to bad positioning, deploy smoke and pull your team back to better cover or concealment.%1<img size='9' shadow='0' image='A3\Ui_f\data\GUI\Cfg\Hints\TGuide\cover_ca.paa' />%1%2%3Determine the location of the enemy as precisely as possible.%4 Begin engaging the enemy yourself. Use your under-barrel grenade launcher against clusters of the enemy and high-value targets and use the rifle against individual soldiers. Stay tactically alert and avoid getting tunnel vision.%1%2%3Direct the fire of your team as needed.%4 This includes massing fire on specific targets or covering a very specific sector.%1%2%3Be prepared to maneuver.%4 Scan the area and consider how and where you might move to gain a tactical advantage over the enemy.";
			displayName = "B04 Reaction to Fire 02";
			image = "\a3\ui_f\data\gui\cfg\hints\Miss_icon_ca.paa";
			logicalOrder = 14;
			tip = "";
		};
		class cover
		{
			arguments[] = {};
			description = "The first rule of “not being shot” is ensuring that the enemy either cannot see you or cannot hit you, or both. Here are some useful tips for covering and concealing yourself:%1%1%2%3Cover first.%4 You should strive to be always in cover or concealment when combat is occurring. If the enemy cannot visually locate you, they will not be able to accurately shoot at you. Even if they do know where you are, hard cover can prevent them from effectively engaging you.%1<img size='9' shadow='0' image='A3\Ui_f\data\GUI\Cfg\Hints\TGuide\conceal_ca.paa' />%1%2%3Sight Displacement.%4 One critical thing to remember in Arma 3 is that the view you get from iron sight mode is offset down and to the right of your normal view. If you take this into consideration when utilizing cover, you can expose much less of your body.%1%2%3Urban Prone.%4 The lowest stance adjust can allow you to more easily see or fire under a vehicle you’re taking cover behind. While you won’t be able to use your sights easily in this stance, it works very well for putting fire on close enemies in an unexpected fashion.%1%2%3Buddy Cover.%4 If your team has been chewed apart by an ambush and you can’t possibly run for cover without getting mowed down, try hunkering down behind a dead body and using it as cover while you return fire on the enemy.%1<img size='9'  shadow='0' image='A3\Ui_f\data\GUI\Cfg\Hints\TGuide\buddy_ca.paa' />";
			displayName = "A09 Cover and Concealment";
			image = "\a3\ui_f\data\gui\cfg\hints\Miss_icon_ca.paa";
			logicalOrder = 9;
			tip = "";
		};
		class defending
		{
			arguments[] = {};
			description = "Defending can take many forms. An element may be tasked with protecting something important, such as a building, key road or intersection, vehicle, or high-value personnel. It may also simply need to protect itself while in a static position. Whatever the case may be, there are several common themes to defending successfully.%1%1%2%3Security.%4 Security comes in the form of ensuring that the defensive positions can observe all around the defensive location and cover all possible avenues of approach.%1<img size='9' shadow='0' image='A3\Ui_f\data\GUI\Cfg\Hints\TGuide\security_ca.paa' />%1%2%3Positioning.%4 Every fighting position should be chosen to minimize exposure to enemy observation and fires, while maximizing the lethality of the soldier fighting from that position.%1<img size='9' shadow='0' image='A3\Ui_f\data\GUI\Cfg\Hints\TGuide\defending_ca.paa' />%1%2%3Depth.%4 Spreading a defending force thinly over a long frontage, with no reserve and no depth to the defense, is tactically unsound. Defenders must ensure that they have depth to their defense.%1%2%3Mutual support.%4 The ultimate goal is to make it impossible for the enemy to attack one position in isolation - instead, they will always find themselves engaged by a supporting position, forcing them to attempt to attack both positions at the same time, which dilutes their efforts.%1%2%3Flexibility.%4 In an ideal situation, each defensive position has an alternate position to fight from, as well as “fall-back” positions which are deeper in the defended areas.";
			displayName = "B08 Principles of Defending";
			image = "\a3\ui_f\data\gui\cfg\hints\Miss_icon_ca.paa";
			logicalOrder = 18;
			tip = "";
		};
		class fireteam
		{
			arguments[] = {};
			description = "The fireteam is the smallest combat element employed at the platoon level. The Fireteam Leader’s (FTL) mantra is “Follow me and do as I do”.%1<img size='9' shadow='0' image='A3\Ui_f\data\GUI\Cfg\Hints\TGuide\fireteam2_ca.paa' />%1%1%3Fireteam Leaders ...%4%1%2%3... ensure that their fireteam members maintain good interval and situational awareness.%4 This is accomplished in part by giving simple formations (typically line, wedge, or staggered column) and emphasizing proper sector coverage and security. The FTL must be vigilant and proactive in preventing their team members from becoming target-fixated or bunched up.%1%2%3... control and direct the team’s fire.%4 While the FTL can often let his team members engage at will, there will come times when the direction of their fire is critical to success - engagement of high-priority targets such as snipers, machineguns, and vehicles are good examples.%1%2%3... maintain accountability of their team members.%4 It's up to the FTL to ensure that no team members are left behind. A FTL should do a team check after every engagement, and multiple times during extended fights. Having a team member go down without the FTL knowing about it can be a major issue.%1%2%3... are proficient with their under-barrel grenade launchers (“UGL”).%4 The FTL must be able to use their UGL to carry out a number of tasks, such as firing high-explosive shells at significant enemy positions, screening friendly movement, marking or masking the enemy with smoke shells.";
			displayName = "B02 Fireteam Leadership";
			image = "\a3\ui_f\data\gui\cfg\hints\Miss_icon_ca.paa";
			logicalOrder = 12;
			tip = "";
		};
		class formation
		{
			arguments[] = {};
			description = "Formations act as a guide for where soldiers should be to best fit the situation. They are very flexible creatures, and should be adapted as needed to fit the situation. Everyone should be familiar with the basic formations, and leaders in particular must have an understanding of what the strengths and weaknesses of each are.%1%1Soldiers should not get wound up in trying to maintain a 100&#37; textbook-perfect formation position 100&#37; of the time. Adaptation to the situation is needed.%1%1Common Formations:%1%1%3Wedge%4%1The wedge formation is a very versatile one that is easy to establish and control. It allows for good all-around observation and security, and can be used in the majority of situations encountered. Fire can be placed in any direction in good quantity, and a shift in formation upon contact is easy to accomplish to suit where the contact came from.%1<img size='8' shadow='0' image='A3\Ui_f\data\GUI\Cfg\Hints\TGuide\wedge_ca.paa' />%1%1%3Line%4%1The line formation is well-suited for advancing towards a known or suspected threat with the maximum number of guns brought to bear, and excels at placing a heavy volume of fire to the formation’s front.%1<img size='4' shadow='0' image='A3\Ui_f\data\GUI\Cfg\Hints\TGuide\line_ca.paa' />%1%3Column (Staggered)%1%4The column formation is the simplest formation to establish, as it is merely a matter of follow-the-leader. It allows for very rapid movement because of this. This formation is best used during travel when contact is not imminently expected or speed is a high priority.%1<img size='9' shadow='0' image='A3\Ui_f\data\GUI\Cfg\Hints\TGuide\column_ca.paa' />";
			displayName = "C02 Formations 101";
			image = "\a3\ui_f\data\gui\cfg\hints\Miss_icon_ca.paa";
			logicalOrder = 22;
			tip = "";
		};
		class goodshot
		{
			arguments[] = {};
			description = "Basic marksmanship is a skill that we encourage practicing. The process starts with learning how it all works, which we’ll go into now.%1%1%2%3Ballistics.%4 Bullets follow a ballistic arc determined by gravity, air resistance etc. Since the muzzle sits below the sights, the barrel and sights are at slightly different angles, this causes the bullet to cross the “point of aim” (where the sights are pointing) twice. After that, the bullet will start to drop below the point of aim. Knowing where to expect the bullet to be at any point along the trajectory helps you to compensate via “offset aiming” for targets that are at ranges other than what your weapon was zeroed for.%1<img size='9'  shadow='0' image='A3\Ui_f\data\GUI\Cfg\Hints\TGuide\trajectory_ca.paa' />%1%2%3Sight Usage.%4 The term “sight picture” refers to the way the front sight, crosshair, or reflex dot is oriented relative to the target being engaged. The typical sight picture you want to achieve is that of the center-of-mass hold, which is where the sight rests on the upper chest of the enemy, or the center of their visible mass. This is intended to give you the best possible chance of hitting them.%1<img size='9' shadow='0' image='A3\Ui_f\data\GUI\Cfg\Hints\TGuide\sights_ca.paa' />%1%2%3Bore Offset.%4 The origin of the bullet will be from the actual weapon muzzle, and not the center of the screen. Keep in mind that your weapon sights are a few inches above the rifle bore. If you do not take this into account, you will occasionally find instances where you’re shooting into the ground (or an obstacle). The crosshair will indicate if something is close to the bore by shifting position backwards to reflect where the bullet will strike (optional).";
			displayName = "A08 Elements of a Shot";
			image = "\a3\ui_f\data\gui\cfg\hints\Miss_icon_ca.paa";
			logicalOrder = 8;
			tip = "";
		};
		class guerrilla
		{
			arguments[] = {};
			description = "The most fundamental rules of operating as a guerrilla force are as follows:%1%1%2%3Choose your targets carefully.%4 It’s not wise to conduct an operation in an area where the enemy is vastly superior and able to quickly react to your presence. Choose vulnerable targets, ones which are isolated from supporting forces.%1%2%3Strike hard and fast.%4 Ambushes allow your force to pick a place where the enemy is known to be operating and stack the odds in your favor.%1%2%3Don’t become fixed or allow the enemy to mass power against you.%4 There are many ways to avoid being fixed. The simplest is to deploy your forces throughout an area, and not simply at one point.%1%2%3Work to minimize the power of enemy advantages.%4 Being familiar with the strengths of your enemy is essential, as it gives you the opportunity to plan things to be most heavily in your side’s favor.%1%2%3Exploit the target site (quickly!).%4 Search enemy bodies, vehicles, buildings, etc., to locate key items and quickly distribute them to your fellow guerrillas for transport.%1%2%3Leave presents.%4 Place mines in likely response avenues, within bunkers, at entry points, around enemy KIA, etc.%1<img size='9' shadow='0' image='A3\Ui_f\data\GUI\Cfg\Hints\TGuide\mine_ca.paa' />%1%2%3Have a plan for withdrawal.%4 A withdrawal plan ideally has multiple routes, allowing for a larger guerrilla force to split into smaller parties on their way out of the area.%1%2%3Be Ever Vigilant.%4 You should never relax or consider yourself to be “safe” – always assume you are being observed.";
			displayName = "B10 Guerrilla Warfare";
			image = "\a3\ui_f\data\gui\cfg\hints\Miss_icon_ca.paa";
			logicalOrder = 20;
			tip = "";
		};
		class iff
		{
			arguments[] = {};
			description = "Being able to visually differentiate between friends and foes is a critical skill to possess. Someone who cannot tell the difference between their faction’s uniforms and gear, and those of the enemy, is a danger to their entire team. There are several basic guidelines that can be followed to help prevent friendly fire incidents.%1%1%2%3Keep your finger off the trigger.%4 Keeping your “firing”‘ finger rested on your middle mouse button, instead of the fire button, helps to prevent an accidental and potentially fatal shot at the worst possible time.%1<img size='5' shadow='0' image='A3\Ui_f\data\GUI\Cfg\Hints\TGuide\mouse_ca.paa' />%1%2%3Think before you pull the trigger.%4 Establish positive identification before firing. If it doesn’t feel right, if something seems “off” or amiss, hold fire. If it looks like a friend, has a friendly weapon, isn’t shooting at you, but seems like it’s in an enemy area, it may be a friend, and you can’t risk taking a shot without being sure.%1%2%3Stay alert as to where friendly forces are located.%4 Communicate your location to others when appropriate.%1%2%3Watch and listen.%4 The colors of tracers and the sounds of the weapons being used can help to identify the enemy, but bear in mind that over the course of a mission friendly forces may acquire enemy weapons and thus it becomes less and less accurate as a mission progresses.";
			displayName = "A04 Friend or foe";
			image = "\a3\ui_f\data\gui\cfg\hints\Miss_icon_ca.paa";
			logicalOrder = 4;
			tip = "";
		};
		class indirect
		{
			arguments[] = {};
			description = "There are a few basic tips for how to act when coming under artillery attack or other indirect fire:%1%1%2%3Stay alert and know what to listen for.%4 You may be able to hear the artillery unit firing in the distance before the rounds have impacted. This is most likely if you’re being fired on by mortars or high-angle artillery fire. You may even hear the rounds coming in if they’re subsonic. Other types of artillery will explode amongst your forces without warning and will likely catch everyone by surprise.%1%2%3If you’re defending a location%4 and cannot stray far, spread out and take the best cover you can find. Keep your eyes open for enemy infantry closing in under the cover of the barrage.%1%2%3Enemy artillery can be taken out%4 by counterbattery fire or close air support, if available, while mortar positions (which are usually much closer) can sometimes be assaulted and captured by ground attack.%1%2%3Bear in mind%4 that artillery units will often use a technique where they fire a barrage, wait, then fire another barrage. The idea is to make the unit being attacked think that the artillery is over, move out from cover, only to be struck again while exposed.";
			displayName = "C09 Reaction to Indirect Fire";
			image = "\a3\ui_f\data\gui\cfg\hints\Miss_icon_ca.paa";
			logicalOrder = 29;
			tip = "";
		};
		class listening
		{
			arguments[] = {};
			description = "A sharp ear is often as valuable as a sharp eye, and there are several things you will want to listen for at all times, such as the sounds of combat, vehicles, movement, and voices.%1%1%2%3Combat.%4 If you hear firing, figure out what direction it’s coming from. The more experienced you are, the more likely you’ll be able to distinguish the different types of rifle fire from a distance.%1%2%3Vehicles.%4 Being able to hear a vehicle from a distance, as well as to identify the class by the sound it makes (such as being able to distinguish the noise of tracks from wheels, or rotors from jet engines) can help to prevent surprise and maintain the initiative.%1%2%3Movement.%4 Soldiers make noise as they move around the battlefield, so listen for it. Observe the sound of boots on gravel, uniforms brushing against trees, the thumping and rustling of someone running through underbrush, or anything else that catches the ear. This is particularly important in dense terrain.%1%2%3Voices.%4 Know who your teammates are, and know their voices. If you hear someone you don’t recognize, it could quite possibly be the enemy. If you know you’re in enemy territory, stay particularly alert for any unknown voices, and use any that you hear to help guide you towards the enemy and deal some damage to them.";
			displayName = "A03 What to listen to";
			image = "\a3\ui_f\data\gui\cfg\hints\Miss_icon_ca.paa";
			logicalOrder = 3;
			tip = "";
		};
		class looking
		{
			arguments[] = {};
			description = "Once contact has been made and fire is being exchanged, start paying attention to these aspects:%1%1%2%3Muzzle flashes and muzzle smoke.%4 You may not always see the outline of an enemy, but a big puff of smoke and dust in the day or flash of flame at night (and other low light situations) - which keeps popping up from the same location - can act as a great enemy indicator.%1<img size='9' shadow='0' image='A3\Ui_f\data\GUI\Cfg\Hints\TGuide\muzzle_ca.paa' />%1%2%3Tracers.%4 Tracers are brilliant neon signs that say “I’m firing from over here!” These are the most visible signs of the enemy, and the easiest to follow back to the shooter’s origin. Note that not all weapons will fire tracers, and some weapons will even use special “dim tracers” that can only be seen with nightvision devices.%1<img size='9' shadow='0' image='A3\Ui_f\data\GUI\Cfg\Hints\TGuide\tracers_ca.paa' />%1%2%3Smoke.%4 If the enemy fires a heavy weapon such as a rocket-propelled grenade (RPG), you’ll be able to pick out their position by the large volume of smoke produced by the weapon’s backblast. You may also see the enemy using smokescreens to mask their movement. However, keep in mind that the enemy will sometimes employ smoke as a diversion.%1<img size='9' shadow='0' image='A3\Ui_f\data\GUI\Cfg\Hints\TGuide\smoke_ca.paa' />%1%2%3Dead enemies.%4 This is particularly useful if contact was made with the enemy by another element, Close Air Support, or artillery. Dead enemy soldiers can give you an idea of where the enemy was, what they were (e.g. special forces, normal troops, etc.) and even where they may still be.";
			displayName = "A02 What to look for";
			image = "\a3\ui_f\data\gui\cfg\hints\Miss_icon_ca.paa";
			logicalOrder = 2;
			tip = "";
		};
		class marksmanship
		{
			arguments[] = {};
			description = "Several things influence the accuracy of your fire in Arma 3. The more elements you have in your favor, the better your accuracy will be. The specific factors are as follows:%1%1%2%3Stance. %4You will be more accurate the more stable your stance is. You are most accurate when prone, less accurate when crouched, and least accurate when standing. In some unusual stances you may not be able to get a proper sight picture, reducing your capability for aimed fire.%1<img size='9' shadow='0' image='A3\Ui_f\data\GUI\Cfg\Hints\TGuide\stances_ca.paa' />%1%2%3Stamina.%4 If you’re exhausted from sprinting all over the place or carrying heavy loads, your sights will drift and jostle around until you’ve recovered, making accuracy difficult.%1%2%3Breath control.%4 If you use breath control properly, you’ll be able to shoot more accurately than someone who doesn’t. Ensure that you have this feature bound to a readily accessible key, as it will come in handy more than a few times during every mission. Holding your breath for too long will cause your stability to degrade, so make sure you only use this when you’re about to take your shot.%1%2%3Wounds.%4 If you’ve taken damage, particularly to your arms, your ability to hold a rifle stable will be compromised. The only thing you can do to correct this is to find a medic and be healed. %1<img size='9' shadow='0' image='A3\Ui_f\data\GUI\Cfg\Hints\TGuide\wound2_ca.paa' />";
			displayName = "A07 Basic Marksmanship";
			image = "\a3\ui_f\data\gui\cfg\hints\Miss_icon_ca.paa";
			logicalOrder = 7;
			tip = "";
		};
		class mout
		{
			arguments[] = {};
			description = "Military operations in urban terrain (MOUT) and close quarters battle (CQB) is easily the most dangerous environment for infantry to operate. The following tips can save lives if you're an infantry leader commencing operation in a MOUT environment.%1<img size='9' shadow='0' image='A3\Ui_f\data\GUI\Cfg\Hints\TGuide\mout_ca.paa' />%1%2%3Move with deliberation.%4 In a MOUT fight, haphazard movement, excessively fast speeds, and overextending units easily results in casualties.%1%2%3Smoke is extremely effective in MOUT%4 - use it! Know how to employ smoke properly, and use it to maximum effect whenever possible. One well-placed smoke grenade can mask an entire street or one side of a building and save lives through screening friendlies or masking the enemy.%1%2%3Machineguns, emplaced properly, can cut an entire street%4 (or more) off from enemy maneuver. Emplacing your machinegun assets properly can be a huge factor in winning an urban fight.%1%2%3Know how to split up as a fireteam%4 into covering and clearing teams and clear a structure. These clearing teams enter the structure, with one peeling to the left, the other to the right, etc. They secure each room and move methodically throughout the structure until it's cleared, at which point they exit the structure, join up with their other fireteam members, and continue on.%1%2%3Do not commit more than a fireteam%4 to the interior of a structure up to medium size. Very large buildings should have two fireteams at most, with the third acting as a covering team. Cramming too many people into a building, particularly one that has potentially been booby-trapped, is asking for a catastrophe.";
			displayName = "C08 MOUT";
			image = "\a3\ui_f\data\gui\cfg\hints\Miss_icon_ca.paa";
			logicalOrder = 28;
			tip = "";
		};
		class movement
		{
			arguments[] = {};
			description = "Proper movement will keep you alive, whereas sloppy movement tends to result in a lot of unnecessary pain and suffering once the enemy has a chance to contest it. The following guidelines should serve you well if you heed them.%1%1%2%3Move from cover to cover, or concealment to concealment.%4 If you’re under fire, do so in short rushes. Ensure that you know where you’re going next before you start to move from your current position.%1%2%3Maintain good intervals.%4 Bunching up gets people killed. Try to keep at least five meters between yourself and any other team members whenever possible. Ten meters is even better.%1%2%3Take a knee at halts.%4 Kneeling or crouching lowers your exposure, which makes it harder for someone to hit you. Get into the habit of taking a knee any time that you’re halted for more than a second or two. If you expect to be stationary for a longer period of time, go prone, find better cover or concealment, or both.%1<img size='9' shadow='0' image='A3\Ui_f\data\GUI\Cfg\Hints\TGuide\knee_ca.paa' />%1%2%3I’m up, they see me, I’m down.%4 The basic “individual rush” consists of jumping up, sprinting forward a bit, and then diving prone. Throwing in a roll after hitting the deck will help to throw off the enemy’s aim. The “diving prone” at the end of each rush can also help to confuse the enemy.%1%2%3Don’t skyline yourself.%4 Skylining is silhouetting yourself against the sky. If you absolutely must cross a ridge and think the enemy might be looking that way, go prone and try to cross the ridge where vegetation provides some amount of concealment.%1<img size='9' shadow='0' image='A3\Ui_f\data\GUI\Cfg\Hints\TGuide\skyline_ca.paa' />";
			displayName = "A05 Movement Guidelines";
			image = "\a3\ui_f\data\gui\cfg\hints\Miss_icon_ca.paa";
			logicalOrder = 5;
			tip = "";
		};
		class night
		{
			arguments[] = {};
			description = "In this section we’ll provide some useful tips for engaging in night-time operations.%1%1%2%3Flashlights.%4 Flashlights are best used in short ‘bursts’ - you toggle them on to illuminate something or scan an area, then turn them off once you’ve seen what you need to see. After turning them off, make sure to move away from that position.%1<img size='9' shadow='0' image='A3\Ui_f\data\GUI\Cfg\Hints\TGuide\lights_ca.paa' />%1%2%3Nightvision.%4 Nightvision works via the amplification of ambient light - be it from stars, the moon, or artificial sources. Thus, it works best when the moon is out or the sky is clear - clouds and such tend to degrade the image quality. Nightvision also opens up the use of infrared gear like infrared (IR) lasers. %1<img size='9' shadow='0' image='A3\Ui_f\data\GUI\Cfg\Hints\TGuide\nvg_ca.paa' />%1%2%3IR lasers.%4 Employment of IR lasers is very similar to that of flashlights, in that you don’t want to leave them turned on all the time. Keeping lasers turned off helps to ‘declutter’ what soldiers are seeing. Good laser discipline happens when using lasers only to indicate targets, direct attention, or are actively employing weapons.%1<img size='9' shadow='0' image='A3\Ui_f\data\GUI\Cfg\Hints\TGuide\lasers_ca.paa' />%1%2%3Weapon usage at night.%4 Beware of muzzle flash. If there’s no solid cover nearby, change positions after each burst - the enemy will return fire where they last saw the muzzle flashes. If non-tracer magazines are available, try to use them whenever possible. Save tracer magazines for critical situations like designating targets or when your side has fire superiority.";
			displayName = "A10 Fighting at Night";
			image = "\a3\ui_f\data\gui\cfg\hints\Miss_icon_ca.paa";
			logicalOrder = 10;
			tip = "";
		};
		class observation
		{
			arguments[] = {};
			description = "If your element comes under fire, follow these basic guidelines, depending on what level of leadership you’re at.%1%1%3Fireteam Member%4%1%2%3Take up as good of a position as possible.%4 Prioritize cover, only go for concealment if no cover is available and scan for signs of the enemy as you return fire in the direction of the enemy.%1<img size='9' shadow='0' image='A3\Ui_f\data\GUI\Cfg\Hints\TGuide\cover3_ca.paa' />%1%2%3Listen for orders from the fireteam leader.%4 If your element leader is killed, and you are next in command, take command and evaluate the situation as a fireteam leader would.%1%2%3Don’t be afraid to show disciplined initiative.%4 Fireteam members are at the forefront of the battle. If you see an opportunity or a danger, take the initiative to do or say something about it. This includes seeing or hearing evidence of enemy armor coming.%1%2%3Deal with wounds.%4 If wounded, announce it and make your way to the squad medic if the wound is dire. If it’s a light wound, continue fighting until things calm down.%1<img size='9' shadow='0' image='A3\Ui_f\data\GUI\Cfg\Hints\TGuide\wound_ca.paa' />";
			displayName = "B03 Reaction to Fire 01";
			image = "\a3\ui_f\data\gui\cfg\hints\Miss_icon_ca.paa";
			logicalOrder = 13;
			tip = "";
		};
		class orientation
		{
			arguments[] = {};
			description = "The map and the compass are two basic tools for orientation and you should know how to use them.%1%1%2%3Reading the map.%4 The main thing to remember is that the grids must be read right, and then up. Due to the fact that the map grid is composed entirely of numbers, it’s important that you do not transpose them. Note that depending on the map zoom, you may see two, three, or even four numbers per horizontal or vertical grid. This reflects the precision of the coordinate. For example, a six-digit grid (3+3) defines a square that is 100 meters on a side. A four-digit grid (2+2) defines a square that is one kilometer on a side. An eight-digit grid is 10 meters on a side, while a ten digit grid is 1 meter on a side.%1<img size='9' image='A3\Ui_f\data\GUI\Cfg\Hints\TGuide\map_ca.paa' /> %1<t %10>(Read right, and then up)</t> %1%1%2%3Points of elevation.%4 The numbers scattered around the map indicate points of elevation. These occur either at the top of a protrusion (such as a hill) or the bottom of a depression (such as a valley). When communicating map locations over voice chat, numbered hills can be referred to as “Hill 123”.%1%2%3How to read the compass.%4 The compass is graduated three ways. The first and simplest is via the cardinal North, South, East, and West directions. After that it is graduated in degrees - 0 to 359. This is the inner, larger set of numbers, and should be used when calling out specific target bearings. The final outer set of measurements are known as “Mils”, and generally do not have a use aside from communicating with artillery units.%1<img size='9' shadow='0' shadow='0' image='A3\Ui_f\data\GUI\Cfg\Hints\TGuide\compass_ca.paa' />";
			displayName = "B01 Map and Compass";
			image = "\a3\ui_f\data\gui\cfg\hints\Miss_icon_ca.paa";
			logicalOrder = 11;
			tip = "";
		};
		class recon
		{
			arguments[] = {};
			description = "The goal of recon is to gather information about the enemy through the proper and skilled application of stealth and observation. Recon assets attempt to find out things like:%1%1%2%3Where the enemy is%4, along with what weapons they have, vehicle assets, their state of awareness, whether they have patrols in the area, etc.%1%2%3Where the enemy’s defenses are%4, what they consist of, where the weakest points are.%1%2%3What the terrain is like around the enemy location%4, with regards to the friendly mission. If the intent is to attack the enemy, this means locating good support-by-fire (SBF) positions, assault lanes, etc.%1<img size='9' shadow='0' image='A3\Ui_f\data\GUI\Cfg\Hints\TGuide\recon_ca.paa' />%1%1Good reconnaissance is the most reliable and effective way of finding the enemy. It's critical not only when attacking, but also while defending and in general “movement to contact” situations. The more you know about the enemy before the firefight starts, the more likely you will be able to maneuver and plan to fight in a way that will maximize your strengths and minimize their ability to resist.";
			displayName = "B09 Intro to Recon";
			image = "\a3\ui_f\data\gui\cfg\hints\Miss_icon_ca.paa";
			logicalOrder = 19;
			tip = "";
		};
		class smoke
		{
			arguments[] = {};
			description = "The proper integration of smoke into a battle is critical to both offensive and defensive roles. Smoke is on-demand concealment that allows a force to mask their movements, deceive the enemy, mask the enemy’s observation or fire, or signal.%1%1The main roles of smoke are as follows:%1%1%2%3Screening movement.%4 Smoke can be used to reduce the effectiveness of enemy fire when movement across dangerous areas is required. The enemy tends to fire at any smoke that they suspect is being used to screen movement, but due to the reduced or nonexistent visibility it causes, their fire becomes significantly degraded.%1%2%3Masking the enemy’s fire or observation.%4 By putting smoke onto the enemy’s positions, particularly their bunkers, snipers, or other high-casualty-producing systems, their fire can be greatly degraded or even eliminated for a period of time.%1%2%3Deception.%4 When employed smartly, smoke can lead an enemy to believe that hostile forces are maneuvering through a given area even when they aren’t. This can cause the enemy to direct fires into the smokescreen, wasting ammo and potentially giving away positions to supporting friendly forces.%1%2%3Signaling.%4 Smoke can be used to signal to air as well as ground forces. For aircraft, it can be used to mark enemy targets, friendly locations, landing zones, et cetera. For ground forces, it can be used in limited-communication situations (such as no radios) to convey pre-arranged signals to distant forces (such as the seizure of an objective).";
			displayName = "C03 Integration of Smoke";
			image = "\a3\ui_f\data\gui\cfg\hints\Miss_icon_ca.paa";
			logicalOrder = 23;
			tip = "";
		};
		class snipers
		{
			arguments[] = {};
			description = "The basic things to keep in mind when dealing with snipers are as follows:%1%1%2%3Teamwork kills snipers.%4 Individuals do not. You will almost never be able to out-shoot a good sniper by yourself. Instead, work with your team to suppress the sniper (if feasible) and then flank them. If you cannot realistically flank, adapt your movement techniques to try to minimize the threat posed by him.%1%2%3If you peek, keep it short.%4 If you must look in the direction of the sniper and expose yourself, do so as carefully as possible. You should utilize leaning, and should only peek out for a very brief period of time - half a second to one second is fairly safe.%1%2%3Never peek from the same place twice.%4 If you have to peek, be unpredictable. Stand up and peek around a wall. Next time, crouch and peek. Peek around different corners. Don’t establish a pattern, and make full use of the stance adjustment system.%1%2%3Smoke if you’ve got it.%4 Proper application of smoke can give you just enough concealment to extricate yourself from a tough situation. Throw smoke in such a way that it conceals the way you’re intending to run, and not just the position you’re currently at.%1%2%3Use the crack/bang method to locate the sniper.%4 In this, you listen for the crack of the bullet passing, followed by the bang of the muzzle blast. The time interval between these two events gives you an idea of the range of the shooter - if it’s a long delay, the shooter is quite far away. If it’s a medium delay, they’re probably at normal sniping range - say, 500 meters or so. If it’s a short delay, they’re within that.";
			displayName = "C07 Dealing with Snipers";
			image = "\a3\ui_f\data\gui\cfg\hints\Miss_icon_ca.paa";
			logicalOrder = 27;
			tip = "";
		};
		class squad
		{
			arguments[] = {};
			description = "The squad leader has similar responsibilities to the fireteam leader, except instead of controlling individual soldiers, they control entire fireteams.%1<img size='9' shadow='0' image='A3\Ui_f\data\GUI\Cfg\Hints\TGuide\squad_ca.paa' />%3Squad leaders...%4%1%1%2%3Position themselves%4 so that they can best observe their fireteams, and exercise command and control over them. A squad leader who isn’t staying close to their fireteams is quickly rendered ineffective.%1%2%3Dictate squad formations%4, rules of engagement, and general combat posture, adapting to the situation at hand. The squad leader must be ever vigilant regarding the tactical situation.%1%2%3Maintain situational awareness%4 on the platoon’s disposition, as well as that of the enemy. Knowing where friendly forces are is critical to avoiding friendly fire incidents, and knowing where the enemy is gives the squad leader important information to use in making tactical decisions.%1%2%3Wield their fireteams%4 as their weapons by directing and controlling their fire, picking out and assigning key targets, and maneuvering the fireteams across the battlefield. A squad leader avoids becoming personally engaged in firefights when possible.%1%2%3Know how to consolidate%4 and reorganize teams when casualties occur. This includes using group management features in an expedient fashion, as well as consolidating communication channels when required.";
			displayName = "C01 Squad Leaders";
			image = "\a3\ui_f\data\gui\cfg\hints\Miss_icon_ca.paa";
			logicalOrder = 21;
			tip = "";
		};
		class stamina
		{
			arguments[] = {};
			description = "Arma 3 refines stamina into a more significant gameplay factor than in prior games. Dealing with fatigue is best done in a number of different ways. Here are some of them.%1%1%2%3Monitor your encumbrance.%4 You can see your current encumbrance level in the inventory screen, at the bottom of the window. Try to keep this such that there’s a comfortable gap between your current load and the maximum load.%1<img size='9' shadow='0' image='A3\Ui_f\data\GUI\Cfg\Hints\TGuide\inventory_ca.paa' />%1%2%3Take reasonable combat loads.%4 A basic fighting load should include around ten magazines, a rifle, first-aid kit, and some fragmentation grenades. This leaves you room to pack a bit extra as well without becoming unnecessarily overburdened.%1%2%3Sprinting everywhere is not the answer.%4 It is easy to fatigue yourself unnecessarily by trying to sustain a high pace of movement for too great a period of time. Move around at a jog or a walk, and reserve your energy for times when you will badly need it.%1%2%3Rest briefly at tactically appropriate times.%4 Take a moment to rest between significant moves, during long sustained tactical movements, or before moving across a danger area. Resting also gives you an opportunity to increase your situational awareness.%1%2%3Crew-served teams often carry heavier gear.%4 Heavy anti-tank team gunners, anti-air gunners, medium or heavy machinegun teams, and others fall into this category. When acting as one of these roles, you will need to pace yourself. Recognize that carrying hundreds of pounds of gear will slow you down.";
			displayName = "A06 Fatigue and Stamina";
			image = "\a3\ui_f\data\gui\cfg\hints\Miss_icon_ca.paa";
			logicalOrder = 6;
			tip = "";
		};
		class tacticaltease
		{
			arguments[] = {};
			description = "Welcome to the Tactical Guide. This section intends to teach you about the Tactics, Techniques and Procedures of combat. The topics were specifically picked to help you gain a tactical advantage in each stage of our episodic campaign.";
			displayName = "000 Tactical Guide Intro";
			image = "\a3\ui_f\data\gui\cfg\hints\Miss_icon_ca.paa";
			logicalOrder = 0;
			tip = "Please note that the following texts are just excerpts from full, 350 page long Arma 3 Tactical Guide written by Andrew „dslyecxi“ Gluck. This digital guide is available as part of Digital Deluxe Editions and also can be bought separately in our online shop in both %3<a href='https://store.bistudio.com/products/arma3-tactical-guide-pdf'>digital</a>%4 and %3<a href='https://store.bistudio.com/products/arma3-tactical-guide-printed'>printed</a>%4 version.";
		};
		class withdrawing
		{
			arguments[] = {};
			description = "Breaking contact is the means by which an element disengages from a confrontation with an enemy force in an orderly fashion. To execute a “Break Contact via Bounding Overwatch” drill, the following steps are taken:%1%1%3 1.)%4 The element leader announces his intent to break contact via bounding overwatch. He designates one or more elements as the “base of fire”. This element can be as small as a fireteam or may consist of multiple fireteams or squads when employed at the platoon level.%1%3 2.)%4 The base of fire element takes the best hasty position possible and begins laying down fire on the enemy. Oftentimes the base of fire element will be chosen based on already having a good position, making additional movement unnecessary.%1%3 3.)%4 While the base of fire element lays down sustained accurate fire on the enemy, other elements move via rushes to the rear. These elements pick spots of natural or artificial cover or concealment from which they can support the base of fire element when it pulls back. Smoke is deployed to conceal movement when available.%1%3 4.)%4 On the element leader’s command, or at their discretion, the base of fire displaces to the rear towards the supporting elements. These supporting elements begin sustained accurate firing on the enemy until the base of fire element has moved past them and established a new position.%1%3 5.)%4 This process is repeated as necessary until friendly forces have successfully disengaged from enemy contact.";
			displayName = "B07 Breaking Contact";
			image = "\a3\ui_f\data\gui\cfg\hints\Miss_icon_ca.paa";
			logicalOrder = 17;
			tip = "";
		};
	};
	class Hcommand
	{
		displayName = "High Command";
		logicalOrder = 18;
		class Hcwaypoints
		{
			arguments[] = {{{"switchCommand"}}};
			description = "Give units multiple waypoints:%1%2Switch to High command mode %11.%1%2Select the unit with %3[LMB]%4.%1%2Hold down %3[Left Ctrl]%4 while setting waypoints.%1%2Edit the waypoint properties. Click on it with %3[RMB]%4 and change group's formation or combat style.";
			displayName = "High Comm. Waypoints";
			image = "\a3\ui_f\data\gui\cfg\hints\Miss_icon_ca.paa";
			logicalOrder = 3;
			tip = "";
		};
		class HighCommand
		{
			arguments[] = {{{"switchCommand"}}};
			description = "High command enables commanding squads in the same way that squad command works for subordinates. If you are allowed to take the role of a high commander, switch to High command using %11.%1Units are represented by NATO markers that vary according to group type and size.%1You can assign command either in 3D view or on a map. The map offers more possibilities.";
			displayName = "High Command";
			image = "\a3\ui_f\data\gui\cfg\hints\Miss_icon_ca.paa";
			logicalOrder = 1;
			tip = "";
		};
		class UnitType
		{
			arguments[] = {};
			description = "In High Command, various unit types are indicated by an icon. The most common symbols are:%1<img size='1'  image='a3\UI_F\data\GUI\Cfg\Hints\icon_text\b_inf_ca.paa' /> – Infantry%1<img size='1'  image='a3\UI_F\data\GUI\Cfg\Hints\icon_text\b_armor_ca.paa' /> – Armor%1<img size='1'   image='a3\UI_F\data\GUI\Cfg\Hints\icon_text\b_motor_inf_ca.paa' /> – Motorized Infantry%1<img size='1' image='a3\UI_F\data\GUI\Cfg\Hints\icon_text\b_mech_inf_ca.paa' /> – Mechanized Infantry%1<img size='1'  image='a3\UI_F\data\GUI\Cfg\Hints\icon_text\b_UAV_ca.paa' /> – UAV%1<img size='1'  image='a3\UI_F\data\GUI\Cfg\Hints\icon_text\b_artillery_ca.paa' /> – Artillery%1<img size='1'  image='a3\UI_F\data\GUI\Cfg\Hints\icon_text\b_recon_ca.paa' /> – Recon%1<img size='1'  image='a3\UI_F\data\GUI\Cfg\Hints\icon_text\b_air_ca.paa' /> – Airplanes%1<img size='1'   image='a3\UI_F\data\GUI\Cfg\Hints\icon_text\b_plane_ca.paa' /> – Helicopters%1Marks are further labeled by size:%1<img size='1'  image='a3\UI_F\data\GUI\Cfg\Hints\icon_text\group_0_ca.paa' /> – Fireteam (2-4)%1<img size=1'  image='a3\UI_F\data\GUI\Cfg\Hints\icon_text\group_1_ca.paa' /> – Section (> 4)%1<img size='1'  image='a3\UI_F\data\GUI\Cfg\Hints\icon_text\group_2_ca.paa' /> – Squad (> 12)%1<img size='1'  image='a3\UI_F\data\GUI\Cfg\Hints\icon_text\group_3_ca.paa' /> – Platoon (> 25)%1<img size='1'  image='a3\UI_F\data\GUI\Cfg\Hints\icon_text\group_4_ca.paa' /> – Company (> 60)";
			displayName = "Group Type Markers";
			image = "\a3\ui_f\data\gui\cfg\hints\UnitType_ca.paa";
			logicalOrder = 2;
			tip = "";
		};
	};
	class Helicopters
	{
		displayName = "Helicopters";
		logicalOrder = 13;
		class AutoHover
		{
			arguments[] = {{{"AutoHover"}}};
			description = "Activating auto-hover will automatically stabilize your aircraft. Note that while auto-hover is active, the controls will have a reduced effect.%1%2Select %3Auto hover%4 from the action menu.%1%2Or quickly press %11 to activate it.";
			displayName = "Auto-hover";
			image = "\a3\ui_f\data\gui\cfg\hints\Use_ca.paa";
			logicalOrder = 2;
			tip = "";
		};
		class HeliAdvancedFlightModel
		{
			arguments[] = {};
			description = "An alternative Flight Dynamics Model is optionally available for all official helicopters. It provides a more authentic rotary-wing experience and offers precise control over helicopters.";
			displayName = "Advanced Flight Model";
			image = "\a3\ui_f\data\gui\cfg\hints\Miss_icon_ca.paa";
			logicalOrder = 1;
			tip = "The Advanced Flight Model can be toggled on or off at any time in the Game Options. You can also configure several simulation helpers there. Certain scenarios may force one or the other Flight Model for all players.";
		};
		class HeliAerialCombat
		{
			arguments[] = {};
			description = "There are several ways to avoid being hit by enemies:%1%1%2Higher altitudes give you an advantage over them%1%2Maintaining high speed will make it difficult for them to track you";
			displayName = "Aerial Combat";
			image = "\a3\ui_f\data\gui\cfg\hints\Miss_icon_ca.paa";
			logicalOrder = 3;
			tip = "";
		};
		class HeliAutorotation
		{
			arguments[] = {{{"HeliDown"}}, {{"HeliForward"}}, {{"HeliUp"}}};
			description = "Autorotation is a state of flight where the main rotor system of a helicopter turns only as a result of air moving up through the rotor, as with an auto gyro, rather than engine power driving the rotor. Thanks to this ability, a helicopter can land safely in the event of complete engine failure.%1%1When experiencing a loss of engine power, drop collective with %11. You can also pitch the nose down %12 to gain sufficient forward speed. Maintain a nominal RPM and glide until close to the ground. Raise the collective %13 before touchdown to reduce vertical speed and land safely.";
			displayName = "Autorotation";
			image = "\a3\Ui_f\data\GUI\Cfg\Hints\Heli_autorotation_ca.paa";
			logicalOrder = 15;
			tip = "";
			class HeliAutorotation_sub1
			{
				arguments[] = {{{"HeliDown"}}, {{"HeliForward"}}, {{"HeliUp"}}};
				description = "When experiencing a loss of engine power:%1%1%2Drop the collective %11%1%2Gain sufficient forward speed %12%1%2Maintain a nominal RPM and glide%1%2Before touchdown, raise the collective %13";
				displayName = "Autorotation";
				image = "\a3\Ui_f\data\GUI\Cfg\Hints\Heli_autorotation_ca.paa";
				tip = "To increase the RPM of the main rotor, pitch the nose above the horizon while keeping the collective lowered.";
			};
		};
		class HeliCockpitView
		{
			arguments[] = {{{"LookAround"}}, {{"LookDown"}}, {{"LookUp"}}, {{"LookCenter"}}};
			description = "The cockpit often restricts the view of the pilot, making it difficult to land safely.%1To improve the view from the cockpit, activate Freelook using %11. %1%2You can also look down using %12.%1%2Alternatively, you can look up using %13.%1%2To recenter your view, use %14.";
			displayName = "Cockpit View";
			image = "\a3\Ui_f\data\GUI\Cfg\Hints\Pheripheal_vision_ca.paa";
			logicalOrder = 5;
			tip = "";
		};
		class HeliCollective
		{
			arguments[] = {{{"HeliUp"}}, {{"HeliDown"}}};
			description = "The collective is used for changing the pitch angle of all the main rotor blades collectively. It controls the amount of thrust provided by the main rotor, increasing or decreasing the amount of lift and the amount of torque. This way the helicopter can ascend or descend.%1%1%2To ascend, raise the collective %11.%1%2Descend by lowering the collective %12.";
			displayName = "Collective Control";
			image = "\a3\Ui_f\data\GUI\Cfg\Hints\Heli_axes_lift_ca.paa";
			logicalOrder = 9;
			tip = "<img size='5' align='center' image = '\a3\Ui_f\data\GUI\Cfg\Hints\Heli_collective_ca.paa'/>%1";
			class HeliCollective_sub1
			{
				arguments[] = {{{"HeliUp"}}, {{"HeliDown"}}};
				description = "%2Hold %11 to raise the collective and gain altitude.%1%2Hold %12 to lower the collective and lose altitude.";
				displayName = "Collective - Altitude";
				image = "\a3\Ui_f\data\GUI\Cfg\Hints\Heli_axes_lift_ca.paa";
				tip = "<img size='5' align='center' image = '\a3\Ui_f\data\GUI\Cfg\Hints\Heli_control_lift_ca.paa'/>";
			};
			class HeliCollective_sub2
			{
				arguments[] = {{{"HeliForward"}}, {{"HeliUp"}}};
				description = "To move forward without losing altitude, %1%2pitch the nose down %11 and %1%2raise the collective %12.";
				displayName = "Collective - Flight";
				image = "\a3\Ui_f\data\GUI\Cfg\Hints\Heli_axes_lift_ca.paa";
				tip = "<img size='5' align='center' image = '\a3\Ui_f\data\GUI\Cfg\Hints\Heli_control_pitch_ca.paa'/> <img size='5' align='center' image = '\a3\Ui_f\data\GUI\Cfg\Hints\Heli_control_lift_ca.paa'/>";
			};
		};
		class HeliGroundEffect
		{
			arguments[] = {{{"AutoHover"}}, "format [""<img size='5' align='center' image = '\a3\Ui_f\data\GUI\Cfg\Hints\Heli_ground_effect_ca.paa'/>""]"};
			description = "While hovering your helicopter near the ground (within 1/2 the diameter of the rotor), it will be influenced by ground effect. Ground effect is due to interference of the surface with the airflow pattern of the rotor. The aerodynamics change, requiring the pilot to compensate.";
			displayName = "Ground Effect";
			image = "\a3\Ui_f\data\GUI\Cfg\Hints\Heli_ground_effect2_ca.paa";
			logicalOrder = 10;
			tip = "Normal airflow pattern%1%1%12%1%1For better handling use %3Autohover%4 %11";
			class HeliGroundEffect_sub1
			{
				arguments[] = {{{"AutoHover"}}};
				description = "Use Autohover %11 to make the helicopter hover on its own.";
				displayName = "Ground Effect - Hover";
				image = "\a3\Ui_f\data\GUI\Cfg\Hints\Heli_ground_effect2_ca.paa";
				tip = "";
			};
		};
		class HeliPitch
		{
			arguments[] = {{{"HeliForward"}}, {{"HeliBack"}}};
			description = "The cyclic is used to change the pitch of the main rotor blades as they cycle around. This controls the main rotor's direction of thrust, allowing the helicopter to move forwards, backwards or sideways. Note that it will also have an effect on the helicopter's altitude.%1%1%2To pitch down, push the cyclic forwards %11.%1%2To pitch up, pull the cyclic backwards %12.";
			displayName = "Cyclic Control";
			image = "\a3\Ui_f\data\GUI\Cfg\Hints\Pheripheal_vision_ca.paa";
			logicalOrder = 6;
			tip = "%13%1The more cyclic you apply, the more the helicopter will move.";
			class HeliPitch_sub1
			{
				arguments[] = {{{"HeliForward"}}, {{"HeliBack"}}};
				description = "%2To increase your speed use %11.%1%2To decrease your speed use %12.";
				displayName = "Cyclic - Speed";
				image = "\a3\Ui_f\data\GUI\Cfg\Hints\Heli_axes_pitch_ca.paa";
				tip = "<img size='5' align='center' image = '\a3\Ui_f\data\GUI\Cfg\Hints\Heli_control_pitch_ca.paa'/>";
			};
			class HeliPitch_sub2
			{
				arguments[] = {{{"AutoHover"}}};
				description = "To easily enter a hover, %1use the %3Autohover%4 function %11.";
				displayName = "Cyclic - Autohover";
				image = "\a3\Ui_f\data\GUI\Cfg\Hints\Heli_axes_pitch_ca.paa";
				tip = "";
			};
			class HeliPitch_sub3
			{
				arguments[] = {{{"HeliForward"}}, {{"HeliBack"}}, {{"AutoHover"}}, "format [""<img size='5' align='center' image = '\a3\Ui_f\data\GUI\Cfg\Hints\Heli_control_pitch_ca.paa'/>""]"};
				description = "Use the cyclic to slow the helicopter down during forward flight.%1%1%2Pitch the nose up %12 or %1%2down %11 as required.";
				displayName = "Cyclic - Slowdown";
				image = "\a3\Ui_f\data\GUI\Cfg\Hints\Heli_axes_pitch_ca.paa";
				tip = "%14%1To easily enter a hover, %1use the %3Autohover%4 function %13.";
			};
			class HeliPitch_sub4
			{
				arguments[] = {{{"HeliForward"}}, {{"HeliDown"}}};
				description = "To transition the helicopter into a hover while moving forward, %1%2pitch the nose up %11%1%2 and lower the collective %12%1simultaneously to prevent the helicopter from gaining altitude.";
				displayName = "Cyclic - Hover";
				image = "\a3\Ui_f\data\GUI\Cfg\Hints\Heli_axes_pitch_ca.paa";
				tip = "<img size='5' align='center' image = '\a3\Ui_f\data\GUI\Cfg\Hints\Heli_control_pitch_ca.paa'/> <img size='5' align='center' image = '\a3\Ui_f\data\GUI\Cfg\Hints\Heli_control_lift_ca.paa'/>";
			};
		};
		class HeliRoll
		{
			arguments[] = {{{"HeliCyclicLeft"}}, {{"HeliCyclicRight"}}};
			description = "With the helicopter in a hover, moving the cyclic left or right will cause helicopter to slip sideways. If the helicopter flies at higher speeds it will roll, turning to the left or the right (similar to the behavior of fixed wing aircraft).%1%1%2To roll to the left, push the cyclic left %11.%1%2To roll to the right, push the cyclic right %12.";
			displayName = "Cyclic - Rolling";
			image = "\a3\Ui_f\data\GUI\Cfg\Hints\Heli_axes_roll_ca.paa";
			logicalOrder = 7;
			tip = "<img size='5' align='center' image = '\a3\Ui_f\data\GUI\Cfg\Hints\Heli_cyclic_ca.paa'/>";
			class HeliRoll_sub1
			{
				arguments[] = {{{"HeliCyclicLeft"}}, {{"HeliCyclicRight"}}};
				description = "To move in a strafing fashion, keep the helicopter stationary and %1%2roll left with %11%1%2or roll right with %12.";
				displayName = "Cyclic - Strafing";
				image = "\a3\Ui_f\data\GUI\Cfg\Hints\Heli_axes_roll_ca.paa";
				tip = "<img size='5' align='center' image = '\a3\Ui_f\data\GUI\Cfg\Hints\Heli_control_roll_ca.paa'/>";
			};
			class HeliRoll_sub2
			{
				arguments[] = {{{"HeliCyclicLeft"}}, {{"HeliCyclicRight"}}};
				description = "%2To turn left while at cruising speed, use %11.%1%2To turn right, use %12.";
				displayName = "Cyclic - Turning";
				image = "\a3\Ui_f\data\GUI\Cfg\Hints\Heli_axes_roll_ca.paa";
				tip = "<img size='5' align='center' image = '\a3\Ui_f\data\GUI\Cfg\Hints\Heli_control_roll_ca.paa'/>";
			};
			class HeliRoll_sub3
			{
				arguments[] = {{{"HeliBack"}}};
				description = "To make a sharper turn, pitch the nose up %11 while turning left or right. Keep an eye on your speed!";
				displayName = "Cyclic - Sharp Turns";
				image = "\a3\Ui_f\data\GUI\Cfg\Hints\Heli_axes_roll_ca.paa";
				tip = "<img size='5' align='center' image = '\a3\Ui_f\data\GUI\Cfg\Hints\Heli_control_pitch_ca.paa'/>";
			};
		};
		class HeliStressDamage
		{
			arguments[] = {{{"HeliDown"}}};
			description = "The Advanced flight model calculates both the force on the rotors (drag) and the transmission (torque). The pilot can exceed construction limits and break each component. Those limits can be turned off in the game difficulty settings, but forces on rotors will still be simulated and may result in the loss of main rotor RPM. This will cause the helicopter to stall. The pilot must lower the collective %11 in order to recover.";
			displayName = "Stress Damage";
			image = "\a3\Ui_f\data\GUI\Cfg\Hints\Heli_stressdamage_ca.paa";
			logicalOrder = 14;
			tip = "";
		};
		class HeliTailLoss
		{
			arguments[] = {};
			description = "Helicopters equipped with a tail rotor can suffer from losing tail anti-tourque authority. In such instances, attempt to land while maintaining sufficient forward speed.";
			displayName = "Loss of Tail Rotor";
			image = "\a3\Ui_f\data\GUI\Cfg\Hints\Heli_tail_rotor_ca.paa";
			logicalOrder = 16;
			tip = "";
		};
		class HeliTranslationalLift
		{
			arguments[] = {};
			description = "As a helicopter moves from hover to forward flight, it enters a state called translational lift. The horizontal flow of air across the main rotor improves its efficiency, which provides extra lift without increasing power.";
			displayName = "Translational Lift";
			image = "\a3\Ui_f\data\GUI\Cfg\Hints\Heli_translational_lift_ca.paa";
			logicalOrder = 11;
			tip = "As a result, the helicopter requires less power to keep itself in the air. Lower the collective if you need to maintain the same altitude.%1";
		};
		class HeliTrim
		{
			arguments[] = {{{"HelicopterTrimOn"}}};
			description = "%1The Advanced flight model allows you to trim the controls.%1The so-called Auto-trim feature is a game difficulty option that handles anti-torque pedal input.%1Enabling Manual Trim allows control over the center position offset (incl. pedals). When you have established your new desired flight attitude, you can disable Manual Trim %11 and return controls to neutral position. There are other keys that can be used to adjust each controller offset gradually.";
			displayName = "Trim";
			image = "\a3\Ui_f\data\GUI\Cfg\Hints\Heli_tail_rotor_ca.paa";
			logicalOrder = 13;
			tip = "";
		};
		class HeliVelocityVector
		{
			arguments[] = {};
			description = "To better predict the movement of the helicopter, make use of the HUD's %3Velocity Vector indicator%4 visible from the cockpit. %1%2The indicator tells you where the helicopter is actually moving. %3Try to line it up with your destination.%4";
			displayName = "Velocity Vector";
			image = "\a3\Ui_f\data\GUI\Cfg\Hints\VelocityVector_ca.paa";
			logicalOrder = 4;
			tip = "Align the indicator with the helipad you intend to land at.";
		};
		class HeliVortexRing
		{
			arguments[] = {};
			description = "The Advanced flight model simulates what is known as the Vortex Ring State. Also known as Settling with Power, it is a dangerous phenomenon. Essentially, the helicopter descends into its own downwash. The pilot experiences an increasing sink rate that cannot be stopped by the collective.%1%1In tandem-rotor helicopters, recovery is accomplished through lateral cyclic or pedal input. The aircraft will fly into 'clean air', and will be able to regain lift.";
			displayName = "Vortex Ring State";
			image = "\a3\ui_f\data\gui\cfg\hints\Miss_icon_ca.paa";
			logicalOrder = 12;
			tip = "%1In single rotor helicopters, the Vortex Ring State can be corrected by moving the cyclic control forward, which controls the pitch angle of the rotor blade, slightly pitching nose down, and establishing forward flight.";
		};
		class HeliYaw
		{
			arguments[] = {{{"HeliRudderLeft"}}, {{"HeliRudderRight"}}, "format [""<img size='5' align='center' image = '\a3\Ui_f\data\GUI\Cfg\Hints\Heli_tail_rotor_ca.paa'/>""]"};
			description = "Turning at lower speeds is done via pedal input. Helicopters with one main rotor use pedals to change the thrust produced by the tail rotor, in order to compensate for the amount of torque being produced by the main rotor.%1%1%2To yaw to the left, use %11.%1%2To yaw right, use %12.";
			displayName = "Torque - Yawing";
			image = "\a3\Ui_f\data\GUI\Cfg\Hints\Heli_axes_yaw_ca.paa";
			logicalOrder = 8;
			tip = "As the forward speed of the helicopter increases, pedals become less effective.%1%1%13";
			class HeliYaw_sub1
			{
				arguments[] = {{{"HeliRudderLeft"}}, {{"HeliRudderRight"}}};
				description = "If the helicopter is hovering or traveling at low speeds, %1%2use %11 to rotate to the left and%1%2%12 to rotate right.";
				displayName = "Torque - Rotating";
				image = "\a3\Ui_f\data\GUI\Cfg\Hints\Heli_axes_yaw_ca.paa";
				tip = "<img size='5' align='center' image = '\a3\Ui_f\data\GUI\Cfg\Hints\Heli_control_yaw_ca.paa'/>";
			};
			class HeliYaw_sub2
			{
				arguments[] = {{{"HeliCyclicLeft"}}, {{"HeliCyclicRight"}}};
				description = "While at cruising speed, yawing will be less effective. To turn the helicopter left and right, use %11 and %12, respectively.";
				displayName = "Torque - Cruising Speed";
				image = "\a3\Ui_f\data\GUI\Cfg\Hints\Heli_axes_yaw_ca.paa";
				tip = "<img size='5' align='center' image = '\a3\Ui_f\data\GUI\Cfg\Hints\Heli_control_roll_ca.paa'/>";
			};
		};
	};
	class InfantryMovement
	{
		displayName = "Infantry Controls";
		logicalOrder = 7;
		class Adjust
		{
			arguments[] = {{{"AdjustUp"}}, {{"AdjustDown"}}, {{"AdjustLeft"}}, {{"AdjustRight"}}};
			description = "Adjust your stance by pressing:%1%2%11, %12 for rise or crouch.%1%2%13, %14 for half-step sideways.%1This will help you to stay in cover more effectively or shoot over obstacles more easily. Adjust works in all stances.";
			displayName = "Adjust Pose";
			image = "\a3\ui_f\data\gui\cfg\hints\Adjust_ca.paa";
			logicalOrder = 6;
			tip = "";
		};
		class BasicDive
		{
			arguments[] = {{{"MoveForward"}}, {{"SwimUp"}}, {{"SwimDown"}}, {{"MoveForward"}}, {{"MoveBack"}}, {{"TurnLeft"}}, {{"TurnRight"}}};
			description = "%1%2Aim down and move forward %11 to dive.%1%2Ascend with %12.%1%2Descend with %13.%1%2Move with %14, %15, %16, %17.";
			displayName = "Diving";
			image = "\a3\ui_f\data\gui\cfg\hints\BasicDive_ca.paa";
			logicalOrder = 10;
			tip = "Equip a re-breather to a vest slot to supply oxygen for longer dives. For clear vision underwater, equip diving goggles to the goggles slot.";
		};
		class BasicLean
		{
			arguments[] = {{{"LeanLeft"}}, {{"LeanRight"}}, {{"LeanLeftToggle"}}, {{"LeanRightToggle"}}, {{"MoveDown"}}};
			description = "Lean to peak around corners and still have most of your body hidden behind cover.%1%2Lean left: %11.%1%2Lean right: %12.%1You can also lock the character into a leaning position by pressing %13 for left or %14 for right side.";
			displayName = "Leaning Sideways";
			image = "\a3\ui_f\data\gui\cfg\hints\BasicLean_ca.paa";
			logicalOrder = 7;
			tip = "Use the lean keys to roll while in the prone position. Try it: %15, %11, %12.";
		};
		class BasicLook
		{
			arguments[] = {{{"LookAround"}}, {{"LookAroundToggle"}}};
			description = "Free look enables you to move while keeping awareness of your surroundings.%1%2Hold %11 and move the mouse left and right to look around.%1%2Tap %12 to toggle between static and free look.";
			displayName = "Free Look";
			image = "\a3\ui_f\data\gui\cfg\hints\BasicLook_ca.paa";
			logicalOrder = 9;
			tip = "Free look represents turning the head sideways and up or down. That's why you cannot look directly behind you. This works the same for vehicles – usually only a commander has a 360° view.";
		};
		class BasicMove
		{
			arguments[] = {{{"MoveForward"}}, {{"MoveBack"}}, {{"TurnLeft"}}, {{"TurnRight"}}};
			description = "Use basic controls %11, %12, %13, %14 to move around and explore the surroundings. Use the mouse to rotate and adjust the direction.";
			displayName = "Movement";
			image = "\a3\ui_f\data\gui\cfg\hints\BasicMove_ca.paa";
			logicalOrder = 1;
			tip = "";
		};
		class BasicSpeed
		{
			arguments[] = {{{"turbo"}}, {{"MoveUp"}}, {{"MoveDown"}}};
			description = "Press %11 to sprint away from danger or towards cover. Sprinting, however, decreases your aim precision and drains your stamina significantly faster than normal movement.";
			displayName = "Sprint";
			image = "\a3\ui_f\data\gui\cfg\hints\BasicSpeed_ca.paa";
			logicalOrder = 2;
			tip = "Sprint works in all stances, try using it while crouched %12 or prone %13.";
		};
		class BasicStances
		{
			arguments[] = {{{"MoveUp"}}, {{"MoveDown"}}};
			description = "To decrease the enemy's chances of detecting and hitting you, use different stances:%1%2Crouch with %11.%1%2Go prone with %12.%1Crouching and going prone also stabilizes your aim. To stand, simply press the Crouch/Go Prone button again.";
			displayName = "Stances";
			image = "\a3\ui_f\data\gui\cfg\hints\BasicStances_ca.paa";
			logicalOrder = 5;
			tip = "When prone, you cannot use launchers.";
		};
		class BasicWalk
		{
			arguments[] = {{{"walkRunToggle"}}, {{"TactToggle"}}};
			description = "Default movement speed is run.%1%2Press %12 to move more slowly and silently in a combat pace.%1%2Press %11 to walk.";
			displayName = "Walk";
			image = "\a3\ui_f\data\gui\cfg\hints\BasicWalk_ca.paa";
			logicalOrder = 3;
			tip = "Tactical pace is best for moving slowly while maintaining a steady aim.";
		};
		class CombatPace
		{
			arguments[] = {{{"TactToggle"}}, {{"toggleRaiseWeapon"}}};
			description = "Combat pace is a move stance with weapon raised permanently to the shoulder. It trades movement speed for situational awareness and faster reaction time. This is particularly useful in urban areas. Use %11 to toggle combat pace on and off.";
			displayName = "Combat Pace";
			image = "\a3\ui_f\data\gui\cfg\hints\Miss_icon_ca.paa";
			logicalOrder = 4;
			tip = "Combat pace and lowered weapon stance are two independent body poses. Try switching to combat pace %11, lowering your weapon %12 and raising it back %12. You will return to combat pace.";
		};
		class Death
		{
			arguments[] = {};
			description = "You are dead. There is nothing you can do besides restarting the mission from a save point or from the beginning. Better luck next time.";
			displayName = "Death";
			image = "\a3\ui_f\data\gui\cfg\hints\Death_ca.paa";
			logicalOrder = 11;
			tip = "In multiplayer you will be able to see who killed you.";
		};
		class Limping
		{
			arguments[] = {};
			description = "Once damage to your legs becomes significant enough, you'll start limping.%1%2Use your %3First Aid Kit%4 or call a friendly Combat Life Saver to treat your wounds with a %3Medikit%4.";
			displayName = "Limping";
			image = "\a3\ui_f\data\gui\cfg\hints\Stamina_Injury_ca.paa";
			tip = "If you don't have any medical supplies, search any crates, vehicles or even fallen comrades within your vicinity.";
		};
		class OverEncumbrance
		{
			arguments[] = {};
			description = "You will be forced to walk if you let yourself become over-encumbered.%1%2Assess your situation and drop any non-essential equipment in order to attain at least a basic level of mobility.";
			displayName = "Over-encumbrance";
			image = "\a3\ui_f\data\gui\cfg\hints\Stamina_OverEncumbrance_CA.paa";
			tip = "Depending on the situation, you can also:%1%2Drop equipment you don't need and retrieve it later.%1%2Use vehicles to transport additional equipment.%1%2Share equipment with your team-mates.";
		};
		class Stamina
		{
			arguments[] = {};
			description = "Stamina is one of the important factors pertaining to your combat effectiveness as it affects both your mobility and aim precision. The amount of stamina available to you at any given time is dependent on the weight of your equipment - the more items you carry, the less stamina you'll have.%1%2All exhaustive movements and actions will deplete your stamina at a certain rate, while it will only recuperate when resting or moving at a slow speed.%1%2Your aim precision will decrease over time when moving, therefore it's advisable to take short breaks to get it under control.";
			displayName = "Stamina";
			image = "\a3\ui_f\data\gui\cfg\hints\Stamina_ca.paa";
			tip = "";
		};
		class SteppingOver
		{
			arguments[] = {{{"getOver"}}};
			description = "When passing a low obstacle, step over it with %11 to shorten your route.";
			displayName = "Stepping Over";
			image = "\a3\ui_f\data\gui\cfg\hints\SteppingOver_ca.paa";
			logicalOrder = 8;
			tip = "";
		};
	};
	class InternationalHumanitarianLaw
	{
		category = "LOAC";
		displayName = "International Humanitarian Law";
		logicalOrder = 1;
		class Definitions
		{
			arguments[] = {};
			description = "%2 <t %5>Combatant</t>: members of armed forces, members of any armed group under the orders of a party to a conflict%1%2 <t %5>Hors de combat</t>: ""out of fight"" - combatants who have been captured or wounded or who are sick or shipwrecked and thus no longer in a position to fight%1%2 <t %5>Civilian</t>: any person who is not a combatant%1%2 <t %5>Armed conflict</t>: fighting between countries (international) or between a country's armed forces and armed groups (non-international) or between such groups%1%2 <t %5>Military objective</t>: an object that by its nature, location, purpose or use makes an effective contribution to military action and whose destruction offers a definite military advantage%1%2 <t %5>Non-reciprocity</t>: breaches of IHL by one party to a conflict do not justify breaches by other parties%1%2 <t %5>Equality</t>: IHL applies to all parties of an armed conflict equally";
			displayName = "Definitions";
			image = "\a3\UI_F_Orange\Data\CfgHints\loac_ca.paa";
			logicalOrder = 10;
		};
		class Distinction
		{
			arguments[] = {};
			description = "Military operations should only be carried out against <t %5>combatants</t> and <t %5>military targets</t>.%1%1Those who are fighting must <t %5>distinguish</t> themselves from those who are not.%1%1Weapons that cannot distinguish between civilians and military targets are forbidden.";
			displayName = "Distinction";
			image = "\a3\UI_F_Orange\Data\CfgHints\loac_ca.paa";
			logicalOrder = 3;
			tip = "Huge quantities of explosive remnants of war, such as mines and cluster bomblets, are still scattered across historical conflict zones to this day.";
		};
		class Humanity
		{
			arguments[] = {};
			description = "Civilians and wounded, sick, captured or surrendering combatants must be <t %5>treated humanely</t>.%1%1There are <t %5>limits on the means and methods of war</t> to avoid unnecessary suffering.";
			displayName = "Humanity";
			image = "\a3\UI_F_Orange\Data\CfgHints\loac_ca.paa";
			logicalOrder = 2;
			tip = "A humanitarian act is an act carried out to protect someone whose life or human dignity is in danger, especially someone whom one would not ordinarily be inclined to help or protect. Such acts are likely to involve personal or material risk.";
		};
		class LimitsObligations
		{
			arguments[] = {};
			description = "Those who are fighting must <t %5>distinguish</t> themselves from those who are not.%1%1Attacks must be <t %5>limited to military objectives</t>.%1%1During an attack, every <t %5>precaution</t> must be taken to minimize potential harm to civilians and civilian objects.";
			displayName = "Limitation - Obligations";
			image = "\a3\UI_F_Orange\Data\CfgHints\loac_ca.paa";
			logicalOrder = 9;
			tip = "Minimize collateral damage!";
		};
		class LimitsProhibitions
		{
			arguments[] = {};
			description = "It is <t %5>forbidden</t> to:%1%2 use weapons that cause unnecessary suffering (such as poison, blinding laser weapons or nuclear weapons)%1%2 use weapons that cannot distinguish between civilians and military targets (such as landmines)%1%2 take hostages%1%2 pretend to be a civilian while attempting to kill, injure or capture an adversary%1%2 order or threaten that there shall be no survivors";
			displayName = "Limitation - Prohibitions";
			image = "\a3\UI_F_Orange\Data\CfgHints\loac_ca.paa";
			logicalOrder = 8;
			tip = "Do not target civilians!";
		};
		class MoreInfo
		{
			arguments[] = {"""https://www.arma3.com/ihl"""};
			description = "International Humanitarian Law is a complex topic that evolves alongside the nature of armed conflict. Please visit <a href='%11'>this web page</a> for more information and links to relevant sources.";
			displayName = "More Info";
			image = "\a3\UI_F_Orange\Data\CfgHints\loac_ca.paa";
			logicalOrder = 12;
			tip = "The in-game descriptions of IHL do not cover all details and complexities of the topic; they are merely an introduction. Please refer to other sources for a more comprehensive overview.";
		};
		class Overview
		{
			arguments[] = {{"STR_A3_Orange_CfgHints_IHL_Overview_arg11"}};
			description = "%11%1%1IHL strikes a balance between the principle of <t %5>humanity</t> and <t %5>military necessity</t>.%1%1Key aspects include the <t %5>principles</t> of:%1%2 Humanity%1%2 Distinction%1%2 Precaution%1%2 Proportionality";
			displayName = "Overview";
			image = "\a3\UI_F_Orange\Data\CfgHints\loac_ca.paa";
			logicalOrder = 1;
			tip = "IHL is often also referred to as rules of war, laws of war, or laws of armed conflict (LOAC).";
			class Hint
			{
				arguments[] = {{"STR_A3_Orange_CfgHints_IHL_Overview_arg11"}};
				description = "%11";
				displayName = "International Humanitarian Law";
				image = "\a3\UI_F_Orange\Data\CfgHints\loac_ca.paa";
				tip = "IHL is often also referred to as rules of war, laws of war, or laws of armed conflict (LOAC).";
			};
		};
		class Precaution
		{
			arguments[] = {};
			description = "All feasible measures should be taken to <t %5>avoid collateral damage</t>.%1%1This may include determining:%1%2 <t %5>When</t> to strike a target%1%2 <t %5>Where</t> to strike a target%1%2 <t %5>What</t> weapon systems to use against a target";
			displayName = "Precaution";
			image = "\a3\UI_F_Orange\Data\CfgHints\loac_ca.paa";
			logicalOrder = 4;
			tip = "Precaution applies not only during planning stages, but all the way up to the moment of an attack and even after it has commenced.";
		};
		class Proportionality
		{
			arguments[] = {};
			description = "When collateral damage cannot be fully avoided, the expected number of deaths or injuries to civilians or damage to civilian objects must <t %5>not be excessive</t> compared to the anticipated military advantage. The advantage has to be <t %5>concrete</t> and cannot be ""winning the war"" for example.";
			displayName = "Proportionality";
			image = "\a3\UI_F_Orange\Data\CfgHints\loac_ca.paa";
			logicalOrder = 5;
			tip = "A target must still be military (legitimate)!";
		};
		class ProtectionObligations
		{
			arguments[] = {};
			description = "<t %5>Captured civilians and enemy combatants</t>:%1%2must be given adequate food, water, clothing, shelter and medical care%1%2must be allowed to have contact with their families%1%1<t %5>Children and women</t> must be detained separately from men, to the extent feasible.%1%1<t %5>Enemy combatants</t> who are wounded, sick, shipwrecked, or surrendering:%1%2 must be searched for, collected and cared for%1%2 must not receive preferential treatment, except on medical grounds%1%1A <t %5>surrendering enemy</t> must not be wounded or killed.%1%1The specific protection, health and assistance needs of <t %5>women affected by armed conflict</t> must be respected.%1%1Everyone is entitled to a <t %5>fair trial</t>.";
			displayName = "Protection - Obligations";
			image = "\a3\UI_F_Orange\Data\CfgHints\loac_ca.paa";
			logicalOrder = 7;
			tip = "Respect human dignity!";
		};
		class ProtectionProhibitions
		{
			arguments[] = {};
			description = "It is <t %5>forbidden</t> to:%1%2 attack civilians and civilian objects (houses, schools, places of worship, cultural or historic monuments, etc.)%1%2 commit murder or torture%1%2 commit acts of sexual violence%1%2 forcibly displace and starve civilians%1%2 attack hospitals, ambulances and health-care workers%1%2 use human shields%1%2 destroy stocks of food, farming areas, and the water supply%1%2 recruit or use children under the age of 15 in armed conflict%1%2 misuse the Red Crystal, Red Cross and Red Crescent%1%2 interfere with the delivery of humanitarian aid%1%2 damage the environment";
			displayName = "Protection - Prohibitions";
			image = "\a3\UI_F_Orange\Data\CfgHints\loac_ca.paa";
			logicalOrder = 6;
			tip = "When civilians take a direct part in fighting, they lose their protection from attack (when in doubt, they should be considered civilian). When a civilian object is used in support of military action, it becomes a legitimate military target and loses its protection (when in doubt, it should be considered civilian). Protect the most vulnerable: civilians, wounded and sick, detainees, and health-care workers (such as IDAP)!";
		};
		class TreatiesProtocols
		{
			arguments[] = {};
			description = "The <t %5>legal framework</t> for IHL is defined in a set of <t %5>treaties</t> and <t %5>protocols</t>, more of which are being drafted to this day. While some have been ratified universally, others are still not observed by major nation states.%1%1Relevant examples include:%1%2<t %5>Geneva Conventions</t> - the best known and most widely adopted treaties, focuses on humanitarian treatment in war%1%2<t %5>Ottawa Treaty</t> - seeks to ban the use of all anti-personnel mines%1%2<t %5>Convention on Cluster Munitions</t> - prohibits the use of submunition-based weapons%1%2<t %5>Convention on Certain Conventional Weapons</t> - restricts the use of conventional weapons which are indiscriminate or cause excessive injuries";
			displayName = "Treaties and Protocols";
			image = "\a3\UI_F_Orange\Data\CfgHints\loac_ca.paa";
			logicalOrder = 11;
			tip = "IHL can also be referred to as jus in bello - the law which regulates the conduct of war. Serious violations are called war crimes. States must establish laws to try and punish those who commit grave breaches of IHL. Military commanders should instruct IHL and report violations. The rules seem straightforward, but the application of IHL to real-life situations of conflict often creates dilemmas.";
		};
	};
	class Learn
	{
		category = "Product";
		displayName = "Bootcamp Update";
		logicalOrder = 20;
		class Arsenal
		{
			arguments[] = {};
			description = "<img size='9' shadow='0' image='A3\Data_F_Bootcamp\Data\FM_LEARN_Bootcamp5_ca.paa' />%1Virtual Arsenal is a %3character, equipment and weapon viewer%4. It enables players to cycle through and %3try out in-game assets, configure custom settings%4 - such as identity types and insignia - and %3export loadouts%4 to script or use in Zeus scenarios.";
			displayName = "Virtual Arsenal";
			image = "\a3\ui_f\data\gui\cfg\hints\Commanding_ca.paa";
			tip = "";
		};
		class Bootcamp
		{
			arguments[] = {};
			description = "<img size='9' shadow='0' image='A3\Data_F_Bootcamp\Data\FM_LEARN_Bootcamp1_ca.paa' />%1The singleplayer 'Bootcamp' mode is the best place to get started with Arma 3! Introducing the basic principles of infantry combat - %3actions%4, %3navigation%4, and %3weapon handling%4 - a short prologue campaign challenges new players to complete real objectives.";
			displayName = "Bootcamp";
			image = "\a3\ui_f\data\gui\cfg\hints\Commanding_ca.paa";
			tip = "";
		};
		class BootcampUpdate
		{
			arguments[] = {};
			description = "Bootcamp Update introduces a number of new components that help new and veteran players discover more about Arma 3.%1The goal is to provide a wide variety of ways to learn about the game. Bootcamp Update includes:%1%2Bootcamp - a singleplayer tutorial campaign.%1%2VR Training - a set of focused tutorial missions.%1%2MP Bootcamp - a Zeus-based multiplayer mode.%1%2Virtual Arsenal - a weapon and character browser.%1%2Community Guides - links to our official Community Guide series.%1%2Find out more information about each component in their respective Field Manual hints.";
			displayName = "Bootcamp Update";
			image = "\a3\ui_f\data\gui\cfg\hints\Commanding_ca.paa";
			tip = "";
		};
		class CommunityGuides
		{
			arguments[] = {};
			description = "<img size='9' shadow='0' image='A3\Data_F_Bootcamp\Data\FM_LEARN_Bootcamp2_ca.paa' />%1The 'Community Guides' menu %3links out to a series of videos%4 created in collaboration with Dslyecxi, leader of the Arma community group Shack Tactical.%1These guides introduce both new and old players alike to the %3wealth of possibilities%4 that Arma 3 brings to the table, as well as familiarize them with the %3basic tactical concepts needed to survive%4.";
			displayName = "Community Guides";
			image = "\a3\ui_f\data\gui\cfg\hints\Commanding_ca.paa";
			tip = "";
		};
		class FManual
		{
			arguments[] = {};
			description = "<img size='9' shadow='0' image='A3\Data_F_Bootcamp\Data\FM_LEARN_Bootcamp3_ca.paa' />%1Accessible from the Main Menu and %3Pause Menu%4 (when playing a scenario), the Field Manual contains useful tips on %3how to control and interact%4 with various aspects of Arma 3.";
			displayName = "Field Manual";
			image = "\a3\ui_f\data\gui\cfg\hints\Commanding_ca.paa";
			tip = "";
		};
		class MPBootcamp
		{
			arguments[] = {};
			description = "<img size='9' shadow='0' image='A3\Data_F_Bootcamp\Data\FM_LEARN_Bootcamp4_ca.paa' />%1Multiplayer Bootcamp is a great way for %3veteran players to help newbies adapt%4 to Arma 3! Offering a structured set of challenges for both trainees and instructors, MP Bootcamp uses the %3Zeus%4 framework to give players the tools they need to create a %3tutorial gameplay on-the-fly%4.";
			displayName = "MP Bootcamp";
			image = "\a3\ui_f\data\gui\cfg\hints\Commanding_ca.paa";
			tip = "To launch the scenario, join an 'MP Bootcamp' server online, or create a new one for you and your friends.";
		};
		class VRTraining
		{
			arguments[] = {};
			description = "<img size='9' shadow='0' image='A3\Data_F_Bootcamp\Data\FM_LEARN_Bootcamp6_ca.paa' />%1VR Training enables players to learn about basic game mechanics within the confines of a %3virtual world%4. A variety of training topics focus upon individual gameplay elements, where players are guided to complete simple objectives with the support of %3contextual hints and tips%4.";
			displayName = "VR Training";
			image = "\a3\ui_f\data\gui\cfg\hints\Commanding_ca.paa";
			tip = "";
		};
	};
	class MaldenDLC
	{
		category = "Product";
		displayName = "Malden DLC";
		logicalOrder = 19;
		class CombatPatrol: Malden
		{
			description = "<img size='9' shadow='0' image='A3\Data_F_Argo\Images\argo_contentBrowserPicture_co.paa' /> %1A new, quick and dynamic cooperative multiplayer mode has been made available for all our vanilla terrains, including Malden 2035. Search an Area of Operations of your choosing, complete assigned objectives and ex-filtrate in one piece. You can accomplish your mission quietly or eliminate all hostiles in a coordinated shock assault; your team decides on the best approach. Be on your guard however, the mode randomizes several aspects for every attempt. Combat Patrol is a great starting point to experience authentic Arma gameplay together!";
			displayName = "Combat Patrol";
			logicalOrder = 3;
		};
		class Malden
		{
			arguments[] = {};
			description = "<img size='9' shadow='0' image='A3\Data_F_Argo\Images\AssetMaldenStructures_co.paa' /> %1Everyone is invited to celebrate the 16th Armaversary on a modern re-imagination of the classic Malden terrain. Dive into the authentic and dynamic Combat Patrol multiplayer mode and complete tactical objectives on all vanilla terrains. This DLC is free for all players as token of appreciation to the best community in the world. %1%1%3DLC CONTENTS%4 %1%2 Malden 2035 %1%2 New / refreshed structures and objects %1%2 Combat Patrol %1%2 Escape from Malden / Tanoa %1%2 Orchestral Theme Song %1<a href='http://malden.arma3.com/'>More about Arma 3 Malden</a>";
			displayName = "Malden Free DLC";
			image = "\A3\Data_F_Argo\Logos\arma3_argo_icon_hint_ca.paa";
			logicalOrder = 1;
		};
		class MaldenTerrain: Malden
		{
			description = "<img size='9' shadow='0' image='A3\Data_F_Argo\Images\AssetMaldenTerrain_co.paa' /> %1Visit the terrain where we first embarked on our journey of the Arma franchise. Malden 2035 is not just a one-to-one recreation of the classic Malden in Arma: Cold War Assault. It offers a fresh take on the surroundings we know and love, with new locations to find and explore, such as the Arma: Mobile Ops Base or Radio Tower. While Malden re-uses many vanilla Arma 3 structures, vegetation, and similar assets, we have also made some splendid additions such as colored houses, vineyards and farm buildings. We hope you will enjoy this new re-imagination of Malden. May it bring back many of your fondest Arma memories! %1%1%3OVERVIEW%4% %1%2 Size - 62 km2 of land mass %1%2 Varied locations - deserts, forests, farmlands, towns, and more %1%2 Structures - colored houses, vineyards, barns, and more %1%2 Signs - new directional signs, bus stops, and community-made billboards";
			displayName = "Malden 2035";
			logicalOrder = 2;
		};
	};
	class MP_Marksmen
	{
		displayName = "HVT";
		dlc = -1;
		class MK_GroupMarkers
		{
			arguments[] = {{{"TeamSwitch"}}};
			description = "Group Markers allow you to visualize friendly groups near your location.";
			displayName = "Group Markers";
			dlc = -1;
			image = "\a3\ui_f\data\gui\cfg\hints\UnitType_CA.paa";
			tip = "Press %3CTRL +%4 %11 to toggle on/off the group markers";
		};
	};
	class Multiplayer
	{
		displayName = "Multiplayer";
		logicalOrder = 5;
		class Chat
		{
			arguments[] = {{{"nextChannel"}}, {{"prevChannel"}}};
			description = "To communicate with other players you can use one of the three types of communications: Text, Voice and Map Markers. The communication is only broadcasted to a selected channel. Channels are:%1%2Global – to all players%1%2Side – to your faction%1%2Command – to your faction commanders%1%2Group – to your command group%1%2Vehicle – to players in the same vehicle%1%2Direct – to players in a close distance%1Cycle channels with %11, %12.";
			displayName = "Channels";
			image = "\a3\ui_f\data\gui\cfg\hints\Chat_ca.paa";
			logicalOrder = 5;
			tip = "";
		};
		class DynamicGroups
		{
			arguments[] = {{{"teamSwitch"}}};
			description = "Join or create your own group, invite other players and form your own squad.%1%2Press %11 to open/close the Dynamic Groups interface%1%1Note that this feature is only available in scenarios that support it.";
			displayName = "Dynamic Groups";
			image = "\A3\Ui_f\data\GUI\Cfg\Hints\Rifle_ca.paa";
			logicalOrder = 6;
			tip = "";
		};
		class Markers
		{
			arguments[] = {};
			description = "A map marker is a visual aid placed on the map. To add a marker:%1%2Doubleclick %3[LMB]%4 anywhere on the map.%1%2Press %3[UP]%4, %3[DOWN]%4 to change the type of the marker.%1%2Hold %3[L. Shift]%4 and press %3[LEFT]%4 or %3[RIGHT]%4 to change the color of the marker.%1%2You can enter text while creating the marker.%1%2Confirm the marker placement with %3[Enter]%4.%1To delete a marker, point at it with the cursor and press %3[Delete]%4.";
			displayName = "Map Markers";
			image = "\a3\ui_f\data\gui\cfg\hints\Miss_icon_ca.paa";
			logicalOrder = 1;
			tip = "This marker is visible to a selected chat channel (e.g. placing a map marker while in the Side channel ensures only other players on your side will see it). Use markers to point out enemy forces, plot routes, assign artillery targets and convey any other useful information required.";
			class ChangeMarkers_sub
			{
				arguments[] = {};
				description = "%2Press %3[UP]%4, %3[DOWN]%4 to change the type of the marker.%1%2Hold %3[SHIFT]%4 and press %3[UP]%4 or %3[DOWN]%4 to change the color of the marker.%1%2Confirm the marker placement with %3[ENTER]%4.";
				displayName = "Change Markers";
				dlc = -1;
				image = "\a3\ui_f\data\gui\cfg\hints\Map_ca.paa";
				tip = "";
			};
			class CreateMarkers_sub
			{
				arguments[] = {{{"defaultAction"}}};
				description = "A map marker is a visual aid placed on the map. To add a marker:%1%2Doubleclick %11 anywhere on the map.";
				displayName = "Create Markers";
				dlc = -1;
				image = "\a3\ui_f\data\gui\cfg\hints\Map_ca.paa";
				tip = "";
			};
		};
		class TeamSwitch
		{
			arguments[] = {{{"teamSwitch"}}, {{"teamSwitchNext"}}};
			description = "Team Switch enables you to switch between playable units.%1%2Open the Team Switch window %11.%1%2Select a unit to switch into.%1%2Press the %3Switch%4 button.";
			displayName = "Team Switch";
			image = "\a3\ui_f\data\gui\cfg\hints\Team_switch_ca.paa";
			logicalOrder = 2;
			tip = "Press %12 to switch directly into the next unit.";
		};
		class Text
		{
			arguments[] = {{{"chat"}}};
			description = "Text chat serves as one of the three forms of communicating with other players. It's displayed on the screen amongst the combat protocol.%1%2Open the text input with %11.%1%2Cycle the channels by pressing %3[UP]%4, %3[DOWN]%4.%1%2Send the message with %3[Enter]%4.";
			displayName = "Text Chat";
			image = "\a3\ui_f\data\gui\cfg\hints\Chat_ca.paa";
			logicalOrder = 3;
			tip = "When you are writing, other keyboard controls are disabled. Close the chat box by pressing %3[Esc]%4 quickly.";
		};
		class Voice
		{
			arguments[] = {{{"pushToTalk"}}, {{"prevChannel"}}, {{"nextChannel"}}};
			description = "Built-in voice chat provides an option to quickly communicate with your fellow soldiers. If a microphone is connected, press and hold %11 to start broadcasting. Voice chat follows the same rules as text chat, so remember to switch channels by pressing %12, %13 to talk privately to your side.";
			displayName = "Voice Channel";
			image = "\a3\ui_f\data\gui\cfg\hints\Voice_ca.paa";
			logicalOrder = 4;
			tip = "";
		};
	};
	class Navigation
	{
		displayName = "Navigation";
		logicalOrder = 9;
		class CustomWP
		{
			arguments[] = {{{"showMap"}}};
			description = "You can add a custom waypoint to a map. It will be displayed both on the map and on the scene. To add a waypoint:%1%2Open the map by %11.%1%2Place the waypoint with %3[Left Shift]%4+%3[LMB]%4.";
			displayName = "Custom Waypoints";
			image = "\a3\ui_f\data\gui\cfg\hints\Miss_icon_ca.paa";
			logicalOrder = 4;
			tip = "";
		};
		class Direction
		{
			arguments[] = {{{"MiniMapToggle"}}, {{"compassToggle"}}};
			description = "To better understand direction codes (bearings):%1%2Open your GPS %11 or compass %12.%1The direction matches the 360° system. North is marked as 000, East as 090 and so on. Coordinates are also visible on the map.";
			displayName = "Directions";
			image = "\a3\ui_f\data\gui\cfg\hints\Direction_ca.paa";
			logicalOrder = 2;
			tip = "Clock position is often used for a relative direction. Based on a 12-hour clock analogy, 12 o'clock means directly ahead, 3 o'clock means right and so on.";
			class Bearings_sub
			{
				arguments[] = {};
				description = "The edge of the compass is broken up into 360°. North is marked as 000, East as 090 and so on.";
				displayName = "Bearings";
				dlc = -1;
				image = "\a3\ui_f\data\gui\cfg\hints\Direction_ca.paa";
				tip = "";
			};
			class Compass_sub
			{
				arguments[] = {{{"compass"}}, {{"compassToggle"}}};
				description = "%2Press %11 to open your compass%1%2Press %12 to toggle";
				displayName = "Compass";
				dlc = -1;
				image = "\a3\ui_f\data\gui\cfg\hints\Direction_ca.paa";
				tip = "";
			};
			class GPS_sub
			{
				arguments[] = {{{"MiniMapToggle"}}};
				description = "%2Press %11 to open your GPS.";
				displayName = "GPS";
				dlc = -1;
				image = "\a3\ui_f\data\gui\cfg\hints\Map_ca.paa";
				tip = "";
			};
		};
		class Map
		{
			arguments[] = {{{"showMap"}}, {{"hideMap"}}};
			description = "The map is a powerful tool for navigation and commanding.%1%2Open it by pressing %11.%1%2Zoom in or out on the map with %3[mouse-wheel up and down]%4.%1%2Try hiding or showing map %3textures%4 or centering on your position. Buttons are located on the top toolbar.%1%2Close the map by pressing %12 or %3[Esc]%4.";
			displayName = "Map";
			image = "\a3\ui_f\data\gui\cfg\hints\Map_ca.paa";
			logicalOrder = 1;
			tip = "Remember, you can only see the map if you have a GPS or Map in your Inventory.";
			class GridDistances_sub
			{
				arguments[] = {};
				description = "The map is divided into a grid to assist with navigating the terrain.%1%2At this scale, each grid represents%3 100 m%4%1%2Zooming out further will increase the scale to%3 1 km, or 1 klick%4%1%2At the lowest zoom level, each grid will represent%3 10 km%4";
				displayName = "Grid Distances";
				dlc = -1;
				image = "\a3\ui_f\data\gui\cfg\hints\Map_ca.paa";
				tip = "";
			};
			class OpenMap_sub
			{
				arguments[] = {{{"showMap"}}, {{"Action"}}};
				description = "%2Open the map by pressing %11.";
				displayName = "Open Map";
				dlc = -1;
				image = "\a3\ui_f\data\gui\cfg\hints\Map_ca.paa";
				tip = "";
			};
		};
		class Tasks
		{
			arguments[] = {{{"diary"}}, {{"showMap"}}};
			description = "You have a new task. Tasks are mission objectives received from Command. To open mission tasks:%1%2Open the task list %11.%1Alternatively, you can access your tasks on the map.%1%2Open the map %12 and select %3Tasks%4.";
			displayName = "Tasks";
			image = "\a3\ui_f\data\gui\cfg\hints\Tasks_ca.paa";
			logicalOrder = 5;
			tip = "Goals from the active task are marked on your screen. To select a different task as active:%1%2Open tasks %11.%1%2Click on the task.%1%2Then click on %3set as an active task%4.";
			class Tasks_sub
			{
				arguments[] = {{{"diary"}}};
				description = "You have a new task. Tasks are mission objectives received from Command. To open mission tasks:%1%2Open the task list %11.";
				displayName = "Tasks";
				dlc = -1;
				image = "\a3\ui_f\data\gui\cfg\hints\Tasks_ca.paa";
				tip = "";
			};
		};
		class Waypoint
		{
			arguments[] = {};
			description = "Waypoints mark a location you are ordered to go to by your team-leader or a task. All waypoints and go-to orders will be shown by a marker on the screen. When moving in a formation, a formation marker will also be shown on the screen, but without any distance and description.";
			displayName = "Waypoints";
			image = "\a3\ui_f\data\gui\cfg\hints\Waypoint_ca.paa";
			logicalOrder = 3;
			tip = "Task related waypoints <img size='1' %5  image='A3\UI_F\data\Map\MapControl\taskIcon_ca.paa' /> are shown on the map. The displaying of waypoints depends on chosen difficulty settings.";
		};
	};
	class NexusUpdate
	{
		category = "Product";
		displayName = "Nexus Update";
		logicalOrder = 20;
		class Armor
		{
			arguments[] = {};
			description = "<img size='9' shadow='0' image='A3\Data_F_Exp_A\Data\FM_LEARN_Nexus3_ca.paa' />%1Protective equipment now %3protects only%4 the %3hit points%4 that are %3actually covered%4 by the respective model of the given gear. Armor levels are properly adjusted for each particular hit point covered, resulting in more realistic personal protection. %3Hit reactions%4 for the characters were %3tweaked%4 to look more convincing.";
			displayName = "Personal Protective Equipment";
			image = "\a3\ui_f\data\gui\cfg\hints\Commanding_ca.paa";
			logicalOrder = 4;
		};
		class Audio
		{
			arguments[] = {};
			description = "The game's audio engine was prepared for future improvements, some of which enhance the soundscape even now:%1%2%3Stereo Emitter%4 - this tech handles stereo samples, which are used as positional sounds, and creates a stereo effect at close distances%1%2%3Explosives%4 - new and richer samples%1%2%3Fatigued Characters%4 - more distinct voice sets for fatigued characters and enhanced 'holding breath' samples";
			displayName = "Audio";
			image = "\a3\ui_f\data\gui\cfg\hints\Commanding_ca.paa";
			logicalOrder = 5;
		};
		class EndGame
		{
			arguments[] = {};
			description = "<img size='9' shadow='0' image='A3\Data_F_Exp_A\Data\FM_LEARN_Nexus2_ca.paa' />%1The basic premise of the End Game %3multiplayer mode%4 is to provide a 'hybrid' %3mix%4 of gameplay types: %3Coop%4, %3PvE%4 and %3PvP%4.%1Two sides fight against a common enemy to secure enough Intel - gathered by completing a number of small objectives - to identify a final 'End Game' objective. The game mode is comprised of 3 distinct phases:%1%2Establishing a F.O.B.%1%2Downloading Intelligence%1%2Securing valuable schematics";
			displayName = "End Game";
			image = "\a3\ui_f\data\gui\cfg\hints\Commanding_ca.paa";
			logicalOrder = 3;
			tip = "End Game also uses new virtual roles to observe the sessions. This first version of a new %3Spectator%4 feature can be used in other scenarios by leveraging its modular platform design.";
		};
		class ModDependency
		{
			arguments[] = {};
			description = "<img size='9' shadow='0' image='A3\Data_F_Exp_A\Data\FM_LEARN_Nexus5_ca.paa' />%1Mod dependencies are the integration of %3clear%4 and %3automated connections%4 between %3mods%4 in the Launcher. This feature consists of:%1%2Dependency settings on Steam Workshop%1%2Launcher's ability to recognize and work with dependencies%1%2Automated repair of missing dependencies";
			displayName = "Mod Dependencies";
			image = "\a3\ui_f\data\gui\cfg\hints\Commanding_ca.paa";
			logicalOrder = 7;
			tip = "The current implementation only works for mods downloaded from Steam Workshop.";
		};
		class Nexus
		{
			arguments[] = {};
			description = "With Nexus Update, we have focused on enhancing core gameplay features, systems and content.%1Refined features included:%1%2Personal Protective Equipment%1%2Stamina%1%2System Optimizations%1%2Mod Dependencies%1%2Audio%1We are also presenting our continued development of the %3End Game%4 multiplayer mode and our completely new official web service %3Arma 3 Units%4.";
			displayName = "Nexus Update";
			image = "\a3\ui_f\data\gui\cfg\hints\Commanding_ca.paa";
			logicalOrder = 1;
		};
		class Stamina
		{
			arguments[] = {};
			description = "<img size='9' shadow='0' image='A3\Data_F_Exp_A\Data\FM_LEARN_Nexus4_ca.paa' />%1An overhaul of the Fatigue mechanics resulted in the implementation of a new Stamina system. Stamina is %3simpler%4, %3clearer%4, %3better communicated%4 and has %3easier to grasp%4 mechanics that will allow for the management of exhaustion, encumbrance, terrain gradient penalties and the overall mobility of characters. It is also much more %3open to modifications%4 and should serve as a solid platform for community-made solutions.";
			displayName = "Stamina";
			image = "\a3\ui_f\data\gui\cfg\hints\Commanding_ca.paa";
			logicalOrder = 6;
		};
		class Units
		{
			arguments[] = {};
			description = "<img size='9' shadow='0' image='A3\Data_F_Exp_A\Data\FM_LEARN_Nexus1_ca.paa' />%1Arma 3 Units is a web-based %3service%4 for %3connecting Arma 3 players%4 to community groups. This initial Foundation Release allows registered Bohemia Accounts to:%1%2Register a Unit, which includes setting the Unit logo, description, biography, server information and more%1%2Browse and search for registered Units, and sort them by multiple characteristics like: Gameplay, Region, Language and more";
			displayName = "Arma 3 Units";
			image = "\a3\ui_f\data\gui\cfg\hints\Commanding_ca.paa";
			logicalOrder = 2;
			tip = "%3<a href='http://units.arma3.com'>units.arma3.com</a>%4";
		};
	};
	class PremiumContent
	{
		category = "Product";
		displayName = "Premium Content";
		logicalOrder = 2;
		class DLCStrategy
		{
			arguments[] = {"""https://www.bistudio.com/blog/roadmap-14-15-dlc-strategy-blog"""};
			description = "Arma 3's <a href='%11'>DLC strategy</a>﻿ is based on 3 main pillars:%1%2 Providing free platform updates%1%2 Offering new premium content%1%2 Preventing multiplayer fragmentation%1%1With this approach, <t %5>every Arma 3 player gets all the DLC data</t> and is <t %5>able to see everything in-game</t>. Generally speaking, <t %5>features</t> continue expanding the platform and are <t %5>free</t> for all to enjoy, while the <t %5>premium content</t> may be <t %5>limited</t> for non-owners. By purchasing DLC you are <t %5>contributing</t> to further development of a consistent Arma 3 platform for everyone and the Arma series in general. Thank you!";
			displayName = "DLC Strategy";
			image = "\A3\Ui_f\data\GUI\Cfg\Hints\arma3_bundle_icon_hint.paa";
			logicalOrder = 2;
			tip = "You can try premium assets in the Virtual Arsenal mode without restriction!";
		};
		class OptionalDLC
		{
			arguments[] = {};
			description = "For the first many years of <t %5>Arma 3</t>'s existence, we've adopted a <t %5>DLC strategy</t> that distributed all DLC data to all players, regardless of ownership. We refer to this as <t %5>default DLC</t> (Helicopters, Tanks, and Laws of War are examples).%1%1We have now entered a stage of Arma 3's tour of duty during which we want to try some more things on the platform, such as opening the doors to third-party Creator DLC. This officially published but externally developed DLC cannot be part of the main game data, since it's too large and / or often adjusts parts of the vanilla experience as a Total Conversion. We refer to this as <t %5>optional DLC</t>.%1%1Upon purchase, optional DLC automatically downloads. But you then <t %5>have to manually activate it in the game's Launcher</t> whenever you want to use it.";
			displayName = "Optional DLC";
			image = "\a3\ui_f\data\gui\cfg\hints\Miss_icon_ca.paa";
			logicalOrder = 3;
			tip = "Compatibility is not guaranteed when launching the game with multiple optional DLC active at the same time.";
		};
		class PremiumApex
		{
			arguments[] = {};
			description = "Be deployed to the 100 km² South Pacific island archipelago Tanoa, with 13 new weapons and 10 new vehicles, a co-op campaign, and more, in the Arma 3 Apex expansion.%1<img size='9' shadow='0' image='A3\Ui_f\data\GUI\Rsc\RscDisplayWelcome\welcome_apex1_co' />%1%2Tanoa Terrain%1%2Vehicles - V-44 X Blackfish VTOL, Y-32 Xi'an VTOL, Prowler LSV, Qilin LSV, KH-3A Fenghuang Drone, MQ-12 Falcon Drone, Caesar BTT Propellor Airplane, MB 4WD Offroad Car, RHIB Boat, Water Scooter%1%2Weapons - AKS-74U 5.45 mm Assault Rifle, AKM 7.62 mm Assault Rifle, AK-12 7.62 mm Assault Rifle, RPG-7 Launcher, PM 9 mm Pistol, SPAR-16/S/17 Assault Rifles, CAR-95 5.8 mm Assault Rifle, CAR-95-1 5.8 mm Light Support Weapon, LIM-85 5.56 mm Light Machine Gun, Type 115 6.5 mm / .50 cal Assault Rifle, Protector 9 mm Sub-Machine Gun, CMR-76 6.5 mm Designated Marksman Rifle, ERCO Optics%1%2Gear - new clothes, uniforms, backpacks, headgear, NVGs, and more%1%2Syndikat Faction - a criminal organisation composed of armed thugs and ex-paramilitaries%1%2Gendarmerie Faction - the local Tanoa law enforcement agency%1%2NATO &amp; CSAT Special Forces - operators equipped with modern weaponry, thermal-masking camouflage, new Night Vision Goggles, and other unique gear%1%2NATO &amp; CSAT Pacific Forces - suitably camouflaged assets for the primary armed forces%1%2Props - Tanoa environment decorations and special field equipment%1%2Character Appearances - Tanoan and Chinese%1%2Radio Protocols - French, French-English and Chinese%1%2""Apex Protocol"" - a 1-4 player co-op campaign with ties to ""The East Wind""%1%2Showcase End Game - become familiar with the End Game mode in a singleplayer scenario%1%2<a href='https://community.bistudio.com/wiki/MP_End_Game'>End Game</a> Instances - ""Moddergat"" and ""Balavu"" variants specifically designed for Tanoa's varied environments%1%2<a href=""https://arma3.com/dlc/zeus"">Zeus</a> - Tanoa Game Master scenarios%1%2Official Sound Track - new tracks to score ""Apex Protocol""%1%2Main Menu - a re-imagined take on your main window into the game%1%2Controls Presets - play using the new default ""Arma 3 Apex"" preset, or stick to the setup you're used to via ""Arma 3""%1%2Achievements - a set of extra <a href='http://steamcommunity.com/stats/107410/achievements'>Steam Achievements</a>%1";
			displayName = "Apex Expansion";
			image = "\a3\data_f_exp\logos\arma3_exp_icon_hint_ca.paa";
			logicalOrder = 5;
			tip = "Usage of the premium content is limited for the non-owners.";
		};
		class PremiumBundle
		{
			arguments[] = {{{"OpenDlcScreen"}}};
			description = "Save more than 25&#37; and complete your Arma 3 experience. Including the Karts, Helicopters and Marksmen DLCs, the bundle offers the best value for money to fans.%1%2Press %11 to open the store page.";
			displayName = "DLC Bundle 1";
			dlc = -1;
			image = "\A3\Ui_f\data\GUI\Cfg\Hints\arma3_bundle_icon_hint.paa";
			logicalOrder = 1;
			tip = "";
		};
		class PremiumBundle2
		{
			arguments[] = {{{"OpenDlcScreen"}}};
			description = "Save more than 25&#37; by purchasing the Arma 3 DLC Bundle 2, which includes the upcoming Arma 3 Jets, Arma 3 Laws of War, Arma 3 Tac-Ops, and Arma 3 Tanks DLC!%1%2Press %11 to open the store page.";
			displayName = "DLC Bundle 2";
			dlc = -1;
			image = "\A3\Ui_f\data\GUI\Cfg\Hints\arma3_bundle_icon_hint.paa";
			logicalOrder = 2;
			tip = "";
		};
		class PremiumDefine
		{
			arguments[] = {{{"OpenDlcScreen"}}};
			description = "Assets that are part of premium content packages, such as official DLC, must be purchased to unlock fully. While using an unowned asset, certain restrictions apply and notifications are displayed.%1Premium Content Examples:%1%2Weapons%1%2Vehicles%1%2Characters%1%2Items%1%2Scenarios%1%2Terrains%1Press %11 to open the store page.";
			displayName = "Premium Content";
			image = "\a3\ui_f\data\gui\cfg\hints\Commanding_ca.paa";
			logicalOrder = 0;
			tip = "";
		};
		class PremiumEnoch
		{
			arguments[] = {"""<img size='9' shadow='0' image='A3\Data_F_Enoch\Images\enoch_fm_overview_co' />"""};
			description = "Enjoy various authentic additions to the Arma 3 sandbox courtesy of the Contact expansion.%1%11%1%2Livonia - a new temperate and partly abandoned summer environment ideally suited for combined arms warfare%1%2Humans - various small new and expanded human factions, including the Livonian Defense Force, woodland NATO forces, Russian Spetsnaz, CBRN specialists, looters, and scientists%1%2Mini UGV - a pair of man-portable robotic ground systems%1%2Tractor - your everyday farming vehicle%1%2Offroad Covered - additional hard cover and communications options for the 4x4 pickup%1%2HEMTT Cargo - extra transport capabilities for NATO's heavy truck%1%2Promet - a new assault rifle for the Livonian Defense Force, including an underbarrel shotgun option%1%2Kozlice - a simple double-barreled shotgun with sawed-off variant%1%2AK-12 - lush and arid spray paint camo variants for this weapon family and various accessories%1%2RPK-12 - a new Light Machine Gun member in the AK-12 family with drum magazine%1%2AKU-12 - another addition to the AK-12 family in the form of a light carbine variant%1%2Mk14 Classic - a civilian hunting rifle variant of the military-issue Mk14%1%2LDF Fatigues - combat fatigues worn by the Livonian Defense Force%1%2LDF Helmet - a collection of modular protective combat helmets worn by the Livonian Defense Force%1%2LDF Vest - brand-new load-bearing tactical vests equipped by the Livonian Defense Force%1%2Granit Suit - two-tone combat outfits for Russian Spetsnaz%1%2Avenger Helmet - tactical helmets for Russian Spetsnaz%1%2Kipchak Vest - load-bearing vests for Russian Spetsnaz%1%2SCBA - a Self-Contained Breathing Apparatus%1%2Regulator Facepiece - a full-face mask to connect to SCBAs%1%2CBRN Suit - sealed off over-garments to protect against Chemical Biological Radiological and Nuclear threats%1%2CUR - a tactical Powered-APR and SCBA Combination Unit Respirator%1%2APR - NATO and CSAT full-face Air Purifying Respirators to protect against CBRN contaminants%1%2Radio Pack - a long-range transceiver backpack for comms specialists%1%2Blindfold - a basic piece of cloth wrapped around a prisoner's head%1%2Tin Foil Hat - the preferred option for defense against mind control!%1%2Miscellaneous Objects - a massive set of new props to build scenarios with, ranging from CBRN, decontamination, Electronic Warfare, field outposts, and much more%1%2Livonia Multiplayer - instances of Zeus Game Master, Warlords and Combat Patrol set on the new terrain and using relevant factions%1%2Radio Protocols - all-new Polish and Russian voice sets%1%2Official Soundtrack - newly composed music tracks";
			displayName = "Contact Expansion (Platform)";
			image = "\A3\Data_F_Enoch\Logos\arma3_enoch_hint_icon_ca";
			logicalOrder = 10;
			tip = "Usage of the premium content is limited for the non-owners.";
		};
		class PremiumHeli
		{
			arguments[] = {};
			description = "Start the engines! Jump into new cargo helicopters and master a new sling loading feature to gain an advantage on the battlefield in the Arma 3 Helicopters DLC.%1<img size='9' shadow='0' image='A3\Missions_F_Heli\data\img\Showcase_SlingLoading_overview_CA.paa' />%1%2CH-67 Huron - NATO's twin-engine, tandem rotor heavy-lift helicopter%1%2Mi-290 Taru - CSAT heavy utility helicopter using a coaxial rotor design%1%2M-900 - Civilian variant of the existing H-9 family of helicopters%1%2Sling Loading Objects%1%2Helicopter Objects%1%2F.O.B. Objects%1%2Support Multiplayer - a new mode in which battlefield logistics play a major role%1%2<t></t>4 VR Helicopter Training Course%1%2Showcase Sling Loading%1%2<t></t>5 Singleplayer Time Trial Challenges%1%2Set of extra Steam Achievements";
			displayName = "Helicopters DLC";
			image = "\a3\data_f_heli\logos\arma3_heli_icon_hint_ca.paa";
			logicalOrder = 4;
			tip = "Usage of the premium content is limited for the non-owners.";
		};
		class PremiumJets
		{
			arguments[] = {};
			description = "Dominate the skies over the battlefield in 3 new fighter aircraft and an Unmanned Combat Air Vehicle. Fly fast and agile air superiority jets to provide air support in the dedicated Showcase, and more, in the Arma 3 Jets DLC.%1<img size='9' shadow='0' image='A3\Data_F_Jets\Images\jets_fm_overview_co' />%1%2F/A-181 Black Wasp II - a fifth generation NATO carrier-based fighter jet%1%2To-201 Shikra - a fifth generation CSAT air superiority fighter jet%1%2A-149 Gryphon - an advanced fourth generation AAF fighter jet%1%2Sentinel - a NATO carrier-based Unmanned Combat Air Vehicle%1%2Deck Crew Vests - colored vests for various characters roles on the carrier%1%2Showcase Fighter Jets - take to the skies over Altis and engage in Air-to-Air and Air-to-Ground operations%1%2Official Sound Track - a new music track befitting the jets theme%1%2Achievements - a set of extra <a href='http://steamcommunity.com/stats/107410/achievements'>Steam Achievements</a>%1";
			displayName = "Jets DLC";
			image = "\a3\data_f_jets\logos\jets_icon_hint_ca.paa";
			logicalOrder = 6;
			tip = "Usage of the premium content is limited for the non-owners.";
		};
		class PremiumKarts
		{
			arguments[] = {};
			description = "Bring the battle to the race track! Get behind the wheel of a racing kart and fight for pole position in the Arma 3 Karts DLC.%1<img size='9' shadow='0' image='A3\Data_F_Kart\Images\karts_illustration_06_ca.paa' />%1%2<t></t>Vehicle: Racing Kart - 4 distinctive variants and a random color variant%1%2<t></t>Character: Racer - a driver matching to kart variants.%1%2<t></t>Character: Marshal%1%2<t></t>Weapon: Starter pistol%1%2<t></t>5 Singleplayer Time Trial Challenges%1%2<t></t>2 Multiplayer Kart Races%1%2<t></t>Race objects%1%2<t></t>Various Zeus Race Modules%1%2<t></t>16 Steam Achievements%1<t></t>";
			displayName = "Karts DLC";
			image = "\a3\data_f_kart\logos\arma3_karts_icon_hint_ca.paa";
			logicalOrder = 3;
			tip = "Usage of the premium content is limited for the non-owners.";
		};
		class PremiumMark
		{
			arguments[] = {};
			description = "Hone your shooting skills and engage in ranged combat with the seven new weapons in the Arma 3 Marksmen DLC.%1<img size='9' shadow='0' image='A3\Missions_F_Mark\data\img\Showcase_Marksman_overview_CA.paa' />%1%2<t><\t>Weapon: Cyrus 9.3 mm%1%2<t><\t>Weapon: Mk14 7.62 mm%1%2<t><\t>Weapon: ASP-1 Kir 12.7 mm%1%2<t><\t>Weapon: SPMG .338%1%2<t><\t>Weapon: Navid 9.3 mm%1%2<t><\t>Weapon: MAR-10 .338%1%2<t><\t>Weapon: Mk-I EMR 7.62 mm%1%2<t><\t>Character: Sniper - with a new full ghillie suit%1%2<t><\t>Character: Grenadier - with a new heavy vest%1%2<t><\t>3 Singleplayer Firing Drills%1%2<t><\t>End Game - a team based multiplayer mode%1%2<t><\t>Showcase Firing From Vehicles%1%2<t><\t>Showcase Marksmen%1%2<t><\t>VR Training courses%1%2<t><\t>Remote Designators%1%2<t><\t>Laser Designators%1%2<t><\t>Facepaints - 9 faces with camouflage%1%2<t><\t>Kahlia Scope%1%2<t><\t>AMS Scope%1%2<t><\t>Weapon Accessories%1%2<t><\t>Firing Drills Decorative Objects%1%2<t><\t>Set of extra Steam Achievements%1<t><\t>";
			displayName = "Marksmen DLC";
			image = "\a3\data_f_mark\logos\arma3_mark_icon_hint_ca.paa";
			logicalOrder = 5;
			tip = "Usage of the premium content is limited for the non-owners.";
		};
		class PremiumOrange
		{
			arguments[] = {{"STR_A3_Orange_CfgMods_overview"}, """<img size='9' shadow='0' image='A3\Data_F_Orange\Images\orange_fm_overview_co' />""", """http://steamcommunity.com/stats/107410/achievements"""};
			description = "%11%1%12%1%2""Remnants of War"" - a singleplayer mini-campaign that explores the laws of armed conflict (LOAC)%1%2Showcases - a humanitarian NGO's open day, and VR LOAC instruction%1%2Time Trials - races against the clock using several types of vehicle%1%2International Development &amp; Aid Project - the new civilian humanitarian Armaverse faction (IDAP)%1%2Van - a range of medium-sized wheeled transport vehicles, including ambulances%1%2Utility &amp; Demining Drones - unmanned aerial vehicles for small payload delivery and remote minefield clearance%1%2APERS Mine Dispenser - an effective but controversial area denial weapon system%1%2Cluster Bombs &amp; UXO - aircraft-delivered submunition containers that may leave behind unexploded ordnance after strikes%1%2Vests - safety, identification, multi-pocket and EOD vests%1%2Bags - messenger and leg strap bags%1%2Headgear - safari and hard hats, head bandages, basic and press helmets, ear protectors and a wireless earpiece%1%2Facewear - respirators and safety goggles%1%2Humanitarian Aid Objects - cardboard boxes, food sacks, water bottle packages, emergency blankets, and more%1%2Tent Objects - (medical) shelter tents, separate floor canvases, an air-conditioning unit, and plastic net fences%1%2Medical Objects - stretchers, IV bags, body bags, and more%1%2Furniture Objects - tables, a sofa, an armchair, a bed, and more%1%2Miscellaneous - a paramedic outfit, construction coveralls, and a training mine%1%2Official Soundtrack - newly composed music tracks%1%2Achievements - a set of extra <a href='%13'>Steam Achievements</a>";
			displayName = "Laws of War DLC";
			image = "\a3\data_f_orange\logos\arma3_orange_icon_hint_ca.paa";
			logicalOrder = 7;
			tip = "Usage of the premium content is limited for the non-owners.";
			class Hint
			{
				arguments[] = {{"STR_A3_Orange_CfgMods_overview"}, """<img size='7' shadow='0' image='A3\Data_F_Orange\Images\orange_fm_overview_co' />"""};
				description = "%11%1%12";
				displayName = "Laws of War DLC";
				image = "\a3\data_f_orange\logos\arma3_orange_icon_hint_ca.paa";
				tip = "Usage of the premium content is limited for the non-owners.";
			};
		};
		class PremiumTacops
		{
			arguments[] = {{"STR_A3_TacOps_CfgMods_overview"}, """<img size='9' shadow='0' image='A3\Data_F_tacops\Images\tacops_fm_overview_co.paa' />""", """http://steamcommunity.com/stats/107410/achievements"""};
			description = "%11%1%12 %1%2""Beyond Hope"" - nine years prior to the ""East Wind"" conflict, civil war rages through the Republic of Altis and Stratis. %1%2""Stepping Stone"" - NATO reinforcements responding to the ""East Wind"" crisis must first secure the strategic island of Malden. %1%2""Steel Pegasus"" - during the invasion of Altis, NATO forces stage a daring air assault to open a second front. %1%2After Action Report (AAR) Videos - re-visit the operations with one of Bohemia's military consultants via in-depth videos. %1%2HoldKey function - executes a user-defined code when a key has been held down for a specified period of time. %1%2Basic Civilian Behavior - provides an Eden Editor module which enhances civilian behavior during fight scenes, and improves performance by using agent entities. %1%2Animated Briefing Framework - used for creating briefings with animated markers (resizing, non-linear moving, coloring), including a timeline function for better timing and synchronization. %1%2Official Soundtrack – listen to newly composed music tracks. %1%2Achievements - a set of extra <a href='%13'>Steam Achievements</a>";
			displayName = "Tac-Ops DLC";
			image = "\a3\Data_F_tacops\logos\arma3_tacops_logo_hint_ca.paa";
			logicalOrder = 8;
			tip = "Usage of the premium content is limited for the non-owners.";
			class Hint
			{
				arguments[] = {{"STR_A3_Tacops_CfgMods_overview"}, """<img size='7' shadow='0' image='A3\Data_F_tacops\Images\tacops_fm_overview_co.paa' />"""};
				description = "%11%1%12";
				displayName = "Tac-Ops DLC";
				image = "\a3\Data_F_tacops\logos\arma3_tacops_logo_hint_ca.paa";
				tip = "Usage of the premium content is limited for the non-owners.";
			};
		};
		class PremiumTank
		{
			arguments[] = {{"Roll in heavy firepower and take control of the battlefield with three brand new armored vehicles in the Arma 3 Tanks DLC."}, """<img size='9' shadow='0' image='A3\Data_F_tank\Images\tank_fm_overview_co' />""", """http://steamcommunity.com/stats/107410/achievements"""};
			description = "%11%1%12%1%2T-140 Angara – CSAT’s most formidable battle tank, unrivaled in firepower and armor. Features a Commander variant and multiple liveries.%1%2AWC Nyx – small in size, this flexible tankette punches well above its weight; with four variants, it’s suited to multiple forms of warfare, including recon, anti-tank, and even anti-air roles!%1%2Rhino MGS – a steel beast designed for one purpose – to destroy other tanks! Armed with a mighty 120mm cannon, it can dispense many types of rounds, including the new MARUK anti-tank guided missile. Also comes with a UP variant.%1%2""Altis Requiem"" – play as an AAF tank commander and take control of an AWC Nyx, and later, the T-140 Angara, in this explosive, three-mission mini-campaign.%1%2Showcase Tank Destroyers – climb in NATO’s primary tank destroyer and utilize its speed and agility to outmaneuver the deadliest of armored adversaries.%1%2""Vanguard"" – a team-vs-team multiplayer mode that focuses on tactics, group cohesion, and Arma 3’s combined arms gameplay.%1%2Time Trials – put the new Angara, Nyx, and Rhino to the test in three speedy time trial races across Altis and Malden.%1%2""9M135"" Vorona – a manually guided missile launcher, replete with powerful optics, thermal imaging, and a laser rangefinder.%1%2MAAWS Mk4 – an unguided recoilless rifle, available in the older Mod 0 version used by AAF and FIA, and the newer Mod 1 version, employed by NATO.%1%2Anti-Tank Vehicle Variants – enjoy variants of the existing Offroad, Prowler, and Qilin LSVs that come equipped with mounted launchers.%1%2Tank Crew Clothing – unique CSAT tank crew helmet and AAF tank crew overalls.%1%2Decorative Objects – new decorative objects for Arma 3 content creators, such as tank defenses, spare parts, tools, and a fully functional repair depot.%1%2Official Soundtrack – listen to newly composed music tracks.%1%2Achievements – a set of extra <a href='%13'>Steam Achievements</a>.";
			displayName = "Tanks DLC";
			image = "\a3\data_f_tank\logos\arma3_tank_icon_hint_ca.paa";
			logicalOrder = 7;
			tip = "Usage of the premium content is limited for the non-owners.";
			class Hint
			{
				arguments[] = {{"Roll in heavy firepower and take control of the battlefield with three brand new armored vehicles in the Arma 3 Tanks DLC."}, """<img size='7' shadow='0' image='A3\Data_F_tank\Images\tank_fm_overview_co' />"""};
				description = "%11%1%12";
				displayName = "Tanks DLC";
				image = "\a3\data_f_tank\logos\arma3_tank_icon_hint_ca.paa";
				tip = "Usage of the premium content is limited for the non-owners.";
			};
		};
	};
	class Slingloading
	{
		displayName = "Sling Loading";
		logicalOrder = 14;
		class CargoHook
		{
			arguments[] = {{{"HeliRopeAction"}}};
			description = "To attach an object to your helicopter, hover over the object at a low altitude and press %11 to deploy your ropes. Remain stationary until the ropes attach to the object.%1%1%2If you're using the Sling Load Assistant:%1%2Press %11 to deploy your ropes when prompted%1%2Align the %3Target Indicator%4 with the %3Crosshairs%4%1%2Maintain the desired altitude indicated by the %3Altitude Bar%4%1%2Remain stationary as the %3Status Bar%4 fills until the object is successfully attached";
			displayName = "Hooking Up";
			image = "\A3\Ui_f\data\GUI\Cfg\Hints\HookingUp_ca.paa";
			tip = "";
		};
		class CargoUnhook
		{
			arguments[] = {{{"HeliRopeAction"}}};
			description = "To safely detach cargo, hover above the drop zone and slowly decrease your altitude.%1%2Don't forget to include the height of your cargo and the length of the rope(s) to your calculations.%1%2Detach the cargo with %11.";
			displayName = "Detaching";
			image = "\A3\Ui_f\data\GUI\Cfg\Hints\Detaching_ca.paa";
			tip = "In case of emergency, you can also detach the cargo mid-flight. If it isn't destroyed upon impact, you may be able to hook it up again later.";
		};
		class SlingLoad
		{
			arguments[] = {};
			description = "Sling loading is the process of using ropes to transport extra cargo underneath a helicopter.%1%2Each helicopter has a cargo weight limit, which also needs to be compatible with the hook system.";
			displayName = "Sling Loading";
			image = "\A3\Ui_f\data\GUI\Cfg\Hints\SlingLoading_ca.paa";
			tip = "Remember that, with the advanced flight model, the amount of fuel onboard, and the number of people inside the helicopter, are also included in the cargo weight limit.%1The flight characteristics of the helicopter will also change depending on the cargo being sling loaded.";
		};
		class SlingLoadCamera
		{
			arguments[] = {{{"PilotCamera"}}};
			description = "Some transport helicopters are equipped with a downward facing camera to help the pilot with the precision navigation of the cargo. To enter the camera, use %11.";
			displayName = "Sling Load Camera";
			image = "\A3\Ui_f\data\GUI\Cfg\Hints\Camera_ca.paa";
			tip = "";
		};
		class SlingLoadManager
		{
			arguments[] = {{{"HeliSlingLoadManager"}}};
			description = "The Sling Load Assistant is activated with %11. It is used to identify, navigate to, and attach desired objects within the vicinity of the helicopter.%1%1%2The Assistant consists of the following components:%1%2%3Target Indicators%4 - objects that can be attached%1%2%3Altitude Bar%4 - measures the height of the helicopter above the targeted object%1%2%3Crosshairs%4 - indicates whether the helicopter is properly aligned with the targeted object%1%2%3Status Bar%4 - communicates the current status of the helicopter's ropes";
			displayName = "Sling Load Assistant";
			image = "\A3\Ui_f\data\GUI\Cfg\Hints\SLAssistant_ca.paa";
			tip = "";
		};
	};
	class Spectating
	{
		displayName = "Spectating";
		logicalOrder = 6;
		class Spectator3PPView
		{
			arguments[] = {};
			description = "%1%2Press and hold %3[RMB]%4 to look around.%1%2Scroll %3[MMB]%4 to zoom in/out.";
			displayName = "Camera Third Person";
			image = "\a3\ui_f\data\gui\cfg\hints\Thirdperson_ca.paa";
			logicalOrder = 4;
			tip = "";
		};
		class spectatorcamera
		{
			arguments[] = {};
			description = "%1%2Tap %3[M]%4 to open the map.%1%2Press %3[N]%4 to toggle night vision.";
			displayName = "Spectator Controls";
			image = "\a3\ui_f\data\gui\cfg\hints\Thirdperson_ca.paa";
			logicalOrder = 2;
			tip = "";
		};
		class SpectatorFreeView
		{
			arguments[] = {};
			description = "%1%2Move the camera with %3[W]%4, %3[A]%4, %3[S]%4, %3[D]%4, %3[Q]%4 and %3[Z]%4.%1%2Press and hold %3[RMB]%4 to look around.%1%2Hold %3Shift%4, %3Alt%4 or %3Shift + Alt%4 for camera speed modifiers (2x, 4x, 8x).";
			displayName = "Camera Free View";
			image = "\a3\ui_f\data\gui\cfg\hints\Thirdperson_ca.paa";
			logicalOrder = 5;
			tip = "";
		};
		class spectatorinfo
		{
			arguments[] = {};
			description = "Spectator camera is a tool for watching the game whilst you cannot or do not want to play directly. It's often available after your death, when you wait for a respawn. It's also available on pre-defined playable slots for users who wish to observe a mission or even stream its progress.";
			displayName = "Spectator";
			image = "\a3\ui_f\data\gui\cfg\hints\Thirdperson_ca.paa";
			logicalOrder = 1;
			tip = "";
		};
		class SpectatorUnitView
		{
			arguments[] = {};
			description = "%1%2%3First Person Perspective%4 - Look through the eyes of the spectated unit.%1%2%3Third Person Perspective%4 - Orbit around the spectated unit.%1%2%3Free Camera%4 - Fly within the battlefield and see it from different angles.%1%2Use %3[Space]%4 to switch between available camera modes.";
			displayName = "Camera Views";
			image = "\a3\ui_f\data\gui\cfg\hints\Thirdperson_ca.paa";
			logicalOrder = 3;
			tip = "";
		};
	};
	class Tactics
	{
		displayName = "Tactics";
		logicalOrder = 19;
		class AmmoType
		{
			arguments[] = {};
			description = "Artillery operates with several different ammo types:%1%2HE shells - simple explosive ammo%1%2Flares - used for signaling%1%2Smoke shells - for signaling or screening%1%2Guided - heat seeking shells%1%2Laser Guided - precise, guided by laser designation%1%2Mines - clusters of AP or AT mines%1%2Cluster shells - exploding submunition containers";
			displayName = "Artillery Ammo Types";
			image = "\a3\ui_f\data\gui\cfg\hints\AmmoType_ca.paa";
			logicalOrder = 6;
			tip = "";
		};
		class Annoucning
		{
			arguments[] = {{{"revealTarget"}}};
			description = "At certain proximities observed enemies are automatically announced to your side. When you spot someone in the distance use %11 to announce the target to your side.";
			displayName = "Announcing Targets";
			image = "\a3\ui_f\data\gui\cfg\hints\Annoucning_ca.paa";
			logicalOrder = 1;
			tip = "";
		};
		class ArtilleryCall
		{
			arguments[] = {{{"selectAll"}}};
			description = "Artillery is a precise strike effective against well defended or armored targets.%1<t></t>1. Point at the target.%1<t></t>2. Press %11 or %3[0]%4 to enter the command menu.%1<t></t>3. Select %3Communications%4 - %3[8]%4.%1<t></t>4. Select %3Artillery Strike%4.%1<t></t>5. Choose an artillery type.%1<t></t>6. Select a type of ammo.%1<t></t>7. Pick the number of rounds.%1Artillery support will then confirm the request and report the splash.";
			displayName = "Artillery Support";
			image = "\a3\ui_f\data\gui\cfg\hints\ArtilleryCall_ca.paa";
			logicalOrder = 5;
			tip = "The procedure is the same for other types of support, just choose a different support in step 4.";
		};
		class Assemble
		{
			arguments[] = {{{"Gear"}}};
			description = "After moving a static weapon, it needs to be assembled again. You will need bags with both parts of the weapon: the tripod and the gun.%1%2Open Inventory %11.%1%2%3Drag and drop%4 the first bag on the ground.%1%2Bring the second bag close, you must have it in your posession.%1When both bags are close to each other, you can point at them and click %3Assemble%4. The turret will be facing the same direction you're facing when assembling it.";
			displayName = "Assembling Turrets";
			image = "\a3\ui_f\data\gui\cfg\hints\Miss_icon_ca.paa";
			logicalOrder = 9;
			tip = "Start using the turret by pointing at it and choosing %3Get in%4 from the action menu.";
		};
		class Ballistic
		{
			arguments[] = {{{"NextAction"}}};
			description = "When serving in artillery as a gunner, you can use the %3Artillery computer%4 to calculate the elevation/power as well as firing rounds.%1%2Open the action menu %11.%1%2Open the Artillery computer.%1%2Select a place on the map within the displayed radius.%1%2Select the type of ammunition and other parameters.%1%2Use the %3Fire%4 button to fire, when ready.";
			displayName = "Ballistic Computer";
			image = "\a3\ui_f\data\gui\cfg\hints\Zeroing_ca.paa";
			logicalOrder = 7;
			tip = "";
		};
		class Disassemble
		{
			arguments[] = {{{"NextAction"}}};
			description = "Turrets can be disassembled, moved and reassembled on the battlefield. To disassemble it:%1%2Point the cursor at the weapon.%1%2Choose %3Disassemble%4 from the action menu %11.%1Two bags will appear. To grab a bag: %1%2Point at it.%1%2Select %3Take%4 from the action menu.";
			displayName = "Moving Turrets";
			image = "\a3\ui_f\data\gui\cfg\hints\Miss_icon_ca.paa";
			logicalOrder = 8;
			tip = "You will need both bags to assemble the weapon again. You can only carry one at a time.";
		};
		class Instructor
		{
			arguments[] = {{{"diary"}}};
			description = "Instructor figure represents the military insight available to help you carry out your tasks.%1%2To prompt the advice, press %3[0]%4, %3[8]%4.";
			displayName = "Instructor Figure";
			image = "\a3\ui_f\data\gui\cfg\hints\Miss_icon_ca.paa";
			logicalOrder = 10;
			tip = "Log of the instructor's advices can be found in the Diary, section Instructor Figure.%1%2 Open the diary with %11.";
		};
		class Leaflets
		{
			arguments[] = {{{"DefaultAction"}}, {{"Action"}}, {"STR_A3_Orange_CfgHints_Leaflets_arg13"}};
			description = "%13%1%1%2Specially equipped vehicles, such as Utility Drones, can release a stack of leaflets over an area.%1%2Fly to a reasonable altitude (around 30 meters), and release the leaflets by pressing %11.%1%1Leaflets found on the ground can be inspected by holding %12.";
			displayName = "Leaflets";
			image = "\A3\UI_F_Orange\Data\CfgHints\leaflets_ca.paa";
			logicalOrder = 11;
			tip = "Armed forces sometimes use leaflets to warn a local population of an impending military attack.";
			class HintDrop
			{
				arguments[] = {{{"DefaultAction"}}, {"STR_A3_Orange_CfgHints_Leaflets_arg13"}};
				description = "%12%1%1%2Specially equipped vehicles, such as Utility Drones, can release a stack of leaflets over an area.%1%2Fly to a reasonable altitude (around 30 meters), and release the leaflets by pressing %11.";
				displayName = "Dropping Leaflets";
				image = "\A3\UI_F_Orange\Data\CfgHints\leaflets_ca.paa";
				tip = "Armed forces sometimes use leaflets to warn a local population of an impending military attack.";
			};
			class HintRead
			{
				arguments[] = {{{"Action"}}, {"STR_A3_Orange_CfgHints_Leaflets_arg13"}};
				description = "%12%1%1Leaflets found on the ground can be inspected by holding %11.";
				displayName = "Reading Leaflets";
				image = "\A3\UI_F_Orange\Data\CfgHints\leaflets_ca.paa";
				tip = "Armed forces sometimes use leaflets to warn a local population of an impending military attack.";
			};
		};
		class RespawnCamps
		{
			arguments[] = {};
			description = "Camps are respawn points which players can pack into a backpack, and later unpack on a different location. Use %3Assemble%4 and %3Disassemble%4 in the action menu to pack and unpack them.%1%2A tent will give a respawn point to the player who unpacked it and all friendlies nearby.%1%2A sleeping bag will create a point available only to the player who unpacked it.";
			displayName = "Respawn Camp";
			image = "\A3\Ui_f\data\GUI\Cfg\Hints\Miss_icon_ca.paa";
			tip = "Any player, including enemies, can pack your camp and use it later for themselves.";
		};
		class Supports
		{
			arguments[] = {};
			description = "Sometimes it's possible to call in various kinds of support such as artillery, close air support and other means of support. You may call in support by:%1%2Opening a command menu %3[0]%4.%1%2Selecting %3Communications [8]%4.%1%2Requesting Support Type.%1%2And finally, selecting the unit to provide support.";
			displayName = "Call for Support";
			image = "\a3\ui_f\data\gui\cfg\hints\CallSupport_CA.paa";
			logicalOrder = 4;
			tip = "With the communications menu opened, zoom in the map by using the %3[Left Ctrl + Mouse Wheel]%4.";
		};
		class Suppression
		{
			arguments[] = {};
			description = "One doesn't always have to hit the target to succeed. Bullets flying or impacting around a unit affect its ability to aim, shoot and move. Fire persistently in short intervals to degrade a target's ability to return fire accurately, or deny free movement through certain areas by firing upon them.";
			displayName = "Suppression";
			image = "\A3\Ui_f\data\GUI\Cfg\Hints\Automatic_ca.paa";
			logicalOrder = 2;
			tip = "With its large magazine capacity and automatic fire mode a machinegun is the weapon of choice for suppressive fire.";
		};
	};
	class TimeTrials
	{
		displayName = "Time Trials";
		logicalOrder = 22;
		class CheckPoints
		{
			arguments[] = {};
			description = "You will need to move through all Check Points in a trial for the best possible time.";
			displayName = "Check Points";
			image = "\a3\ui_f\data\gui\cfg\hints\Checkpoints_ca.paa";
			logicalOrder = 2;
			tip = "However, you are allowed to miss Check Points at the cost of a time penalty.%1%1Memorize the trial by training often. Some trials support immediate looping when you cross the start right after the final Check Point.";
		};
		class HelicopterCheckPoints
		{
			arguments[] = {};
			description = "There are several special Check Point features: timeouts, on-ground requirements and omni-directionality.";
			displayName = "Helicopter Check Points";
			image = "\a3\ui_f\data\gui\cfg\hints\Checkpoints_ca.paa";
			logicalOrder = 5;
			tip = "Timeouts require you to keep your vehicle within the Check Point area until the timer runs out. This could be to force a hover or landing.%1%1Normal Check Points require you to fly through them from the front to the back. Some Check Points don't have this requirement and can be entered and exited from any direction.%1%1Some Check Points require you to be on the ground (landed). Note that you don't necessarily need to be standing still!";
		};
		class HelicopterSlingLoading
		{
			arguments[] = {};
			description = "In some Time Trials you will be asked to sling load objects from one Check Point to another.";
			displayName = "Helicopter Sling Loading";
			image = "\A3\Ui_f\data\GUI\Cfg\Hints\SlingLoading_ca.paa";
			logicalOrder = 6;
			tip = "When arriving at such a Check Point, you will be instructed to pick up the object.%1%1Check Points between the pick-up and drop-off require you to still be carrying the object.%1%1At the drop-off you can earn a bonus for dropping the object as close to the center of the Check Point as possible. A penalty is incurred for damage to the object.";
		};
		class HelicopterTips
		{
			arguments[] = {};
			description = "Consider flying Helicopter Time Trials using the Advanced Flight Model available in the game's options. You may shave off a few extra seconds.";
			displayName = "Helicopter Tips";
			image = "\a3\ui_f\data\gui\cfg\hints\Chat_ca.paa";
			logicalOrder = 7;
			tip = "In helicopters especially, don't fly directly towards a Check Point. Plan your path, anticipate the orientation of the next Check Point and line up in advance.%1%1You will not be able to always fly your helicopter at maximum speed. Take inertia into account, burn off excess speed in time and please, mind the ground!";
		};
		class TimeTrials
		{
			arguments[] = {};
			description = "Time Trials are a series of vehicle-based races against the clock.";
			displayName = "Time Trials";
			image = "\a3\ui_f\data\gui\cfg\hints\Time_trials_ca.paa";
			logicalOrder = 1;
			tip = "Competitors navigate a string of Check Points in order to reach the finish line as quickly as possible.%1%1They refine their skills in the areas of vehicle handling, cornering, navigation, memorization and split-second decision-making.";
		};
		class Timing
		{
			arguments[] = {};
			description = "A competitor's raw time is the amount of time it takes to reach the final Check Point.";
			displayName = "Timing";
			image = "\a3\ui_f\data\gui\cfg\hints\Timing_ca.paa";
			logicalOrder = 3;
			tip = "Time may be added when you are penalized, for missing a Check Point for example.%1%1Competitors compete for medals: beat the bronze, silver and gold times. Sometimes a special time is available.";
		};
		class Tips
		{
			arguments[] = {};
			description = "Time Trials are not intended to be mastered in one attempt. Study the trials, find shortcuts and repeat them often.";
			displayName = "Tips";
			image = "\a3\ui_f\data\gui\cfg\hints\Chat_ca.paa";
			logicalOrder = 4;
			tip = "Sometimes it is better to accept missing a Check Point, taking the penalty, and moving on.%1%1You can disable the on-screen Check Point indicators via difficulty flag 'HUD waypoints info'.";
		};
	};
	class UAV
	{
		displayName = "UAV";
		logicalOrder = 15;
		class AVCamera
		{
			arguments[] = {{{"UavViewToggle"}}};
			description = "When you are connected to a UAV or remote designator, you can activate a live feed.%1%2Use %11 to toggle the live camera feed on and off.";
			displayName = "AV Camera";
			image = "\A3\Ui_f\data\GUI\Cfg\Hints\Thirdperson_ca.paa";
			logicalOrder = 11;
			tip = "";
		};
		class Backpack
		{
			arguments[] = {{"str_a3_cfgvehicles_uav_01_base0"}, {{"nextAction"}}, {{"prevAction"}}, {"str_a3_disassemble"}, {"str_a3_assemble"}};
			description = "Big UAVs are too heavy for carrying, but small ones like %3%11%4 can be disassembled into a backpack.%1%2Open the action menu with %12 or %13.%1%2Select %3%14%4.<br/>Backpack with a UAV has no capacity to carry anything else.<br/><br/>You need to be wearing a UAV backpack for assembling a UAV from a backpack. To do so, just select %3%15%4 in action menu.";
			displayName = "UAV in a Backpack";
			image = "\a3\ui_f\data\gui\cfg\hints\Gear_ca.paa";
			logicalOrder = 5;
			class UAVAssembling_sub
			{
				arguments[] = {{{"nextAction"}}};
				description = "Small UAVs can be assembled directly from a backpack.%1%2Open the action menu with %11%1%2Select %3Assemble (UAV name)%4";
				displayName = "UAV Assembling";
				dlc = -1;
				image = "\a3\ui_f\data\gui\cfg\hints\Gear_ca.paa";
				tip = "The UAV will appear at your feet. Use the Action menu while pointing at the UAV to connect it to your terminal.";
			};
		};
		class Basics
		{
			arguments[] = {{"PLACEHOLDER"}};
			description = "UAVs (Unmanned Autonomous Vehicle) are remotely controlled vehicles which operate without a human crew onboard. They can be used for many applications where it may be inconvenient, dangerous, or impossible to have a human operator present. Each one of them has its own internal computing unit and is able to make certain decisions by itself (transport from one place to another, enemy/friendly recognition, etc.).";
			displayName = "UAV Basics";
			image = "\a3\ui_f\data\gui\cfg\hints\UAVBasic_ca.paa";
			logicalOrder = 1;
		};
		class Connection
		{
			arguments[] = {{"str_a3_cfgweapons_items_uavterminal"}, {{"nextAction"}}, {"str_useract_uav_openuavterminal"}, {{"optics"}}, {"str_useract_uav_uavterminalmakeconnection"}, {"str_a3_rscdisplayavterminal_avt_takecontrol"}};
			description = "To take control over a friendly autonomous vehicle, you must have a %3%11%4 item assigned in the GPS slot in your inventory. Connection to a UAV can be created in the UAV Terminal.%1%2Open the action menu via %12, select %3%13%4.%1%2Select the UAV from the top-left drop down menu.%1%2Take control of a driver or a gunner position using buttons on the top-right.%1%2Use the action menu to switch between positions or to release UAV controls.%1There can be only one UAV connected to your terminal at any time.";
			displayName = "UAV Connection";
			image = "\a3\ui_f\data\gui\cfg\hints\UAVConncetion_ca.paa";
			logicalOrder = 3;
		};
		class DrivingGround
		{
			arguments[] = {{{"CarForward"}}, {{"CarBack"}}, {{"CarLeft"}}, {{"CarRight"}}, {{"CarSlowForward"}}, {{"CarFastForward"}}, {{"personView"}}, {{"LookAround"}}};
			description = "In ground vehicles%1%2%11 and %12 are used for acceleration.%1%2%13 and %14 are used for steering.%1%2You can also use %15 or %16 for a steady slow speed or fast forward acceleration.";
			displayName = "Driving – Ground";
			image = "\a3\ui_f\data\gui\cfg\hints\Driving_ca.paa";
			logicalOrder = 6;
			tip = "Third person view and free look might be particularly useful when driving.%1%2Switch to the third person camera with %17.%1%2Or use free look with %18.";
		};
		class PilotingFixedWing
		{
			arguments[] = {{{"HeliBack"}}, {{"HeliForward"}}, {{"HeliUp"}}, {{"HeliDown"}}, {{"AirBankLeft"}}, {{"AirBankRight"}}, {{"HeliRudderLeft"}}, {{"HeliRudderRight"}}, {{"FlapsDown"}}, {{"FlapsUp"}}, {{"LandGear"}}};
			description = "%2Control the nose of the aircraft with %11 for up and %12 for down.%1%2Hold %13 to increase throttle, hold %14 to decrease throttle.%1%2Bank left/right with %15/%16.%1%2Use the rudder %17 and %18 to steer left/right.";
			displayName = "Piloting – Fixed-wing";
			image = "\a3\ui_f\data\gui\cfg\hints\PilotingFixedwing_ca.paa";
			logicalOrder = 8;
			tip = "Other specific actions include:%1%2Flaps - extend %19 and retract %20 %1%2%21 for landing gear";
		};
		class PilotingQuadrotor
		{
			arguments[] = {{{"HeliCollectiveRaise"}}, {{"HeliCollectiveLower"}}, {{"heliCyclicLeft"}}, {{"heliCyclicRight"}}, {{"HeliCyclicForward"}}, {{"HeliCyclicBack"}}, {{"HeliRudderLeft"}}, {{"HeliRudderRight"}}, {{"AutoHover"}}};
			description = "%1%2Start the engine by pressing %11.%1%2Hold %11 to increase throttle and gain altitude.%1%2Hold %12 to decrease throttle and lose altitude.%1%2Maneuver the UAV sideways with %13 and %14.%1%2Pull the nose down %15 to gain speed and up %16 to lose it.%1%2Use %17 and %18 to rotate left/right.%1%2Use the %3mouse%4 to control the UAV smoothly.%1%2Use %3Auto-hover %19%4 to stabilize the UAV.";
			displayName = "Piloting – Quadrotor";
			image = "\a3\ui_f\data\gui\cfg\hints\PilotingQuadrotor_ca.paa";
			logicalOrder = 7;
			tip = "";
			class UAVManualControl_sub
			{
				arguments[] = {{{"nextAction"}}};
				description = "You can manually control either the UAV's movement or its turret after you've connected it to your terminal:%1%2Open the action menu with %11%1%2Select %3Take UAV controls%4 or %3Take UAV turret controls%4%1%1You can switch control any time while controlling a UAV via the action menu.";
				displayName = "UAV Manual Control";
				dlc = -1;
				image = "\a3\ui_f\data\gui\cfg\hints\UAVConncetion_ca.paa";
				tip = "You can also use the buttons on the right side of the UAV Terminal to switch between movement and turret control.";
			};
		};
		class RemoteCameras
		{
			arguments[] = {{{"TurretElevationUp"}}, {{"TurretElevationDown"}}};
			description = "Remote designators are portable devices used for reconnaissance, target marking, and maintaining the security of strategic areas or objects. Their handling and assembly is similar to the UAVs.%1%2Use %11 and %12 to raise and lower the designator.";
			displayName = "Remote Designators";
			image = "\A3\Ui_f\data\GUI\Cfg\Hints\RemoteDesignators_ca.paa";
			logicalOrder = 10;
			tip = "";
		};
		class Targets
		{
			arguments[] = {{{"vehLockTargets"}}};
			description = "Guided missiles are only useful when a target is locked. Press %11 to lock the target. Normal targets have a square sign <img size='1' %5  image='A3\Ui_f\data\GUI\Cfg\Hints\Cursor_known_target_ca.paa' />, the locked target has an additional diamond mark <img size='1' %5  image='A3\Ui_f\data\GUI\Cfg\Hints\Cursor_lock_target_ca.paa' />. To switch to the next target, press %11 again.";
			displayName = "Targets";
			image = "\a3\ui_f\data\gui\cfg\hints\Target_ca.paa";
			logicalOrder = 9;
			tip = "A dashed diamond tells you that the target is moving outside the seeker's field of regard.";
		};
		class Terminal
		{
			arguments[] = {{"str_a3_cfgweapons_items_uavterminal"}, {"str_useract_uav_openuavterminal"}, {{"fire"}}, {{"optics"}}};
			description = "Access to a UAV Terminal is available only if you have item %3%11%4 in your inventory. To open a UAV Terminal select %3%12%4 in the action menu.<br/><br/>The UAV Terminal is a powerful tool where you can:%1%2See all friendly UAVs nearby.%1%2Create a connection between your terminal and non-controlled UAVs: use %14 on UAV.%1%2See basic information about the connected UAV.%1%2See camera output from the connected UAV.%1%2Set tasks/waypoints for the connected UAV: %13 in map.%1%2Set waypoint parameters for the UAV: %14 on waypoint.%1%2UAV terminal can be also used as a GPS module.";
			displayName = "UAV Terminal";
			image = "\a3\ui_f\data\gui\cfg\hints\Map_ca.paa";
			logicalOrder = 4;
		};
		class Types
		{
			arguments[] = {{"str_a3_cfgvehicles_ugv_01_base0"}, {"str_a3_cfgvehicles_uav_01_base0"}, {"str_a3_cfgvehicles_uav_02_base0"}};
			description = "There are three basic types of UAVs.<br/><br/>The middle sized ground UAV %3%11%4 can be used mainly as reconnaissance or fire support. Thanks to its transport ability, this UAV can help units to move away from a dangerous place.<br/><br/>The main purpose of a small quadrotor %3%12%4 is reconnaissance. It doesn't carry any weapons but is equipped with a laser designator for marking targets. Small size and excellent maneuverability are also its big advantages.<br/><br/>A bigger fixed-wing %3%13%4 can carry air-to-ground missiles or bombs and is also equipped with a laser designator. Greyhawk can be used as an attack unit, or in case of the unarmed variant, as a reconnaissance unit. The big advantage of this UAV in comparison with common planes is the ability to land at almost any spot without trees or bigger rocks.";
			displayName = "UAV Types";
			image = "\a3\ui_f\data\gui\cfg\hints\UAVTypes_ca.paa";
			logicalOrder = 2;
		};
	};
	class Vehicle
	{
		displayName = "Vehicle Controls";
		logicalOrder = 12;
		class AirplaneDamage
		{
			arguments[] = {};
			description = "While military aircraft can strike fast, hard and precisely, they are relatively fragile.%1Several hits into their engines, flaps, or elevators will make the aircraft hard or impossible to operate, forcing their crew to return for repairs or bail out from their uncontrollable machine.";
			displayName = "Extended Airplane Hitpoints";
			image = "\a3\ui_f_jets\data\gui\cfg\hints\AircraftDamage_ca.paa";
			tip = "";
		};
		class Bombs
		{
			arguments[] = {{{"LockTarget"}}};
			description = "A bomb is an airdropped explosive munition. After releasing, it follows a ballistic path. Where the bomb will land, if released at the given moment, is shown by a continuously-computed impact point (CCIP) in your HUD - a small crosshair or circle with a dot.%1%1Guided bombs can make corrections to this path to achieve better precision or to strike a moving target. At certain altitude a laser guided bomb (LGB) will automatically home in on the nearest laser spot (marked by your own targeting camera or friendly JTAC).%1 1. Press %11 to mark a lased spot.%1 2. Maneuver to bring the CCIP and marked laser together.%1 3. Release the bomb once the icons overlap or are reasonably close together.";
			displayName = "Bombs";
			image = "\a3\ui_f_jets\data\gui\cfg\hints\WeaponsBombs_ca.paa";
			tip = "You can try dropping a bomb, so it detonates on the reverse side of a salient feature, such as a hill. If a small X appears inside the CCIP cross in your optics, then it shows that the bomb will land beyond the terrain in front of you.";
		};
		class CarrierLanding
		{
			arguments[] = {};
			description = "Landing on the short deck of a ship is challenging.%1<t></t>1. Follow the standard landing approach.%1<t></t>2. Deploy %3Tailhook%4 via action menu.%1<t></t>3. ILS may help you maintain the needed precision and stability.%1<t></t>4. Line up the aircraft behind the ship at about 10 degrees right of the ships line.%1<t></t>5. Aim for the field of three wires which is located about 20 percent of the way down the length of the landing deck.%1<t></t>6. Be ready to go full throttle if you miss the wires. Go around and try again.";
			displayName = "Carrier Landing";
			image = "\a3\ui_f_jets\data\gui\cfg\hints\AircraftLandCarrier_ca.paa";
			tip = "Practice touch-and-go landings on the deck. This will familiarize you with the procedure and will enable you to perfect your approaches.";
		};
		class CarrierTakeOff
		{
			arguments[] = {};
			description = "To take-off from the carrier:%1<t></t>1. Align the aircraft with one of the four catapults.%1<t></t>2. Use %3Launch%4 in the action menu when aligned with the direction of the launch catapult.";
			displayName = "Carrier Take-off";
			image = "\a3\ui_f_jets\data\gui\cfg\hints\AircraftTakeOffCarrier_ca.paa";
			tip = "";
		};
		class Commanding
		{
			arguments[] = {{{"DefaultAction"}}, {{"switchGunnerWeapon"}}, {{"heliManualFire"}}, {{"optics"}}, {{"MoveForward"}}, {{"MoveBack"}}, {{"TurnLeft"}}, {{"TurnRight"}}, {{"CarFastForward"}}, {{"CarSlowForward"}}, {{"fire"}}};
			description = "The vehicle commander issues orders to the driver and gunner. Commands are displayed in the message log for crew members to carry them out.%1%2Issue move commands by pressing move buttons %15, %16, %17, %18.%1%2Control acceleration with %19, %20.%1%2Issue fire commands by pointing at a target and pressing %21 (or %11 if you don't control any weapon yourself).";
			displayName = "Commanding";
			image = "\a3\ui_f\data\gui\cfg\hints\VehicleCommanding_CA.paa";
			logicalOrder = 6;
			tip = "%2Switch the gunner's weapons with %12.%1%2The commander is able to acquire %3manual fire%4 - %13.%1%2This is best combined with the optics view %14.%1%Other important commands for the driver:%1%2%3[1-1-1]%4 Stay in formation. The driver follows your commanding vehicle, maintaining the formation. %1%2%3[1-1-9]%4 Move to the next waypoint. The driver moves to your current waypoint.";
		};
		class Controls
		{
			arguments[] = {{{"HeliBack"}}, {{"HeliForward"}}, {{"HeliUp"}}, {{"HeliDown"}}, {{"AirBankLeft"}}, {{"AirBankRight"}}, {{"HeliRudderLeft"}}, {{"HeliRudderRight"}}, {{"FlapsDown"}}, {{"FlapsUp"}}, {{"LandGear"}}};
			description = "Aircraft maneuver on three axes: Pitch, Roll, and Yaw. %1%2Pitch or nose up %11 and nose down %12. %1%2Roll or bank left %15 and right %16. %1%2Yaw or steer left %17 and right %18. %1%2Hold %13 to increase throttle, hold %14 to decrease throttle.";
			displayName = "Airplane Controls";
			image = "\a3\ui_f\data\gui\cfg\hints\Miss_icon_ca.paa";
			logicalOrder = 16;
			tip = "Other specific actions include:%1%2Flaps - extend %19 and retract %20 %1%2%21 for landing gear";
		};
		class Countermeasures
		{
			arguments[] = {{{"launchCM"}}, {{"nextCM"}}};
			description = "As a commander or a pilot, you are in control of a vehicle's countermeasures. Press %11 to launch countermeasures when you see an incoming missile or when a missile lock warning appears.";
			displayName = "Countermeasures";
			image = "\a3\ui_f\data\gui\cfg\hints\Countermeasures_CA.paa";
			logicalOrder = 8;
			tip = "%2Press %12 to switch the countermeasure fire-mode";
		};
		class CountermeasuresSimple
		{
			arguments[] = {{{"launchCM"}}};
			description = "As a commander or a pilot, you are in control of a vehicle's countermeasures. Press %11 to launch countermeasures when you see an incoming missile or when a missile lock warning appears.";
			displayName = "Countermeasures";
			dlc = -1;
			image = "\a3\ui_f\data\gui\cfg\hints\Countermeasures_CA.paa";
			tip = "";
		};
		class Datalink
		{
			arguments[] = {{{"ListRightVehicleDisplay"}}, "format [""<img size='1.5' color = '%1' align='left' image = '%2'/>"",(((configfile >> 'CfgInGameUI' >> 'Cursor' >> 'Targeting' >> 'MarkedTarget' >> 'color') call bis_fnc_colorConfigToRGBA) call bis_fnc_colorRGBAtoHTML),getText(configfile >> 'CfgInGameUI' >> 'Cursor' >> 'Targeting' >> 'MarkedTarget' >> 'texture')]"};
			description = "Optionally a vehicle can be set up to broadcast its position and/or targets tracked by its sensors.%1%2Go to the Sensor Display %11 to see targets shared by others.%1%2Targets acquired only via datalink have hollow symbols.%1%2These targets can't be marked until acquired by one's own sensors.";
			displayName = "Datalink";
			image = "\a3\ui_f_jets\data\gui\cfg\hints\SensorsDataLink_ca.paa";
			tip = "";
		};
		class Driving
		{
			arguments[] = {{{"CarForward"}}, {{"CarBack"}}, {{"CarLeft"}}, {{"CarRight"}}, {{"CarSlowForward"}}, {{"CarFastForward"}}, {{"personView"}}, {{"LookAround"}}};
			description = "In ground vehicles%1%2%11 and %12 are used for acceleration.%1%2%13 and %14 are used for steering.%1%2You can also use %15 or %16 for a steady slow speed or fast forward acceleration.";
			displayName = "Driving";
			image = "\a3\ui_f\data\gui\cfg\hints\Driving_ca.paa";
			logicalOrder = 4;
			tip = "Third person view and free look might be particularly useful when driving.%1%2Switch to the third person camera with %17.%1%2Or use free look with %18.";
		};
		class Entering
		{
			arguments[] = {{{"Action"}}, {{"NextAction"}}};
			description = "To enter a vehicle:%1%2Point the cursor at it until the icon <img size='1' %5  image='A3\Ui_f\data\IGUI\Cfg\Actions\getindriver_ca.paa' /> appears.%1%2Use default action %11.%1Alternatively:%1%2Open the action menu %12.%1%2Select %3Enter%4.%1You will be given a seat associated with a role in the vehicle. For example enter as a driver to drive, enter as a gunner to shoot. Certain roles might not be available for some vehicles.";
			displayName = "Entering a Vehicle";
			image = "\a3\ui_f\data\gui\cfg\hints\Entering_ca.paa";
			logicalOrder = 1;
			tip = "Different roles in a vehicle have a different action icon indicating the default action <img size='1'  %5 image='A3\Ui_f\data\IGUI\Cfg\Actions\getindriver_ca.paa' /> <img size='1' %5  image='A3\Ui_f\data\IGUI\Cfg\Actions\getincargo_ca.paa' /> <img size='1' %5  image='A3\Ui_f\data\IGUI\Cfg\Actions\getincommander_ca.paa' /> <img size='1' %5  image='A3\Ui_f\data\IGUI\Cfg\Actions\getingunner_ca.paa' />. Use them to quickly determine the role you are taking by entering the vehicle.";
			class EnteringVehicle_sub
			{
				arguments[] = {{{"Action"}}};
				description = "To enter a vehicle:%1%2Point the cursor at it until the icon <img size='1'   image='a3\UI_F\data\IGUI\Cfg\Actions\getindriver_ca.paa' /> appears.%1%2Use default action %11.";
				displayName = "Entering a Vehicle";
				dlc = -1;
				image = "\a3\ui_f\data\gui\cfg\hints\Entering_ca.paa";
				tip = "";
			};
		};
		class Exit
		{
			arguments[] = {{{"GetOut"}}, {{"Eject"}}};
			description = "There are two ways to exit a vehicle (accessible also from the action menu).%1%2%11 or %3Get out%4 <img size='1' %5 image='A3\Ui_f\data\IGUI\Cfg\Actions\getout_ca.paa' /> stands for a proper exit, when the vehicle is at a full stop and it's safe to get out. %1%2%12 or %3Eject%4 <img size='1' %5 image='A3\Ui_f\data\IGUI\Cfg\Actions\eject_ca.paa' /> is an immediate, emergency exit from a moving or flying vehicle and can lead to injury or death.";
			displayName = "Get out or Eject";
			image = "\a3\ui_f\data\gui\cfg\hints\VehicleGetOut_CA.paa";
			logicalOrder = 3;
			tip = "If your aircraft is not equipped with an ejection system, make sure you have grabbed your parachute!";
		};
		class FCS
		{
			arguments[] = {{{"LockTarget"}}};
			description = "More advanced weapons have a Fire Control System (FCS). It provides weapon zeroing and automatically calculates lead time for your target.%1%2Aim at your target and press %11 to lase it and log its speed and range.%1%2Keep tracking the target under your crosshair.%1%2Shoot when 'RDY' appears on the screen.%1If the target suddenly changes speed or direction, you need to start over.";
			displayName = "Fire Control Systems";
			image = "a3\Ui_f\data\GUI\Cfg\Hints\Zeroing_ca.paa";
			tip = "%2Does the measured speed and range seem valid? If not, start over.%1%2GND SCT indicates terrain reflections.%1%2Keep in mind that the FCS may not provide a fire solution for targets that are too far away or are moving too fast.";
		};
		class Firing
		{
			arguments[] = {{{"DefaultAction"}}, {{"ZoomIn"}}, {{"opticsTemp"}}, {{"nextWeapon"}}, {{"NextAction"}}, {{"lockTarget"}}, {{"vehLockTargets"}}, {{"ZoomOut"}}, {{"SwitchWeaponGrp1"}}, {{"SwitchWeaponGrp2"}}, {{"SwitchWeaponGrp3"}}, {{"SwitchWeaponGrp4"}}};
			description = "Weapons in vehicles work similarly to infantry weapons.%1%2Fire with %11.%1%2Zoom with %12, %18.%1%2Go to optics with %13.%1%2Switch weapons and fire-modes with %14 or %19,%20%,%21,%22.%1%2Reload different ammo via action menu %15.";
			displayName = "Weapons";
			image = "\a3\ui_f\data\gui\cfg\hints\Firing_ca.paa";
			logicalOrder = 12;
			tip = "Some vehicles have sensors or guided weapons. To mark a target, point at it and press %16 or use %17 to cycle targets acquired by sensors.";
		};
		class HUDs
		{
			arguments[] = {"format [""<img size='0.5' color = '%1' align='left' image = 'A3\Ui_F_Jets\Data\GUI\Cfg\Hints\icon_text\Hint_waterline_ca.paa'/>"",([0.15, 1.0, 0.15, 1.0] call bis_fnc_colorRGBAtoHTML)]", "format [""<img size='1' color = '%1' align='left' image = 'A3\Ui_F_Jets\Data\GUI\Cfg\Hints\icon_text\Hint_FPV_ca.paa'/>"",([0.15, 1.0, 0.15, 1.0] call bis_fnc_colorRGBAtoHTML)]", "format [""<img size='1' color = '%1' align='left' image = 'A3\Ui_F_Jets\Data\GUI\Cfg\Hints\icon_text\Hint_tgtbox_ca.paa'/>"",([0.15, 1.0, 0.15, 1.0] call bis_fnc_colorRGBAtoHTML)]"};
			description = "Head-up displays provide you with critical flight and weapons data as you look outside. The most important elements are: %1%2Airspeed%1%2Altitude%1%2Heading%1%2Pitch%1%2%11 Boresight or waterline, showing where the aircraft is pointing%1%2%12 Flight path vector (FPV), showing where the aircraft is going%1%2Climb rate%1%2Weapon and ammo count%1%2%13 Target box%1%2Threat and stall warnings";
			displayName = "HUDs and HMDs";
			image = "\a3\ui_f_jets\data\gui\cfg\hints\AircraftHUD_ca.paa";
			tip = "";
		};
		class ILSLanding
		{
			arguments[] = {};
			description = "To help you land at night or in adverse conditions, your HUD will enter the ILS mode when the landing gear is down. Providing you with:%1%2An outline of the runway to see where you're going to land.%1%2Glideslope deviation guides; fly them to form a cross at the center of the HUD.%1%2Angle-of-attack indication next to your flight path vector.";
			displayName = "ILS Approach";
			image = "\a3\ui_f_jets\data\gui\cfg\hints\ILSApproach_ca.paa";
			tip = "";
		};
		class Landing
		{
			arguments[] = {{{"HeliDown"}}, {{"landGear"}}, {{"FlapsDown"}}, {{"AirPlaneBrake"}}};
			description = "A good approach is the key to a good landing.%1<t></t>1. Line up your airplane with the runway and adjust the throttle %11 to slow down to 1/3 above your stall speed.%1<t></t>2. Keep your nose slightly down, lower the landing gear %12 and extend the flaps %13.%1<t></t>3. Pick a point on the runway (e.g. numbers) and reference it to your cockpit. Try to keep it in the same position throughout the descent.%1<t></t>4. If the point is moving up, you are undershooting and need to increase power. If it's moving down, reduce power or extend flaps further.%1<t></t>5. Once you're above the runway, reduce power to idle, gently pull up the nose and wait until the wheels touch the runway. Then brake %14.";
			displayName = "Airplane Landing";
			image = "\a3\ui_f\data\gui\cfg\hints\Miss_icon_ca.paa";
			logicalOrder = 20;
			tip = "You can always use the %3auto landing%4 option from the action menu. The computer will then take over and execute the landing procedure.";
		};
		class LandingGear
		{
			arguments[] = {{{"LandGear"}}, {{"LandGearUp"}}};
			description = "In an aircraft equipped with foldable landing gear:%1%1%2Deploy the gear with %11%1%2Retract the gear with %12";
			displayName = "Landing Gear";
			image = "\a3\ui_f\data\gui\cfg\hints\Use_ca.paa";
			logicalOrder = 21;
			tip = "Make sure to retract the landing gear after take-off so it won't affect the aerodynamics of your aircraft.";
		};
		class Loadout
		{
			arguments[] = {{{"LockTarget"}}};
			description = "A vehicle can come with different weapon loadouts and ammunition; bombs, rockets, missiles, cannon - all are interchangeable and can be assigned to fit the vehicle's role in any given mission. Check your weapon stores at the beginning of a mission, before engaging the enemy.";
			displayName = "Dynamic Vehicle Loadouts";
			image = "\a3\ui_f_jets\data\gui\cfg\hints\AircraftFireControlSystems_ca.paa";
			tip = "";
		};
		class Radar
		{
			arguments[] = {{{"ActiveSensorsToggle"}}};
			description = "A Radar can detect and track targets beyond visual range and in adverse conditions. Radars can usually detect targets in the sky at longer distances than those in ground clutter. Some Radars may not be able to pick targets close to the ground at all unless those targets are moving fast enough.%1%2Press %11 to switch Radar on/off.%1Radar-guided missiles require the Radar to be switched on.";
			displayName = "Radar";
			image = "\a3\ui_f\data\gui\cfg\hints\Radar_ca.paa";
			logicalOrder = 7;
			tip = "An active Radar can reveal you to an enemy equipped with a passive Radar or RWR.";
		};
		class SDV
		{
			arguments[] = {{{"submarineForward"}}, {{"submarineBack"}}, {{"submarineLeft"}}, {{"submarineRight"}}, {{"SubmarineUp"}}, {{"submarineDown"}}, {{"zoomTemp"}}};
			description = "%1%2Operate the SDV with %11, %12, %13, %14.%1%2Use %15 and %16 to ascend and descend.%1Access the action menu for %3periscope commands%4. When the periscope is up, its view is available via commander's optics %17.";
			displayName = "SDV";
			image = "\a3\ui_f\data\gui\cfg\hints\SDV_ca.paa";
			logicalOrder = 22;
			tip = "";
		};
		class Seats
		{
			arguments[] = {{{"NextAction"}}, {{"opticsTemp"}}};
			description = "While in a vehicle, you can change your seat and role:%1%2Open the action menu %11.%1%2Select a different position.%1Usually you can choose from driver, commander and gunner. When in a vehicle, remember to use the optics %12. They differ for each role and can provide a significant advantage.";
			displayName = "Switching Seats";
			image = "\a3\ui_f\data\gui\cfg\hints\Seats_ca.paa";
			logicalOrder = 2;
			tip = "Some positions might not be available in certain vehicles. Switching is not available while in the air or in similar conditions.";
		};
		class SensorDisplay
		{
			arguments[] = {"format [""<img size='1.5' color = '%1' align='left' image = '%2'/>"",(((configfile >> 'RscCustomInfoSensors' >> 'targets' >> 'colorUnknown') call bis_fnc_colorConfigToRGBA) call bis_fnc_colorRGBAtoHTML),getText(configfile >> 'RscCustomInfoSensors' >> 'targets' >> 'iconUnknownAir')]", "format [""<img size='1.5' color = '%1' align='left' image = '%2'/>"",(((configfile >> 'RscCustomInfoSensors' >> 'targets' >> 'colorUnknown') call bis_fnc_colorConfigToRGBA) call bis_fnc_colorRGBAtoHTML),getText(configfile >> 'RscCustomInfoSensors' >> 'targets' >> 'iconUnknownGround')]", "format [""<img size='1.5' color = '%1' align='left' image = '%2'/>"",(((configfile >> 'RscCustomInfoSensors' >> 'targets' >> 'colorUnknown') call bis_fnc_colorConfigToRGBA) call bis_fnc_colorRGBAtoHTML),getText(configfile >> 'RscCustomInfoSensors' >> 'targets' >> 'iconUnknownMan')]", "format [""<img size='1' color = '%1' align='left' image = '%2'/><img size='1' color = '%1' align='left' image = '%3'/>"",(((configfile >> 'RscCustomInfoSensors' >> 'targets' >> 'colorFriendly') call bis_fnc_colorConfigToRGBA) call bis_fnc_colorRGBAtoHTML),getText(configfile >> 'RscCustomInfoSensors' >> 'targets' >> 'iconFriendlyAir'),getText(configfile >> 'RscCustomInfoSensors' >> 'targets' >> 'iconFriendlyGround')]", "format [""<img size='1' color = '%1' align='left' image = '%2'/><img size='1' color = '%1' align='left' image = '%3'/>"",(((configfile >> 'RscCustomInfoSensors' >> 'targets' >> 'colorUnknown') call bis_fnc_colorConfigToRGBA) call bis_fnc_colorRGBAtoHTML),getText(configfile >> 'RscCustomInfoSensors' >> 'targets' >> 'iconUnknownAir'),getText(configfile >> 'RscCustomInfoSensors' >> 'targets' >> 'iconUnknownGround')]", "format [""<img size='1' color = '%1' align='left' image = '%2'/><img size='1' color = '%1' align='left' image = '%3'/>"",(((configfile >> 'RscCustomInfoSensors' >> 'targets' >> 'colorEnemy') call bis_fnc_colorConfigToRGBA) call bis_fnc_colorRGBAtoHTML),getText(configfile >> 'RscCustomInfoSensors' >> 'targets' >> 'iconEnemyAir'),getText(configfile >> 'RscCustomInfoSensors' >> 'targets' >> 'iconEnemyGround')]", "format [""<img size='1' color = '%1' align='left' image = '%2'/>"",(((configfile >> 'RscCustomInfoSensors' >> 'threats' >> 'colorMissile') call bis_fnc_colorConfigToRGBA) call bis_fnc_colorRGBAtoHTML),getText(configfile >> 'RscCustomInfoSensors' >> 'threats' >> 'iconmissile')]", "format [""<img size='1' color = '%1' align='left' image = '%2'/>"",(((configfile >> 'RscCustomInfoSensors' >> 'targets' >> 'colorMarked') call bis_fnc_colorConfigToRGBA) call bis_fnc_colorRGBAtoHTML),getText(configfile >> 'RscCustomInfoSensors' >> 'targets' >> 'iconMarkedTarget')]", "format [""<img size='1' color = '%1' align='left' image = '%2'/>"",(((configfile >> 'RscCustomInfoSensors' >> 'targets' >> 'colorAssigned') call bis_fnc_colorConfigToRGBA) call bis_fnc_colorRGBAtoHTML),getText(configfile >> 'RscCustomInfoSensors' >> 'targets' >> 'iconAssignedTarget')]", "format [""<img size='1' color = '%1' align='left' image = 'A3\Ui_F_Jets\Data\GUI\Cfg\Hints\icon_text\Hint_threatSector_ca.paa'/>"",(((configfile >> 'RscCustomInfoSensors' >> 'threats' >> 'colorLocking') call bis_fnc_colorConfigToRGBA) call bis_fnc_colorRGBAtoHTML), getText(configfile >> 'RscCustomInfoSensors' >> 'threats' >> 'iconsector')]", "format [""<img size='1' color = '%1' align='left' image = '%2'/>"",(((configfile >> 'RscCustomInfoSensors' >> 'targets' >> 'colorEnemy') call bis_fnc_colorConfigToRGBA) call bis_fnc_colorRGBAtoHTML),getText(configfile >> 'RscCustomInfoSensors' >> 'targets' >> 'iconLaserTarget')]", "format [""<img size='1' color = '%1' align='left' image = '%2'/>"",(((configfile >> 'RscCustomInfoSensors' >> 'targets' >> 'colorEnemy') call bis_fnc_colorConfigToRGBA) call bis_fnc_colorRGBAtoHTML),getText(configfile >> 'RscCustomInfoSensors' >> 'targets' >> 'iconNVTarget')]", "format [""<img size='1' color = '%1' align='left' image = '%2'/>"",(((configfile >> 'RscCustomInfoSensors' >> 'targets' >> 'colorUnknown') call bis_fnc_colorConfigToRGBA) call bis_fnc_colorRGBAtoHTML),getText(configfile >> 'RscCustomInfoSensors' >> 'targets' >> 'iconActiveSensor')]"};
			description = "Sensor Display (SENS) shows synthesized target and threat information from all the vehicle's sensors from a top-down perspective.%1%2Dashed sectors indicate sensor ranges, flashing sectors indicate threats%1%2%11 Air%1%2%12 Ground%1%2%13 Footmobile%1%2%14 Friendly (same-side)%1%2%15 Ambiguous%1%2%16 Confirmed hostile%1%2%17 Incoming missile%1%2%18 Marked target%1%2%19 Assigned target%1%2%20 Threat sector %1%2%21 %22 Laser and IR strobe %1%2%23 Target with an active Radar";
			displayName = "Sensor Display";
			image = "A3\Ui_F_Jets\Data\GUI\Cfg\Hints\SensorsRadar_ca.paa";
			tip = "";
		};
		class Sensors
		{
			arguments[] = {{{"ListRightVehicleDisplay"}}, {{"vehLockTargets"}}, {{"LockTarget"}}};
			description = "Some vehicles have sensors to detect and track targets automatically.%1<t></t>1. Switch to Sensor Display %11.%1<t></t>2. Press %12 to mark next target.%1<t></t>3. You can also use %13 to mark a target under your cursor.%1<t></t>4. Marked target is indicated on both the display and in the scene.%1Any guided weapon you select will now try to lock onto this target. Some unguided weapons may provide a lead computation.";
			displayName = "Sensor Overhaul";
			image = "\a3\ui_f_jets\data\gui\cfg\hints\Sensors_ca.paa";
			tip = "Different sensors have different ranges and conditions for successful target tracking.";
		};
		class SensorTypes
		{
			arguments[] = {};
			description = "Vehicle sensor suites often consist of several individual sensor types. Each sensor has different properties and indicators on the Sensor Display.%1%2Infrared (red) - detects heated targets.%1%2Visual (yellow) - detects any visible target, becomes less effective in the dark.%1%2Active Radar (cyan) - detects any target beyond visual range. Can be switched on/off.%1%2Passive Radar (green) - detects activated Radars at max. twice their own range.";
			displayName = "Sensor Types";
			image = "\a3\ui_f_jets\data\gui\cfg\hints\SensorsTypes_ca.paa";
			tip = "%1%2Laser and Strobe - detect targets that are lased or designated by IR grenades.%1%2Footmobiles - special sensor for detection of human targets, used primarily on small UAVs.";
		};
		class TakeOff
		{
			arguments[] = {{{"HeliCollectiveRaise"}}, {{"HeliCollectiveLower"}}, {{"heliCyclicLeft"}}, {{"heliCyclicRight"}}, {{"HeliCyclicForward"}}, {{"HeliCyclicBack"}}, {{"HeliRudderLeft"}}, {{"HeliRudderRight"}}};
			description = "%1%2Start the engine by pressing %11.%1%2Hold %11 to increase throttle and gain altitude.%1%2Hold %12 to decrease throttle and lose altitude.%1%2Maneuver the helicopter sideways with %13 and %14.%1%2Pull the nose down %15 to gain speed and up %16 to lose it.%1%2Use the rudder %17 and %18 to rotate left/right.%1%2Use the %3mouse%4 to control the helicopter smoothly.";
			displayName = "Helicopters Take-off";
			image = "\a3\ui_f\data\gui\cfg\hints\TakeOff_ca.paa";
			logicalOrder = 17;
			tip = "";
		};
		class TakeOffPlane
		{
			arguments[] = {{{"autoHover"}}, {{"FlapsDown"}}, {{"FlapsUp"}}};
			description = "To take-off vertically in a VTOL airplane%1<t></t>1. Use %11 to enter Manual Vectoring.%1<t></t>2. Press %12 several times to adjust the vectoring angle to 90°.%1<t></t>3. Gently increase throttle until you start climbing.%1<t></t>4. Once high enough, use %13 to gradually transition into forward flight.";
			displayName = "VTOL Take-off";
			image = "\a3\ui_f\data\gui\cfg\hints\Vtol_take_off_ca.paa";
			logicalOrder = 19;
			tip = "You can also perform a standard or shortened take-off with vectoring at a lower angle. Note that to prevent collisions some VTOLs may not allow you to fully level the vectoring while still close to the ground.";
		};
		class TakeOffPlaneFixedWing
		{
			arguments[] = {{{"HeliUp"}}, {{"HeliBack"}}, {{"FlapsDown"}}};
			description = "Standard horizontal take-off for a fixed-wing aircraft follows this procedure:%1%2Increase thrust with %11 to bring the engine to full power.%1%2When speed is high enough, pull the nose up with %12.";
			displayName = "Airplane Take-off";
			image = "\a3\ui_f\data\gui\cfg\hints\Miss_icon_ca.paa";
			logicalOrder = 18;
			tip = "You can use flaps %13 to take off in lower speed and decrease ground roll by increasing lift and drag.";
		};
		class TargetingCamera
		{
			arguments[] = {{{"PilotCamera"}}, {{"vehLockTurretView"}}, {{"LookCenter"}}};
			description = "Some aircraft are equipped with high-magnification cameras with day, night and thermal modes.%1<t></t>1. Use %11 to switch to and from the targeting pod.%1<t></t>2. To stabilize the camera on an area press %12.%1<t></t>3. To re-center the camera to boresight or a marked target press %13.";
			displayName = "Targeting Camera";
			image = "\a3\ui_f_jets\data\gui\cfg\hints\AircraftTgtCamera_ca.paa";
			tip = "Coupled with a laser designator, these cameras can be used to 'paint' targets for your weaponry or for other friendly units.";
		};
		class VehicGuided
		{
			arguments[] = {{{"lockTarget"}}, {{"vehLockTargets"}}, "format [""<img size='1.5' color = '%1' align='left' image = '%2'/>"",(((configfile >> 'CfgInGameUI' >> 'Cursor' >> 'Targeting' >> 'Seeker' >> 'color') call bis_fnc_colorConfigToRGBA) call bis_fnc_colorRGBAtoHTML),getText(configfile >> 'CfgInGameUI' >> 'Cursor' >> 'Targeting' >> 'Seeker' >> 'texture')]", "format [""<img size='1.5' color = '%1' align='left' image = '%2'/>"",(((configfile >> 'CfgInGameUI' >> 'Cursor' >> 'Targeting' >> 'Seeker' >> 'color') call bis_fnc_colorConfigToRGBA) call bis_fnc_colorRGBAtoHTML),getText(configfile >> 'CfgInGameUI' >> 'Cursor' >> 'Targeting' >> 'Seeker' >> 'texture')]", "format [""<img size='1.5' color = '%1' align='left' image = '%2'/>"",(((configfile >> 'CfgInGameUI' >> 'Cursor' >> 'Targeting' >> 'SeekerLocked' >> 'color') call bis_fnc_colorConfigToRGBA) call bis_fnc_colorRGBAtoHTML),getText(configfile >> 'CfgInGameUI' >> 'Cursor' >> 'Targeting' >> 'SeekerLocked' >> 'texture')]", "format [""<img size='1.5' color = '%1' align='left' image = '%2'/>"",(((configfile >> 'CfgInGameUI' >> 'Cursor' >> 'Targeting' >> 'SeekerNoLos' >> 'color') call bis_fnc_colorConfigToRGBA) call bis_fnc_colorRGBAtoHTML),getText(configfile >> 'CfgInGameUI' >> 'Cursor' >> 'Targeting' >> 'SeekerNoLos' >> 'texture')]"};
			description = "Guided missiles require a target lock before launch.%1<t></t>1. Mark a target - point at it and press %11 (or %12 for a next sensor target).%1<t></t>2. Split diamond %13 appears once target is in the seeker's field of regard.%1<t></t>3. Get the target inside missile's Launch Acceptability Region (LAR). This is indicated by a beeping sound and a converging diamond %14.%1<t></t>4. Keep it steady until there's a full diamond %15 and a high-pitch tone.%1<t></t>5. SHOOT!";
			displayName = "Guided Missiles";
			image = "\a3\ui_f\data\gui\cfg\hints\Miss_icon_ca.paa";
			logicalOrder = 15;
			tip = "A dashed diamond tells you that the target is moving outside the seeker's field of regard.";
		};
		class VehicleAmmo
		{
			arguments[] = {{{"NextAction"}}};
			description = "Some vehicles come with different ammunition types for varying uses. To change the ammunition type:%1%2Open the action menu %11.%1%2Select the option to %3reload%4 the desired ammunition type.";
			displayName = "Changing Ammunition";
			image = "\a3\ui_f\data\gui\cfg\hints\VehicleAmmo_ca.paa";
			logicalOrder = 13;
			tip = "";
		};
		class VehicleGUI
		{
			arguments[] = {};
			description = "In the top left corner is the vehicle info panel. It displays the name of the vehicle, damage indications <img size='0.7' image='a3\UI_F\data\IGUI\Cfg\HitZones\eng.paa' /> <img size='0.7' image='a3\UI_F\data\IGUI\Cfg\HitZones\hull.paa' /> <img size='0.7' image='a3\UI_F\data\IGUI\Cfg\HitZones\whl.paa' />, fuel bar and current speed, heading and altitude.";
			displayName = "Vehicle Info";
			image = "\a3\ui_f\data\gui\cfg\hints\VehicleGUI_ca.paa";
			logicalOrder = 5;
			tip = "Damage indicators are split between vehicle hull, instruments, tracks, wheel, engine or rotors. Damage is indicated by a color. Once the icon turns red, the corresponding part of the vehicle is no longer functional. If a gas tank is damaged, the vehicle might even explode.";
		};
		class VehicleRearm
		{
			arguments[] = {};
			description = "Vehicles are <t %5>rearmed</t> or <t %5>refueled</t> anytime they happen to be in the vicinity of a <t %5>fuel truck</t> or <t %5>repair truck</t>. Similar static objects, such as vehicle ammo containers or fuel pods, may also offer this service.";
			displayName = "Refuel and Rearm";
			image = "\a3\ui_f\data\gui\cfg\hints\Miss_icon_ca.paa";
			logicalOrder = 9;
			tip = "The rearm and refuel processes are automated, but may take some time - don't move away from the source!";
		};
		class VehicleRepair
		{
			arguments[] = {};
			description = "You have to be an %3Engineer%4 or a %3Repair Specialist%4 and have a %3Toolkit%4 to repair a vehicle. If you meet these conditions, then a %3repair%4 option will become available near damaged vehicles.";
			displayName = "Repairs";
			image = "\a3\ui_f\data\gui\cfg\hints\VehicleRepair_CA.paa";
			logicalOrder = 10;
			tip = "A vehicle will be repaired automatically when in the proximity of a repair truck or an APC.";
		};
		class VehicleTurrets
		{
			arguments[] = {};
			description = "Turrets mounted on vehicles are usually operated by a gunner who can either target and engage enemies independently, or can be assigned a specific target by the vehicle commander or pilot.";
			displayName = "Vehicle Turrets";
			image = "\a3\ui_f\data\gui\cfg\hints\Use_ca.paa";
			logicalOrder = 11;
			tip = "";
		};
		class VehicUnguided
		{
			arguments[] = {};
			description = "Unguided rockets are fired directly in front of the vehicle. As a pilot, you have to adjust vehicle position or angle to change the aim of unguided rockets.";
			displayName = "Unguided Rockets";
			image = "\a3\ui_f\data\gui\cfg\hints\VehicUnguided_ca.paa";
			logicalOrder = 14;
			tip = "A small floating crosshair (CCIP) in the HUD will tell you where the rocket will land if it is fired at that exact moment.";
		};
	};
	class VehicleList
	{
		category = "Assets";
		displayName = "Vehicles Info";
		logicalOrder = 26;
		class Angara
		{
			arguments[] = {};
			description = "A licensed variant of the original Russian design operated by the elite of CSAT armored forces. The tank is equipped with a high velocity, high-accuracy 125mm cannon, a 7.62mm coaxial machinegun, and a 12.7mm HMG in a remote turret. The crew is located in an armored capsule in the hull, improving survivability and eliminating one of the weaknesses of older tank designs. The disadvantage is its technical complexity and cost, resulting in low production numbers. Two main variants are currently in use - the standard T-140 and the T-140K, a 'commander' variant which exchanges the HMG for a 30mm autocannon. In addition, it also provides additional radios and sensors for platoon and company leaders.";
			displayName = "T-140 Angara";
			dlc = 798390;
			image = "\a3\ui_f\data\gui\cfg\hints\Miss_icon_ca.paa";
			tip = "";
			vehicle = "O_MBT_04_cannon_F";
		};
		class AssaultBoat
		{
			arguments[] = {{"str_a3_cfgvehicles_boat_armed_01_base0"}, {"str_a3_cfgvehicles_boat_armed_01_base_library0"}};
			description = "%12";
			displayName = "%11";
			image = "\a3\ui_f\data\gui\cfg\hints\Miss_icon_ca.paa";
			logicalOrder = 34;
			tip = "";
			vehicle = "B_Boat_Armed_01_minigun_F";
		};
		class blueforApcTrack
		{
			arguments[] = {{"str_a3_cfgvehicles_b_apc_tracked_01_base0"}, {"str_a3_cfgvehicles_apc_tracked_01_base_library0"}};
			description = "%12";
			displayName = "%11";
			image = "\a3\ui_f\data\gui\cfg\hints\Miss_icon_ca.paa";
			logicalOrder = 16;
			tip = "";
			vehicle = "B_APC_Tracked_01_rcws_F";
		};
		class blueforApcWheel
		{
			arguments[] = {{"str_a3_cfgvehicles_b_apc_wheeled_01_cannon"}, {"str_a3_cfgvehicles_apc_wheeled_01_library0"}};
			description = "%12";
			displayName = "%11";
			image = "\a3\ui_f\data\gui\cfg\hints\Miss_icon_ca.paa";
			logicalOrder = 6;
			tip = "";
			vehicle = "B_APC_Wheeled_01_cannon_F";
		};
		class blueforFixedwing
		{
			arguments[] = {{"str_a3_cfgvehicles_b_plane_cas_01_f0"}, {"str_a3_cfgvehicles_b_plane_cas_01_f_library0"}};
			description = "%12";
			displayName = "%11";
			image = "\a3\ui_f\data\gui\cfg\hints\Miss_icon_ca.paa";
			logicalOrder = 3;
			modelScale = 0.65;
			tip = "";
			vehicle = "B_Plane_CAS_01_F";
		};
		class bluforAttackHeli
		{
			arguments[] = {{"str_a3_cfgvehicles_b_heli_attack_01"}, {"STR_A3_Heli_Attack_01_lib"}};
			description = "%12";
			displayName = "%11";
			image = "\a3\ui_f\data\gui\cfg\hints\Miss_icon_ca.paa";
			logicalOrder = 5;
			modelScale = 0.75;
			tip = "";
			vehicle = "B_Heli_Attack_01_F";
		};
		class bluforHeavyArty
		{
			arguments[] = {{"str_a3_cfgvehicles_mbt_01_arty_base0"}, {"str_a3_cfgvehicles_mbt_01_arty_base_library0"}};
			description = "%12";
			displayName = "%11";
			image = "\a3\ui_f\data\gui\cfg\hints\Miss_icon_ca.paa";
			logicalOrder = 21;
			tip = "";
			vehicle = "B_MBT_01_arty_F";
		};
		class bluforLightHeli
		{
			arguments[] = {{"str_a3_cfgvehicles_heli_light_01_base0"}, {"STR_A3_CFGVEHICLES_B_HELI_LIGHT_01_ARMORY1"}};
			description = "%12";
			displayName = "%11";
			image = "\a3\ui_f\data\gui\cfg\hints\Miss_icon_ca.paa";
			logicalOrder = 24;
			tip = "";
			vehicle = "B_Heli_Light_01_F";
		};
		class bluforMbt
		{
			arguments[] = {{"STR_A3_CfgVehicles_MBT_01_cannon_base_F0"}, {"STR_A3_CfgVehicles_MBT_01_cannon_base_F_Library0"}};
			description = "%12";
			displayName = "%11";
			image = "\a3\ui_f\data\gui\cfg\hints\Miss_icon_ca.paa";
			logicalOrder = 19;
			tip = "";
			vehicle = "B_MBT_01_cannon_F";
		};
		class bluforMbtUP
		{
			arguments[] = {{"STR_A3_CfgVehicles_B_MBT_01_TUSK_F0"}, {"STR_A3_sfgvehicles_b_mbt_01_tusk_f_library"}};
			description = "%12";
			displayName = "%11";
			image = "\a3\ui_f\data\gui\cfg\hints\Miss_icon_ca.paa";
			logicalOrder = 20;
			tip = "";
			vehicle = "B_MBT_01_TUSK_F";
		};
		class bluforMrap
		{
			arguments[] = {{"str_a3_cfgvehicles_mrap_01_base0"}, {"str_a3_cfgvehicles_mrap_01_base_library0"}};
			description = "%12";
			displayName = "%11";
			image = "\a3\ui_f\data\gui\cfg\hints\Miss_icon_ca.paa";
			logicalOrder = 15;
			tip = "";
			vehicle = "B_MRAP_01_hmg_F";
		};
		class bluforRocketArty
		{
			arguments[] = {{"STR_A3_CfgVehicles_B_MBT_01_MLRS0"}, {"STR_A3_CfgVehicles_B_MBT_01_MLRS_Library0"}};
			description = "%12";
			displayName = "%11";
			image = "\a3\ui_f\data\gui\cfg\hints\Miss_icon_ca.paa";
			logicalOrder = 22;
			tip = "";
			vehicle = "B_MBT_01_mlrs_F";
		};
		class bluforSquadTransport
		{
			arguments[] = {{"str_a3_cfgvehicles_b_truck_01"}, {"str_a3_cfgvehicles_truck_01_base_library0"}};
			description = "%12";
			displayName = "%11";
			image = "\a3\ui_f\data\gui\cfg\hints\Miss_icon_ca.paa";
			logicalOrder = 14;
			tip = "";
			vehicle = "B_Truck_01_mover_F";
		};
		class bluforTransportHeli
		{
			arguments[] = {{"str_a3_cfgvehicles_heli_transport_01_base_f0"}, {"str_a3_cfgvehicles_heli_transport_01_base_f_armory0"}};
			description = "%12";
			displayName = "%11";
			image = "\a3\ui_f\data\gui\cfg\hints\Miss_icon_ca.paa";
			logicalOrder = 42;
			modelScale = 0.55;
			tip = "";
			vehicle = "B_Heli_Transport_01_F";
		};
		class Boat_Transport_02
		{
			arguments[] = {{"STR_A3_CfgVehicles_Boat_Transport_02_base_F0"}, {"STR_A3_CfgVehicles_Boat_Transport_02_base_F_Library0"}};
			description = "%12";
			displayName = "%11";
			dlc = 395180;
			image = "\a3\ui_f\data\gui\cfg\hints\Miss_icon_ca.paa";
			logicalOrder = 32;
			tip = "";
			vehicle = "C_Boat_Transport_02_F";
		};
		class gaApcTracked
		{
			arguments[] = {{"str_a3_cfgvehicles_i_apc_tracked_03_cannon_f0"}, {"str_a3_cfgvehicles_apc_tracked_03_base_f_library0"}};
			description = "%12";
			displayName = "%11";
			image = "\a3\ui_f\data\gui\cfg\hints\Miss_icon_ca.paa";
			logicalOrder = 12;
			tip = "";
			vehicle = "I_APC_tracked_03_cannon_F";
		};
		class gaApcWheel
		{
			arguments[] = {{"str_a3_cfgvehicles_apc_wheeled_03_wapc0"}, {"str_a3_cfgvehicles_apc_wheeled_03_wapc_library0"}};
			description = "%12";
			displayName = "%11";
			image = "\a3\ui_f\data\gui\cfg\hints\Miss_icon_ca.paa";
			logicalOrder = 4;
			tip = "";
			vehicle = "I_APC_Wheeled_03_cannon_F";
		};
		class gaFixedwing
		{
			arguments[] = {{"str_a3_cfgvehicles_o_plane_fighter_03"}, {"str_a3_cfgvehicles_o_plane_fighter_03_cas_library0"}};
			description = "%12";
			displayName = "%11";
			image = "\a3\ui_f\data\gui\cfg\hints\Miss_icon_ca.paa";
			logicalOrder = 2;
			modelScale = 0.75;
			tip = "";
			vehicle = "I_Plane_Fighter_03_CAS_F";
		};
		class gaLightHeli
		{
			arguments[] = {{"str_a3_cfgvehicles_i_heli_light_03_f0"}, {"str_a3_cfgvehicles_i_heli_light_03_f_armory0"}};
			description = "%12";
			displayName = "%11";
			image = "\a3\ui_f\data\gui\cfg\hints\Miss_icon_ca.paa";
			logicalOrder = 43;
			modelScale = 0.65;
			tip = "";
			vehicle = "I_Heli_light_03_F";
		};
		class galightTransportCar
		{
			arguments[] = {{"str_a3_cfgvehicles_car_base0"}, {"STR_A3_CfgVehicles_Car_Base_Library0"}};
			description = "%12";
			displayName = "%11";
			image = "\a3\ui_f\data\gui\cfg\hints\Miss_icon_ca.paa";
			logicalOrder = 13;
			tip = "";
			vehicle = "C_Hatchback_01_F";
		};
		class galightTransportOffroad
		{
			arguments[] = {{"str_a3_cfgvehicles_offroad_base0"}, {"str_a3_cfgvehicles_offroad_base_library0"}};
			description = "%12";
			displayName = "%11";
			image = "\a3\ui_f\data\gui\cfg\hints\Miss_icon_ca.paa";
			logicalOrder = 30;
			tip = "";
			vehicle = "B_G_Offroad_01_armed_F";
		};
		class galightTransportSuv
		{
			arguments[] = {{"str_a3_cfgvehicles_suv_base0"}, {"str_a3_cfgvehicles_suv_base_library0"}};
			description = "%12";
			displayName = "%11";
			image = "\a3\ui_f\data\gui\cfg\hints\Miss_icon_ca.paa";
			logicalOrder = 36;
			tip = "";
			vehicle = "C_SUV_01_F";
		};
		class gaMbt
		{
			arguments[] = {{"str_a3_cfgvehicles_i_mbt_03_cannon_f0"}, {"str_a3_cfgvehicles_mbt_03_base_f_library0"}};
			description = "%12";
			displayName = "%11";
			image = "\a3\ui_f\data\gui\cfg\hints\Miss_icon_ca.paa";
			logicalOrder = 23;
			tip = "";
			vehicle = "I_MBT_03_cannon_F";
		};
		class gaMrap
		{
			arguments[] = {{"str_a3_cfgvehicles_mrap_03_base0"}, {"str_a3_cfgvehicles_mrap_03_base_library0"}};
			description = "%12";
			displayName = "%11";
			image = "\a3\ui_f\data\gui\cfg\hints\Miss_icon_ca.paa";
			logicalOrder = 35;
			tip = "";
			vehicle = "I_MRAP_03_hmg_F";
		};
		class gaTransport
		{
			arguments[] = {{"str_a3_cfgvehicles_heli_transport_02_Base0"}, {"str_a3_heli_transport_02_lib"}};
			description = "%12";
			displayName = "%11";
			image = "\a3\ui_f\data\gui\cfg\hints\Miss_icon_ca.paa";
			logicalOrder = 10;
			modelScale = 0.6;
			tip = "";
			vehicle = "I_Heli_Transport_02_F";
		};
		class GoKart
		{
			arguments[] = {{"STR_A3_dlc_karts_fm_headline_kart"}, {"STR_A3_CFGVEHICLES_KART_01_BASE_F_LIBRARY0"}};
			description = "%12";
			displayName = "%11";
			dlc = 288520;
			image = "\a3\ui_f\data\gui\cfg\hints\Miss_icon_ca.paa";
			logicalOrder = 18;
			modelScale = 2;
			tip = "";
			vehicle = "C_Kart_01_F";
		};
		class Huron
		{
			arguments[] = {{"STR_A3_HURON_TITLE_F0"}, {"STR_A3_HURON_DESC_F0"}};
			description = "%12";
			displayName = "%11";
			dlc = 304380;
			image = "\a3\ui_f\data\gui\cfg\hints\Miss_icon_ca.paa";
			logicalOrder = 11;
			modelScale = 0.4;
			tip = "";
			vehicle = "B_Heli_Transport_03_F";
		};
		class LightTransportBoat
		{
			arguments[] = {{"STR_A3_CfgVehicles_Rubber_duck_base0"}, {"str_a3_cfgvehicles_rubber_duck_base_library0"}};
			description = "%12";
			displayName = "%11";
			image = "\a3\ui_f\data\gui\cfg\hints\Miss_icon_ca.paa";
			logicalOrder = 8;
			modelScale = 2;
			tip = "";
			vehicle = "B_Boat_Transport_01_F";
		};
		class LSV_01
		{
			arguments[] = {{"STR_A3_CfgVehicles_LSV_01_base_F0"}, {"STR_A3_CfgVehicles_LSV_01_base_F_Library0"}};
			description = "%12";
			displayName = "%11";
			dlc = 395180;
			image = "\a3\ui_f\data\gui\cfg\hints\Miss_icon_ca.paa";
			logicalOrder = 31;
			modelScale = 1.5;
			tip = "";
			vehicle = "B_LSV_01_armed_F";
		};
		class LSV_02
		{
			arguments[] = {{"STR_A3_CfgVehicles_LSV_02_base_F0"}, {"STR_A3_CfgVehicles_LSV_02_base_F_Library0"}};
			description = "%12";
			displayName = "%11";
			dlc = 395180;
			image = "\a3\ui_f\data\gui\cfg\hints\Miss_icon_ca.paa";
			logicalOrder = 31;
			modelScale = 1.5;
			tip = "";
			vehicle = "O_LSV_02_armed_F";
		};
		class miscTransportQuad
		{
			arguments[] = {{"str_a3_cfgvehicles_quadbike_base_f0"}, {"str_a3_cfgvehicles_quadbike_base_f_library0"}};
			description = "%12";
			displayName = "%11";
			image = "\a3\ui_f\data\gui\cfg\hints\Miss_icon_ca.paa";
			logicalOrder = 32;
			modelScale = 2;
			tip = "";
			vehicle = "B_Quadbike_01_F";
		};
		class motorBoat
		{
			arguments[] = {{"str_a3_cfgvehicles_boat_civil_01_base0"}, {"str_a3_cfgvehicles_boat_civil_01_base_library0"}};
			description = "%12";
			displayName = "%11";
			image = "\a3\ui_f\data\gui\cfg\hints\Miss_icon_ca.paa";
			logicalOrder = 27;
			tip = "";
			vehicle = "C_Boat_Civil_01_F";
		};
		class Nyx
		{
			arguments[] = {};
			description = "The AWC 300 Nyx family consists of a number of light, fast and agile combat vehicles used by the AAF. While small and lightly armored, the Nyx can surprise enemies by striking from unexpected positions with its decent and accurate firepower. The anti-tank and air-defense variants are equipped with IR guided missiles and a 12.7mm HMG. The strike variant uses a 20mm autocannon and a 7.62mm coaxial machinegun. The recon variant is unarmed, but uses its radar and sensors to detect nearby threats and pass target data to friendly units via datalink. It can also paint targets with its laser designator, which is located on a telescopic mount.";
			displayName = "AWC 300 Nyx";
			dlc = 798390;
			image = "\a3\ui_f\data\gui\cfg\hints\Miss_icon_ca.paa";
			tip = "";
			vehicle = "I_LT_01_AT_F";
		};
		class Offroad_02
		{
			arguments[] = {{"STR_A3_CfgVehicles_Offroad_02_base_F0"}, {"STR_A3_CfgVehicles_Offroad_02_base_F_Library0"}};
			description = "%12";
			displayName = "%11";
			dlc = 395180;
			image = "\a3\ui_f\data\gui\cfg\hints\Miss_icon_ca.paa";
			logicalOrder = 22;
			modelScale = 1.5;
			tip = "";
			vehicle = "C_Offroad_02_unarmed_F";
		};
		class opfor_apc_wheel
		{
			arguments[] = {{"str_a3_cfgvehicles_o_apc_wheeled_02_rcws"}, {"str_a3_CfgVehicles_apc_wheeled_02_library0"}};
			description = "%12";
			displayName = "%11";
			image = "\a3\ui_f\data\gui\cfg\hints\Miss_icon_ca.paa";
			logicalOrder = 29;
			tip = "";
			vehicle = "O_APC_Wheeled_02_rcws_F";
		};
		class opforApcTrack
		{
			arguments[] = {{"STR_A3_CfgVehicles_APC_Tracked_02_0"}, {"STR_A3_CfgVehicles_APC_Tracked_02_lib0"}};
			description = "%12";
			displayName = "%11";
			image = "\a3\ui_f\data\gui\cfg\hints\Miss_icon_ca.paa";
			logicalOrder = 9;
			tip = "";
			vehicle = "O_APC_Tracked_02_cannon_F";
		};
		class opforAttackHeli
		{
			arguments[] = {{"str_a3_cfgvehicles_heli_attack_02_base0"}, {"str_a3_cfgvehicles_heli_attack_02_base_library0"}};
			description = "%12";
			displayName = "%11";
			image = "\a3\ui_f\data\gui\cfg\hints\Miss_icon_ca.paa";
			logicalOrder = 26;
			modelScale = 0.65;
			tip = "";
			vehicle = "O_Heli_Attack_02_F";
		};
		class opforFixedwing
		{
			arguments[] = {{"str_a3_cfgvehicles_o_plane_cas_02_f0"}, {"str_a3_cfgvehicles_o_plane_cas_02_f_library0"}};
			description = "%12";
			displayName = "%11";
			image = "\a3\ui_f\data\gui\cfg\hints\Miss_icon_ca.paa";
			logicalOrder = 39;
			modelScale = 0.65;
			tip = "";
			vehicle = "O_Plane_CAS_02_F";
		};
		class opforHeavyArty
		{
			arguments[] = {{"str_a3_cfgvehicles_MBT_02_Arty_base0"}, {"STR_A3_CfgVehicles_MBT_02_Arty_Library0"}};
			description = "%12";
			displayName = "%11";
			image = "\a3\ui_f\data\gui\cfg\hints\Miss_icon_ca.paa";
			logicalOrder = 1;
			tip = "";
			vehicle = "O_MBT_02_arty_F";
		};
		class opforLightHeli
		{
			arguments[] = {{"str_a3_cfgvehicles_heli_light_02_base_f0"}, {"STR_A3_cfgvehicles_heli_light_02_lib"}};
			description = "%12";
			displayName = "%11";
			image = "\a3\ui_f\data\gui\cfg\hints\Miss_icon_ca.paa";
			logicalOrder = 31;
			modelScale = 0.75;
			tip = "";
			vehicle = "O_Heli_Light_02_F";
		};
		class opforMbt
		{
			arguments[] = {{"str_a3_cfgvehicles_mbt_02_base0"}, {"str_a3_cfgvehicles_mbt_02_base_library0"}};
			description = "%12";
			displayName = "%11";
			image = "\a3\ui_f\data\gui\cfg\hints\Miss_icon_ca.paa";
			logicalOrder = 37;
			tip = "";
			vehicle = "O_MBT_02_cannon_F";
		};
		class opforMrap
		{
			arguments[] = {{"str_A3_cfgvehicles_o_mrap_02_f0"}, {"STR_A3_CfgVehicles_mrap_02_Base_Library0"}};
			description = "%12";
			displayName = "%11";
			image = "\a3\ui_f\data\gui\cfg\hints\Miss_icon_ca.paa";
			logicalOrder = 17;
			tip = "";
			vehicle = "O_MRAP_02_hmg_F";
		};
		class opforSquadTransport
		{
			arguments[] = {{"str_a3_cfgvehicles_o_truck_03_transport_f0"}, {"str_a3_cfgvehicles_truck_03_base_f_library0"}};
			description = "%12";
			displayName = "%11";
			image = "\a3\ui_f\data\gui\cfg\hints\Miss_icon_ca.paa";
			logicalOrder = 38;
			tip = "";
			vehicle = "O_Truck_03_transport_F";
		};
		class Plane_Civil_01
		{
			arguments[] = {{"STR_A3_CfgVehicles_I_C_Plane_Civil_01_F0"}, {"STR_A3_CfgVehicles_Plane_Civil_01_base_F_Library0"}};
			description = "%12";
			displayName = "%11";
			dlc = 395180;
			image = "\a3\ui_f\data\gui\cfg\hints\Miss_icon_ca.paa";
			logicalOrder = 9;
			modelScale = 1;
			tip = "";
			vehicle = "C_Plane_Civil_01_F";
		};
		class Plane_Fighter_01
		{
			arguments[] = {{"STR_A3_Fighter_01_name"}, {"STR_A3_Fighter_01_armory_description"}};
			description = "%12";
			displayName = "%11";
			dlc = 601670;
			image = "\a3\ui_f\data\gui\cfg\hints\Miss_icon_ca.paa";
			logicalOrder = 11;
			modelScale = 0.4;
			tip = "";
			vehicle = "B_Plane_Fighter_01_F";
		};
		class Plane_Fighter_02
		{
			arguments[] = {{"STR_A3_Fighter_02_name"}, {"STR_A3_Fighter_02_armory_description"}};
			description = "%12";
			displayName = "%11";
			dlc = 601670;
			image = "\a3\ui_f\data\gui\cfg\hints\Miss_icon_ca.paa";
			logicalOrder = 39;
			modelScale = 0.4;
			tip = "";
			vehicle = "O_Plane_Fighter_02_F";
		};
		class Plane_Fighter_04
		{
			arguments[] = {{"STR_A3_Fighter_04_name"}, {"STR_A3_Fighter_04_armory_description"}};
			description = "%12";
			displayName = "%11";
			dlc = 601670;
			image = "\a3\ui_f\data\gui\cfg\hints\Miss_icon_ca.paa";
			logicalOrder = 2;
			modelScale = 0.4;
			tip = "";
			vehicle = "I_Plane_Fighter_04_F";
		};
		class Rhino
		{
			arguments[] = {};
			description = "The Rhino MGS is the latest wheeled tank destroyer in NATO armored forces, designed for easy transportation to crisis regions. Its lightweight 120mm main cannon can use all conventional rounds including MARUK ATGMs, which increase its effective range to 8 km. The vehicle's secondary weapon is the .338 magnum SPMG coaxial machinegun. The price paid for the Rhino's great mobility and firepower is its light armor and low supplies of ammo and fuel. The 'UP' version is equipped with a remotely operated 12.7mm HMG and improved protection, provided by a cage and reactive armor. However, with this setup, it's too bulky to fit into many transport vehicles, including the Blackfish VTOL.";
			displayName = "Rhino MGS";
			dlc = 798390;
			image = "\a3\ui_f\data\gui\cfg\hints\Miss_icon_ca.paa";
			tip = "";
			vehicle = "B_AFV_Wheeled_01_cannon_F";
		};
		class Scooter_Transport_01
		{
			arguments[] = {{"STR_A3_CfgVehicles_Scooter_Transport_01_base_F0"}, {"STR_A3_CfgVehicles_Scooter_Transport_01_base_F_Library0"}};
			description = "%12";
			displayName = "%11";
			dlc = 395180;
			image = "\a3\ui_f\data\gui\cfg\hints\Miss_icon_ca.paa";
			logicalOrder = 42;
			modelScale = 1.5;
			tip = "";
			vehicle = "C_Scooter_Transport_01_F";
		};
		class SDVinfo
		{
			arguments[] = {{"str_a3_cfgvehicles_sdv_base0"}, {"str_a3_cfgvehicles_sdv_base_library0"}};
			description = "%12";
			displayName = "%11";
			image = "\a3\ui_f\data\gui\cfg\hints\Miss_icon_ca.paa";
			logicalOrder = 33;
			modelScale = 1.25;
			tip = "";
			vehicle = "B_SDV_01_F";
		};
		class squadTransport
		{
			arguments[] = {{"str_a3_cfgvehicles_c_truck_02_dump0"}, {"str_a3_cfgvehicles_truck_02_lib"}};
			description = "%12";
			displayName = "%11";
			image = "\a3\ui_f\data\gui\cfg\hints\Miss_icon_ca.paa";
			logicalOrder = 44;
			tip = "";
			vehicle = "O_Truck_02_transport_F";
		};
		class Taru
		{
			arguments[] = {{"STR_A3_TARU_TITLE_F0"}, {"STR_A3_TARU_DESC_F0"}};
			description = "%12";
			displayName = "%11";
			dlc = 304380;
			image = "\a3\ui_f\data\gui\cfg\hints\Miss_icon_ca.paa";
			logicalOrder = 25;
			modelScale = 0.6;
			tip = "";
			vehicle = "O_Heli_Transport_04_F";
		};
		class Tractor_01
		{
			arguments[] = {{"STR_A3_C_CfgMods_Enoch_CB_Tractor_name"}, {"STR_A3_C_CfgMods_Enoch_CB_Tractor_desc"}};
			description = "%12";
			displayName = "%11";
			dlc = 1.02179e+006;
			image = "\a3\ui_f\data\gui\cfg\hints\Miss_icon_ca.paa";
			logicalOrder = 39;
			modelScale = 1;
			tip = "";
			vehicle = "C_Tractor_01_F";
		};
		class Truck
		{
			arguments[] = {{"str_a3_cfgvehicles_c_van_01"}, {"str_a3_cfgvehicles_van_01_base_library0"}};
			description = "%12";
			displayName = "%11";
			image = "\a3\ui_f\data\gui\cfg\hints\Miss_icon_ca.paa";
			logicalOrder = 40;
			tip = "";
			vehicle = "C_Van_01_transport_F";
		};
		class UAV_03
		{
			arguments[] = {{"STR_A3_CfgVehicles_UAV_03_base_F0"}, {"STR_A3_CfgVehicles_UAV_03_base_F_Library0"}};
			description = "%12";
			displayName = "%11";
			dlc = 395180;
			image = "\a3\ui_f\data\gui\cfg\hints\Miss_icon_ca.paa";
			logicalOrder = 27;
			modelScale = 1;
			tip = "";
			vehicle = "B_T_UAV_03_F";
		};
		class UAV_04
		{
			arguments[] = {{"STR_A3_CfgVehicles_UAV_04_base_F0"}, {"STR_A3_CfgVehicles_UAV_04_base_F_Library0"}};
			description = "%12";
			displayName = "%11";
			dlc = 395180;
			image = "\a3\ui_f\data\gui\cfg\hints\Miss_icon_ca.paa";
			logicalOrder = 18;
			modelScale = 1;
			tip = "";
			vehicle = "O_T_UAV_04_CAS_F";
		};
		class UAV_05
		{
			arguments[] = {{"STR_A3_UCAV_05_name"}, {"STR_A3_UCAV_05_armory_description"}};
			description = "%12";
			displayName = "%11";
			dlc = 601670;
			image = "\a3\ui_f\data\gui\cfg\hints\Miss_icon_ca.paa";
			logicalOrder = 40;
			modelScale = 0.4;
			tip = "";
			vehicle = "B_UAV_05_F";
		};
		class UAV_06
		{
			arguments[] = {{"STR_A3_CfgVehicles_C_IDAP_UAV_06_F0"}, {"STR_A3_CfgVehicles_UAV_06_base_F_Library0"}};
			description = "%12";
			displayName = "%11";
			dlc = 571710;
			image = "\a3\ui_f\data\gui\cfg\hints\Miss_icon_ca.paa";
			logicalOrder = 42;
			modelScale = 4;
			tip = "";
			vehicle = "C_IDAP_UAV_06_F";
		};
		class UAV_06_AntiMine
		{
			arguments[] = {{"STR_A3_CfgVehicles_C_IDAP_UAV_06_antimine_F0"}, {"STR_A3_CfgVehicles_UAV_06_antimine_base_F_Library0"}};
			description = "%12";
			displayName = "%11";
			dlc = 571710;
			image = "\a3\ui_f\data\gui\cfg\hints\Miss_icon_ca.paa";
			logicalOrder = 11;
			tip = "";
		};
		class UAVfixedwing
		{
			arguments[] = {{"str_a3_cfgvehicles_uav_02_base0"}, {"str_a3_cfgvehicles_uav_02_base_armory0"}};
			description = "%12";
			displayName = "%11";
			image = "\a3\ui_f\data\gui\cfg\hints\Miss_icon_ca.paa";
			logicalOrder = 28;
			modelScale = 0.75;
			tip = "";
			vehicle = "B_UAV_02_CAS_F";
		};
		class UAVrotor
		{
			arguments[] = {{"str_a3_cfgvehicles_uav_01_base0"}, {"str_a3_cfgvehicles_uav_01_base_library0"}};
			description = "%12";
			displayName = "%11";
			image = "\a3\ui_f\data\gui\cfg\hints\Miss_icon_ca.paa";
			logicalOrder = 7;
			modelScale = 5;
			tip = "";
			vehicle = "B_UAV_01_F";
		};
		class UGV
		{
			arguments[] = {{"str_a3_cfgvehicles_ugv_01_base0"}, {"str_a3_cfgvehicles_ugv_01_base_library0"}};
			description = "%12";
			displayName = "%11";
			image = "\a3\ui_f\data\gui\cfg\hints\Miss_icon_ca.paa";
			logicalOrder = 41;
			modelScale = 1.5;
			tip = "";
			vehicle = "B_UGV_01_rcws_F";
		};
		class UGV_02
		{
			arguments[] = {{"STR_A3_C_CfgMods_Enoch_CB_MiniUGV_name"}, {"STR_A3_C_CfgMods_Enoch_CB_MiniUGV_desc"}};
			description = "%12";
			displayName = "%11";
			dlc = 1.02179e+006;
			image = "\a3\ui_f\data\gui\cfg\hints\Miss_icon_ca.paa";
			logicalOrder = 26;
			modelScale = 4;
			tip = "";
			vehicle = "B_UGV_02_Science_F";
		};
		class Van_02
		{
			arguments[] = {{"STR_A3_Orange_CfgHints_Van_02_displayName"}, {"STR_A3_CfgVehicles_Van_02_Base_Library0"}};
			description = "%12";
			displayName = "%11";
			dlc = 571710;
			image = "\a3\ui_f\data\gui\cfg\hints\Miss_icon_ca.paa";
			logicalOrder = 41;
			modelScale = 1;
			tip = "";
			vehicle = "C_Van_02_transport_F";
		};
		class VTOL_01
		{
			arguments[] = {{"STR_A3_CfgVehicles_VTOL_01_base_F0"}, {"STR_A3_CfgVehicles_VTOL_01_armed_base_F_Library0"}};
			description = "%12";
			displayName = "%11";
			dlc = 395180;
			image = "\a3\ui_f\data\gui\cfg\hints\Miss_icon_ca.paa";
			logicalOrder = 42;
			modelScale = 0.4;
			tip = "";
			vehicle = "B_T_VTOL_01_armed_F";
		};
		class VTOL_02
		{
			arguments[] = {{"STR_A3_CfgVehicles_VTOL_02_base_F0"}, {"STR_A3_CfgVehicles_VTOL_02_infantry_base_F_Library0"}};
			description = "%12";
			displayName = "%11";
			dlc = 395180;
			image = "\a3\ui_f\data\gui\cfg\hints\Miss_icon_ca.paa";
			logicalOrder = 43;
			modelScale = 0.6;
			tip = "";
			vehicle = "O_T_VTOL_02_infantry_F";
		};
	};
	class View
	{
		displayName = "View";
		logicalOrder = 8;
		class Dots
		{
			arguments[] = {};
			description = "Peripheral vision indicators <img size='1' %5  image='A3\UI_F\data\IGUI\Cfg\PeripheralVision\cueTexture_gs.paa' /> represent units outside of your current view. These transparent dots change with the direction and distance of the units.";
			displayName = "Peripheral Vision";
			image = "\a3\ui_f\data\gui\cfg\hints\Pheripheal_vision_ca.paa";
			logicalOrder = 2;
			tip = "On lower difficulties, dots will stick to their units anywhere on the screen, making it easier to distinguish between friends and foes.";
		};
		class NV
		{
			arguments[] = {{{"nightVision"}}};
			description = "To use night vision, you need to have night vision optics mounted on a weapon, helmet or vehicle. %1%2Press %11 to cycle through available view modes.";
			displayName = "Night Vision";
			image = "\a3\ui_f\data\gui\cfg\hints\NV_ca.paa";
			logicalOrder = 4;
			tip = "Use IR grenades and laser pointers to mark objects and locations when using night vision. They will remain unseen by the enemy but soldiers with night vision will be able to see them clearly.";
		};
		class TacticalView
		{
			arguments[] = {{{"tacticalView"}}};
			description = "When you are in command of a squad or vehicle, tap %11 to enable the Tactical view mode. In Tactical view, commanding options from the normal view remain available, but the view is changed to isometric to reveal more of the surroundings and provide better situational awareness. Switch to the Tactical view to better manage your squad in tight situations.";
			displayName = "Tactical View";
			image = "\a3\ui_f\data\gui\cfg\hints\Tactical_view_ca.paa";
			logicalOrder = 3;
			tip = "To use the Tactical view, 3rd Person view must be enabled in your difficulty settings.";
		};
		class Thirdperson
		{
			arguments[] = {{{"personView"}}, {{"LookAround"}}};
			description = "Third person view can give you an increased tactical awareness of your surroundings.%1%2Press %11 to switch the camera between 1st person view and 3rd person view.";
			displayName = "Third Person View";
			image = "\a3\ui_f\data\gui\cfg\hints\Thirdperson_ca.paa";
			logicalOrder = 1;
			tip = "Try using %3Free look%4 – %12 to look around while moving in 3rd person view.";
		};
		class TI
		{
			arguments[] = {{{"nightVision"}}};
			description = "Thermal Imaging can provide a valuable tactical advantage. If you have a TI sight or binoculars:%1%2Use %11 to cycle through available TI views.";
			displayName = "Thermal Imaging";
			image = "\a3\ui_f\data\gui\cfg\hints\Thermal_imaging_ca.paa";
			logicalOrder = 5;
			tip = "TI has two display modes to better distinguish an object from their background: %3White-hot%4 and %3Black-hot%4. Heat emitting objects are displayed in a selected color. The image has contrast at night.";
		};
	};
	class WarlordsUpdate
	{
		category = "Product";
		displayName = "Warlords Update";
		logicalOrder = 15;
		class Warlords
		{
			arguments[] = {{"<img size='9' shadow='0' color='#ffffff' image='A3\Data_F_Warlords\Data\wl_logo_ca.paa' />"}};
			description = "%11%1Warlords is a fully modular and vastly scalable multiplayer mode where players participate in a %3Capture the Island%4 scenario through %3sector control%4. It offers both COOP and PVP gameplay, as well as a Singleplayer experience with AI teammates and opponents.%1%1BLUFOR and OPFOR are tasked with securing sectors guarded by the Independent faction. These sectors form a link between bases and generate Command Points which can then be used as currency to purchase additional troops, hardware, or other strategic advantages, such as fast travel. The first faction to capture the opposing side's starting base wins the match.";
			displayName = "Warlords";
			image = "\a3\ui_f\data\gui\cfg\hints\Commanding_ca.paa";
		};
	};
	class WeaponList
	{
		category = "Assets";
		displayName = "Weapons Info";
		logicalOrder = 24;
		class AAA_System_01
		{
			arguments[] = {{"STR_A3_Phalanx_name"}, {"STR_A3_Phalanx_description"}};
			description = "%12";
			displayName = "%11";
			dlc = 601670;
			image = "\a3\ui_f\data\gui\cfg\hints\Miss_icon_ca.paa";
			logicalOrder = 21;
			tip = "";
			vehicle = "B_AAA_System_01_F";
		};
		class arifle_AK12
		{
			arguments[] = {{"STR_A3_CfgWeapons_arifle_AK12_base_F0"}, {"STR_A3_CfgWeapons_arifle_AK12_base_F_Library0"}};
			description = "%12";
			displayName = "%11";
			dlc = 395180;
			image = "\a3\ui_f\data\gui\cfg\hints\Rifle_ca.paa";
			logicalOrder = 3;
			tip = "";
			weapon = "arifle_AK12_F";
		};
		class arifle_AKM
		{
			arguments[] = {{"STR_A3_CfgWeapons_arifle_AKM_F0"}, {"STR_A3_CfgWeapons_arifle_AKM_base_F_Library0"}};
			description = "%12";
			displayName = "%11";
			dlc = 395180;
			image = "\a3\ui_f\data\gui\cfg\hints\Rifle_ca.paa";
			logicalOrder = 3;
			tip = "";
			weapon = "arifle_AKM_F";
		};
		class arifle_AKS
		{
			arguments[] = {{"STR_A3_CfgWeapons_arifle_AKS_F0"}, {"STR_A3_CfgWeapons_arifle_AKS_base_F_Library0"}};
			description = "%12";
			displayName = "%11";
			dlc = 395180;
			image = "\a3\ui_f\data\gui\cfg\hints\Rifle_ca.paa";
			logicalOrder = 3;
			tip = "";
			weapon = "arifle_AKS_F";
		};
		class arifle_ARX
		{
			arguments[] = {{"STR_A3_CfgWeapons_arifle_ARX_base_F0"}, {"STR_A3_CfgWeapons_arifle_ARX_base_F_Library0"}};
			description = "%12";
			displayName = "%11";
			dlc = 395180;
			image = "\a3\ui_f\data\gui\cfg\hints\Ranged_ca.paa";
			logicalOrder = 32;
			tip = "";
			weapon = "arifle_ARX_blk_F";
		};
		class arifle_CTAR
		{
			arguments[] = {{"STR_A3_CfgWeapons_arifle_CTAR_base_F0"}, {"STR_A3_CfgWeapons_arifle_CTAR_base_F_Library0"}};
			description = "%12";
			displayName = "%11";
			dlc = 395180;
			image = "\a3\ui_f\data\gui\cfg\hints\Rifle_ca.paa";
			logicalOrder = 4;
			tip = "";
			weapon = "arifle_CTAR_blk_F";
		};
		class arifle_SPAR_01
		{
			arguments[] = {{"STR_A3_CfgWeapons_arifle_SPAR_01_base_F0"}, {"STR_A3_CfgWeapons_arifle_SPAR_01_base_F_Library0"}};
			description = "%12";
			displayName = "%11";
			dlc = 395180;
			image = "\a3\ui_f\data\gui\cfg\hints\Rifle_ca.paa";
			logicalOrder = 26;
			tip = "";
			weapon = "arifle_SPAR_01_blk_F";
		};
		class arifle_SPAR_03
		{
			arguments[] = {{"STR_A3_CfgWeapons_arifle_SPAR_03_base_F0"}, {"STR_A3_CfgWeapons_arifle_SPAR_03_base_F_Library0"}};
			description = "%12";
			displayName = "%11";
			dlc = 395180;
			image = "\a3\ui_f\data\gui\cfg\hints\Ranged_ca.paa";
			logicalOrder = 26;
			tip = "";
			weapon = "arifle_SPAR_03_blk_F";
		};
		class bluforAntimat
		{
			arguments[] = {{"str_a3_cfgweapons_srifle_lrr0"}, {"str_a3_cfgweapons_srifle_lrr_library0"}};
			description = "%12";
			displayName = "%11";
			image = "\a3\ui_f\data\gui\cfg\hints\Ranged_ca.paa";
			logicalOrder = 7;
			modelScale = 0.4;
			tip = "";
			weapon = "srifle_LRR_F";
		};
		class bluforLauncher
		{
			arguments[] = {{"str_a3_cfgweapons_launch_nlaw0"}, {"str_a3_cfgweapons_launch_nlaw_library0"}};
			description = "%12";
			displayName = "%11";
			image = "\a3\ui_f\data\gui\cfg\hints\Launcher_ca.paa";
			logicalOrder = 20;
			modelScale = 0.8;
			tip = "";
			weapon = "launch_NLAW_F";
		};
		class bluforMarksman
		{
			arguments[] = {{"str_a3_cfgweapons_srifle_abr0"}, {"STR_A3_CfgWeapons_srifle_ABR_Library0"}};
			description = "%12";
			displayName = "%11";
			image = "\a3\ui_f\data\gui\cfg\hints\Ranged_ca.paa";
			logicalOrder = 11;
			modelScale = 0.8;
			tip = "";
			weapon = "srifle_EBR_F";
		};
		class bluforpistol1
		{
			arguments[] = {{"str_a3_cfgweapons_hgun_p070"}, {"str_a3_cfgweapons_hgun_p07_library0"}};
			description = "%12";
			displayName = "%11";
			image = "\a3\ui_f\data\gui\cfg\hints\Handgun_ca.paa";
			logicalOrder = 19;
			tip = "";
			weapon = "hgun_P07_F";
		};
		class bluforpistol2
		{
			arguments[] = {{"str_a3_cfgweapons_hgun_pistol_heavy_01_f0"}, {"str_a3_cfgweapons_hgun_pistol_heavy_01_f_library0"}};
			description = "%12";
			displayName = "%11";
			image = "\a3\ui_f\data\gui\cfg\hints\Handgun_ca.paa";
			logicalOrder = 1;
			tip = "";
			weapon = "hgun_Pistol_heavy_01_F";
		};
		class bluforRifle
		{
			arguments[] = {{"str_a3_cfgweapons_arifle_xmx0"}, {"str_a3_cfgweapons_arifle_xmx_library0"}};
			description = "%12";
			displayName = "%11";
			image = "\a3\ui_f\data\gui\cfg\hints\Rifle_ca.paa";
			logicalOrder = 17;
			tip = "";
			weapon = "arifle_MX_F";
		};
		class bluforsmg
		{
			arguments[] = {{"str_a3_cfgweapons_smg_010"}, {"str_a3_cfgweapons_hgun_smg_01_library0"}};
			description = "%12";
			displayName = "%11";
			image = "\a3\ui_f\data\gui\cfg\hints\Rifles_ca.paa";
			logicalOrder = 33;
			tip = "";
			weapon = "SMG_01_F";
		};
		class bluforSpecShort
		{
			arguments[] = {{"str_a3_cfgweapons_arifle_trg210"}, {"str_a3_cfgweapons_arifle_trg21_gl_library0"}};
			description = "%12";
			displayName = "%11";
			image = "\a3\ui_f\data\gui\cfg\hints\Rifle_ca.paa";
			logicalOrder = 32;
			tip = "";
			weapon = "arifle_TRG21_F";
		};
		class DMR02
		{
			arguments[] = {{"STR_A3_CFGWEAPONS_DMR_02_BASE_F0"}, {"STR_A3_CFGWEAPONS_SRIFLE_DMR_02_F_LIBRARY0"}};
			description = "%12";
			displayName = "%11";
			dlc = 332350;
			image = "\a3\ui_f\data\gui\cfg\hints\Ranged_ca.paa";
			logicalOrder = 8;
			tip = "";
			weapon = "srifle_DMR_02_F";
		};
		class DMR03
		{
			arguments[] = {{"STR_A3_CFGWEAPONS_DMR_03_BASE_F0"}, {"STR_A3_CFGWEAPONS_SRIFLE_DMR_03_F_LIBRARY0"}};
			description = "%12";
			displayName = "%11";
			dlc = 332350;
			image = "\a3\ui_f\data\gui\cfg\hints\Ranged_ca.paa";
			logicalOrder = 9;
			tip = "";
			weapon = "srifle_DMR_03_F";
		};
		class DMR04
		{
			arguments[] = {{"STR_A3_CFGWEAPONS_DMR_04_BASE_F0"}, {"STR_A3_CFGWEAPONS_SRIFLE_DMR_04_F_LIBRARY0"}};
			description = "%12";
			displayName = "%11";
			dlc = 332350;
			image = "\a3\ui_f\data\gui\cfg\hints\Ranged_ca.paa";
			logicalOrder = 3;
			tip = "";
			weapon = "srifle_DMR_04_F";
		};
		class DMR05
		{
			arguments[] = {{"STR_A3_CFGWEAPONS_DMR_05_BASE_F0"}, {"STR_A3_CFGWEAPONS_SRIFLE_DMR_05_BLK_F_LIBRARY0"}};
			description = "%12";
			displayName = "%11";
			dlc = 332350;
			image = "\a3\ui_f\data\gui\cfg\hints\Ranged_ca.paa";
			logicalOrder = 4;
			tip = "";
			weapon = "srifle_DMR_05_blk_F";
		};
		class DMR06
		{
			arguments[] = {{"STR_A3_CFGWEAPONS_DMR_06_BASE_F0"}, {"STR_A3_CFGWEAPONS_SRIFLE_DMR_06_CAMO_F_LIBRARY0"}};
			description = "%12";
			displayName = "%11";
			dlc = 332350;
			image = "\a3\ui_f\data\gui\cfg\hints\Ranged_ca.paa";
			logicalOrder = 10;
			tip = "";
			weapon = "srifle_DMR_06_camo_F";
		};
		class DMR_07
		{
			arguments[] = {{"STR_A3_CfgWeapons_DMR_07_base_F0"}, {"STR_A3_CfgWeapons_DMR_07_base_F_Library0"}};
			description = "%12";
			displayName = "%11";
			dlc = 395180;
			image = "\a3\ui_f\data\gui\cfg\hints\Ranged_ca.paa";
			logicalOrder = 4;
			tip = "";
			weapon = "srifle_DMR_07_hex_F";
		};
		class FlareGun
		{
			arguments[] = {{"STR_A3_dlc_karts_fm_headline_flaregun"}, {"STR_A3_CFGWEAPONS_HGUN_PISTOL_SIGNAL_F_LIBRARY0"}};
			description = "%12";
			displayName = "%11";
			dlc = 288520;
			image = "\a3\ui_f\data\gui\cfg\hints\Handgun_ca.paa";
			logicalOrder = 28;
			tip = "";
			weapon = "hgun_Pistol_Signal_F";
		};
		class gaAutomatic
		{
			arguments[] = {{"str_a3_cfgweapons_lmg_mk2000"}, {"str_a3_cfgweapons_lmg_mk200_library0"}};
			description = "%12";
			displayName = "%11";
			image = "\a3\ui_f\data\gui\cfg\hints\Automatic_ca.paa";
			logicalOrder = 13;
			tip = "";
			weapon = "LMG_Mk200_F";
		};
		class gapistol1
		{
			arguments[] = {{"str_a3_cfgweapons_hgun_acpc2_f0"}, {"STR_A3_CfgWeapons_hgun_ACPC2_Library0"}};
			description = "%12";
			displayName = "%11";
			image = "\a3\ui_f\data\gui\cfg\hints\Handgun_ca.paa";
			logicalOrder = 2;
			tip = "";
			weapon = "hgun_ACPC2_F";
		};
		class gaRifle
		{
			arguments[] = {{"str_a3_cfgweapons_arifle_mk200"}, {"str_a3_cfgweapons_arifle_mk20_library0"}};
			description = "%12";
			displayName = "%11";
			image = "\a3\ui_f\data\gui\cfg\hints\Rifle_ca.paa";
			logicalOrder = 12;
			tip = "";
			weapon = "arifle_Mk20_F";
		};
		class gasmg
		{
			arguments[] = {{"str_a3_cfgweapons_hgun_pdw20000"}, {"str_a3_cfgweapons_hgun_pdw2000_library0"}};
			description = "%12";
			displayName = "%11";
			image = "\a3\ui_f\data\gui\cfg\hints\Rifles_ca.paa";
			logicalOrder = 21;
			tip = "";
			weapon = "hgun_PDW2000_F";
		};
		class HunterShotgun_01
		{
			arguments[] = {{"STR_A3_C_CFGWEAPONS_SGUN_HUNTERSHOTGUN_01_F0"}, {"STR_A3_C_CfgMods_Enoch_CB_HunterShotgun_desc"}};
			description = "%12";
			displayName = "%11";
			dlc = 1.02179e+006;
			image = "\a3\ui_f\data\gui\cfg\hints\Miss_icon_ca.paa";
			logicalOrder = 6;
			tip = "";
			weapon = "sgun_HunterShotgun_01_F";
		};
		class launch_RPG7
		{
			arguments[] = {{"STR_A3_CfgWeapons_launch_RPG7_F0"}, {"STR_A3_CfgWeapons_launch_RPG7_F_Library0"}};
			description = "%12";
			displayName = "%11";
			dlc = 395180;
			image = "\a3\ui_f\data\gui\cfg\hints\Launcher_ca.paa";
			logicalOrder = 25;
			tip = "";
			weapon = "launch_RPG7_F";
		};
		class LMG_03
		{
			arguments[] = {{"STR_A3_CfgWeapons_LMG_03_F0"}, {"STR_A3_CfgWeapons_LMG_03_base_F_Library0"}};
			description = "%12";
			displayName = "%11";
			dlc = 395180;
			image = "\a3\ui_f\data\gui\cfg\hints\Automatic_ca.paa";
			logicalOrder = 6;
			tip = "";
			weapon = "LMG_03_F";
		};
		class MAAWS
		{
			arguments[] = {};
			description = "The MAAWS Mk4 (Multi-role Anti-armor Anti-tank Weapon System) is the latest member of the originally Swedish-made recoilless rifle family. The Mk4 is lighter, accurate, and more durable than its predecessors. It can fire multiple types of 84mm rounds, with a maximum effective range of 700 meters against static targets. The Mod 0 uses a simple daytime optical sight, while the Mod 1 has a laser rangefinder and integrated night-vision to accurately engage enemy targets at various ranges, at any hour of the day.";
			displayName = "MAAWS Mk4";
			dlc = 798390;
			image = "\a3\ui_f\data\gui\cfg\hints\Miss_icon_ca.paa";
			tip = "";
			weapon = "launch_MRAWS_green_F";
		};
		class MMG01
		{
			arguments[] = {{"STR_A3_CFGWEAPONS_MMG_01_BASE_F0"}, {"STR_A3_CFGWEAPONS_MMG_01_HEX_F_LIBRARY0"}};
			description = "%12";
			displayName = "%11";
			dlc = 332350;
			image = "\a3\ui_f\data\gui\cfg\hints\Automatic_ca.paa";
			logicalOrder = 18;
			tip = "";
			weapon = "MMG_01_hex_F";
		};
		class MMG02
		{
			arguments[] = {{"STR_A3_CFGWEAPONS_MMG_02_BASE_F0"}, {"STR_A3_CFGWEAPONS_MMG_02_CAMO_F_LIBRARY0"}};
			description = "%12";
			displayName = "%11";
			dlc = 332350;
			image = "\a3\ui_f\data\gui\cfg\hints\Automatic_ca.paa";
			logicalOrder = 27;
			tip = "";
			weapon = "MMG_02_camo_F";
		};
		class MSBS65
		{
			arguments[] = {{"STR_A3_C_CFGWEAPONS_ARIFLE_MSBS65_F0"}, {"STR_A3_C_CfgMods_Enoch_CB_LDFAssaultRifle_desc"}};
			description = "%12";
			displayName = "%11";
			dlc = 1.02179e+006;
			image = "\a3\ui_f\data\gui\cfg\hints\Miss_icon_ca.paa";
			logicalOrder = 21;
			tip = "";
			weapon = "arifle_MSBS65_UBS_F";
		};
		class opforAntimat
		{
			arguments[] = {{"STR_A3_CfgWeapons_srifle_GM60"}, {"str_a3_cfgweapons_srifle_gm6_library0"}};
			description = "%12";
			displayName = "%11";
			image = "\a3\ui_f\data\gui\cfg\hints\Ranged_ca.paa";
			logicalOrder = 5;
			modelScale = 0.6;
			tip = "";
			weapon = "srifle_GM6_F";
		};
		class opforAutomatic
		{
			arguments[] = {{"str_a3_cfgweapons_lmg_zafir_f0"}, {"str_a3_cfgweapons_lmg_zafir_f_library0"}};
			description = "%12";
			displayName = "%11";
			image = "\a3\ui_f\data\gui\cfg\hints\Automatic_ca.paa";
			logicalOrder = 34;
			modelScale = 0.8;
			tip = "";
			weapon = "LMG_Zafir_F";
		};
		class opforLauncher
		{
			arguments[] = {{"str_a3_cfgweapons_launch_law0"}, {"str_a3_cfgweapons_launch_law_library0"}};
			description = "%12";
			displayName = "%11";
			image = "\a3\ui_f\data\gui\cfg\hints\Launcher_ca.paa";
			logicalOrder = 25;
			modelScale = 0.6;
			tip = "";
			weapon = "launch_RPG32_F";
		};
		class opforpistol1
		{
			arguments[] = {{"str_cfgweapons_hgun_rook40_f0"}, {"str_a3_cfgweapons_hgun_rook40_library0"}};
			description = "%12";
			displayName = "%11";
			image = "\a3\ui_f\data\gui\cfg\hints\Handgun_ca.paa";
			logicalOrder = 24;
			tip = "";
			weapon = "hgun_Rook40_F";
		};
		class opforpistol2
		{
			arguments[] = {{"str_a3_cfgweapons_hgun_pistol_heavy_02_f0"}, {"str_a3_cfgweapons_hgun_pistol_heavy_02_f_library0"}};
			description = "%12";
			displayName = "%11";
			image = "\a3\ui_f\data\gui\cfg\hints\Handgun_ca.paa";
			tip = "";
			weapon = "hgun_Pistol_heavy_02_F";
		};
		class opforRifle
		{
			arguments[] = {{"STR_A3_CfgWeapons_arifle_Katiba_F0"}, {"STR_A3_CfgWeapons_arifle_Katiba_F_Library0"}};
			description = "%12";
			displayName = "%11";
			image = "\a3\ui_f\data\gui\cfg\hints\Rifle_ca.paa";
			logicalOrder = 6;
			tip = "";
			weapon = "arifle_Katiba_F";
		};
		class opforsmg
		{
			arguments[] = {{"STR_A3_CfgWeapons_SMG_020"}, {"str_a3_cfgweapons_SMG_02_library0"}};
			description = "%12";
			displayName = "%11";
			image = "\a3\ui_f\data\gui\cfg\hints\Rifles_ca.paa";
			logicalOrder = 29;
			tip = "";
			weapon = "SMG_02_F";
		};
		class opfroMarksman
		{
			arguments[] = {{"str_a3_cfgweapons_srifle_dmr_01_f0"}, {"STR_A3_CfgWeapons_srifle_DMR_01_F_library"}};
			description = "%12";
			displayName = "%11";
			image = "\a3\ui_f\data\gui\cfg\hints\Ranged_ca.paa";
			logicalOrder = 22;
			tip = "";
			weapon = "srifle_DMR_01_F";
		};
		class Pistol_01
		{
			arguments[] = {{"STR_A3_CfgWeapons_hgun_Pistol_01_F0"}, {"STR_A3_CfgWeapons_hgun_Pistol_01_F_Library0"}};
			description = "%12";
			displayName = "%11";
			dlc = 395180;
			image = "\a3\ui_f\data\gui\cfg\hints\Handgun_ca.paa";
			logicalOrder = 21;
			tip = "";
			weapon = "hgun_Pistol_01_F";
		};
		class portableMortar1
		{
			arguments[] = {{"str_a3_cfgvehicles_mortar_01_base0"}, {"str_a3_cfgvehicles_mortar_01_base_library0"}};
			description = "%12";
			displayName = "%11";
			image = "\a3\ui_f\data\gui\cfg\hints\Miss_icon_ca.paa";
			logicalOrder = 16;
			tip = "";
			weapon = "";
		};
		class Radar_System_01
		{
			arguments[] = {{"STR_A3_Radar_System_01_name"}, {"STR_A3_Radar_System_01_hint_description"}};
			description = "%12";
			displayName = "%11";
			dlc = 601670;
			image = "\a3\ui_f\data\gui\cfg\hints\Miss_icon_ca.paa";
			logicalOrder = 45;
			tip = "";
			vehicle = "B_Radar_System_01_F";
		};
		class Radar_System_02
		{
			arguments[] = {{"STR_A3_Radar_System_02_name"}, {"STR_A3_Radar_System_02_hint_description"}};
			description = "%12";
			displayName = "%11";
			dlc = 601670;
			image = "\a3\ui_f\data\gui\cfg\hints\Miss_icon_ca.paa";
			logicalOrder = 46;
			tip = "";
			vehicle = "O_Radar_System_02_F";
		};
		class SAM_System_01
		{
			arguments[] = {{"STR_A3_Mk49_name"}, {"STR_A3_Mk49_description"}};
			description = "%12";
			displayName = "%11";
			dlc = 601670;
			image = "\a3\ui_f\data\gui\cfg\hints\Miss_icon_ca.paa";
			logicalOrder = 15;
			tip = "";
			vehicle = "B_SAM_System_01_F";
		};
		class SAM_System_02
		{
			arguments[] = {{"STR_A3_Mk21_name"}, {"STR_A3_Mk21_description"}};
			description = "%12";
			displayName = "%11";
			dlc = 601670;
			image = "\a3\ui_f\data\gui\cfg\hints\Miss_icon_ca.paa";
			logicalOrder = 13;
			tip = "";
			vehicle = "B_SAM_System_02_F";
		};
		class SAM_System_03
		{
			arguments[] = {{"STR_A3_SAM_System_03_name"}, {"STR_A3_SAM_System_03_hint_description"}};
			description = "%12";
			displayName = "%11";
			dlc = 601670;
			image = "\a3\ui_f\data\gui\cfg\hints\Miss_icon_ca.paa";
			logicalOrder = 47;
			tip = "";
			vehicle = "B_SAM_System_03_F";
		};
		class SAM_System_04
		{
			arguments[] = {{"STR_A3_SAM_System_04_name"}, {"STR_A3_SAM_System_04_hint_description"}};
			description = "%12";
			displayName = "%11";
			dlc = 601670;
			image = "\a3\ui_f\data\gui\cfg\hints\Miss_icon_ca.paa";
			logicalOrder = 48;
			tip = "";
			vehicle = "O_SAM_System_04_F";
		};
		class Ship_Gun_01
		{
			arguments[] = {{"STR_A3_Ship_Gun_01_name"}, {"STR_A3_Ship_Gun_01_hint_description"}};
			description = "%12";
			displayName = "%11";
			dlc = 601670;
			image = "\a3\ui_f\data\gui\cfg\hints\Miss_icon_ca.paa";
			logicalOrder = 49;
			tip = "";
			vehicle = "B_Ship_Gun_01_F";
		};
		class Ship_MRLS_01
		{
			arguments[] = {{"STR_A3_Ship_MRLS_01_name"}, {"STR_A3_Ship_MRLS_01_hint_description"}};
			description = "%12";
			displayName = "%11";
			dlc = 601670;
			image = "\a3\ui_f\data\gui\cfg\hints\Miss_icon_ca.paa";
			logicalOrder = 50;
			tip = "";
			vehicle = "B_Ship_MRLS_01_F";
		};
		class SMG_03
		{
			arguments[] = {{"STR_A3_CfgWeapons_SMG_03_TR_BASE0"}, {"STR_A3_CfgWeapons_SMG_03_TR_BASE_Library0"}};
			description = "%12";
			displayName = "%11";
			image = "\a3\ui_f\data\gui\cfg\hints\Rifles_ca.paa";
			logicalOrder = 3;
			tip = "";
			weapon = "SMG_03_TR_black";
		};
		class SMG_05
		{
			arguments[] = {{"STR_A3_CfgWeapons_SMG_05_base_F0"}, {"STR_A3_CfgWeapons_SMG_05_base_F_Library0"}};
			description = "%12";
			displayName = "%11";
			dlc = 395180;
			image = "\a3\ui_f\data\gui\cfg\hints\Rifles_ca.paa";
			logicalOrder = 21;
			tip = "";
			weapon = "SMG_05_F";
		};
		class staticGMG
		{
			arguments[] = {{"str_a3_cfgvehicles_gmg_01_base0"}, {"str_a3_cfgvehicles_gmg_01_base_armory0"}};
			description = "%12";
			displayName = "%11";
			image = "\a3\ui_f\data\gui\cfg\hints\Miss_icon_ca.paa";
			logicalOrder = 15;
			tip = "";
		};
		class staticHMG
		{
			arguments[] = {{"str_a3_cfgvehicles_hmg_01_base0"}, {"str_a3_cfgvehicles_hmg_01_base_armory0"}};
			description = "%12";
			displayName = "%11";
			image = "\a3\ui_f\data\gui\cfg\hints\Miss_icon_ca.paa";
			logicalOrder = 14;
			tip = "";
		};
		class titanlong
		{
			arguments[] = {{"str_a3_cfgweapons_launch_mprl0"}, {"str_a3_cfgweapons_launch_mprl_library0"}};
			description = "%12";
			displayName = "%11";
			image = "\a3\ui_f\data\gui\cfg\hints\Launcher_ca.paa";
			logicalOrder = 31;
			modelScale = 0.6;
			tip = "";
			weapon = "launch_Titan_F";
		};
		class titanshort
		{
			arguments[] = {{"str_cfgweapons_launch_mprl_short_f0"}, {"STR_A3_cfgWeapons_launch_MPRL_short_Library0"}};
			description = "%12";
			displayName = "%11";
			image = "\a3\ui_f\data\gui\cfg\hints\Launcher_ca.paa";
			logicalOrder = 30;
			modelScale = 0.6;
			tip = "";
			weapon = "launch_Titan_short_F";
		};
		class UnderwaterRifle
		{
			arguments[] = {{"str_a3_cfgweapons_arifle_sdar0"}, {"str_a3_cfgweapons_arifle_sdar_library0"}};
			description = "%12";
			displayName = "%11";
			image = "\a3\ui_f\data\gui\cfg\hints\Rifle_ca.paa";
			logicalOrder = 26;
			tip = "";
			weapon = "arifle_SDAR_F";
		};
		class Vorona
		{
			arguments[] = {};
			description = "9M135 Vorona (NATO's reporting name: AT-19 Sweeper) is one of the newest ATGMs developed for CSAT's infantry and motorized units. The maximum range of this subsonic manual-guided missile is 2000 m, regardless of the time of day or weather conditions. This is because the command launch unit features powerful optics with day and infra-red vision modes and a laser rangefinder. The launcher can even be used without a tripod, and can be mounted on vehicles like the Qilin light strike vehicle. Two 130mm missiles are currently available; anti-tank with a powerful tandem HEAT warhead, and anti-personnel with a HE-FRAG warhead.";
			displayName = "9M135 Vorona";
			dlc = 798390;
			image = "\a3\ui_f\data\gui\cfg\hints\Miss_icon_ca.paa";
			tip = "";
			weapon = "launch_O_Vorona_brown_F";
		};
	};
	class Weapons
	{
		displayName = "Weapons (Advanced)";
		logicalOrder = 11;
		class Chemlights
		{
			arguments[] = {{{"throw"}}, {{"cycleThrownItems"}}};
			description = "Chemlights of various colors are great for signaling during the night.%1%2Cycle between grenade and chemlight types by pressing %12.%1%2Throw a chemlight by pressing %11.%1The angle of the throw has a great influence on its distance.";
			displayName = "Chemlights";
			image = "\a3\ui_f\data\gui\cfg\hints\Chemlights_ca.paa";
			logicalOrder = 21;
			tip = "";
		};
		class ClusterMunitions
		{
			arguments[] = {};
			description = "Cluster munitions are <t %5>containers</t> which are launched over a target area, and then opened to disperse a large number of smaller <t %5>bomblets</t> (<t %5>submunitions</t>). Methods of container delivery include dropping as <t %5>aircraft cluster bomb</t> or firing as <t %5>artillery shell</t>. These munitions have a large area of effect and cause <t %5>indiscriminate destruction</t>.";
			displayName = "Cluster Munitions";
			image = "\A3\UI_F_Orange\Data\CfgHints\cluster_ca.paa";
			logicalOrder = 22;
			tip = "Depending on the munition, dispersal altitude and other factors, many submunitions do not initially explode. They stay behind on the battlefield and cause harm for long periods of time.";
		};
		class Designator
		{
			arguments[] = {{{"NextAction"}}, {{"zoomIn"}}, {{"zoomOut"}}, {{"nightVision"}}, {{"DefaultAction"}}, {{"binocular"}}, {{"optics"}}};
			description = "Laser designator is used for aiming guided missiles, bombs and artillery.%1<t></t>1. Select %3Laser Designator%4 by pressing %16.%1<t></t>2. Use its optics by pressing %17.%1<t></t>3. Zoom using %12<t></t>, %13.%1<t></t>4. Switch view modes with %14.%1<t></t>5. And finally, press %15 to mark the target.";
			displayName = "Designator";
			image = "\a3\ui_f\data\gui\cfg\hints\Designator_ca.paa";
			logicalOrder = 15;
			tip = "Once marked, do not move or switch the laser beam off or the missiles will be unable to correct their trajectory and might miss the target.";
		};
		class Directional
		{
			arguments[] = {{"str_a3_cfgmagazines_directionalminerangemagazine0"}, {"str_a3_cfgmagazines_directionalmineremotemagazine0"}};
			description = "%11 and %12 are directional explosives with a narrow arc of effect. They're especially useful in corridors and when defending enclosed areas. When placing them, face the direction in which you want the mine to explode.";
			displayName = "Directional Mines";
			image = "\a3\ui_f\data\gui\cfg\hints\Directional_ca.paa";
			logicalOrder = 16;
			tip = "";
		};
		class Disarm
		{
			arguments[] = {{{"MoveDown"}}, {{"LockTarget"}}};
			description = "To deactivate an explosive, you have to be a specialist, such as an %3Explosive / EOD Specialist%4 or an %3Engineer%4, and have a %3Toolkit%4.%1%2You may have to manually reveal %12 the explosive first.%1%2Crawl %11 to the explosive.%1%2Select %3Deactivate%4<img size='1' %5  image='A3\UI_F\data\IGUI\Cfg\Actions\ico_OFF_ca.paa' /> from the action menu.%1WARNING: if you don't approach the explosive carefully in a prone position, it may detonate.";
			displayName = "Deactivating";
			image = "\a3\ui_f\data\gui\cfg\hints\Disarm_ca.paa";
			logicalOrder = 9;
			tip = "Deactivating a mine underwater doesn't require being in a prone position.";
		};
		class Flares
		{
			arguments[] = {};
			description = "Flares of various colors are used for signaling. They can be launched from certain types of underslung grenade launcher.";
			displayName = "Flares";
			image = "\a3\ui_f\data\gui\cfg\hints\Flares_ca.paa";
			logicalOrder = 20;
			tip = "";
		};
		class Flashlight
		{
			arguments[] = {{{"headlights"}}};
			description = "A flashlight can be very useful during night-time. Turn your gun-mounted flashlight on/off by pressing %11. Be careful, light can give away your position.";
			displayName = "Flashlight";
			image = "\a3\ui_f\data\gui\cfg\hints\Pointers_ca.paa";
			logicalOrder = 4;
			tip = "";
			class Flashlight_sub
			{
				arguments[] = {{{"headlights"}}};
				description = "Flashlights can be mounted on the rails belonging to certain weapons. They help shooters during night operations if they lack night vision. On the other hand, they also give away the shooter's position.%1%2To activate the flashlight, press %11";
				displayName = "Flashlight";
				dlc = -1;
				image = "\A3\Ui_f\data\GUI\Cfg\Hints\Pointers_ca.paa";
				tip = "";
			};
		};
		class IEDs
		{
			arguments[] = {{{"NextAction"}}, {{"ActionContext"}}};
			description = "Charges and IEDs can be detonated remotely or set with a timer. If you have an IED in your inventory, an item will appear in your action menu.%1%2Open the action menu %11.%1%2Place the IED on the ground using %3Put%4.%1%2Confirm with %12.%1%2Point at it with the cursor.%1%2Now you can set a timer in 40–second steps using the action menu.";
			displayName = "Arming Charges";
			image = "\a3\ui_f\data\gui\cfg\hints\IEDs_ca.paa";
			logicalOrder = 6;
			tip = "You can detonate all your charges by selecting %3Touch off%4 from the action menu. Also, your side is aware of the positions of your charges to avoid friendly fire.";
		};
		class irgrenade
		{
			arguments[] = {{{"throw"}}, {{"cycleThrownItems"}}, {{"lockTarget"}}, {{"vehLockTargets"}}};
			description = "Use IR grenades for signaling or marking targets during night-time.%1%2Throw an IR grenade by pressing %11.%1%2Cycle between grenade and chemlight types by pressing %12.%1The angle of the throw has a great influence on its distance.";
			displayName = "IR Grenades";
			image = "\a3\ui_f\data\gui\cfg\hints\Miss_icon_ca.paa";
			logicalOrder = 18;
			tip = "IR Grenades are especially useful for marking targets, because they can be targeted by vehicle operators.%1%2When in a vehicle, press %13 to target.%1%2Cycle available targets by %14.";
		};
		class LOAL
		{
			arguments[] = {{{"VehLockTargets"}}, {{"NextWeapon"}}};
			description = "Some guided missiles are able to lock-on after launch (LOAL) and can be used against targets beyond immediate line of sight.%1%2Press %11 to pick a desired target. This gives the missile an initial position to fly to.%1%2Select appropriate fire mode %12 to clear terrain between you and the target, if needed (top or terrain-following if available).%1%2Fire the missile in the target's direction.%1%1The missile will now fly towards the marked position. If no target was marked, then the position under the crosshair or a preset distance is used. Once there, the missile will try to lock on the nearest available target within the seeker's field of regard.";
			displayName = "Lock-on after launch missiles";
			image = "\a3\ui_f\data\gui\cfg\hints\Missile_Seeking_ca.paa";
			logicalOrder = 30;
			tip = "Explosive munitions can have unintended consequences. Always make sure there are no friendly units in the target area before firing.";
		};
		class Mildot
		{
			arguments[] = {};
			description = "Mil dots serve as a reliable helper to acquiring the target distance. The distance between dots represents one milliradian. How to use it:%1%2Know your target size.%1%2Measure your current target height in mils.%1%2Calcualte the distance:%1Distance = Target size * 1000 / Mils read";
			displayName = "Mil dots";
			image = "\a3\ui_f\data\gui\cfg\hints\Miss_icon_ca.paa";
			logicalOrder = 1;
			tip = "";
		};
		class MineDispensers
		{
			arguments[] = {{"STR_A3_Orange_CfgHints_MineDispensers_arg11"}};
			description = "The <t %5>APERS Mine Dispenser</t> differs from other placed weapon systems in that it is not itself an explosive device. It launches <t %5>14 APERS mines</t> into an <t %5>arc-shaped area</t>, extending approximately <t %5>20 meters</t> in the direction of placement. %11%1%2Place the device using the <t %5>Put</t> action.%1%2Add 40 s timer steps for delayed dispersal.%1%2Or disperse immediately / remotely using the <t %5>Touch off</t> action.";
			displayName = "Mine Dispensers";
			image = "\A3\UI_F_Orange\Data\CfgHints\minedispensers_ca.paa";
			logicalOrder = 9;
			tip = "It is safe to disperse while standing nearby and behind the dispenser. The device can also be deactivated.";
			class Hint
			{
				arguments[] = {""};
				description = "The <t %5>APERS Mine Dispenser</t> differs from other placed weapon systems in that it is not itself an explosive device. It launches <t %5>14 APERS mines</t> into an <t %5>arc-shaped area</t>, extending approximately <t %5>20 meters</t> in the direction of placement. %11%1%2Place the device using the <t %5>Put</t> action.%1%2Add 40 s timer steps for delayed dispersal.%1%2Or disperse immediately / remotely using the <t %5>Touch off</t> action.";
				displayName = "Mine Dispensers";
				image = "\A3\UI_F_Orange\Data\CfgHints\minedispensers_ca.paa";
				tip = "It is safe to disperse while standing nearby and behind the dispenser. The device can also be deactivated.";
			};
		};
		class Mines
		{
			arguments[] = {{{"NextAction"}}, {{"ActionContext"}}};
			description = "You don't need to be an explosives specialist to set mines. If you have a mine in your inventory, an item will appear in your action menu.%1%2Open the action menu %11.%1%2Go to a place you want mined.%1%2Select %3Put%4 mine.%1%2Confirm with %12.";
			displayName = "Arming Mines";
			image = "\a3\ui_f\data\gui\cfg\hints\Mines_ca.paa";
			logicalOrder = 8;
			tip = "Anti-Tank mines will not be triggered by infantry as they are set for higher weights. Also, your side is aware of the position of your explosives to avoid friendly-fire.";
		};
		class Minesweep
		{
			arguments[] = {{{"ListLeftVehicleDisplay"}}, {{"ListRightVehicleDisplay"}}, {{"LockTarget"}}, {"STR_A3_Orange_CfgHints_Minesweep_arg14"}, "format [""color = '%1'"", (['IGUI', 'ERROR_RGB'] call BIS_fnc_displayColorGet) call bis_fnc_colorRGBAtoHTML]"};
			description = "Nearby <t %5>mines</5> can be <t %5>detected</t> by <t %5>moving slowly</t> and carefully <t %5>looking around</t> you. %14 Having a <t %5>Mine Detector</t> in your inventory will locate even well-hidden mines in your vicinity. Audio cues may alert you to such threats.%1%2Use %11 or %12 to bring up the Mines info panel to see approximate mine locations and identified mines.%1%2Carefully approach, look at, and identify unknown mines using %13.%1Depending on difficulty options, known mines are marked <img size='1' %15 image='A3\Ui_f\data\IGUI\Cfg\Cursors\explosive_ca.paa' />.";
			displayName = "Finding Mines";
			image = "\a3\ui_f\data\gui\cfg\hints\Minesweep_ca.paa";
			logicalOrder = 7;
			tip = "Known locations of mines are displayed on the map and are distributed among your fellow soldiers. They will keep away from such spots.";
			class HintDetector
			{
				arguments[] = {{{"ListLeftVehicleDisplay"}}, {{"ListRightVehicleDisplay"}}, {{"LockTarget"}}, "format [""color = '%1'"", (['IGUI', 'ERROR_RGB'] call BIS_fnc_displayColorGet) call bis_fnc_colorRGBAtoHTML]"};
				description = "Having a <t %5>Mine Detector</t> in your inventory will locate even well-hidden nearby mines. Audio cues may alert you to such threats.%1%2Use %11 or %12 to open the Mines info panel to see approximate mine locations and identified mines.%1%2Carefully approach, look at, and identify unknown mines using %13.%1Depending on difficulty options, known mines are marked <img size='1' %14 image='A3\Ui_f\data\IGUI\Cfg\Cursors\explosive_ca.paa' />.";
				displayName = "Finding Mines";
				image = "\a3\ui_f\data\gui\cfg\hints\Minesweep_ca.paa";
				tip = "Known locations of mines are displayed on the map and are distributed among your fellow soldiers. They will keep away from such spots.";
			};
			class HintDetector_NoTip: HintDetector
			{
				tip = "";
			};
			class HintVisual
			{
				arguments[] = {{{"LockTarget"}}, {"STR_A3_Orange_CfgHints_Minesweep_arg14"}, "format [""color = '%1'"", (['IGUI', 'ERROR_RGB'] call BIS_fnc_displayColorGet) call bis_fnc_colorRGBAtoHTML]"};
				description = "Nearby <t %5>mines</5> can be <t %5>detected</t> by <t %5>moving slowly</t> and carefully <t %5>looking around</t> you. %12 %1%2Carefully approach, look at, and identify unknown mines using %11.%1Depending on difficulty options, known mines are clearly marked <img size='1' %13 image='A3\Ui_f\data\IGUI\Cfg\Cursors\explosive_ca.paa' />.";
				displayName = "Finding Mines";
				image = "\a3\ui_f\data\gui\cfg\hints\Minesweep_ca.paa";
				tip = "Known locations of mines are displayed on the map and are distributed among your fellow soldiers. They will keep away from such spots.";
			};
		};
		class MissileFlightModes
		{
			arguments[] = {};
			description = "Modern guided missiles can operate in different flight modes, allowing their user to increase their effectiveness against the selected target.%1%2%3Direct%4 - missile flies directly towards the target %1%2%3Top-down%4 - missile gains altitude after launch and descends from above %1%2%3Overfly top-attack%4 - missile flies and detonates directly above the target %1%2%3Terrain copy%4 - missile copies the terrain until reaching the target area";
			displayName = "Missile Flight Modes";
			image = "\a3\ui_f\data\gui\cfg\hints\Missile_Modes_ca.paa";
			logicalOrder = 25;
			tip = "Top-down and overfly modes need a certain distance from the target if they are to be used. If the target is too close, direct mode is used.";
		};
		class Muzzles
		{
			arguments[] = {{{"Gear"}}};
			description = "Suppressors are used to reduce a weapon's sound and muzzle flash. To equip a suppressor:%1%2Open Inventory %11.%1%2%3Drag and drop%4 a suppressor to your weapon's suppressor slot. The slot will be marked.";
			displayName = "Suppressor";
			image = "\a3\ui_f\data\gui\cfg\hints\Muzzles_ca.paa";
			logicalOrder = 2;
			tip = "";
		};
		class Pointers
		{
			arguments[] = {{{"headlights"}}, {{"Gear"}}};
			description = "Flashlight, Laser and IR Laser pointers can be attached to your rifle to provide accuracy, coordination and utility. Flashlights are especially useful during night missions.%1%2To activate the laser or flashlight, press %11.";
			displayName = "Pointers";
			image = "\a3\ui_f\data\gui\cfg\hints\Pointer_ca.paa";
			logicalOrder = 3;
			tip = "To equip a pointer, open the inventory %12 and drag the pointer to your weapon's side slot. The proper slot will be highlighted.";
			class LaserPointer_sub
			{
				arguments[] = {{{"headlights"}}};
				description = "Laser pointers can be attached to certain weapons' side rails. When activated by %11, the laser can be seen via night vision and indicates the exact position that the weapon's barrel is pointing at.%1%1However, if the enemy is also equipped with night vision, the laser may give away the position of the shooter.";
				displayName = "Laser Pointer";
				dlc = -1;
				image = "\A3\Ui_f\data\GUI\Cfg\Hints\Pointer_ca.paa";
				tip = "";
			};
		};
		class Rangefinder
		{
			arguments[] = {{{"ZeroingUp"}}, {{"ZeroingDown"}}, {{"gunElevAuto"}}};
			description = "Use the rangefinder, hand-held or scope-integrated, to determine the distance to your target to engage it with better accuracy.%1%2Stadiametric RF - use reticle markings (mil-dots) to estimate the distance from the target.%1%2Digital (Laser) RF - Press %13 to measure the distance. %1Use %11 and %12 to adjust the weapon's zeroing accordingly.";
			displayName = "Rangefinder";
			image = "\a3\ui_f\data\gui\cfg\hints\Rangefinder_ca.paa";
			logicalOrder = 14;
			tip = "";
		};
		class ReactiveArmor
		{
			arguments[] = {};
			description = "Explosive reactive armor affords extra protection against HEAT warheads. However, it's a one-time solution. When hit, the respective part of the vehicle will be left unprotected.%1To defeat ERA, tandem HEAT warheads were developed - a smaller warhead detonates the ERA while the main charge detonates on the vehicle itself.";
			displayName = "Reactive Armor";
			image = "\a3\ui_f\data\gui\cfg\hints\Armor_ERA_ca.paa";
			logicalOrder = 28;
			tip = "The ERA layer adds significant weight to the vehicle, affecting its maneuverability.";
		};
		class SlatArmor
		{
			arguments[] = {};
			description = "Slat (or cage) armor helps to defeat incoming HEAT rounds by detonating them before reaching the vehicle armor itself.%1However, it has zero effect against armor-piercing shells and can be damaged easily, leaving the underlaying part vulnerable to repeated attacks.";
			displayName = "Slat Armor";
			image = "\a3\ui_f\data\gui\cfg\hints\Armor_SLAT_ca.paa";
			logicalOrder = 29;
			tip = "Slat armor adds significant weight to the vehicle. In addition, it increases a vehicle's size, meaning they may be too bulky for transportation in other vehicles. Driving can also become more challenging.";
		};
		class Smokes
		{
			arguments[] = {{{"throw"}}, {{"cycleThrownItems"}}};
			description = "Smoke grenades are great for screening units and signaling.%1%2Cycle between grenade types by pressing %12.%1%2Throw a grenade by pressing %11.%1The angle of the throw has a great influence on its distance.";
			displayName = "Smoke Grenades";
			image = "\a3\ui_f\data\gui\cfg\hints\Smoke_granade_ca.paa";
			logicalOrder = 17;
			tip = "Various smoke colors can be very useful when simultaneously marking more areas.";
		};
		class Sniper
		{
			arguments[] = {{{"MoveDown"}}, {{"zoomTemp"}}, {{"ZeroingUp"}}, {{"ZeroingDown"}}, {{"HoldBreath"}}, {{"DefaultAction"}}};
			description = "Sniper rifles are accurate and deadly at long ranges, provided that you can keep your aim steady. %1<t></t>1. Go prone with %11 to keep weapon sway minimal.%1<t></t>2. Press %12 to look through the scope to see the enemy.%1<t></t>3. Adjust the rifle's zeroing with %13/%14 to match the target's range.%1<t></t>4. Hold your breath with %15 to steady the aim.%1<t></t>5. Shoot by pressing %16 to kill.";
			displayName = "Sniper Rifles";
			image = "\a3\ui_f\data\gui\cfg\hints\Sniper_ca.paa";
			logicalOrder = 11;
			tip = "Some scopes have range indication, which provides information for zeroing the weapon.";
		};
		class Static
		{
			arguments[] = {};
			description = "Turret machine-guns and grenade launchers are support weapons to provide covering fire for infantry. Usually, they are handled by two man teams, who are able to assemble and dismantle the weapon in a short time. This gives infantry a quick and flexible cover fire option.";
			displayName = "Static turrets";
			image = "\a3\ui_f\data\gui\cfg\hints\Miss_icon_ca.paa";
			logicalOrder = 10;
			tip = "";
		};
		class Tracers
		{
			arguments[] = {};
			description = "Tracer rounds are used to mark enemy positions to other soldiers or check the bullet trajectory. Some magazines have tracer bullets loaded at the end. This way your teammates will know that you need to reload. Team leaders often have their magazines loaded only with tracers to mark the targets.";
			displayName = "Tracer Rounds";
			image = "\a3\ui_f\data\gui\cfg\hints\Tracers_ca.paa";
			logicalOrder = 19;
			tip = "";
		};
		class UGL
		{
			arguments[] = {{{"nextWeapon"}}, {{"zoomTemp"}}, {{"DefaultAction"}}, {{"ZeroingUp"}}, {{"ZeroingDown"}}};
			description = "Underslung grenade launchers are great for engaging groups of enemies or enemies hidden behind cover. If your weapon has a grenade launcher: %1<t></t>1. Select it by cycling fire modes %11.%1<t></t>2. You can switch to sights by pressing %12.%1<t></t>3. Adjust zeroing to match the target range %14, %15.%1<t></t>4. Aim with the red dot on the sights.%1<t></t>5. Finally, fire with %13.";
			displayName = "Grenade Launchers";
			image = "\a3\ui_f\data\gui\cfg\hints\UGL_ca.paa";
			logicalOrder = 12;
			tip = "Grenade launchers are also capable of launching flares usable for signaling.";
		};
		class Underwater
		{
			arguments[] = {{"str_a3_cfgweapons_arifle_sdar0"}};
			description = "Shooting normal guns underwater is impossible. %11 is a special weapon designed to withstand higher pressure. If loaded with a dual purpose mag, it becomes an effective weapon for underwater combat at ranges of up to 40 meters.";
			displayName = "Underwater Weapons";
			image = "\a3\ui_f\data\gui\cfg\hints\Underwater_ca.paa";
			logicalOrder = 13;
			tip = "";
		};
		class UXO
		{
			arguments[] = {};
			description = "After <t %5>cluster munition</t> deployment, it is likely not all <t %5>submunitions</t> will have exploded. The target area may now contain hard-to-find <t %5>unexploded ordnance</t> (<t %5>UXO</t>). Like other <t %5>explosive remnants of war</t> (<t %5>ERW</t>), these explosives can cause harm to anyone in the area after deployment, including the original user and civilians.%1%1UXO can be carefully found and cleared by <t %5>specialists</t> using <t %5>Mine Detectors</t> and <t %5>Toolkits</t>.";
			displayName = "Unexploded Ordnance";
			image = "\A3\UI_F_Orange\Data\CfgHints\uxo_ca.paa";
			logicalOrder = 23;
			tip = "The explosive behavior of UXO is hard to predict. Some of it is hyper sensitive to manipulation, and some will not detonate anymore at all.";
		};
		class WarheadTypes
		{
			arguments[] = {};
			description = "Modern military forces use different munition types against different targets. For example:%1%2%3AP, APDS, APFSDS%4 - various types of armor piercing munitions that rely upon simple kinetic energy to penetrate armor%1%2%3HE%4 - high-explosive fragmentation rounds, used against infantry and unarmored targets%1%2%3HEAT%4 - High-Explosive Anti-Tank rounds use chemical energy to penetrate armor%1%2%3Tandem HEAT%4 - a HEAT round with a small precursor warhead to defeat the reactive armor of the target";
			displayName = "Warhead Types";
			image = "\a3\ui_f\data\gui\cfg\hints\Warhead_Types_ca.paa";
			logicalOrder = 26;
			tip = "";
		};
		class WeaponInertia
		{
			arguments[] = {};
			description = "Weapon inertia simulates the lateral movement incurred while turning around with your weapon. The heavier the weapon, the more time it takes for the shooter to properly re-align their sights.%1%1This means that lighter weapons, like pistols or SMGs, have advantages over rifles, in CQB, or machineguns, in faster target acquisition.";
			displayName = "Weapon Inertia";
			image = "\A3\Ui_f\data\GUI\Cfg\Hints\WeaponInertia_ca.paa";
			logicalOrder = 5;
			tip = "Weapon attachments effect inertia as well. While heavier optics or suppressors will increase inertia, some grips or handles will actually decrease it.";
		};
	};
	class Weapons_basic
	{
		displayName = "Weapons (Basics)";
		logicalOrder = 10;
		class Ballistics
		{
			arguments[] = {};
			description = "Bullets have accurately simulated ballistic trajectories. The more powerful round, and the longer the weapon's barrel, the flatter the trajectory.%1%1Understanding the ballistics of your weapon is the key for precision shooting at longer distances.";
			displayName = "Ballistics";
			image = "\A3\Ui_f\data\GUI\Cfg\Hints\Zeroing_ca.paa";
			logicalOrder = 11;
			tip = "";
		};
		class Firemode
		{
			arguments[] = {{{"nextWeapon"}}};
			description = "Many weapons have several fire-modes such as semi-automatic and burst.%1%2Use %11 to switch between the fire-modes.%1While in a vehicle as a gunner, use the switch key %11 to switch between vehicle weapons.";
			displayName = "Fire-mode";
			image = "\a3\ui_f\data\gui\cfg\hints\Firemode_ca.paa";
			logicalOrder = 5;
			tip = "";
		};
		class Grenades
		{
			arguments[] = {{{"throw"}}, {{"cycleThrownItems"}}};
			description = "Use grenades to quickly dispatch enemies behind cover.%1%2Throw a grenade by pressing %11.%1%2Cycle between grenade and chemlight types by pressing %12.%1The angle of the throw has a great influence on its distance.";
			displayName = "Grenades";
			image = "\a3\ui_f\data\gui\cfg\hints\Grenades_ca.paa";
			logicalOrder = 17;
			tip = "";
		};
		class GUI
		{
			arguments[] = {{{"DefaultAction"}}};
			description = "Weapon info (in the upper right corner) shows the name of the weapon, selected ammunition, remaining magazines, zeroing of the weapon and most importantly, the selected fire-mode. The more rectangles in fire-mode, the higher the fire rate.";
			displayName = "Weapon Info";
			image = "\a3\ui_f\data\gui\cfg\hints\GUI_ca.paa";
			logicalOrder = 2;
			tip = "Weapon info reappears anytime the state of the weapon changes. So you can either fire a bullet or switch weapons or fire-mode to trigger it. Or press %11 to show it.";
		};
		class Handgun
		{
			arguments[] = {{{"handgun"}}, {{"NextAction"}}};
			description = "Handguns are secondary weapons, used in a close combat or for self-defense.%1%2Use %11 to quickly switch to the handgun.";
			displayName = "Handguns";
			image = "\a3\ui_f\data\gui\cfg\hints\Handgun_ca.paa";
			logicalOrder = 16;
			tip = "You can also switch between weapons via the action menu %12.";
			class Handgun_sub1
			{
				arguments[] = {};
				description = "The round fired from the pistol does not have enough kinetic energy to penetrate both the obstacle and injure the soldier standing behind it.";
				displayName = "Handguns";
				image = "\a3\ui_f\data\gui\cfg\hints\Handgun_ca.paa";
				tip = "";
			};
		};
		class Launcher
		{
			arguments[] = {{{"SwitchWeapon"}}, {{"optics"}}, {{"DefaultAction"}}, {{"LockTarget"}}, {{"NextAction"}}};
			description = "Launchers give infantry a way to neutralize armored vehicles. %1%2Equip the launcher by pressing %11.%1%2You can press %12 to see through the launcher's optics.%1%2Point at the target.%1%2Shoot with %13.<br />For launchers armed with guided missiles, press %14 to lock the target and wait for the missile to lock <img size='1' %5  image='A3\Ui_f\data\GUI\Cfg\Hints\Cursor_lock_target_ca.paa' /> before shooting.";
			displayName = "Launchers";
			image = "\a3\ui_f\data\gui\cfg\hints\Launcher_ca.paa";
			logicalOrder = 18;
			tip = "In some presets, you can switch between weapons by opening the action menu %15 and selecting the weapon.";
			class Countermeasures_sub
			{
				arguments[] = {};
				description = "Aircraft targets are often equipped with countermeasures (commonly flares) to change the course of incoming missiles.%1%2To minimize the chance to miss, fire your missile when you're facing the target's rear%1%2Note that the effectiveness of flares is very random and you may hit or miss when firing from any direction";
				displayName = "Countermeasures";
				dlc = -1;
				image = "\a3\ui_f\data\gui\cfg\hints\Countermeasures_ca.paa";
				tip = "";
			};
		};
		class Lowering
		{
			arguments[] = {{{"toggleRaiseWeapon"}}, {{"DefaultAction"}}};
			description = "Press %11 to lower your weapon. It will be raised again after clicking %12 or pressing %11 again.";
			displayName = "Lowering Weapons";
			image = "\a3\ui_f\data\gui\cfg\hints\Lowering_ca.paa";
			logicalOrder = 14;
			tip = "A lowered weapon makes movement slower and less tiring.";
		};
		class Recoil
		{
			arguments[] = {{{"MoveUp"}}, {{"MoveDown"}}};
			description = "Recoil is a backward momentum when a gun is fired. The stronger the gun cartridge, the bigger the kick. Recoil and the anticipation of it can negatively affect shooting precision. This applies even more while shooting in bursts or in full-automatic mode.%1To lower the effect recoil has on your accuracy, try moving the aim down between the consecutive shots. Increasing your stability also helps, crouch %11 or go prone %12.";
			displayName = "Recoil";
			image = "\a3\ui_f\data\gui\cfg\hints\Miss_icon_ca.paa";
			logicalOrder = 10;
			tip = "";
			class HoldBreath_sub
			{
				arguments[] = {{{"holdBreath"}}};
				description = "You can use %11 to hold your breath.";
				displayName = "Hold Breath";
				dlc = -1;
				image = "\a3\ui_f\data\gui\cfg\hints\Shoot_ca.paa";
				tip = "";
			};
		};
		class Reload
		{
			arguments[] = {{{"ReloadMagazine"}}, {{"Action"}}};
			description = "An empty magazine is indicated by the magazine icon in the center of the screen.%1%2Press %11 to reload anytime.%1Alternatively, use the default action %12 to reload your weapon when the icon <img size='1' %5  image='A3\UI_F\data\IGUI\Cfg\Actions\reload_ca.paa' /> is present.";
			displayName = "Reload";
			image = "\a3\ui_f\data\gui\cfg\hints\Reload_ca.paa";
			logicalOrder = 4;
			tip = "The Action menu also gives you a selection of all magazines possible to reload. This is useful when you need to use some utility ammo.";
		};
		class Rifles
		{
			arguments[] = {};
			description = "Rifles are primary weapons with great fire-power, magazine capacity, range and accuracy. Rifles can be fitted with various accessories such as pointers, suppressors or optics to customize them for specific situations.";
			displayName = "Rifles";
			image = "\a3\ui_f\data\gui\cfg\hints\Rifles_ca.paa";
			logicalOrder = 15;
			tip = "Some rifles come in versions with underslung grenade launchers.";
		};
		class Scopes
		{
			arguments[] = {{{"Gear"}}, {{"nightVision"}}};
			description = "Scopes enhance weapon aiming. To equip a scope:%1%2Open your Inventory %11.%1%2%3Drag and drop%4 the scope into your rifle's scope slot.%1This is only possible if the weapon has an upper accessory slot.";
			displayName = "Scopes";
			image = "\a3\ui_f\data\gui\cfg\hints\Optics_ca.paa";
			logicalOrder = 7;
			tip = "Scopes are not usable together with a head-mounted display like NVG. But some scopes offer their own optics mode.%1%2Press %12 to switch available optics modes.";
			class AlternativeOptics_sub
			{
				arguments[] = {{{"opticsMode"}}};
				description = "Some scopes have alternate optic sights.%1%2You can switch between alternate optic sights with %11.";
				displayName = "Alternative Optics";
				dlc = -1;
				image = "\a3\ui_f\data\gui\cfg\hints\Sniper_ca.paa";
				tip = "";
			};
			class Optics_sub
			{
				arguments[] = {{{"Optics"}}};
				description = "Optics help you aim more precisely.%1%2Use %11 to switch to iron sights or optics.";
				displayName = "Optics";
				dlc = -1;
				image = "\a3\ui_f\data\gui\cfg\hints\Sniper_ca.paa";
				tip = "";
			};
			class Scopes_sub
			{
				arguments[] = {{{"zeroingUp"}}, {{"zeroingDown"}}};
				description = "Scopes enhance weapon aiming. To equip the scope:%1%2%3Drag and drop%4 the scope onto your rifle.";
				displayName = "Scopes";
				dlc = -1;
				image = "\a3\ui_f\data\gui\cfg\hints\Sniper_ca.paa";
				tip = "";
			};
		};
		class Shoot
		{
			arguments[] = {{{"DefaultAction"}}, {{"zoomTemp"}}, {{"HoldBreath"}}};
			description = "Press %11 to fire your weapon. You can hold %12 to focus and zoom in a little more for more accurate aiming. Remember that going crouch or prone also stabilizes your aim. Going prone also slightly alters weapon recoil behavior.";
			displayName = "Focus and Fire";
			image = "\a3\ui_f\data\gui\cfg\hints\Shoot_ca.paa";
			logicalOrder = 12;
			tip = "%13 means focusing and holding your breath. This will help to reduce breathing impact over inherent weapon sway for a short while and give you an opportunity to hit your target more precisely. But it will also temporarily increase your breathing penalty after you release your breath deliberately or when your oxygen is depleted by itself. Remember that Fatigue has detrimental effect over your ability to effectively hold breath.";
		};
		class Switch
		{
			arguments[] = {{{"SwitchWeapon"}}, {{"SwitchHandgun"}}, {{"NextAction"}}, {{"SwitchSecondary"}}};
			description = "Switch between the primary and secondary weapon with %11. Switch to the handgun by using %12. Switch to the launcher (or other secondary weapon) by using %14.";
			displayName = "Switch Weapons";
			image = "\a3\ui_f\data\gui\cfg\hints\Switch_ca.paa";
			logicalOrder = 3;
			tip = "In some presets, you can switch between weapons by opening the action menu %13 and selecting the weapon.";
		};
		class TargetLeading
		{
			arguments[] = {};
			description = "To hit a moving target, you have to lead it correctly. The main factors influencing your success are:%1%2Distance to the target%1%2The target's velocity%1%2Your weapon's muzzle velocity%1%2The ballistic trajectory of the round";
			displayName = "Leading Targets";
			image = "\A3\Ui_f\data\GUI\Cfg\Hints\Shoot_ca.paa";
			logicalOrder = 13;
			tip = "";
		};
		class WeaponBasics
		{
			arguments[] = {{{"defaultAction"}}, {{"nextWeapon"}}, {{"optics"}}, {{"holdBreath"}}, {{"reloadMagazine"}}};
			description = "Basic weapon operations:%1%2%11 to fire your weapon %1%2%12 to cycle fire modes %1%2%13 to switch to optics %1%2Hold %14 to hold breath %1%2%15 to reload";
			displayName = "Weapon Basics";
			image = "\A3\Ui_f\data\GUI\Cfg\Hints\Rifle_ca.paa";
			logicalOrder = 1;
			tip = "";
		};
		class WeaponDeployment
		{
			arguments[] = {{{"deployWeaponAuto"}}};
			description = "Bipods stabilize your weapon, by reducing sway and recoil, at the cost of reduced mobility.%1%2To deploy your bipod press %11";
			displayName = "Weapon Deployment";
			image = "\A3\Ui_f\data\GUI\Cfg\Hints\WeaponDeployment_ca.paa";
			logicalOrder = 9;
			tip = "You will pivot around your weapon when deployed, allowing you to adjust your view without having to redeploy.";
		};
		class WeaponResting
		{
			arguments[] = {};
			description = "You can stabilize your weapon sway and lower your recoil when you rest your weapon on any surface like a wall or a window frame.%1%1This process is automatic and doesn't require any user input.";
			displayName = "Weapon Resting";
			image = "\A3\Ui_f\data\GUI\Cfg\Hints\WeaponResting_ca.paa";
			logicalOrder = 8;
			tip = "";
		};
		class WeaponSway
		{
			arguments[] = {};
			description = "One of the vital abilities each soldier obtains is the ability to lay precise fire upon his enemies. Your weapon sway will increase when:%1%2You suffer an arm injury%1%2You're depleting your stamina through exhaustive movements or actions%1%1The heavier your loadout, and the longer you're exhausting yourself for, the faster you'll reach your limits.";
			displayName = "Weapon sway";
			image = "\a3\ui_f\data\gui\cfg\hints\WeaponInertia_ca.paa";
			logicalOrder = 21;
			tip = "To maintain decent accuracy, take short breaks to catch your breath and try to avoid exhausting yourself unless absolutely necessary. Manage the time you spend sprinting or climbing steep terrain.";
		};
		class Zeroing
		{
			arguments[] = {{{"ZeroingUp"}}, {{"ZeroingDown"}}};
			description = "Zeroing is the accurate setup of weapon sights. It tells you the range where the bullet will hit the center of the scope. Zeroing in meters is displayed in Weapon Info. %1%2Use %11 and %12 to adjust the weapon zeroing up and down.";
			displayName = "Zeroing";
			image = "\a3\ui_f\data\gui\cfg\hints\Zeroing_ca.paa";
			logicalOrder = 6;
			tip = "%2In close ranges under the zeroed range, it’s better to shoot slightly below the target.%1%2In ranges over the zeroed range, it's better to shoot slightly above the target.%1Some scopes come with crosshair aids for such situations.";
		};
		class Zooming
		{
			arguments[] = {{{"zoomTemp"}}, {{"opticsMode"}}, {{"zoomTemp"}}, {{"zoomIn"}}, {{"zoomOut"}}};
			description = "Optics help you aim more precisely.%1%2Use %11 to switch to iron sights or optics.%1%2You can choose between alternative optic sights with the optics mode key %12.%1%2Use %11 to switch back to normal view.";
			displayName = "Optics";
			image = "\a3\ui_f\data\gui\cfg\hints\Zooming_ca.paa";
			logicalOrder = 19;
			tip = "While not using optics, you can focus by holding %13 to zoom in a little more for more accurate aiming. While looking through the optics, %14 and %15 zoom in/out. This also works in vehicles.";
			class BulletDropCompensator_sub
			{
				arguments[] = {};
				description = "Bullet Drop Compensators indicate the point of impact at given distances. Some scopes, like the DMS, also have a simple rangefinder (based on the average height of a human standing up-right) to help the shooter measure the distance to the target more precisely.";
				displayName = "Bullet Drop Compensators";
				dlc = -1;
				image = "\A3\Ui_f\data\GUI\Cfg\Hints\Targets_ca.paa";
				tip = "";
			};
			class MilDot_sub
			{
				arguments[] = {};
				description = "Mil-Dot reticles use mathematics to measure distances. To use them properly, you need to: %1%2Know your target's height and/or width %1%2Divide the size (in meters) by the number of mil-dots it takes up in the reticle %1%2Multiply by 1000 to get the distance";
				displayName = "Mil-Dots";
				dlc = -1;
				image = "\A3\Ui_f\data\GUI\Cfg\Hints\Targets_ca.paa";
				tip = "Example: enemy tank exposing its side (approx. 8m), taking 10 mils in the scope. 8/10 = 0.8, 0.8*1000 = 800. The tank is 800m away.";
			};
			class Optics_sub
			{
				arguments[] = {{{"optics"}}, {{"opticsMode"}}, {{"zoomIn"}}, {{"zoomOut"}}, {{"zeroingUp"}}, {{"zeroingDown"}}};
				description = "Weapon sights help you to aim and fire accurately at distant targets.%1%2Press %11 to bring up your optics%1%2Some optics also have alternate sights for shorter ranges. Use %12 to switch between them %1%2Long-range scopes feature variable zoom levels. Use %13 and %14 to zoom in and out %1%2If the zeroing of the optics is not fixed, you can adjust it with %15/%16 to keep your targets in the middle of the crosshair";
				displayName = "Optics";
				dlc = -1;
				image = "\A3\Ui_f\data\GUI\Cfg\Hints\Optics_ca.paa";
				tip = "";
			};
		};
	};
};
