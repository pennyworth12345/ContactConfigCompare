class CfgSteamSettings
{
	access = 3;
	maxPreviewDirCacheSize = 25;
	publishDialogAdditionalSpaceColor[] = {1, 0, 0, 1};
	publishDialogFreedSpaceColor[] = {0, 1, 0, 1};
	steamPreviewDefaultImage = "\core\All\SteamWorksDefaultImage_co.jpg";
	steamPreviewFileExtension = "jpg";
	steamTmpPreviewDirectory = "SteamPreviewCache";
	workshopAgreement = "http://steamcommunity.com/sharedfiles/workshoplegalagreement";
	class Stats
	{
		class Campaigns
		{
			class CampaignEPA
			{
				campaignName = "A3\Missions_F_EPA\Campaign\";
				playtimeStats[] = {"CampaignEPAPlayTime", "CampaignPlayTime"};
				class Rules
				{
					class Finished
					{
						requiredMissions[] = {"A_in", "A_in2", "A_hub01", "A_hub02", "A_m01", "A_m02", "A_m03", "A_m04", "A_m05", "A_out"};
						statFlagName = "CompletedEPA";
					};
				};
			};
			class CampaignEPB
			{
				campaignName = "A3\Missions_F_EPB\Campaign\";
				playtimeStats[] = {"CampaignEPBPlayTime", "CampaignPlayTime"};
				class Rules
				{
					class Finished
					{
						campaignName = "A3\Missions_F_EPB\Campaign";
						requiredMissions[] = {"B_in", "B_in2", "B_hub01", "B_hub02", "B_hub03", "B_m01", "B_m02_1", "B_m02_2", "B_m03", "B_m05", "B_m06", "B_out2"};
						statFlagName = "CompletedEPB";
					};
				};
			};
			class CampaignEPC
			{
				campaignName = "A3\Missions_F_EPC\Campaign\";
				playtimeStats[] = {"CampaignEPCPlayTime", "CampaignPlayTime"};
				class Rules
				{
					class EndA
					{
						requiredMissions[] = {"C_in1", "C_in2", "C_m01", "C_m02", "C_out1", "C_out2", "C_EA"};
						statFlagName = "CompletedEPC_A";
					};
					class EndB
					{
						requiredMissions[] = {"C_in1", "C_in2", "C_m01", "C_m02", "C_out1", "C_out2", "C_EB"};
						statFlagName = "CompletedEPC_B";
					};
					class MainMissions
					{
						requiredMissions[] = {"C_in1", "C_in2", "C_m01", "C_m02", "C_out1", "C_out2"};
						statFlagName = "CompletedEPC";
					};
				};
			};
		};
		class Curator
		{
			curatorNormalPlayerPlayTime[] = {"ZeusNormalPlayerGamePlayTime"};
			curatorPlayerPlayTime[] = {"ZeusPlayerPlayTime"};
			curatorUnitControlPlayTime[] = {"ZeusUnitControlPlayTime"};
		};
		class Missions
		{
			class Drill1
			{
				missionName = "A3\missions_f_beta\Challenges\Firing_Drills\SP_FD01.Stratis\";
				playtimeStats[] = {"FiringDrillsPlayTime"};
			};
			class Drill10
			{
				missionName = "A3\Missions_F_Gamma\Challenges\Firing_Drills\SP_FD10.Altis\";
				playtimeStats[] = {"FiringDrillsPlayTime"};
			};
			class Drill2
			{
				missionName = "A3\missions_f_beta\Challenges\Firing_Drills\SP_FD02.Stratis\";
				playtimeStats[] = {"FiringDrillsPlayTime"};
			};
			class Drill3
			{
				missionName = "A3\missions_f_beta\Challenges\Firing_Drills\SP_FD03.Stratis\";
				playtimeStats[] = {"FiringDrillsPlayTime"};
			};
			class Drill4
			{
				missionName = "A3\missions_f_beta\Challenges\Firing_Drills\SP_FD04.Stratis\";
				playtimeStats[] = {"FiringDrillsPlayTime"};
			};
			class Drill5
			{
				missionName = "A3\Missions_F_Gamma\Challenges\Firing_Drills\SP_FD05.Altis\";
				playtimeStats[] = {"FiringDrillsPlayTime"};
			};
			class Drill6
			{
				missionName = "A3\Missions_F_Gamma\Challenges\Firing_Drills\SP_FD06.Altis\";
				playtimeStats[] = {"FiringDrillsPlayTime"};
			};
			class Drill7
			{
				missionName = "A3\Missions_F_Gamma\Challenges\Firing_Drills\SP_FD07.Altis\";
				playtimeStats[] = {"FiringDrillsPlayTime"};
			};
			class Drill8
			{
				missionName = "A3\Missions_F_Gamma\Challenges\Firing_Drills\SP_FD08.Altis\";
				playtimeStats[] = {"FiringDrillsPlayTime"};
			};
			class Drill9
			{
				missionName = "A3\Missions_F_Gamma\Challenges\Firing_Drills\SP_FD09.Altis\";
				playtimeStats[] = {"FiringDrillsPlayTime"};
			};
			class Showcase1
			{
				missionName = "A3\Missions_F\showcases\Showcase_Helicopters.Stratis\";
				playtimeStats[] = {"ShowcasesPlayTime"};
			};
			class Showcase10
			{
				missionName = "A3\Missions_F_EPC\showcases\Showcase_FixedWings.Altis\";
				playtimeStats[] = {"ShowcasesPlayTime"};
			};
			class Showcase11
			{
				missionName = "A3\Missions_F_Gamma\Showcases\Faction_BLUFOR.Altis\";
				playtimeStats[] = {"ShowcasesPlayTime"};
			};
			class Showcase12
			{
				missionName = "A3\Missions_F_Gamma\Showcases\Faction_INDEPENDENT.Altis\";
				playtimeStats[] = {"ShowcasesPlayTime"};
			};
			class Showcase13
			{
				missionName = "A3\Missions_F_Gamma\Showcases\Faction_OPFOR.Altis\";
				playtimeStats[] = {"ShowcasesPlayTime"};
			};
			class Showcase14
			{
				missionName = "A3\Missions_F_Gamma\Showcases\Faction_shared\";
				playtimeStats[] = {"ShowcasesPlayTime"};
			};
			class Showcase15
			{
				missionName = "A3\Missions_F_Gamma\Showcases\Showcase_Arma.Altis\";
				playtimeStats[] = {"ShowcasesPlayTime"};
			};
			class Showcase16
			{
				missionName = "A3\Missions_F_Gamma\Showcases\Showcase_Drones.Altis\";
				playtimeStats[] = {"ShowcasesPlayTime"};
			};
			class Showcase17
			{
				missionName = "A3\Missions_F_Gamma\Showcases\Showcase_Gunships.Altis\";
				playtimeStats[] = {"ShowcasesPlayTime"};
			};
			class Showcase18
			{
				missionName = "A3\Missions_F_Gamma\Showcases\Showcase_Tanks.Altis\";
				playtimeStats[] = {"ShowcasesPlayTime"};
			};
			class Showcase2
			{
				missionName = "A3\Missions_F\showcases\Showcase_Infantry.Stratis\";
				playtimeStats[] = {"ShowcasesPlayTime"};
			};
			class Showcase3
			{
				missionName = "A3\Missions_F\showcases\Showcase_SCUBA.Stratis\";
				playtimeStats[] = {"ShowcasesPlayTime"};
			};
			class Showcase4
			{
				missionName = "A3\Missions_F\showcases\Showcase_Vehicles.Stratis\";
				playtimeStats[] = {"ShowcasesPlayTime"};
			};
			class Showcase5
			{
				missionName = "A3\missions_f_beta\Showcases\Showcase_Combined_Arms.Stratis\";
				playtimeStats[] = {"ShowcasesPlayTime"};
			};
			class Showcase6
			{
				missionName = "A3\missions_f_beta\Showcases\Showcase_Commanding_I.Stratis\";
				playtimeStats[] = {"ShowcasesPlayTime"};
			};
			class Showcase7
			{
				missionName = "A3\missions_f_beta\Showcases\Showcase_Night.Stratis\";
				playtimeStats[] = {"ShowcasesPlayTime"};
			};
			class Showcase8
			{
				missionName = "A3\missions_f_beta\Showcases\Showcase_Supports.Stratis\";
				playtimeStats[] = {"ShowcasesPlayTime"};
			};
			class Showcase9
			{
				missionName = "A3\Missions_F_Curator\Showcases\Showcase_Curator.Altis\";
				playtimeStats[] = {"ShowcasesPlayTime"};
			};
		};
		class Worlds
		{
			class Altis
			{
				playtimeStats[] = {"AltisPlayTime"};
				worldName = "altis";
			};
			class Stratis
			{
				playtimeStats[] = {"StratisPlayTime"};
				worldName = "stratis";
			};
		};
	};
	class Tags
	{
		class AirTag: TagCommonBase
		{
			title = "Air";
			tooltip = "Use this tag for scenarios focused on the aerial combat.";
		};
		class AltisTag
		{
			missionAddAsDefault = 0;
			missionAddWhenFireDrill = 0;
			missionAddWhenMods = 0;
			missionAddWhenMP = 0;
			missionAddWhenTimeTrial = 0;
			missionUserCanAddRemove = 0;
			title = "Altis";
			tooltip = "Use this tag for content related to Altis map.";
		};
		class DependencyTag
		{
			missionAddAsDefault = 0;
			missionAddWhenFireDrill = 0;
			missionAddWhenMods = 1;
			missionAddWhenMP = 0;
			missionAddWhenTimeTrial = 0;
			missionUserCanAddRemove = 1;
			title = "Dependency";
			tooltip = "Use this tag for scenarios featuring User-created content including scripts.";
		};
		class MultiplayerTag
		{
			missionAddAsDefault = 0;
			missionAddWhenFireDrill = 0;
			missionAddWhenMods = 0;
			missionAddWhenMP = 1;
			missionAddWhenTimeTrial = 0;
			missionUserCanAddRemove = 1;
			title = "Multiplayer";
			tooltip = "Use this tag for the Multiplayer scenarios.";
		};
		class ScenarioTag
		{
			missionAddAsDefault = 1;
			missionAddWhenFireDrill = 0;
			missionAddWhenMods = 0;
			missionAddWhenMP = 0;
			missionAddWhenTimeTrial = 0;
			missionUserCanAddRemove = 0;
			title = "Scenario";
			tooltip = "";
		};
		class SingleplayerTag
		{
			missionAddAsDefault = 0;
			missionAddWhenFireDrill = 0;
			missionAddWhenMods = 0;
			missionAddWhenMP = 0;
			missionAddWhenTimeTrial = 0;
			missionUserCanAddRemove = 1;
			title = "Singleplayer";
			tooltip = "Use this tag for the Singleplayer only scenarios.";
		};
		class StratisTag
		{
			missionAddAsDefault = 0;
			missionAddWhenFireDrill = 0;
			missionAddWhenMods = 0;
			missionAddWhenMP = 0;
			missionAddWhenTimeTrial = 0;
			missionUserCanAddRemove = 0;
			title = "Stratis";
		};
		class TagCommonBase
		{
			missionAddAsDefault = 0;
			missionAddWhenFireDrill = 0;
			missionAddWhenMods = 0;
			missionAddWhenMP = 0;
			missionAddWhenTimeTrial = 0;
			missionUserCanAddRemove = 1;
			title = "Infantry";
			tooltip = "Use this tag for scenarios focused on the infantry combat.";
		};
		class VehiclesTag: TagCommonBase
		{
			title = "Vehicles";
			tooltip = "Use this tag for scenarios focused on the land vehicle combat.";
		};
		class WaterTag: TagCommonBase
		{
			title = "Water";
			tooltip = "Use this tag for scenarios focused on the water/underwater combat.";
		};
	};
};
