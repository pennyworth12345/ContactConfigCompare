class SteamManagerConfig
{
	creatorAppIds[] = {233800};
	fileBankMissionName = "__cur_sp";
	class CacheConfig
	{
		metaDir = "meta\";
		persistedItemsFilename = "cacheItems.map";
		publishedFilename = "publishedContent.list";
		steamOffCacheDir = "steam\";
		subscribedFilename = "subscribedContent.list";
	};
	class Tags
	{
		class DataType
		{
			class ModTag
			{
				addonRequiredTag = 1;
				title = "Mod";
				tooltip = "Use this tag to label a collection of addons.";
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
			class ServerTag: TagCommonBase
			{
				title = "Server";
				tooltip = "Use this tag to label a server related content.";
			};
		};
		class DLC
		{
			class ApexTag: TagCommonBase
			{
				title = "Apex";
				tooltip = "Use this tag for content using the Apex Expansion.";
			};
			class Contact: TagCommonBase
			{
				title = "Contact";
				tooltip = "";
			};
			class ContactPlatform: TagCommonBase
			{
				title = "Contact (Platform)";
				tooltip = "";
			};
			class HelicoptersDLCTag: TagCommonBase
			{
				title = "HelicoptersDLC";
				tooltip = "Use this tag for content using the Helicopters DLC.";
			};
			class JetsTag: TagCommonBase
			{
				title = "Jets";
				tooltip = "Use this tag for content using the Jets DLC.";
			};
			class KartsDLCTag: TagCommonBase
			{
				title = "KartsDLC";
				tooltip = "Use this tag for content using the Karts DLC.";
			};
			class LawsOfWarTag: TagCommonBase
			{
				title = "Laws of War";
				tooltip = "Use this tag for content using the Laws of War DLC.";
			};
			class MaldenTag: TagCommonBase
			{
				title = "Malden";
				tooltip = "Use this tag for content using the Malden DLC.";
			};
			class MarksmenDLCTag: TagCommonBase
			{
				title = "MarksmenDLC";
				tooltip = "Use this tag for content using the Marksmen DLC.";
			};
			class TanksTag: TagCommonBase
			{
				title = "Tanks";
				tooltip = "Tanks";
			};
		};
		class Meta
		{
			class CollectionTag: TagCommonBase
			{
				title = "Collection";
				tooltip = "Use this tag to label collections.";
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
		};
		class ModType
		{
			class AnimationTag: TagCommonBase
			{
				title = "Animation";
				tooltip = "Use this tag for animation content.";
			};
			class BoatTag: TagCommonBase
			{
				title = "Boat";
				tooltip = "Use tags tag for content related to boats.";
			};
			class CampaignTag: TagCommonBase
			{
				title = "Campaign";
				tooltip = "Use this tag to label campaign content. Will be displayed in campaign dialog.";
			};
			class CharacterTag: TagCommonBase
			{
				title = "Character";
				tooltip = "Use this tag for character content.";
			};
			class EditorExtensionTag: TagCommonBase
			{
				title = "Editor Extension";
				tooltip = "Extension for Eden Editor";
			};
			class EquipmentTag: TagCommonBase
			{
				title = "Equipment";
				tooltip = "Use this tag for equipment and accessory content.";
			};
			class HelicopterTag: TagCommonBase
			{
				title = "Helicopter";
				tooltip = "Use this tag for content related to helicopters.";
			};
			class MechanicsTag: TagCommonBase
			{
				title = "Mechanics";
				tooltip = "Use this tag for scripts, AI and game mechanics modifications.";
			};
			class PlaneTag: TagCommonBase
			{
				title = "Plane";
				tooltip = "Use this tag for content related to planes.";
			};
			class SoundTag: TagCommonBase
			{
				title = "Sound";
				tooltip = "Use this tag for sound and/or music content.";
			};
			class StructureTag: TagCommonBase
			{
				title = "Structure";
				tooltip = "Structure";
			};
			class TerrainTag: TagCommonBase
			{
				title = "Terrain";
				tooltip = "Use this tag for terrain/map content.";
			};
			class TrackedTag: TagCommonBase
			{
				title = "Tracked";
				tooltip = "Use this tag for content related to tracked vehicles.";
			};
			class WeaponTag: TagCommonBase
			{
				title = "Weapon";
				tooltip = "Use this tag for weapons related content.";
			};
			class WheeledTag: TagCommonBase
			{
				title = "Wheeled";
				tooltip = "Use this tag for content related to wheeled vehicles.";
			};
		};
		class ScenarioGameplay
		{
			class CoopTag: TagCommonBase
			{
				title = "Coop";
				tooltip = "Use this taf for cooperative content.";
			};
			class FiringDrillTag: TagCommonBase
			{
				title = "FiringDrill";
				tooltip = "Use this tag for Firing Drill Challenge scenarios only.";
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
			class PersistentTag: TagCommonBase
			{
				title = "Persistent";
				tooltip = "Use this tag for persistent world content.";
			};
			class PvPTag: TagCommonBase
			{
				title = "PvP";
				tooltip = "Use this tag to label player vs. player content.";
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
			class TimeTrialTag: TagCommonBase
			{
				title = "TimeTrial";
				tooltip = "Use this tag for Time Trial Challenge scenarios only.";
			};
			class Zeus
			{
				missionAddAsDefault = 0;
				missionAddWhenFireDrill = 0;
				missionAddWhenMods = 0;
				missionAddWhenMP = 0;
				missionAddWhenTimeTrial = 0;
				missionUserCanAddRemove = 1;
				title = "Zeus";
				tooltip = "Use this tag for Zeus scenarios.";
			};
		};
		class ScenarioMap
		{
			class AltisTag
			{
				mapName = "Altis";
				missionAddAsDefault = 0;
				missionAddWhenFireDrill = 0;
				missionAddWhenMods = 0;
				missionAddWhenMP = 0;
				missionAddWhenTimeTrial = 0;
				missionUserCanAddRemove = 0;
				title = "Altis";
				tooltip = "Use this tag for content related to Altis map.";
			};
			class LivoniaTag: TagCommonBase
			{
				mapName = "Enoch";
				missionAddAsDefault = 0;
				missionAddWhenFireDrill = 0;
				missionAddWhenMods = 0;
				missionAddWhenMP = 0;
				missionAddWhenTimeTrial = 0;
				missionUserCanAddRemove = 0;
				title = "Livonia";
				tooltip = "";
			};
			class Malden2035Tag
			{
				mapName = "Malden";
				missionAddAsDefault = 0;
				missionAddWhenFireDrill = 0;
				missionAddWhenMods = 0;
				missionAddWhenMP = 0;
				missionAddWhenTimeTrial = 0;
				missionUserCanAddRemove = 0;
				title = "Malden 2035";
				tooltip = "Use this tag for content related to Malden 2035 map.";
			};
			class OtherMap
			{
				missionFromOtherMap = 1;
				title = "OtherMap";
				tooltip = "Use this tag for content related to other game maps.";
			};
			class StratisTag
			{
				mapName = "Stratis";
				missionAddAsDefault = 0;
				missionAddWhenFireDrill = 0;
				missionAddWhenMods = 0;
				missionAddWhenMP = 0;
				missionAddWhenTimeTrial = 0;
				missionUserCanAddRemove = 0;
				title = "Stratis";
				tooltip = "Use this tag for content related to Stratis map.";
			};
			class TanoaTag: TagCommonBase
			{
				mapName = "Tanoa";
				missionAddAsDefault = 0;
				missionAddWhenFireDrill = 0;
				missionAddWhenMods = 0;
				missionAddWhenMP = 0;
				missionAddWhenTimeTrial = 0;
				missionUserCanAddRemove = 0;
				title = "Tanoa";
				tooltip = "Use this tag for content related to Tanoa map.";
			};
			class VrTag
			{
				mapName = "VR";
				missionAddAsDefault = 0;
				missionAddWhenFireDrill = 0;
				missionAddWhenMods = 0;
				missionAddWhenMP = 0;
				missionAddWhenTimeTrial = 0;
				missionUserCanAddRemove = 0;
				title = "VR";
				tooltip = "Use this tag for content related to Virtual Reality map.";
			};
		};
		class ScenarioType
		{
			class AirTag: TagCommonBase
			{
				title = "Air";
				tooltip = "Use this tag for scenarios focused on the aerial combat.";
			};
			class InfantryTag: TagCommonBase
			{
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
		class TagCommonBase
		{
			missionAddAsDefault = 0;
			missionAddWhenFireDrill = 0;
			missionAddWhenMods = 0;
			missionAddWhenMP = 0;
			missionAddWhenTimeTrial = 0;
			missionUserCanAddRemove = 1;
		};
	};
};
