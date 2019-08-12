class RscDisplayMPScoreTable_LineTemplate: RscDisplayMPScoreTable_SideLineTemplate
{
	class controls: controls
	{
		class Killed: Killed {};
		class KillsAir: KillsAir {};
		class KillsArmor: KillsArmor {};
		class KillsInfantry: KillsInfantry {};
		class KillsSoft: KillsSoft {};
		class KillsTotal: KillsTotal {};
		class LineBackground: LineBackground {};
		class Order: RscText
		{
			h = "0.8 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			idc = 106;
			shadow = 0;
			sizeEx = "(			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 0.8)";
			text = "1";
			w = "1.5 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
			x = "0.5 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
			y = "0 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
		};
		class PlayersName: PlayersName
		{
			w = "13 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
			x = "2 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
		};
	};
};
