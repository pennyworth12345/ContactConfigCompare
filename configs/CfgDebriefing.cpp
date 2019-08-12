class CfgDebriefing
{
	titleEndDefault = "Mission Completed";
	titleFailDefault = "Mission Failed";
	class AMAZING_LOOSER
	{
		description = "You were decimated!";
		title = "Defeat";
	};
	class AMAZING_WINNER
	{
		description = "You decimated the enemy!";
		title = "Victory";
	};
	class APPlayersDead
	{
		showScore = 0;
		subtitle = "All Players are Dead!";
	};
	class APPlayersDeadAlone
	{
		showScore = 0;
	};
	class BIS_WLDefeatEAST: BIS_WLDefeatWEST
	{
		picture = "o_installation";
		pictureColor[] = {0.5, 0, 0, 1};
	};
	class BIS_WLDefeatWEST
	{
		picture = "b_installation";
		pictureBackground = "\A3\Map_Altis\data\ui_Altis_ca.paa";
		pictureColor[] = {0, 0.3, 0.6, 1};
		subtitle = "You lost control over your base!";
		title = "Defeat";
	};
	class BIS_WLVictoryEAST: BIS_WLVictoryWEST
	{
		picture = "o_installation";
		pictureColor[] = {0.5, 0, 0, 1};
	};
	class BIS_WLVictoryWEST
	{
		picture = "b_installation";
		pictureBackground = "\A3\Map_Altis\data\ui_Altis_ca.paa";
		pictureColor[] = {0, 0.3, 0.6, 1};
		subtitle = "The enemy lost control over their base!";
		title = "Victory";
	};
	class BLUFORBase
	{
		picture = "b_inf";
		pictureColor[] = {"(profilenamespace getvariable ['Map_BLUFOR_R',0])", "(profilenamespace getvariable ['Map_BLUFOR_G',1])", "(profilenamespace getvariable ['Map_BLUFOR_B',1])", "(profilenamespace getvariable ['Map_BLUFOR_A',0.8])"};
	};
	class CARRIER_LOOSER
	{
		description = "You left the AO with the Schematics";
		title = "Defeat";
	};
	class CARRIER_WINNER
	{
		description = "The enemy left the AO with the Schematics";
		title = "Victory";
	};
	class CivilianBase
	{
		picture = "n_inf";
		pictureColor[] = {"(profilenamespace getvariable ['Map_Civilian_R',0])", "(profilenamespace getvariable ['Map_Civilian_G',1])", "(profilenamespace getvariable ['Map_Civilian_B',1])", "(profilenamespace getvariable ['Map_Civilian_A',0.8])"};
	};
	class CPEndAllDeadMissionFail
	{
		subtitle = "Mission failed and the whole team was KIA.";
		title = "Team lost";
	};
	class CPEndAllDeadMissionSuccess
	{
		subtitle = "The team was KIA after accomplishing the mission.";
		title = "Team lost";
	};
	class CPEndFullExfil
	{
		subtitle = "The primary objective was not accomplished.";
		title = "Mission over";
	};
	class CPEndPartialExfil
	{
		subtitle = "The team failed the mission and suffered heavy losses.";
		title = "Mission failed";
	};
	class CPEndTotalVictory
	{
		subtitle = "Flawless execution of the tasks, great work!";
		title = "Mission completed";
	};
	class deserter
	{
		subtitle = "Missing in action";
	};
	class DRAW
	{
		description = "Though it was losing, one of the teams pulled ahead in the final moments.";
		title = "Draw";
	};
	class endDeath
	{
		picture = "\a3\Ui_f\data\GUI\Cfg\Debriefing\endDeath_ca.paa";
		subtitle = "All players died";
	};
	class endDefault
	{
		description = "";
		picture = "\a3\Ui_f\data\GUI\Cfg\Debriefing\endDefault_ca.paa";
		pictureBackground = "";
		subtitle = "Skipped the mission using a cheat";
		title = "Cheated";
	};
	class friendlyFire
	{
		subtitle = "Friendly fire will not be tolerated!";
	};
	class GroupLost
	{
		title = "Your squad has lost";
	};
	class GroupWon
	{
		title = "Your squad has won";
	};
	class IndependentBase
	{
		picture = "n_inf";
		pictureColor[] = {"(profilenamespace getvariable ['Map_Independent_R',0])", "(profilenamespace getvariable ['Map_Independent_G',1])", "(profilenamespace getvariable ['Map_Independent_B',1])", "(profilenamespace getvariable ['Map_Independent_A',0.8])"};
	};
	class LOOSER
	{
		description = "Your team lost!";
		title = "Defeat";
	};
	class loser
	{
		title = "Mission Failed";
	};
	class moduleMPTypeDefense_CuratorEAST: moduleMPTypeDefense_CuratorUnknown
	{
		subtitle = "OPFOR team has prevailed";
	};
	class moduleMPTypeDefense_CuratorGUER: moduleMPTypeDefense_CuratorUnknown
	{
		subtitle = "Independent team has prevailed";
	};
	class moduleMPTypeDefense_CuratorUnknown
	{
		subtitle = "Both teams have prevailed";
		title = "Defenders Lose";
	};
	class moduleMPTypeDefense_CuratorWEST: moduleMPTypeDefense_CuratorUnknown
	{
		subtitle = "BLUFOR team has prevailed";
	};
	class moduleMPTypeDefense_PlayersEAST: OPFORBase
	{
		subtitle = "OPFOR team has prevailed";
		title = "Defenders Evacuated";
	};
	class moduleMPTypeDefense_PlayersGUER: IndependentBase
	{
		subtitle = "Independent team has prevailed";
		title = "Defenders Evacuated";
	};
	class moduleMPTypeDefense_PlayersUnknown
	{
		subtitle = "Both teams have prevailed";
		title = "Defenders Evacuated";
	};
	class moduleMPTypeDefense_PlayersWEST: BLUFORBase
	{
		subtitle = "BLUFOR team has prevailed";
		title = "Defenders Evacuated";
	};
	class moduleMPTypeDefense_TieEAST: moduleMPTypeDefense_TieUnknown
	{
		subtitle = "OPFOR team has prevailed";
	};
	class moduleMPTypeDefense_TieGUER: moduleMPTypeDefense_TieUnknown
	{
		subtitle = "Independent team has prevailed";
	};
	class moduleMPTypeDefense_TieUnknown
	{
		subtitle = "Both teams have prevailed";
		title = "Defenders Survived";
	};
	class moduleMPTypeDefense_TieWEST: moduleMPTypeDefense_TieUnknown
	{
		subtitle = "BLUFOR team has prevailed";
	};
	class moduleMPTypeSeize_CuratorEAST: moduleMPTypeSeize_CuratorUnknown
	{
		subtitle = "OPFOR team has prevailed";
	};
	class moduleMPTypeSeize_CuratorGUER: moduleMPTypeSeize_CuratorUnknown
	{
		subtitle = "Independent team has prevailed";
	};
	class moduleMPTypeSeize_CuratorUnknown
	{
		subtitle = "Both teams have prevailed";
		title = "Attackers Lose";
	};
	class moduleMPTypeSeize_CuratorWEST: moduleMPTypeSeize_CuratorUnknown
	{
		subtitle = "BLUFOR team has prevailed";
	};
	class moduleMPTypeSeize_PlayersEAST: OPFORBase
	{
		subtitle = "OPFOR team has prevailed";
		title = "Attackers Win";
	};
	class moduleMPTypeSeize_PlayersGUER: IndependentBase
	{
		subtitle = "Independent team has prevailed";
		title = "Attackers Win";
	};
	class moduleMPTypeSeize_PlayersUnknown
	{
		subtitle = "Both teams have prevailed";
		title = "Attackers Win";
	};
	class moduleMPTypeSeize_PlayersWEST: BLUFORBase
	{
		subtitle = "BLUFOR team has prevailed";
		title = "Attackers Win";
	};
	class OPFORBase
	{
		picture = "o_inf";
		pictureColor[] = {"(profilenamespace getvariable ['Map_OPFOR_R',0])", "(profilenamespace getvariable ['Map_OPFOR_G',1])", "(profilenamespace getvariable ['Map_OPFOR_B',1])", "(profilenamespace getvariable ['Map_OPFOR_A',0.8])"};
	};
	class PlayerLost
	{
		title = "You've lost";
	};
	class PlayerWon
	{
		title = "You've won";
	};
	class PRE_LOOSER
	{
		description = "All players are KIA!";
		title = "Defeat";
	};
	class PRE_WINNER
	{
		description = "All enemy players are dead!";
		title = "Victory";
	};
	class RespawnRoundsLost: endDeath
	{
		subtitle = "";
		title = "You've lost the round";
	};
	class RespawnRoundsTie
	{
		picture = "\a3\Ui_f\data\GUI\Cfg\Hints\Rules_ca.paa";
		subtitle = "";
		title = "The round ends in a draw";
	};
	class RespawnRoundsWon
	{
		picture = "\a3\Ui_f\data\GUI\Cfg\Hints\Commanding_ca.paa";
		subtitle = "";
		title = "You've won the round";
	};
	class SCHEMATICS_LOOSER
	{
		description = "The schematics were destroyed";
		title = "Defeat";
	};
	class SCHEMATICS_WINNER
	{
		description = "The enemy destroyed the schematics by mistake";
		title = "Victory";
	};
	class SideLost
	{
		title = "Your side has lost";
	};
	class SideWon
	{
		title = "Your side has won";
	};
	class SPECTATOR_DRAW
	{
		description = "The match ended in a draw! Neither of the teams were able to upload the schematics.";
		subtitle = "DRAW";
		title = "Transmission Ended";
	};
	class SPECTATOR_EAST
	{
		description = "OPFOR was able to upload the schematics and win the match.";
		subtitle = "OPFOR WON";
		title = "Transmission Ended";
	};
	class SPECTATOR_WEST
	{
		description = "BLUFOR was able to upload the schematics and win the match.";
		subtitle = "BLUFOR WON";
		title = "Transmission Ended";
	};
	class UnknownBase
	{
		picture = "n_inf";
		pictureColor[] = {"(profilenamespace getvariable ['Map_Unknown_R',0])", "(profilenamespace getvariable ['Map_Unknown_G',1])", "(profilenamespace getvariable ['Map_Unknown_B',1])", "(profilenamespace getvariable ['Map_Unknown_A',0.8])"};
	};
	class WINNER
	{
		description = "Your team won!";
		title = "Victory";
	};
};
