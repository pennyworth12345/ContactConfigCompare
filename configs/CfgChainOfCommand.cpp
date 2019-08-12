class CfgChainOfCommand
{
	class Sides
	{
		class Civilian
		{
			color[] = {"(profilenamespace getvariable ['Map_Civilian_R',0])", "(profilenamespace getvariable ['Map_Civilian_G',1])", "(profilenamespace getvariable ['Map_Civilian_B',1])", "(profilenamespace getvariable ['Map_Civilian_A',0.8])"};
			name = "Civilian";
			prefix = "n_";
			size = 0.75;
		};
		class East
		{
			color[] = {"(profilenamespace getvariable ['Map_OPFOR_R',0])", "(profilenamespace getvariable ['Map_OPFOR_G',1])", "(profilenamespace getvariable ['Map_OPFOR_B',1])", "(profilenamespace getvariable ['Map_OPFOR_A',0.8])"};
			name = "OPFOR";
			prefix = "o_";
			size = 0.65;
		};
		class Resistance
		{
			color[] = {"(profilenamespace getvariable ['Map_Independent_R',0])", "(profilenamespace getvariable ['Map_Independent_G',1])", "(profilenamespace getvariable ['Map_Independent_B',1])", "(profilenamespace getvariable ['Map_Independent_A',0.8])"};
			name = "Independent";
			prefix = "n_";
			size = 0.75;
		};
		class Unknown
		{
			color[] = {"(profilenamespace getvariable ['Map_Unknown_R',0])", "(profilenamespace getvariable ['Map_Unknown_G',1])", "(profilenamespace getvariable ['Map_Unknown_B',1])", "(profilenamespace getvariable ['Map_Unknown_A',0.8])"};
			name = "Unknown";
			prefix = "n_";
			size = 0.75;
		};
		class West
		{
			color[] = {"(profilenamespace getvariable ['Map_BLUFOR_R',0])", "(profilenamespace getvariable ['Map_BLUFOR_G',1])", "(profilenamespace getvariable ['Map_BLUFOR_B',1])", "(profilenamespace getvariable ['Map_BLUFOR_A',0.8])"};
			name = "BLUFOR";
			prefix = "b_";
			size = 1;
		};
	};
	class Sizes
	{
		class Army
		{
			commanderRank = "General";
			name = "Army";
			nameGender = "0";
			nameShort = "Army";
			size = 10;
			textDefault = "%1 %3";
			textShortDefault = "%1 %3";
			texture = "group_10";
		};
		class ArmyGroup
		{
			commanderRank = "General";
			name = "Army Group";
			nameGender = "0";
			nameShort = "AG";
			size = 11;
			textDefault = "%1 %3";
			textShortDefault = "%1 %3";
			texture = "group_11";
		};
		class Battalion
		{
			commanderRank = "Colonel";
			name = "Battalion";
			nameGender = "0";
			nameShort = "Bn";
			size = 5;
			textDefault = "%1 %2 %3";
			textShortDefault = "%1 %3";
			texture = "group_5";
		};
		class BCT: Brigade
		{
			name = "Brigade Combat Team";
			nameGender = "0";
			nameShort = "BCT";
			textDefault = "%1 %3";
			textShortDefault = "%1 %3";
		};
		class Brigade
		{
			commanderRank = "General";
			name = "Brigade";
			nameGender = "0";
			nameShort = "Bde";
			size = 7;
			textDefault = "%1 %2 %3";
			textShortDefault = "%1 %3";
			texture = "group_7";
		};
		class Company
		{
			commanderRank = "Captain";
			name = "Company";
			nameGender = "0";
			nameShort = "Co";
			size = 4;
			textDefault = "%1 %3";
			textShortDefault = "%1 %3";
			texture = "group_4";
		};
		class Corps
		{
			commanderRank = "General";
			name = "Corps";
			nameGender = "0";
			nameShort = "Corps";
			size = 9;
			textDefault = "%1 %3";
			textShortDefault = "%1 %3";
			texture = "group_9";
		};
		class Division
		{
			commanderRank = "General";
			name = "Division";
			nameGender = "0";
			nameShort = "Div";
			size = 8;
			textDefault = "%1 %2 %3";
			textShortDefault = "%1 %3";
			texture = "group_8";
		};
		class FireTeam
		{
			commanderRank = "Corporal";
			name = "Fireteam";
			nameGender = "0";
			nameShort = "FT";
			size = 0;
			textDefault = "%1 %3";
			textShortDefault = "%1 %3";
			texture = "group_0";
		};
		class HBCT: Brigade
		{
			name = "Heavy Brigade Combat Team";
			nameGender = "0";
			nameShort = "HBCT";
			textDefault = "%1 %3";
			textShortDefault = "%1 %3";
		};
		class IBCT: Brigade
		{
			name = "Infantry Brigade Combat Team";
			nameGender = "0";
			nameShort = "IBCT";
			textDefault = "%1 %3";
			textShortDefault = "%1 %3";
		};
		class Platoon
		{
			commanderRank = "Lieutenant";
			name = "Platoon";
			nameGender = "0";
			nameShort = "Pt";
			size = 3;
			textDefault = "%1 %3";
			textShortDefault = "%1 %3";
			texture = "group_3";
		};
		class Regiment
		{
			commanderRank = "Colonel";
			name = "Regiment";
			nameGender = "0";
			nameShort = "Reg";
			size = 6;
			textDefault = "%1 %2 %3";
			textShortDefault = "%1 %3";
			texture = "group_6";
		};
		class Section
		{
			commanderRank = "";
			name = "Fireteam";
			nameGender = "0";
			nameShort = "FT";
			size = 2;
			textDefault = "%1 %3";
			textShortDefault = "%1 %3";
			texture = "group_2";
		};
		class Size1
		{
			size = 1;
		};
		class Size10
		{
			size = 10;
		};
		class Size11
		{
			size = 11;
		};
		class Size2
		{
			size = 2;
		};
		class Size3
		{
			size = 3;
		};
		class Size4
		{
			size = 4;
		};
		class Size5
		{
			size = 5;
		};
		class Size6
		{
			size = 6;
		};
		class Size7
		{
			size = 7;
		};
		class Size8
		{
			size = 8;
		};
		class Size9
		{
			size = 9;
		};
		class Squad
		{
			commanderRank = "Sergeant";
			name = "Squad";
			nameGender = "0";
			nameShort = "Squad";
			size = 1;
			textDefault = "%1 %3";
			textShortDefault = "%1 %3";
			texture = "group_1";
		};
		class Squadron: Battalion
		{
			name = "Squadron";
			nameGender = "0";
			nameShort = "Sqdn";
			textDefault = "%1 %3";
			textShortDefault = "%1 %3";
		};
		class Troop: Company
		{
			name = "Troop";
			nameGender = "0";
			nameShort = "Trp";
			textDefault = "%1 %2 %3";
			textShortDefault = "%1 %3";
		};
	};
	class Types
	{
		class Airborne
		{
			nameFeminine = "Airborne";
			nameMasculine = "Airborne";
			nameNeutral = "Airborne";
			texture = "inf";
		};
		class AntiAir
		{
			nameFeminine = "Anti-Air";
			nameMasculine = "Anti-Air";
			nameNeutral = "Anti-Air";
			texture = "antiair";
		};
		class Armored
		{
			nameFeminine = "Armored";
			nameMasculine = "Armored";
			nameNeutral = "Armored";
			texture = "armor";
		};
		class Artillery
		{
			nameFeminine = "Artillery";
			nameMasculine = "Artillery";
			nameNeutral = "Artillery";
			texture = "art";
		};
		class Assault
		{
			nameFeminine = "Assault";
			nameMasculine = "Assault";
			nameNeutral = "Assault";
			texture = "air";
		};
		class AttackRecon
		{
			nameFeminine = "Attack/Recon";
			nameMasculine = "Attack/Recon";
			nameNeutral = "Attack/Recon";
			texture = "air";
		};
		class AviationSupport
		{
			nameFeminine = "Aviation Support";
			nameMasculine = "Aviation Support";
			nameNeutral = "Aviation Support";
			texture = "air";
		};
		class Cavalry
		{
			nameFeminine = "Cavalry";
			nameMasculine = "Cavalry";
			nameNeutral = "Cavalry";
			texture = "recon";
		};
		class CombatAviation
		{
			nameFeminine = "Combat Aviation";
			nameMasculine = "Combat Aviation";
			nameNeutral = "Combat Aviation";
			texture = "air";
		};
		class Fighter
		{
			nameFeminine = "Fighter";
			nameMasculine = "Fighter";
			nameNeutral = "Fighter";
			texture = "plane";
		};
		class GeneralSupport
		{
			nameFeminine = "General Support";
			nameMasculine = "General Support";
			nameNeutral = "General Support";
			texture = "air";
		};
		class Helicopter
		{
			nameFeminine = "Helicopter";
			nameMasculine = "Helicopter";
			nameNeutral = "Helicopter";
			texture = "air";
		};
		class HQ
		{
			nameFeminine = "Command";
			nameMasculine = "Command";
			nameNeutral = "Command";
			texture = "hq";
		};
		class Infantry
		{
			nameFeminine = "Infantry";
			nameMasculine = "Infantry";
			nameNeutral = "Infantry";
			texture = "inf";
		};
		class Maintenance
		{
			nameFeminine = "Maintenance";
			nameMasculine = "Maintenance";
			nameNeutral = "Maintenance";
			texture = "maint";
		};
		class Maritime
		{
			nameFeminine = "Maritime";
			nameMasculine = "Maritime";
			nameNeutral = "Maritime";
			texture = "naval";
		};
		class MechanizedInfantry
		{
			nameFeminine = "Mechanized";
			nameMasculine = "Mechanized";
			nameNeutral = "Mechanized";
			texture = "mech_inf";
		};
		class Medical
		{
			nameFeminine = "Medical";
			nameMasculine = "Medical";
			nameNeutral = "Medical";
			texture = "med";
		};
		class Mortar
		{
			nameFeminine = "Mortar";
			nameMasculine = "Mortar";
			nameNeutral = "Mortar";
			texture = "mortar";
		};
		class MotorizedInfantry
		{
			nameFeminine = "Motorized";
			nameMasculine = "Motorized";
			nameNeutral = "Motorized";
			texture = "motor_inf";
		};
		class Recon
		{
			nameFeminine = "Recon";
			nameMasculine = "Recon";
			nameNeutral = "Recon";
			texture = "recon";
		};
		class Service
		{
			nameFeminine = "Service";
			nameMasculine = "Service";
			nameNeutral = "Service";
			texture = "service";
		};
		class Support
		{
			nameFeminine = "Support";
			nameMasculine = "Support";
			nameNeutral = "Support";
			texture = "support";
		};
		class UAV
		{
			nameFeminine = "Reconnaissance";
			nameMasculine = "Reconnaissance";
			nameNeutral = "Reconnaissance";
			texture = "uav";
		};
		class Unknown
		{
			nameFeminine = "";
			nameMasculine = "";
			nameNeutral = "";
			texture = "unknown";
		};
	};
};
