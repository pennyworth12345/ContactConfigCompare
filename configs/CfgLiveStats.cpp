class CfgLiveStats
{
	class RankedCTF: StandardCTF
	{
		board = 9;
		name = "Ranked - Capture The Flag";
	};
	class RankedDM: StandardDM
	{
		board = 8;
		name = "Ranked - Death Match";
	};
	class RankedFF: StandardFF
	{
		board = 10;
		name = "Ranked - Flag Fight";
	};
	class RankedHold: StandardHold
	{
		board = 13;
		name = "Ranked - Hold Location";
	};
	class RankedSControl: StandardSControl
	{
		board = 12;
		name = "Ranked - Sector Control";
	};
	class RankedTeam: StandardTeam
	{
		board = 11;
		name = "Ranked - Team Mission";
	};
	class RankedUnknown: StandardUnknown
	{
		board = 14;
		name = "Ranked - Unknown";
	};
	class StandardCTF
	{
		algorithm = 3;
		board = 2;
		coefAI = 0.5;
		coefLoose = -10;
		coefM1 = 1;
		coefM2 = 1;
		coefMax = 10;
		coefMin = 0.1;
		coefS1 = 100;
		coefS2 = 100;
		coefWin = 10;
		dropouts = 1;
		name = "Standard - Capture The Flag";
		class Columns
		{
			class Gamertag
			{
				align = 0;
				format = "%s";
				id = -2;
				name = "Name";
				width = 0.5;
			};
			class GamesPlayed
			{
				align = 1;
				format = "%d";
				id = 1;
				name = "Games played";
				width = 0.2;
			};
			class Rank
			{
				align = 1;
				format = "%d.";
				id = -1;
				name = "Rank";
				width = 0.1;
			};
			class Score
			{
				align = 1;
				format = "%I64d";
				id = -3;
				name = "Score";
				width = 0.2;
			};
		};
	};
	class StandardDM
	{
		algorithm = 2;
		board = 1;
		coefLoose = -10;
		coefM1 = 1;
		coefM2 = 1;
		coefMax = 10;
		coefMin = 0.1;
		coefS1 = 100;
		coefS2 = 100;
		coefWin = 10;
		dropouts = 1;
		name = "Standard - Death Match";
		class Columns
		{
			class Gamertag
			{
				align = 0;
				format = "%s";
				id = -2;
				name = "Name";
				width = 0.5;
			};
			class GamesPlayed
			{
				align = 1;
				format = "%d";
				id = 1;
				name = "Games played";
				width = 0.2;
			};
			class Rank
			{
				align = 1;
				format = "%d.";
				id = -1;
				name = "Rank";
				width = 0.1;
			};
			class Score
			{
				align = 1;
				format = "%I64d";
				id = -3;
				name = "Score";
				width = 0.2;
			};
		};
	};
	class StandardFF: StandardDM
	{
		board = 3;
		name = "Standard - Flag Fight";
	};
	class StandardHold: StandardCTF
	{
		board = 6;
		name = "Standard - Hold Location";
	};
	class StandardSControl: StandardCTF
	{
		board = 5;
		name = "Standard - Sector Control";
	};
	class StandardTeam: StandardCTF
	{
		board = 4;
		name = "Standard - Team Mission";
	};
	class StandardUnknown: StandardDM
	{
		board = 7;
		name = "Standard - Unknown";
	};
	class TrueSkill
	{
		board = -65535;
		name = "TrueSkill™ rankings";
		class Columns
		{
			class Gamertag
			{
				align = 0;
				format = "%s";
				id = -2;
				name = "Name";
				width = 0.5;
			};
			class GamesPlayed
			{
				align = 1;
				format = "%d";
				id = 62;
				name = "Games played";
				width = 0.2;
			};
			class Rank
			{
				align = 1;
				format = "%d.";
				id = -1;
				name = "Rank";
				width = 0.1;
			};
			class Skill
			{
				align = 1;
				format = "%d";
				id = 61;
				name = "TrueSkill™ rank";
				width = 0.2;
			};
		};
	};
};
