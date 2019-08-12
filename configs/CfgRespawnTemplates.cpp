class CfgRespawnTemplates
{
	respawnTemplatesBase[] = {"Counter"};
	respawnTemplatesBird[] = {"Spectator", "EndMission"};
	respawnTemplatesGroup[] = {"SwitchPlayer", "EndMission"};
	respawnTemplatesInstant[] = {"Counter"};
	respawnTemplatesNone[] = {"None"};
	respawnTemplatesSide[] = {"SwitchPlayer", "EndMission"};
	class Base
	{
		onPlayerKilled = "BIS_fnc_respawnBase";
		onPlayerRespawn = "BIS_fnc_respawnBase";
		scope = 1;
	};
	class Confirm
	{
		onPlayerKilled = "BIS_fnc_respawnConfirm";
		onPlayerRespawn = "BIS_fnc_respawnConfirm";
		scope = 1;
	};
	class Counter
	{
		displayName = "Show respawn counter";
		onPlayerKilled = "BIS_fnc_respawnCounter";
		onPlayerRespawn = "BIS_fnc_respawnCounter";
		respawnTypes[] = {2, 3};
	};
	class EndMission
	{
		displayName = "Mission fail when everyone is dead";
		onPlayerKilled = "BIS_fnc_respawnEndMission";
		onPlayerRespawn = "BIS_fnc_respawnEndMission";
	};
	class Group
	{
		onPlayerRespawn = "BIS_fnc_respawnGroup";
		scope = 1;
	};
	class Instant
	{
		onPlayerKilled = "BIS_fnc_respawnInstant";
		onPlayerRespawn = "BIS_fnc_respawnInstant";
		scope = 1;
	};
	class MenuInventory
	{
		displayName = "Select respawn loadout";
		onPlayerKilled = "BIS_fnc_respawnMenuInventory";
		onPlayerRespawn = "BIS_fnc_respawnMenuInventory";
		respawnOnStart = 1;
		respawnTypes[] = {2, 3};
	};
	class MenuPosition
	{
		displayName = "Select respawn position";
		onPlayerKilled = "BIS_fnc_respawnMenuPosition";
		onPlayerRespawn = "BIS_fnc_respawnMenuPosition";
		respawnOnStart = 1;
		respawnTypes[] = {2, 3};
	};
	class MenuSpectator
	{
		onPlayerKilled = "BIS_fnc_respawnMenuSpectator";
		onPlayerRespawn = "BIS_fnc_respawnMenuSpectator";
		respawnOnStart = 1;
		respawnTypes[] = {2, 3};
		scope = 1;
	};
	class None
	{
		displayName = "Singleplayer death screen";
		onPlayerKilled = "BIS_fnc_respawnNone";
	};
	class Rounds
	{
		onPlayerKilled = "BIS_fnc_respawnRounds";
		onPlayerRespawn = "BIS_fnc_respawnRounds";
		scope = 1;
	};
	class Seagull
	{
		displayName = "Switch to seagull";
		onPlayerRespawn = "BIS_fnc_respawnSeagull";
		respawnTypes[] = {1};
	};
	class Side
	{
		onPlayerRespawn = "BIS_fnc_respawnSide";
		scope = 1;
	};
	class Spectator
	{
		displayName = "Spectator";
		onPlayerKilled = "BIS_fnc_respawnSpectator";
		onPlayerRespawn = "BIS_fnc_respawnSpectator";
		respawnTypes[] = {1, 2, 3};
	};
	class SwitchPlayer
	{
		displayName = "Switch to another character";
		onPlayerRespawn = "BIS_fnc_respawnGroup";
		respawnTypes[] = {4, 5};
	};
	class Tickets
	{
		displayName = "Subtract tickets upon Death";
		onPlayerKilled = "BIS_fnc_respawnTickets";
		respawnTypes[] = {2, 3};
	};
	class TicketsSpawn
	{
		displayName = "Subtract tickets upon Respawn";
		onPlayerRespawn = "BIS_fnc_respawnTickets";
		respawnTypes[] = {2, 3};
	};
	class TimePenalty
	{
		onPlayerKilled = "BIS_fnc_respawnTimePenalty";
		onPlayerRespawn = "BIS_fnc_respawnTimePenalty";
		scope = 1;
	};
	class Wave
	{
		displayName = "Respawn in wave";
		onPlayerKilled = "BIS_fnc_respawnWave";
		onPlayerRespawn = "BIS_fnc_respawnWave";
		respawnTypes[] = {2, 3};
	};
};
