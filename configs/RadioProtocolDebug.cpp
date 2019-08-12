class RadioProtocolDebug: RadioProtocolBase
{
	class Arguments
	{
		class AggrTargets
		{
			modes[] = {"Default"};
		};
		class Direction
		{
			class Compass1
			{
				class 0
				{
					speech[] = {"North"};
					text = "North";
				};
				class 135
				{
					speech[] = {"SouthEast"};
					text = "South-east";
				};
				class 180
				{
					speech[] = {"South"};
					text = "South";
				};
				class 225
				{
					speech[] = {"SouthWest"};
					text = "South-west";
				};
				class 270
				{
					speech[] = {"West"};
					text = "West";
				};
				class 315
				{
					speech[] = {"NorthWest"};
					text = "North-west";
				};
				class 45
				{
					speech[] = {"NorthEast"};
					text = "North-east";
				};
				class 90
				{
					speech[] = {"East"};
					text = "East";
				};
			};
			class Relative1
			{
				class 0
				{
					speach[] = {"InFrontOf"};
					text = "in front of";
				};
				class 180
				{
					speach[] = {"Behind"};
					text = "behind";
				};
				class 270
				{
					speach[] = {"LeftOf"};
					text = "left of";
				};
				class 90
				{
					speach[] = {"RightOf"};
					text = "right of";
				};
			};
		};
		class Distance1
		{
			class Level0
			{
				speech[] = {"DangerCloseTo"};
				text = "";
			};
			class Level1
			{
				speech[] = {"NotFarFrom"};
				text = "not far from";
			};
			class Level2
			{
				speech[] = {"FarFrom"};
				text = "far from";
			};
		};
	};
	class ClausePosition: ClausePosition
	{
		versions[] = {"version1", 1};
		class version1
		{
			speech[] = {"%1", "%2", "%3", "%4", "%5", "%6", "%7", "%8", "%9", "%10", "%11", "%12", "%13", "%14", "%15", "%16"};
			text = "ClausePosition | 1:%1 | 2:%2 | 3:%3 | 4:%4 | 5:%5 | 6:%6 | 7:%7 | 8:%8 | 9:%9 | 10:%10 | 11:%11 | 12:%12 | 13:%13 | 14:%14 | 15:%15 | 16:%16";
		};
	};
	class ClausePositionNear: ClausePositionNear
	{
		versions[] = {"version1", 1};
		class version1
		{
			speech[] = {"%1", "%2", "%3", "%4", "%5", "%6", "%7", "%8", "%9", "%10", "%11", "%12", "%13", "%14", "%15", "%16"};
			text = "ClausePositionNear | 1:%1 | 2:%2 | 3:%3 | 4:%4 | 5:%5 | 6:%6 | 7:%7 | 8:%8 | 9:%9 | 10:%10 | 11:%11 | 12:%12 | 13:%13 | 14:%14 | 15:%15 | 16:%16";
		};
	};
	class Completition: Completition
	{
		versions[] = {"version1", 1};
		class version1
		{
			speech[] = {"%1", "%2", "%3", "%4", "%5", "%6", "%7", "%8", "%9", "%10", "%11", "%12", "%13", "%14", "%15", "%16"};
			text = "Completition | 1:%1 | 2:%2 | 3:%3 | 4:%4 | 5:%5 | 6:%6 | 7:%7 | 8:%8 | 9:%9 | 10:%10 | 11:%11 | 12:%12 | 13:%13 | 14:%14 | 15:%15 | 16:%16";
		};
	};
	class Confirmation: Confirmation
	{
		versions[] = {"version1", 1};
		class version1
		{
			speech[] = {"%1", "%2", "%3", "%4", "%5", "%6", "%7", "%8", "%9", "%10", "%11", "%12", "%13", "%14", "%15", "%16"};
			text = "Confirmation | 1:%1 | 2:%2 | 3:%3 | 4:%4 | 5:%5 | 6:%6 | 7:%7 | 8:%8 | 9:%9 | 10:%10 | 11:%11 | 12:%12 | 13:%13 | 14:%14 | 15:%15 | 16:%16";
		};
	};
	class CriticalReport: CriticalReport
	{
		versions[] = {"version1", 1};
		class version1
		{
			speech[] = {"%1", "%2", "%3", "%4", "%5", "%6", "%7", "%8", "%9", "%10", "%11", "%12", "%13", "%14", "%15", "%16"};
			text = "CriticalReport | 1:%1 | 2:%2 | 3:%3 | 4:%4 | 5:%5 | 6:%6 | 7:%7 | 8:%8 | 9:%9 | 10:%10 | 11:%11 | 12:%12 | 13:%13 | 14:%14 | 15:%15 | 16:%16";
		};
	};
	class Default: Default
	{
		versions[] = {"version1", 1};
		class version1
		{
			speech[] = {"%1", "%2", "%3", "%4", "%5", "%6", "%7", "%8", "%9", "%10", "%11", "%12", "%13", "%14", "%15", "%16"};
			text = "Default | 1:%1 | 2:%2 | 3:%3 | 4:%4 | 5:%5 | 6:%6 | 7:%7 | 8:%8 | 9:%9 | 10:%10 | 11:%11 | 12:%12 | 13:%13 | 14:%14 | 15:%15 | 16:%16";
		};
	};
	class Design: Design
	{
		versions[] = {"version1", 1};
		class version1
		{
			speech[] = {"%1", "%2", "%3", "%4", "%5", "%6", "%7", "%8", "%9", "%10", "%11", "%12", "%13", "%14", "%15", "%16"};
			text = "Design | 1:%1 | 2:%2 | 3:%3 | 4:%4 | 5:%5 | 6:%6 | 7:%7 | 8:%8 | 9:%9 | 10:%10 | 11:%11 | 12:%12 | 13:%13 | 14:%14 | 15:%15 | 16:%16";
		};
	};
	class Detected: Detected
	{
		versions[] = {"version1", 1};
		class version1
		{
			speech[] = {"%1", "%2", "%3", "%4", "%5", "%6", "%7", "%8", "%9", "%10", "%11", "%12", "%13", "%14", "%15", "%16"};
			text = "Detected | 1:%1 | 2:%2 | 3:%3 | 4:%4 | 5:%5 | 6:%6 | 7:%7 | 8:%8 | 9:%9 | 10:%10 | 11:%11 | 12:%12 | 13:%13 | 14:%14 | 15:%15 | 16:%16";
		};
	};
	class Failure: Failure
	{
		versions[] = {"version1", 1};
		class version1
		{
			speech[] = {"%1", "%2", "%3", "%4", "%5", "%6", "%7", "%8", "%9", "%10", "%11", "%12", "%13", "%14", "%15", "%16"};
			text = "Failure | 1:%1 | 2:%2 | 3:%3 | 4:%4 | 5:%5 | 6:%6 | 7:%7 | 8:%8 | 9:%9 | 10:%10 | 11:%11 | 12:%12 | 13:%13 | 14:%14 | 15:%15 | 16:%16";
		};
	};
	class JoinCompleted: JoinCompleted
	{
		versions[] = {"version1", 1};
		class version1
		{
			speech[] = {"%1", "%2", "%3", "%4", "%5", "%6", "%7", "%8", "%9", "%10", "%11", "%12", "%13", "%14", "%15", "%16"};
			text = "JoinCompleted | 1:%1 | 2:%2 | 3:%3 | 4:%4 | 5:%5 | 6:%6 | 7:%7 | 8:%8 | 9:%9 | 10:%10 | 11:%11 | 12:%12 | 13:%13 | 14:%14 | 15:%15 | 16:%16";
		};
	};
	class NormalCommand: NormalCommand
	{
		versions[] = {"version1", 1};
		class version1
		{
			speech[] = {"%1", "%2", "%3", "%4", "%5", "%6", "%7", "%8", "%9", "%10", "%11", "%12", "%13", "%14", "%15", "%16"};
			text = "NormalCommand | 1:%1 | 2:%2 | 3:%3 | 4:%4 | 5:%5 | 6:%6 | 7:%7 | 8:%8 | 9:%9 | 10:%10 | 11:%11 | 12:%12 | 13:%13 | 14:%14 | 15:%15 | 16:%16";
		};
	};
	class Notify: Notify
	{
		versions[] = {"version1", 1};
		class version1
		{
			speech[] = {"%1", "%2", "%3", "%4", "%5", "%6", "%7", "%8", "%9", "%10", "%11", "%12", "%13", "%14", "%15", "%16"};
			text = "Notify | 1:%1 | 2:%2 | 3:%3 | 4:%4 | 5:%5 | 6:%6 | 7:%7 | 8:%8 | 9:%9 | 10:%10 | 11:%11 | 12:%12 | 13:%13 | 14:%14 | 15:%15 | 16:%16";
		};
	};
	class PriorityReport: PriorityReport
	{
		versions[] = {"version1", 1};
		class version1
		{
			speech[] = {"%1", "%2", "%3", "%4", "%5", "%6", "%7", "%8", "%9", "%10", "%11", "%12", "%13", "%14", "%15", "%16"};
			text = "PriorityReport | 1:%1 | 2:%2 | 3:%3 | 4:%4 | 5:%5 | 6:%6 | 7:%7 | 8:%8 | 9:%9 | 10:%10 | 11:%11 | 12:%12 | 13:%13 | 14:%14 | 15:%15 | 16:%16";
		};
	};
	class Report: Report
	{
		versions[] = {"version1", 1};
		class version1
		{
			speech[] = {"%1", "%2", "%3", "%4", "%5", "%6", "%7", "%8", "%9", "%10", "%11", "%12", "%13", "%14", "%15", "%16"};
			text = "Report | 1:%1 | 2:%2 | 3:%3 | 4:%4 | 5:%5 | 6:%6 | 7:%7 | 8:%8 | 9:%9 | 10:%10 | 11:%11 | 12:%12 | 13:%13 | 14:%14 | 15:%15 | 16:%16";
		};
	};
	class SelectCmdMoveSentence: SelectCmdMoveSentence
	{
		versions[] = {"version1", 1};
		class version1
		{
			speech[] = {"%1", "%2", "%3", "%4", "%5", "%6", "%7", "%8", "%9", "%10", "%11", "%12", "%13", "%14", "%15", "%16"};
			text = "SelectCmdMoveSentence | 1:%1 | 2:%2 | 3:%3 | 4:%4 | 5:%5 | 6:%6 | 7:%7 | 8:%8 | 9:%9 | 10:%10 | 11:%11 | 12:%12 | 13:%13 | 14:%14 | 15:%15 | 16:%16";
		};
	};
	class SelectEnemyDetectedSentence: SelectEnemyDetectedSentence
	{
		versions[] = {"version1", 1};
		class version1
		{
			speech[] = {"%1", "%2", "%3", "%4", "%5", "%6", "%7", "%8", "%9", "%10", "%11", "%12", "%13", "%14", "%15", "%16"};
			text = "SelectEnemyDetectedSentence | 1:%1 | 2:%2 | 3:%3 | 4:%4 | 5:%5 | 6:%6 | 7:%7 | 8:%8 | 9:%9 | 10:%10 | 11:%11 | 12:%12 | 13:%13 | 14:%14 | 15:%15 | 16:%16";
		};
	};
	class SelectVehicleMoveSentence: SelectVehicleMoveSentence
	{
		versions[] = {"version1", 1};
		class version1
		{
			speech[] = {"%1", "%2", "%3", "%4", "%5", "%6", "%7", "%8", "%9", "%10", "%11", "%12", "%13", "%14", "%15", "%16"};
			text = "SelectVehicleMoveSentence | 1:%1 | 2:%2 | 3:%3 | 4:%4 | 5:%5 | 6:%6 | 7:%7 | 8:%8 | 9:%9 | 10:%10 | 11:%11 | 12:%12 | 13:%13 | 14:%14 | 15:%15 | 16:%16";
		};
	};
	class SentAmmoCritical: SentAmmoCritical
	{
		versions[] = {"version1", 1};
		class version1
		{
			speech[] = {"%1", "%2", "%3", "%4", "%5", "%6", "%7", "%8", "%9", "%10", "%11", "%12", "%13", "%14", "%15", "%16"};
			text = "SentAmmoCritical | 1:%1 | 2:%2 | 3:%3 | 4:%4 | 5:%5 | 6:%6 | 7:%7 | 8:%8 | 9:%9 | 10:%10 | 11:%11 | 12:%12 | 13:%13 | 14:%14 | 15:%15 | 16:%16";
		};
	};
	class SentAmmoLow: SentAmmoLow
	{
		versions[] = {"version1", 1};
		class version1
		{
			speech[] = {"%1", "%2", "%3", "%4", "%5", "%6", "%7", "%8", "%9", "%10", "%11", "%12", "%13", "%14", "%15", "%16"};
			text = "SentAmmoLow | 1:%1 | 2:%2 | 3:%3 | 4:%4 | 5:%5 | 6:%6 | 7:%7 | 8:%8 | 9:%9 | 10:%10 | 11:%11 | 12:%12 | 13:%13 | 14:%14 | 15:%15 | 16:%16";
		};
	};
	class SentARTYCannotExecuteAdjustCoordinates: SentARTYCannotExecuteAdjustCoordinates
	{
		versions[] = {"version1", 1};
		class version1
		{
			speech[] = {"%1", "%2", "%3", "%4", "%5", "%6", "%7", "%8", "%9", "%10", "%11", "%12", "%13", "%14", "%15", "%16"};
			text = "SentARTYCannotExecuteAdjustCoordinates | 1:%1 | 2:%2 | 3:%3 | 4:%4 | 5:%5 | 6:%6 | 7:%7 | 8:%8 | 9:%9 | 10:%10 | 11:%11 | 12:%12 | 13:%13 | 14:%14 | 15:%15 | 16:%16";
		};
	};
	class SentARTYCannotExecuteThatsOutsideOurFiringEnvelope: SentARTYCannotExecuteThatsOutsideOurFiringEnvelope
	{
		versions[] = {"version1", 1};
		class version1
		{
			speech[] = {"%1", "%2", "%3", "%4", "%5", "%6", "%7", "%8", "%9", "%10", "%11", "%12", "%13", "%14", "%15", "%16"};
			text = "SentARTYCannotExecuteThatsOutsideOurFiringEnvelope | 1:%1 | 2:%2 | 3:%3 | 4:%4 | 5:%5 | 6:%6 | 7:%7 | 8:%8 | 9:%9 | 10:%10 | 11:%11 | 12:%12 | 13:%13 | 14:%14 | 15:%15 | 16:%16";
		};
	};
	class SentARTYFireAt: SentARTYFireAt
	{
		versions[] = {"version1", 1};
		class version1
		{
			speech[] = {"%1", "%2", "%3", "%4", "%5", "%6", "%7", "%8", "%9", "%10", "%11", "%12", "%13", "%14", "%15", "%16"};
			text = "SentARTYFireAt | 1:%1 | 2:%2 | 3:%3 | 4:%4 | 5:%5 | 6:%6 | 7:%7 | 8:%8 | 9:%9 | 10:%10 | 11:%11 | 12:%12 | 13:%13 | 14:%14 | 15:%15 | 16:%16";
		};
	};
	class SentARTYFireAtWithAmmo: SentARTYFireAtWithAmmo
	{
		versions[] = {"version1", 1};
		class version1
		{
			speech[] = {"%1", "%2", "%3", "%4", "%5", "%6", "%7", "%8", "%9", "%10", "%11", "%12", "%13", "%14", "%15", "%16"};
			text = "SentARTYFireAtWithAmmo | 1:%1 | 2:%2 | 3:%3 | 4:%4 | 5:%5 | 6:%6 | 7:%7 | 8:%8 | 9:%9 | 10:%10 | 11:%11 | 12:%12 | 13:%13 | 14:%14 | 15:%15 | 16:%16";
		};
	};
	class SentARTYRoundsComplete: SentARTYRoundsComplete
	{
		versions[] = {"version1", 1};
		class version1
		{
			speech[] = {"%1", "%2", "%3", "%4", "%5", "%6", "%7", "%8", "%9", "%10", "%11", "%12", "%13", "%14", "%15", "%16"};
			text = "SentARTYRoundsComplete | 1:%1 | 2:%2 | 3:%3 | 4:%4 | 5:%5 | 6:%6 | 7:%7 | 8:%8 | 9:%9 | 10:%10 | 11:%11 | 12:%12 | 13:%13 | 14:%14 | 15:%15 | 16:%16";
		};
	};
	class SentAssemble: SentAssemble
	{
		versions[] = {"version1", 1};
		class version1
		{
			speech[] = {"%1", "%2", "%3", "%4", "%5", "%6", "%7", "%8", "%9", "%10", "%11", "%12", "%13", "%14", "%15", "%16"};
			text = "SentAssemble | 1:%1 | 2:%2 | 3:%3 | 4:%4 | 5:%5 | 6:%6 | 7:%7 | 8:%8 | 9:%9 | 10:%10 | 11:%11 | 12:%12 | 13:%13 | 14:%14 | 15:%15 | 16:%16";
		};
	};
	class SentAttackNoTarget: SentAttackNoTarget
	{
		versions[] = {"version1", 1};
		class version1
		{
			speech[] = {"%1", "%2", "%3", "%4", "%5", "%6", "%7", "%8", "%9", "%10", "%11", "%12", "%13", "%14", "%15", "%16"};
			text = "SentAttackNoTarget | 1:%1 | 2:%2 | 3:%3 | 4:%4 | 5:%5 | 6:%6 | 7:%7 | 8:%8 | 9:%9 | 10:%10 | 11:%11 | 12:%12 | 13:%13 | 14:%14 | 15:%15 | 16:%16";
		};
	};
	class SentBehaviourAware: SentBehaviourAware
	{
		versions[] = {"version1", 1};
		class version1
		{
			speech[] = {"%1", "%2", "%3", "%4", "%5", "%6", "%7", "%8", "%9", "%10", "%11", "%12", "%13", "%14", "%15", "%16"};
			text = "SentBehaviourAware | 1:%1 | 2:%2 | 3:%3 | 4:%4 | 5:%5 | 6:%6 | 7:%7 | 8:%8 | 9:%9 | 10:%10 | 11:%11 | 12:%12 | 13:%13 | 14:%14 | 15:%15 | 16:%16";
		};
	};
	class SentBehaviourCareless: SentBehaviourCareless
	{
		versions[] = {"version1", 1};
		class version1
		{
			speech[] = {"%1", "%2", "%3", "%4", "%5", "%6", "%7", "%8", "%9", "%10", "%11", "%12", "%13", "%14", "%15", "%16"};
			text = "SentBehaviourCareless | 1:%1 | 2:%2 | 3:%3 | 4:%4 | 5:%5 | 6:%6 | 7:%7 | 8:%8 | 9:%9 | 10:%10 | 11:%11 | 12:%12 | 13:%13 | 14:%14 | 15:%15 | 16:%16";
		};
	};
	class SentBehaviourCombat: SentBehaviourCombat
	{
		versions[] = {"version1", 1};
		class version1
		{
			speech[] = {"%1", "%2", "%3", "%4", "%5", "%6", "%7", "%8", "%9", "%10", "%11", "%12", "%13", "%14", "%15", "%16"};
			text = "SentBehaviourCombat | 1:%1 | 2:%2 | 3:%3 | 4:%4 | 5:%5 | 6:%6 | 7:%7 | 8:%8 | 9:%9 | 10:%10 | 11:%11 | 12:%12 | 13:%13 | 14:%14 | 15:%15 | 16:%16";
		};
	};
	class SentBehaviourSafe: SentBehaviourSafe
	{
		versions[] = {"version1", 1};
		class version1
		{
			speech[] = {"%1", "%2", "%3", "%4", "%5", "%6", "%7", "%8", "%9", "%10", "%11", "%12", "%13", "%14", "%15", "%16"};
			text = "SentBehaviourSafe | 1:%1 | 2:%2 | 3:%3 | 4:%4 | 5:%5 | 6:%6 | 7:%7 | 8:%8 | 9:%9 | 10:%10 | 11:%11 | 12:%12 | 13:%13 | 14:%14 | 15:%15 | 16:%16";
		};
	};
	class SentBehaviourStealth: SentBehaviourStealth
	{
		versions[] = {"version1", 1};
		class version1
		{
			speech[] = {"%1", "%2", "%3", "%4", "%5", "%6", "%7", "%8", "%9", "%10", "%11", "%12", "%13", "%14", "%15", "%16"};
			text = "SentBehaviourStealth | 1:%1 | 2:%2 | 3:%3 | 4:%4 | 5:%5 | 6:%6 | 7:%7 | 8:%8 | 9:%9 | 10:%10 | 11:%11 | 12:%12 | 13:%13 | 14:%14 | 15:%15 | 16:%16";
		};
	};
	class SentCeaseFire: SentCeaseFire
	{
		versions[] = {"version1", 1};
		class version1
		{
			speech[] = {"%1", "%2", "%3", "%4", "%5", "%6", "%7", "%8", "%9", "%10", "%11", "%12", "%13", "%14", "%15", "%16"};
			text = "SentCeaseFire | 1:%1 | 2:%2 | 3:%3 | 4:%4 | 5:%5 | 6:%6 | 7:%7 | 8:%8 | 9:%9 | 10:%10 | 11:%11 | 12:%12 | 13:%13 | 14:%14 | 15:%15 | 16:%16";
		};
	};
	class SentCeaseFireInsideGroup: SentCeaseFireInsideGroup
	{
		versions[] = {"version1", 1};
		class version1
		{
			speech[] = {"%1", "%2", "%3", "%4", "%5", "%6", "%7", "%8", "%9", "%10", "%11", "%12", "%13", "%14", "%15", "%16"};
			text = "SentCeaseFireInsideGroup | 1:%1 | 2:%2 | 3:%3 | 4:%4 | 5:%5 | 6:%6 | 7:%7 | 8:%8 | 9:%9 | 10:%10 | 11:%11 | 12:%12 | 13:%13 | 14:%14 | 15:%15 | 16:%16";
		};
	};
	class SentCheering: SentCheering
	{
		versions[] = {"version1", 1};
		class version1
		{
			speech[] = {"%1", "%2", "%3", "%4", "%5", "%6", "%7", "%8", "%9", "%10", "%11", "%12", "%13", "%14", "%15", "%16"};
			text = "SentCheering | 1:%1 | 2:%2 | 3:%3 | 4:%4 | 5:%5 | 6:%6 | 7:%7 | 8:%8 | 9:%9 | 10:%10 | 11:%11 | 12:%12 | 13:%13 | 14:%14 | 15:%15 | 16:%16";
		};
	};
	class SentClear: SentClear
	{
		versions[] = {"version1", 1};
		class version1
		{
			speech[] = {"%1", "%2", "%3", "%4", "%5", "%6", "%7", "%8", "%9", "%10", "%11", "%12", "%13", "%14", "%15", "%16"};
			text = "SentClear | 1:%1 | 2:%2 | 3:%3 | 4:%4 | 5:%5 | 6:%6 | 7:%7 | 8:%8 | 9:%9 | 10:%10 | 11:%11 | 12:%12 | 13:%13 | 14:%14 | 15:%15 | 16:%16";
		};
	};
	class SentCmdAction: SentCmdAction
	{
		versions[] = {"version1", 1};
		class version1
		{
			speech[] = {"%1", "%2", "%3", "%4", "%5", "%6", "%7", "%8", "%9", "%10", "%11", "%12", "%13", "%14", "%15", "%16"};
			text = "SentCmdAction | 1:%1 | 2:%2 | 3:%3 | 4:%4 | 5:%5 | 6:%6 | 7:%7 | 8:%8 | 9:%9 | 10:%10 | 11:%11 | 12:%12 | 13:%13 | 14:%14 | 15:%15 | 16:%16";
		};
	};
	class SentCmdActionAt: SentCmdActionAt
	{
		versions[] = {"version1", 1};
		class version1
		{
			speech[] = {"%1", "%2", "%3", "%4", "%5", "%6", "%7", "%8", "%9", "%10", "%11", "%12", "%13", "%14", "%15", "%16"};
			text = "SentCmdActionAt | 1:%1 | 2:%2 | 3:%3 | 4:%4 | 5:%5 | 6:%6 | 7:%7 | 8:%8 | 9:%9 | 10:%10 | 11:%11 | 12:%12 | 13:%13 | 14:%14 | 15:%15 | 16:%16";
		};
	};
	class SentCmdActionDropBag: SentCmdActionDropBag
	{
		versions[] = {"version1", 1};
		class version1
		{
			speech[] = {"%1", "%2", "%3", "%4", "%5", "%6", "%7", "%8", "%9", "%10", "%11", "%12", "%13", "%14", "%15", "%16"};
			text = "SentCmdActionDropBag | 1:%1 | 2:%2 | 3:%3 | 4:%4 | 5:%5 | 6:%6 | 7:%7 | 8:%8 | 9:%9 | 10:%10 | 11:%11 | 12:%12 | 13:%13 | 14:%14 | 15:%15 | 16:%16";
		};
	};
	class SentCmdActionFar: SentCmdActionFar
	{
		versions[] = {"version1", 1};
		class version1
		{
			speech[] = {"%1", "%2", "%3", "%4", "%5", "%6", "%7", "%8", "%9", "%10", "%11", "%12", "%13", "%14", "%15", "%16"};
			text = "SentCmdActionFar | 1:%1 | 2:%2 | 3:%3 | 4:%4 | 5:%5 | 6:%6 | 7:%7 | 8:%8 | 9:%9 | 10:%10 | 11:%11 | 12:%12 | 13:%13 | 14:%14 | 15:%15 | 16:%16";
		};
	};
	class SentCmdActionNear: SentCmdActionNear
	{
		versions[] = {"version1", 1};
		class version1
		{
			speech[] = {"%1", "%2", "%3", "%4", "%5", "%6", "%7", "%8", "%9", "%10", "%11", "%12", "%13", "%14", "%15", "%16"};
			text = "SentCmdActionNear | 1:%1 | 2:%2 | 3:%3 | 4:%4 | 5:%5 | 6:%6 | 7:%7 | 8:%8 | 9:%9 | 10:%10 | 11:%11 | 12:%12 | 13:%13 | 14:%14 | 15:%15 | 16:%16";
		};
	};
	class SentCmdActionOpenBag: SentCmdActionOpenBag
	{
		versions[] = {"version1", 1};
		class version1
		{
			speech[] = {"%1", "%2", "%3", "%4", "%5", "%6", "%7", "%8", "%9", "%10", "%11", "%12", "%13", "%14", "%15", "%16"};
			text = "SentCmdActionOpenBag | 1:%1 | 2:%2 | 3:%3 | 4:%4 | 5:%5 | 6:%6 | 7:%7 | 8:%8 | 9:%9 | 10:%10 | 11:%11 | 12:%12 | 13:%13 | 14:%14 | 15:%15 | 16:%16";
		};
	};
	class SentCmdActionTakeBag: SentCmdActionTakeBag
	{
		versions[] = {"version1", 1};
		class version1
		{
			speech[] = {"%1", "%2", "%3", "%4", "%5", "%6", "%7", "%8", "%9", "%10", "%11", "%12", "%13", "%14", "%15", "%16"};
			text = "SentCmdActionTakeBag | 1:%1 | 2:%2 | 3:%3 | 4:%4 | 5:%5 | 6:%6 | 7:%7 | 8:%8 | 9:%9 | 10:%10 | 11:%11 | 12:%12 | 13:%13 | 14:%14 | 15:%15 | 16:%16";
		};
	};
	class SentCmdActivateTimer: SentCmdActivateTimer
	{
		versions[] = {"version1", 1};
		class version1
		{
			speech[] = {"%1", "%2", "%3", "%4", "%5", "%6", "%7", "%8", "%9", "%10", "%11", "%12", "%13", "%14", "%15", "%16"};
			text = "SentCmdActivateTimer | 1:%1 | 2:%2 | 3:%3 | 4:%4 | 5:%5 | 6:%6 | 7:%7 | 8:%8 | 9:%9 | 10:%10 | 11:%11 | 12:%12 | 13:%13 | 14:%14 | 15:%15 | 16:%16";
		};
	};
	class SentCmdAttack: SentCmdAttack
	{
		versions[] = {"version1", 1};
		class version1
		{
			speech[] = {"%1", "%2", "%3", "%4", "%5", "%6", "%7", "%8", "%9", "%10", "%11", "%12", "%13", "%14", "%15", "%16"};
			text = "SentCmdAttack | 1:%1 | 2:%2 | 3:%3 | 4:%4 | 5:%5 | 6:%6 | 7:%7 | 8:%8 | 9:%9 | 10:%10 | 11:%11 | 12:%12 | 13:%13 | 14:%14 | 15:%15 | 16:%16";
		};
	};
	class SentCmdCarrySomeone: SentCmdCarrySomeone
	{
		versions[] = {"version1", 1};
		class version1
		{
			speech[] = {"%1", "%2", "%3", "%4", "%5", "%6", "%7", "%8", "%9", "%10", "%11", "%12", "%13", "%14", "%15", "%16"};
			text = "SentCmdCarrySomeone | 1:%1 | 2:%2 | 3:%3 | 4:%4 | 5:%5 | 6:%6 | 7:%7 | 8:%8 | 9:%9 | 10:%10 | 11:%11 | 12:%12 | 13:%13 | 14:%14 | 15:%15 | 16:%16";
		};
	};
	class SentCmdCloseDoor: SentCmdCloseDoor
	{
		versions[] = {"version1", 1};
		class version1
		{
			speech[] = {"%1", "%2", "%3", "%4", "%5", "%6", "%7", "%8", "%9", "%10", "%11", "%12", "%13", "%14", "%15", "%16"};
			text = "SentCmdCloseDoor | 1:%1 | 2:%2 | 3:%3 | 4:%4 | 5:%5 | 6:%6 | 7:%7 | 8:%8 | 9:%9 | 10:%10 | 11:%11 | 12:%12 | 13:%13 | 14:%14 | 15:%15 | 16:%16";
		};
	};
	class SentCmdCloseDoorAt: SentCmdCloseDoorAt
	{
		versions[] = {"version1", 1};
		class version1
		{
			speech[] = {"%1", "%2", "%3", "%4", "%5", "%6", "%7", "%8", "%9", "%10", "%11", "%12", "%13", "%14", "%15", "%16"};
			text = "SentCmdCloseDoorAt | 1:%1 | 2:%2 | 3:%3 | 4:%4 | 5:%5 | 6:%6 | 7:%7 | 8:%8 | 9:%9 | 10:%10 | 11:%11 | 12:%12 | 13:%13 | 14:%14 | 15:%15 | 16:%16";
		};
	};
	class SentCmdCloseDoorFar: SentCmdCloseDoorFar
	{
		versions[] = {"version1", 1};
		class version1
		{
			speech[] = {"%1", "%2", "%3", "%4", "%5", "%6", "%7", "%8", "%9", "%10", "%11", "%12", "%13", "%14", "%15", "%16"};
			text = "SentCmdCloseDoorFar | 1:%1 | 2:%2 | 3:%3 | 4:%4 | 5:%5 | 6:%6 | 7:%7 | 8:%8 | 9:%9 | 10:%10 | 11:%11 | 12:%12 | 13:%13 | 14:%14 | 15:%15 | 16:%16";
		};
	};
	class SentCmdDeactivateBomb: SentCmdDeactivateBomb
	{
		versions[] = {"version1", 1};
		class version1
		{
			speech[] = {"%1", "%2", "%3", "%4", "%5", "%6", "%7", "%8", "%9", "%10", "%11", "%12", "%13", "%14", "%15", "%16"};
			text = "SentCmdDeactivateBomb | 1:%1 | 2:%2 | 3:%3 | 4:%4 | 5:%5 | 6:%6 | 7:%7 | 8:%8 | 9:%9 | 10:%10 | 11:%11 | 12:%12 | 13:%13 | 14:%14 | 15:%15 | 16:%16";
		};
	};
	class SentCmdDeactivateMine: SentCmdDeactivateMine
	{
		versions[] = {"version1", 1};
		class version1
		{
			speech[] = {"%1", "%2", "%3", "%4", "%5", "%6", "%7", "%8", "%9", "%10", "%11", "%12", "%13", "%14", "%15", "%16"};
			text = "SentCmdDeactivateMine | 1:%1 | 2:%2 | 3:%3 | 4:%4 | 5:%5 | 6:%6 | 7:%7 | 8:%8 | 9:%9 | 10:%10 | 11:%11 | 12:%12 | 13:%13 | 14:%14 | 15:%15 | 16:%16";
		};
	};
	class SentCmdDetonate: SentCmdDetonate
	{
		versions[] = {"version1", 1};
		class version1
		{
			speech[] = {"%1", "%2", "%3", "%4", "%5", "%6", "%7", "%8", "%9", "%10", "%11", "%12", "%13", "%14", "%15", "%16"};
			text = "SentCmdDetonate | 1:%1 | 2:%2 | 3:%3 | 4:%4 | 5:%5 | 6:%6 | 7:%7 | 8:%8 | 9:%9 | 10:%10 | 11:%11 | 12:%12 | 13:%13 | 14:%14 | 15:%15 | 16:%16";
		};
	};
	class SentCmdDismiss: SentCmdDismiss
	{
		versions[] = {"version1", 1};
		class version1
		{
			speech[] = {"%1", "%2", "%3", "%4", "%5", "%6", "%7", "%8", "%9", "%10", "%11", "%12", "%13", "%14", "%15", "%16"};
			text = "SentCmdDismiss | 1:%1 | 2:%2 | 3:%3 | 4:%4 | 5:%5 | 6:%6 | 7:%7 | 8:%8 | 9:%9 | 10:%10 | 11:%11 | 12:%12 | 13:%13 | 14:%14 | 15:%15 | 16:%16";
		};
	};
	class SentCmdDropMagazine: SentCmdDropMagazine
	{
		versions[] = {"version1", 1};
		class version1
		{
			speech[] = {"%1", "%2", "%3", "%4", "%5", "%6", "%7", "%8", "%9", "%10", "%11", "%12", "%13", "%14", "%15", "%16"};
			text = "SentCmdDropMagazine | 1:%1 | 2:%2 | 3:%3 | 4:%4 | 5:%5 | 6:%6 | 7:%7 | 8:%8 | 9:%9 | 10:%10 | 11:%11 | 12:%12 | 13:%13 | 14:%14 | 15:%15 | 16:%16";
		};
	};
	class SentCmdDropWeapon: SentCmdDropWeapon
	{
		versions[] = {"version1", 1};
		class version1
		{
			speech[] = {"%1", "%2", "%3", "%4", "%5", "%6", "%7", "%8", "%9", "%10", "%11", "%12", "%13", "%14", "%15", "%16"};
			text = "SentCmdDropWeapon | 1:%1 | 2:%2 | 3:%3 | 4:%4 | 5:%5 | 6:%6 | 7:%7 | 8:%8 | 9:%9 | 10:%10 | 11:%11 | 12:%12 | 13:%13 | 14:%14 | 15:%15 | 16:%16";
		};
	};
	class SentCmdEject: SentCmdEject
	{
		versions[] = {"version1", 1};
		class version1
		{
			speech[] = {"%1", "%2", "%3", "%4", "%5", "%6", "%7", "%8", "%9", "%10", "%11", "%12", "%13", "%14", "%15", "%16"};
			text = "SentCmdEject | 1:%1 | 2:%2 | 3:%3 | 4:%4 | 5:%5 | 6:%6 | 7:%7 | 8:%8 | 9:%9 | 10:%10 | 11:%11 | 12:%12 | 13:%13 | 14:%14 | 15:%15 | 16:%16";
		};
	};
	class SentCmdExpect: SentCmdExpect
	{
		versions[] = {"version1", 1};
		class version1
		{
			speech[] = {"%1", "%2", "%3", "%4", "%5", "%6", "%7", "%8", "%9", "%10", "%11", "%12", "%13", "%14", "%15", "%16"};
			text = "SentCmdExpect | 1:%1 | 2:%2 | 3:%3 | 4:%4 | 5:%5 | 6:%6 | 7:%7 | 8:%8 | 9:%9 | 10:%10 | 11:%11 | 12:%12 | 13:%13 | 14:%14 | 15:%15 | 16:%16";
		};
	};
	class SentCmdFire: SentCmdFire
	{
		versions[] = {"version1", 1};
		class version1
		{
			speech[] = {"%1", "%2", "%3", "%4", "%5", "%6", "%7", "%8", "%9", "%10", "%11", "%12", "%13", "%14", "%15", "%16"};
			text = "SentCmdFire | 1:%1 | 2:%2 | 3:%3 | 4:%4 | 5:%5 | 6:%6 | 7:%7 | 8:%8 | 9:%9 | 10:%10 | 11:%11 | 12:%12 | 13:%13 | 14:%14 | 15:%15 | 16:%16";
		};
	};
	class SentCmdFollow: SentCmdFollow
	{
		versions[] = {"version1", 1};
		class version1
		{
			speech[] = {"%1", "%2", "%3", "%4", "%5", "%6", "%7", "%8", "%9", "%10", "%11", "%12", "%13", "%14", "%15", "%16"};
			text = "SentCmdFollow | 1:%1 | 2:%2 | 3:%3 | 4:%4 | 5:%5 | 6:%6 | 7:%7 | 8:%8 | 9:%9 | 10:%10 | 11:%11 | 12:%12 | 13:%13 | 14:%14 | 15:%15 | 16:%16";
		};
	};
	class SentCmdFollowMe: SentCmdFollowMe
	{
		versions[] = {"version1", 1};
		class version1
		{
			speech[] = {"%1", "%2", "%3", "%4", "%5", "%6", "%7", "%8", "%9", "%10", "%11", "%12", "%13", "%14", "%15", "%16"};
			text = "SentCmdFollowMe | 1:%1 | 2:%2 | 3:%3 | 4:%4 | 5:%5 | 6:%6 | 7:%7 | 8:%8 | 9:%9 | 10:%10 | 11:%11 | 12:%12 | 13:%13 | 14:%14 | 15:%15 | 16:%16";
		};
	};
	class SentCmdGetIn: SentCmdGetIn
	{
		versions[] = {"version1", 1};
		class version1
		{
			speech[] = {"%1", "%2", "%3", "%4", "%5", "%6", "%7", "%8", "%9", "%10", "%11", "%12", "%13", "%14", "%15", "%16"};
			text = "SentCmdGetIn | 1:%1 | 2:%2 | 3:%3 | 4:%4 | 5:%5 | 6:%6 | 7:%7 | 8:%8 | 9:%9 | 10:%10 | 11:%11 | 12:%12 | 13:%13 | 14:%14 | 15:%15 | 16:%16";
		};
	};
	class SentCmdGetInCargo: SentCmdGetInCargo
	{
		versions[] = {"version1", 1};
		class version1
		{
			speech[] = {"%1", "%2", "%3", "%4", "%5", "%6", "%7", "%8", "%9", "%10", "%11", "%12", "%13", "%14", "%15", "%16"};
			text = "SentCmdGetInCargo | 1:%1 | 2:%2 | 3:%3 | 4:%4 | 5:%5 | 6:%6 | 7:%7 | 8:%8 | 9:%9 | 10:%10 | 11:%11 | 12:%12 | 13:%13 | 14:%14 | 15:%15 | 16:%16";
		};
	};
	class SentCmdGetInCommander: SentCmdGetInCommander
	{
		versions[] = {"version1", 1};
		class version1
		{
			speech[] = {"%1", "%2", "%3", "%4", "%5", "%6", "%7", "%8", "%9", "%10", "%11", "%12", "%13", "%14", "%15", "%16"};
			text = "SentCmdGetInCommander | 1:%1 | 2:%2 | 3:%3 | 4:%4 | 5:%5 | 6:%6 | 7:%7 | 8:%8 | 9:%9 | 10:%10 | 11:%11 | 12:%12 | 13:%13 | 14:%14 | 15:%15 | 16:%16";
		};
	};
	class SentCmdGetInDriver: SentCmdGetInDriver
	{
		versions[] = {"version1", 1};
		class version1
		{
			speech[] = {"%1", "%2", "%3", "%4", "%5", "%6", "%7", "%8", "%9", "%10", "%11", "%12", "%13", "%14", "%15", "%16"};
			text = "SentCmdGetInDriver | 1:%1 | 2:%2 | 3:%3 | 4:%4 | 5:%5 | 6:%6 | 7:%7 | 8:%8 | 9:%9 | 10:%10 | 11:%11 | 12:%12 | 13:%13 | 14:%14 | 15:%15 | 16:%16";
		};
	};
	class SentCmdGetInGunner: SentCmdGetInGunner
	{
		versions[] = {"version1", 1};
		class version1
		{
			speech[] = {"%1", "%2", "%3", "%4", "%5", "%6", "%7", "%8", "%9", "%10", "%11", "%12", "%13", "%14", "%15", "%16"};
			text = "SentCmdGetInGunner | 1:%1 | 2:%2 | 3:%3 | 4:%4 | 5:%5 | 6:%6 | 7:%7 | 8:%8 | 9:%9 | 10:%10 | 11:%11 | 12:%12 | 13:%13 | 14:%14 | 15:%15 | 16:%16";
		};
	};
	class SentCmdGetInPilot: SentCmdGetInPilot
	{
		versions[] = {"version1", 1};
		class version1
		{
			speech[] = {"%1", "%2", "%3", "%4", "%5", "%6", "%7", "%8", "%9", "%10", "%11", "%12", "%13", "%14", "%15", "%16"};
			text = "SentCmdGetInPilot | 1:%1 | 2:%2 | 3:%3 | 4:%4 | 5:%5 | 6:%6 | 7:%7 | 8:%8 | 9:%9 | 10:%10 | 11:%11 | 12:%12 | 13:%13 | 14:%14 | 15:%15 | 16:%16";
		};
	};
	class SentCmdGetOut: SentCmdGetOut
	{
		versions[] = {"version1", 1};
		class version1
		{
			speech[] = {"%1", "%2", "%3", "%4", "%5", "%6", "%7", "%8", "%9", "%10", "%11", "%12", "%13", "%14", "%15", "%16"};
			text = "SentCmdGetOut | 1:%1 | 2:%2 | 3:%3 | 4:%4 | 5:%5 | 6:%6 | 7:%7 | 8:%8 | 9:%9 | 10:%10 | 11:%11 | 12:%12 | 13:%13 | 14:%14 | 15:%15 | 16:%16";
		};
	};
	class SentCmdHeal: SentCmdHeal
	{
		versions[] = {"version1", 1};
		class version1
		{
			speech[] = {"%1", "%2", "%3", "%4", "%5", "%6", "%7", "%8", "%9", "%10", "%11", "%12", "%13", "%14", "%15", "%16"};
			text = "SentCmdHeal | 1:%1 | 2:%2 | 3:%3 | 4:%4 | 5:%5 | 6:%6 | 7:%7 | 8:%8 | 9:%9 | 10:%10 | 11:%11 | 12:%12 | 13:%13 | 14:%14 | 15:%15 | 16:%16";
		};
	};
	class SentCmdHealAt: SentCmdHealAt
	{
		versions[] = {"version1", 1};
		class version1
		{
			speech[] = {"%1", "%2", "%3", "%4", "%5", "%6", "%7", "%8", "%9", "%10", "%11", "%12", "%13", "%14", "%15", "%16"};
			text = "SentCmdHealAt | 1:%1 | 2:%2 | 3:%3 | 4:%4 | 5:%5 | 6:%6 | 7:%7 | 8:%8 | 9:%9 | 10:%10 | 11:%11 | 12:%12 | 13:%13 | 14:%14 | 15:%15 | 16:%16";
		};
	};
	class SentCmdHealFar: SentCmdHealFar
	{
		versions[] = {"version1", 1};
		class version1
		{
			speech[] = {"%1", "%2", "%3", "%4", "%5", "%6", "%7", "%8", "%9", "%10", "%11", "%12", "%13", "%14", "%15", "%16"};
			text = "SentCmdHealFar | 1:%1 | 2:%2 | 3:%3 | 4:%4 | 5:%5 | 6:%6 | 7:%7 | 8:%8 | 9:%9 | 10:%10 | 11:%11 | 12:%12 | 13:%13 | 14:%14 | 15:%15 | 16:%16";
		};
	};
	class SentCmdHealSelf: SentCmdHealSelf
	{
		versions[] = {"version1", 1};
		class version1
		{
			speech[] = {"%1", "%2", "%3", "%4", "%5", "%6", "%7", "%8", "%9", "%10", "%11", "%12", "%13", "%14", "%15", "%16"};
			text = "SentCmdHealSelf | 1:%1 | 2:%2 | 3:%3 | 4:%4 | 5:%5 | 6:%6 | 7:%7 | 8:%8 | 9:%9 | 10:%10 | 11:%11 | 12:%12 | 13:%13 | 14:%14 | 15:%15 | 16:%16";
		};
	};
	class SentCmdHealSomeone: SentCmdHealSomeone
	{
		versions[] = {"version1", 1};
		class version1
		{
			speech[] = {"%1", "%2", "%3", "%4", "%5", "%6", "%7", "%8", "%9", "%10", "%11", "%12", "%13", "%14", "%15", "%16"};
			text = "SentCmdHealSomeone | 1:%1 | 2:%2 | 3:%3 | 4:%4 | 5:%5 | 6:%6 | 7:%7 | 8:%8 | 9:%9 | 10:%10 | 11:%11 | 12:%12 | 13:%13 | 14:%14 | 15:%15 | 16:%16";
		};
	};
	class SentCmdHide: SentCmdHide
	{
		versions[] = {"version1", 1};
		class version1
		{
			speech[] = {"%1", "%2", "%3", "%4", "%5", "%6", "%7", "%8", "%9", "%10", "%11", "%12", "%13", "%14", "%15", "%16"};
			text = "SentCmdHide | 1:%1 | 2:%2 | 3:%3 | 4:%4 | 5:%5 | 6:%6 | 7:%7 | 8:%8 | 9:%9 | 10:%10 | 11:%11 | 12:%12 | 13:%13 | 14:%14 | 15:%15 | 16:%16";
		};
	};
	class SentCmdLightFire: SentCmdLightFire
	{
		versions[] = {"version1", 1};
		class version1
		{
			speech[] = {"%1", "%2", "%3", "%4", "%5", "%6", "%7", "%8", "%9", "%10", "%11", "%12", "%13", "%14", "%15", "%16"};
			text = "SentCmdLightFire | 1:%1 | 2:%2 | 3:%3 | 4:%4 | 5:%5 | 6:%6 | 7:%7 | 8:%8 | 9:%9 | 10:%10 | 11:%11 | 12:%12 | 13:%13 | 14:%14 | 15:%15 | 16:%16";
		};
	};
	class SentCmdLightFireAt: SentCmdLightFireAt
	{
		versions[] = {"version1", 1};
		class version1
		{
			speech[] = {"%1", "%2", "%3", "%4", "%5", "%6", "%7", "%8", "%9", "%10", "%11", "%12", "%13", "%14", "%15", "%16"};
			text = "SentCmdLightFireAt | 1:%1 | 2:%2 | 3:%3 | 4:%4 | 5:%5 | 6:%6 | 7:%7 | 8:%8 | 9:%9 | 10:%10 | 11:%11 | 12:%12 | 13:%13 | 14:%14 | 15:%15 | 16:%16";
		};
	};
	class SentCmdLightFireFar: SentCmdLightFireFar
	{
		versions[] = {"version1", 1};
		class version1
		{
			speech[] = {"%1", "%2", "%3", "%4", "%5", "%6", "%7", "%8", "%9", "%10", "%11", "%12", "%13", "%14", "%15", "%16"};
			text = "SentCmdLightFireFar | 1:%1 | 2:%2 | 3:%3 | 4:%4 | 5:%5 | 6:%6 | 7:%7 | 8:%8 | 9:%9 | 10:%10 | 11:%11 | 12:%12 | 13:%13 | 14:%14 | 15:%15 | 16:%16";
		};
	};
	class SentCmdMoveGroupRelative: SentCmdMoveGroupRelative
	{
		versions[] = {"version1", 1};
		class version1
		{
			speech[] = {"%1", "%2", "%3", "%4", "%5", "%6", "%7", "%8", "%9", "%10", "%11", "%12", "%13", "%14", "%15", "%16"};
			text = "SentCmdMoveGroupRelative | 1:%1 | 2:%2 | 3:%3 | 4:%4 | 5:%5 | 6:%6 | 7:%7 | 8:%8 | 9:%9 | 10:%10 | 11:%11 | 12:%12 | 13:%13 | 14:%14 | 15:%15 | 16:%16";
		};
	};
	class SentCmdMoveLocationRelative: SentCmdMoveLocationRelative
	{
		versions[] = {"version1", 1};
		class version1
		{
			speech[] = {"%1", "%2", "%3", "%4", "%5", "%6", "%7", "%8", "%9", "%10", "%11", "%12", "%13", "%14", "%15", "%16"};
			text = "SentCmdMoveLocationRelative | 1:%1 | 2:%2 | 3:%3 | 4:%4 | 5:%5 | 6:%6 | 7:%7 | 8:%8 | 9:%9 | 10:%10 | 11:%11 | 12:%12 | 13:%13 | 14:%14 | 15:%15 | 16:%16";
		};
	};
	class SentCmdMoveRecipientsRelative: SentCmdMoveRecipientsRelative
	{
		versions[] = {"version1", 1};
		class version1
		{
			speech[] = {"%1", "%2", "%3", "%4", "%5", "%6", "%7", "%8", "%9", "%10", "%11", "%12", "%13", "%14", "%15", "%16"};
			text = "SentCmdMoveRecipientsRelative | 1:%1 | 2:%2 | 3:%3 | 4:%4 | 5:%5 | 6:%6 | 7:%7 | 8:%8 | 9:%9 | 10:%10 | 11:%11 | 12:%12 | 13:%13 | 14:%14 | 15:%15 | 16:%16";
		};
	};
	class SentCmdMoveToGrid: SentCmdMoveToGrid
	{
		versions[] = {"version1", 1};
		class version1
		{
			speech[] = {"%1", "%2", "%3", "%4", "%5", "%6", "%7", "%8", "%9", "%10", "%11", "%12", "%13", "%14", "%15", "%16"};
			text = "SentCmdMoveToGrid | 1:%1 | 2:%2 | 3:%3 | 4:%4 | 5:%5 | 6:%6 | 7:%7 | 8:%8 | 9:%9 | 10:%10 | 11:%11 | 12:%12 | 13:%13 | 14:%14 | 15:%15 | 16:%16";
		};
	};
	class SentCmdMoveToObject: SentCmdMoveToObject
	{
		versions[] = {"version1", 1};
		class version1
		{
			speech[] = {"%1", "%2", "%3", "%4", "%5", "%6", "%7", "%8", "%9", "%10", "%11", "%12", "%13", "%14", "%15", "%16"};
			text = "SentCmdMoveToObject | 1:%1 | 2:%2 | 3:%3 | 4:%4 | 5:%5 | 6:%6 | 7:%7 | 8:%8 | 9:%9 | 10:%10 | 11:%11 | 12:%12 | 13:%13 | 14:%14 | 15:%15 | 16:%16";
		};
	};
	class SentCmdMoveToTarget: SentCmdMoveToTarget
	{
		versions[] = {"version1", 1};
		class version1
		{
			speech[] = {"%1", "%2", "%3", "%4", "%5", "%6", "%7", "%8", "%9", "%10", "%11", "%12", "%13", "%14", "%15", "%16"};
			text = "SentCmdMoveToTarget | 1:%1 | 2:%2 | 3:%3 | 4:%4 | 5:%5 | 6:%6 | 7:%7 | 8:%8 | 9:%9 | 10:%10 | 11:%11 | 12:%12 | 13:%13 | 14:%14 | 15:%15 | 16:%16";
		};
	};
	class SentCmdOpenDoor: SentCmdOpenDoor
	{
		versions[] = {"version1", 1};
		class version1
		{
			speech[] = {"%1", "%2", "%3", "%4", "%5", "%6", "%7", "%8", "%9", "%10", "%11", "%12", "%13", "%14", "%15", "%16"};
			text = "SentCmdOpenDoor | 1:%1 | 2:%2 | 3:%3 | 4:%4 | 5:%5 | 6:%6 | 7:%7 | 8:%8 | 9:%9 | 10:%10 | 11:%11 | 12:%12 | 13:%13 | 14:%14 | 15:%15 | 16:%16";
		};
	};
	class SentCmdOpenDoorAt: SentCmdOpenDoorAt
	{
		versions[] = {"version1", 1};
		class version1
		{
			speech[] = {"%1", "%2", "%3", "%4", "%5", "%6", "%7", "%8", "%9", "%10", "%11", "%12", "%13", "%14", "%15", "%16"};
			text = "SentCmdOpenDoorAt | 1:%1 | 2:%2 | 3:%3 | 4:%4 | 5:%5 | 6:%6 | 7:%7 | 8:%8 | 9:%9 | 10:%10 | 11:%11 | 12:%12 | 13:%13 | 14:%14 | 15:%15 | 16:%16";
		};
	};
	class SentCmdOpenDoorFar: SentCmdOpenDoorFar
	{
		versions[] = {"version1", 1};
		class version1
		{
			speech[] = {"%1", "%2", "%3", "%4", "%5", "%6", "%7", "%8", "%9", "%10", "%11", "%12", "%13", "%14", "%15", "%16"};
			text = "SentCmdOpenDoorFar | 1:%1 | 2:%2 | 3:%3 | 4:%4 | 5:%5 | 6:%6 | 7:%7 | 8:%8 | 9:%9 | 10:%10 | 11:%11 | 12:%12 | 13:%13 | 14:%14 | 15:%15 | 16:%16";
		};
	};
	class SentCmdPatchSomeone: SentCmdPatchSomeone
	{
		versions[] = {"version1", 1};
		class version1
		{
			speech[] = {"%1", "%2", "%3", "%4", "%5", "%6", "%7", "%8", "%9", "%10", "%11", "%12", "%13", "%14", "%15", "%16"};
			text = "SentCmdPatchSomeone | 1:%1 | 2:%2 | 3:%3 | 4:%4 | 5:%5 | 6:%6 | 7:%7 | 8:%8 | 9:%9 | 10:%10 | 11:%11 | 12:%12 | 13:%13 | 14:%14 | 15:%15 | 16:%16";
		};
	};
	class SentCmdPlaceCharge: SentCmdPlaceCharge
	{
		versions[] = {"version1", 1};
		class version1
		{
			speech[] = {"%1", "%2", "%3", "%4", "%5", "%6", "%7", "%8", "%9", "%10", "%11", "%12", "%13", "%14", "%15", "%16"};
			text = "SentCmdPlaceCharge | 1:%1 | 2:%2 | 3:%3 | 4:%4 | 5:%5 | 6:%6 | 7:%7 | 8:%8 | 9:%9 | 10:%10 | 11:%11 | 12:%12 | 13:%13 | 14:%14 | 15:%15 | 16:%16";
		};
	};
	class SentCmdPutOutFire: SentCmdPutOutFire
	{
		versions[] = {"version1", 1};
		class version1
		{
			speech[] = {"%1", "%2", "%3", "%4", "%5", "%6", "%7", "%8", "%9", "%10", "%11", "%12", "%13", "%14", "%15", "%16"};
			text = "SentCmdPutOutFire | 1:%1 | 2:%2 | 3:%3 | 4:%4 | 5:%5 | 6:%6 | 7:%7 | 8:%8 | 9:%9 | 10:%10 | 11:%11 | 12:%12 | 13:%13 | 14:%14 | 15:%15 | 16:%16";
		};
	};
	class SentCmdPutOutFireAt: SentCmdPutOutFireAt
	{
		versions[] = {"version1", 1};
		class version1
		{
			speech[] = {"%1", "%2", "%3", "%4", "%5", "%6", "%7", "%8", "%9", "%10", "%11", "%12", "%13", "%14", "%15", "%16"};
			text = "SentCmdPutOutFireAt | 1:%1 | 2:%2 | 3:%3 | 4:%4 | 5:%5 | 6:%6 | 7:%7 | 8:%8 | 9:%9 | 10:%10 | 11:%11 | 12:%12 | 13:%13 | 14:%14 | 15:%15 | 16:%16";
		};
	};
	class SentCmdPutOutFireFar: SentCmdPutOutFireFar
	{
		versions[] = {"version1", 1};
		class version1
		{
			speech[] = {"%1", "%2", "%3", "%4", "%5", "%6", "%7", "%8", "%9", "%10", "%11", "%12", "%13", "%14", "%15", "%16"};
			text = "SentCmdPutOutFireFar | 1:%1 | 2:%2 | 3:%3 | 4:%4 | 5:%5 | 6:%6 | 7:%7 | 8:%8 | 9:%9 | 10:%10 | 11:%11 | 12:%12 | 13:%13 | 14:%14 | 15:%15 | 16:%16";
		};
	};
	class SentCmdRearm: SentCmdRearm
	{
		versions[] = {"version1", 1};
		class version1
		{
			speech[] = {"%1", "%2", "%3", "%4", "%5", "%6", "%7", "%8", "%9", "%10", "%11", "%12", "%13", "%14", "%15", "%16"};
			text = "SentCmdRearm | 1:%1 | 2:%2 | 3:%3 | 4:%4 | 5:%5 | 6:%6 | 7:%7 | 8:%8 | 9:%9 | 10:%10 | 11:%11 | 12:%12 | 13:%13 | 14:%14 | 15:%15 | 16:%16";
		};
	};
	class SentCmdRearmAt: SentCmdRearmAt
	{
		versions[] = {"version1", 1};
		class version1
		{
			speech[] = {"%1", "%2", "%3", "%4", "%5", "%6", "%7", "%8", "%9", "%10", "%11", "%12", "%13", "%14", "%15", "%16"};
			text = "SentCmdRearmAt | 1:%1 | 2:%2 | 3:%3 | 4:%4 | 5:%5 | 6:%6 | 7:%7 | 8:%8 | 9:%9 | 10:%10 | 11:%11 | 12:%12 | 13:%13 | 14:%14 | 15:%15 | 16:%16";
		};
	};
	class SentCmdRearmFar: SentCmdRearmFar
	{
		versions[] = {"version1", 1};
		class version1
		{
			speech[] = {"%1", "%2", "%3", "%4", "%5", "%6", "%7", "%8", "%9", "%10", "%11", "%12", "%13", "%14", "%15", "%16"};
			text = "SentCmdRearmFar | 1:%1 | 2:%2 | 3:%3 | 4:%4 | 5:%5 | 6:%6 | 7:%7 | 8:%8 | 9:%9 | 10:%10 | 11:%11 | 12:%12 | 13:%13 | 14:%14 | 15:%15 | 16:%16";
		};
	};
	class SentCmdRefuel: SentCmdRefuel
	{
		versions[] = {"version1", 1};
		class version1
		{
			speech[] = {"%1", "%2", "%3", "%4", "%5", "%6", "%7", "%8", "%9", "%10", "%11", "%12", "%13", "%14", "%15", "%16"};
			text = "SentCmdRefuel | 1:%1 | 2:%2 | 3:%3 | 4:%4 | 5:%5 | 6:%6 | 7:%7 | 8:%8 | 9:%9 | 10:%10 | 11:%11 | 12:%12 | 13:%13 | 14:%14 | 15:%15 | 16:%16";
		};
	};
	class SentCmdRefuelAt: SentCmdRefuelAt
	{
		versions[] = {"version1", 1};
		class version1
		{
			speech[] = {"%1", "%2", "%3", "%4", "%5", "%6", "%7", "%8", "%9", "%10", "%11", "%12", "%13", "%14", "%15", "%16"};
			text = "SentCmdRefuelAt | 1:%1 | 2:%2 | 3:%3 | 4:%4 | 5:%5 | 6:%6 | 7:%7 | 8:%8 | 9:%9 | 10:%10 | 11:%11 | 12:%12 | 13:%13 | 14:%14 | 15:%15 | 16:%16";
		};
	};
	class SentCmdRefuelFar: SentCmdRefuelFar
	{
		versions[] = {"version1", 1};
		class version1
		{
			speech[] = {"%1", "%2", "%3", "%4", "%5", "%6", "%7", "%8", "%9", "%10", "%11", "%12", "%13", "%14", "%15", "%16"};
			text = "SentCmdRefuelFar | 1:%1 | 2:%2 | 3:%3 | 4:%4 | 5:%5 | 6:%6 | 7:%7 | 8:%8 | 9:%9 | 10:%10 | 11:%11 | 12:%12 | 13:%13 | 14:%14 | 15:%15 | 16:%16";
		};
	};
	class SentCmdRepair: SentCmdRepair
	{
		versions[] = {"version1", 1};
		class version1
		{
			speech[] = {"%1", "%2", "%3", "%4", "%5", "%6", "%7", "%8", "%9", "%10", "%11", "%12", "%13", "%14", "%15", "%16"};
			text = "SentCmdRepair | 1:%1 | 2:%2 | 3:%3 | 4:%4 | 5:%5 | 6:%6 | 7:%7 | 8:%8 | 9:%9 | 10:%10 | 11:%11 | 12:%12 | 13:%13 | 14:%14 | 15:%15 | 16:%16";
		};
	};
	class SentCmdRepairAt: SentCmdRepairAt
	{
		versions[] = {"version1", 1};
		class version1
		{
			speech[] = {"%1", "%2", "%3", "%4", "%5", "%6", "%7", "%8", "%9", "%10", "%11", "%12", "%13", "%14", "%15", "%16"};
			text = "SentCmdRepairAt | 1:%1 | 2:%2 | 3:%3 | 4:%4 | 5:%5 | 6:%6 | 7:%7 | 8:%8 | 9:%9 | 10:%10 | 11:%11 | 12:%12 | 13:%13 | 14:%14 | 15:%15 | 16:%16";
		};
	};
	class SentCmdRepairFar: SentCmdRepairFar
	{
		versions[] = {"version1", 1};
		class version1
		{
			speech[] = {"%1", "%2", "%3", "%4", "%5", "%6", "%7", "%8", "%9", "%10", "%11", "%12", "%13", "%14", "%15", "%16"};
			text = "SentCmdRepairFar | 1:%1 | 2:%2 | 3:%3 | 4:%4 | 5:%5 | 6:%6 | 7:%7 | 8:%8 | 9:%9 | 10:%10 | 11:%11 | 12:%12 | 13:%13 | 14:%14 | 15:%15 | 16:%16";
		};
	};
	class SentCmdReturnFlag: SentCmdReturnFlag
	{
		versions[] = {"version1", 1};
		class version1
		{
			speech[] = {"%1", "%2", "%3", "%4", "%5", "%6", "%7", "%8", "%9", "%10", "%11", "%12", "%13", "%14", "%15", "%16"};
			text = "SentCmdReturnFlag | 1:%1 | 2:%2 | 3:%3 | 4:%4 | 5:%5 | 6:%6 | 7:%7 | 8:%8 | 9:%9 | 10:%10 | 11:%11 | 12:%12 | 13:%13 | 14:%14 | 15:%15 | 16:%16";
		};
	};
	class SentCmdReturnFlagAt: SentCmdReturnFlagAt
	{
		versions[] = {"version1", 1};
		class version1
		{
			speech[] = {"%1", "%2", "%3", "%4", "%5", "%6", "%7", "%8", "%9", "%10", "%11", "%12", "%13", "%14", "%15", "%16"};
			text = "SentCmdReturnFlagAt | 1:%1 | 2:%2 | 3:%3 | 4:%4 | 5:%5 | 6:%6 | 7:%7 | 8:%8 | 9:%9 | 10:%10 | 11:%11 | 12:%12 | 13:%13 | 14:%14 | 15:%15 | 16:%16";
		};
	};
	class SentCmdReturnFlagFar: SentCmdReturnFlagFar
	{
		versions[] = {"version1", 1};
		class version1
		{
			speech[] = {"%1", "%2", "%3", "%4", "%5", "%6", "%7", "%8", "%9", "%10", "%11", "%12", "%13", "%14", "%15", "%16"};
			text = "SentCmdReturnFlagFar | 1:%1 | 2:%2 | 3:%3 | 4:%4 | 5:%5 | 6:%6 | 7:%7 | 8:%8 | 9:%9 | 10:%10 | 11:%11 | 12:%12 | 13:%13 | 14:%14 | 15:%15 | 16:%16";
		};
	};
	class SentCmdStop: SentCmdStop
	{
		versions[] = {"version1", 1};
		class version1
		{
			speech[] = {"%1", "%2", "%3", "%4", "%5", "%6", "%7", "%8", "%9", "%10", "%11", "%12", "%13", "%14", "%15", "%16"};
			text = "SentCmdStop | 1:%1 | 2:%2 | 3:%3 | 4:%4 | 5:%5 | 6:%6 | 7:%7 | 8:%8 | 9:%9 | 10:%10 | 11:%11 | 12:%12 | 13:%13 | 14:%14 | 15:%15 | 16:%16";
		};
	};
	class SentCmdSupport: SentCmdSupport
	{
		versions[] = {"version1", 1};
		class version1
		{
			speech[] = {"%1", "%2", "%3", "%4", "%5", "%6", "%7", "%8", "%9", "%10", "%11", "%12", "%13", "%14", "%15", "%16"};
			text = "SentCmdSupport | 1:%1 | 2:%2 | 3:%3 | 4:%4 | 5:%5 | 6:%6 | 7:%7 | 8:%8 | 9:%9 | 10:%10 | 11:%11 | 12:%12 | 13:%13 | 14:%14 | 15:%15 | 16:%16";
		};
	};
	class SentCmdSupportAt: SentCmdSupportAt
	{
		versions[] = {"version1", 1};
		class version1
		{
			speech[] = {"%1", "%2", "%3", "%4", "%5", "%6", "%7", "%8", "%9", "%10", "%11", "%12", "%13", "%14", "%15", "%16"};
			text = "SentCmdSupportAt | 1:%1 | 2:%2 | 3:%3 | 4:%4 | 5:%5 | 6:%6 | 7:%7 | 8:%8 | 9:%9 | 10:%10 | 11:%11 | 12:%12 | 13:%13 | 14:%14 | 15:%15 | 16:%16";
		};
	};
	class SentCmdSupportFar: SentCmdSupportFar
	{
		versions[] = {"version1", 1};
		class version1
		{
			speech[] = {"%1", "%2", "%3", "%4", "%5", "%6", "%7", "%8", "%9", "%10", "%11", "%12", "%13", "%14", "%15", "%16"};
			text = "SentCmdSupportFar | 1:%1 | 2:%2 | 3:%3 | 4:%4 | 5:%5 | 6:%6 | 7:%7 | 8:%8 | 9:%9 | 10:%10 | 11:%11 | 12:%12 | 13:%13 | 14:%14 | 15:%15 | 16:%16";
		};
	};
	class SentCmdSwitchToCargo: SentCmdSwitchToCargo
	{
		versions[] = {"version1", 1};
		class version1
		{
			speech[] = {"%1", "%2", "%3", "%4", "%5", "%6", "%7", "%8", "%9", "%10", "%11", "%12", "%13", "%14", "%15", "%16"};
			text = "SentCmdSwitchToCargo | 1:%1 | 2:%2 | 3:%3 | 4:%4 | 5:%5 | 6:%6 | 7:%7 | 8:%8 | 9:%9 | 10:%10 | 11:%11 | 12:%12 | 13:%13 | 14:%14 | 15:%15 | 16:%16";
		};
	};
	class SentCmdSwitchToCommander: SentCmdSwitchToCommander
	{
		versions[] = {"version1", 1};
		class version1
		{
			speech[] = {"%1", "%2", "%3", "%4", "%5", "%6", "%7", "%8", "%9", "%10", "%11", "%12", "%13", "%14", "%15", "%16"};
			text = "SentCmdSwitchToCommander | 1:%1 | 2:%2 | 3:%3 | 4:%4 | 5:%5 | 6:%6 | 7:%7 | 8:%8 | 9:%9 | 10:%10 | 11:%11 | 12:%12 | 13:%13 | 14:%14 | 15:%15 | 16:%16";
		};
	};
	class SentCmdSwitchToDriver: SentCmdSwitchToDriver
	{
		versions[] = {"version1", 1};
		class version1
		{
			speech[] = {"%1", "%2", "%3", "%4", "%5", "%6", "%7", "%8", "%9", "%10", "%11", "%12", "%13", "%14", "%15", "%16"};
			text = "SentCmdSwitchToDriver | 1:%1 | 2:%2 | 3:%3 | 4:%4 | 5:%5 | 6:%6 | 7:%7 | 8:%8 | 9:%9 | 10:%10 | 11:%11 | 12:%12 | 13:%13 | 14:%14 | 15:%15 | 16:%16";
		};
	};
	class SentCmdSwitchToGunner: SentCmdSwitchToGunner
	{
		versions[] = {"version1", 1};
		class version1
		{
			speech[] = {"%1", "%2", "%3", "%4", "%5", "%6", "%7", "%8", "%9", "%10", "%11", "%12", "%13", "%14", "%15", "%16"};
			text = "SentCmdSwitchToGunner | 1:%1 | 2:%2 | 3:%3 | 4:%4 | 5:%5 | 6:%6 | 7:%7 | 8:%8 | 9:%9 | 10:%10 | 11:%11 | 12:%12 | 13:%13 | 14:%14 | 15:%15 | 16:%16";
		};
	};
	class SentCmdTakeFlag: SentCmdTakeFlag
	{
		versions[] = {"version1", 1};
		class version1
		{
			speech[] = {"%1", "%2", "%3", "%4", "%5", "%6", "%7", "%8", "%9", "%10", "%11", "%12", "%13", "%14", "%15", "%16"};
			text = "SentCmdTakeFlag | 1:%1 | 2:%2 | 3:%3 | 4:%4 | 5:%5 | 6:%6 | 7:%7 | 8:%8 | 9:%9 | 10:%10 | 11:%11 | 12:%12 | 13:%13 | 14:%14 | 15:%15 | 16:%16";
		};
	};
	class SentCmdTakeFlagAt: SentCmdTakeFlagAt
	{
		versions[] = {"version1", 1};
		class version1
		{
			speech[] = {"%1", "%2", "%3", "%4", "%5", "%6", "%7", "%8", "%9", "%10", "%11", "%12", "%13", "%14", "%15", "%16"};
			text = "SentCmdTakeFlagAt | 1:%1 | 2:%2 | 3:%3 | 4:%4 | 5:%5 | 6:%6 | 7:%7 | 8:%8 | 9:%9 | 10:%10 | 11:%11 | 12:%12 | 13:%13 | 14:%14 | 15:%15 | 16:%16";
		};
	};
	class SentCmdTakeFlagFar: SentCmdTakeFlagFar
	{
		versions[] = {"version1", 1};
		class version1
		{
			speech[] = {"%1", "%2", "%3", "%4", "%5", "%6", "%7", "%8", "%9", "%10", "%11", "%12", "%13", "%14", "%15", "%16"};
			text = "SentCmdTakeFlagFar | 1:%1 | 2:%2 | 3:%3 | 4:%4 | 5:%5 | 6:%6 | 7:%7 | 8:%8 | 9:%9 | 10:%10 | 11:%11 | 12:%12 | 13:%13 | 14:%14 | 15:%15 | 16:%16";
		};
	};
	class SentCmdTakeMagazine: SentCmdTakeMagazine
	{
		versions[] = {"version1", 1};
		class version1
		{
			speech[] = {"%1", "%2", "%3", "%4", "%5", "%6", "%7", "%8", "%9", "%10", "%11", "%12", "%13", "%14", "%15", "%16"};
			text = "SentCmdTakeMagazine | 1:%1 | 2:%2 | 3:%3 | 4:%4 | 5:%5 | 6:%6 | 7:%7 | 8:%8 | 9:%9 | 10:%10 | 11:%11 | 12:%12 | 13:%13 | 14:%14 | 15:%15 | 16:%16";
		};
	};
	class SentCmdTakeMagazineAt: SentCmdTakeMagazineAt
	{
		versions[] = {"version1", 1};
		class version1
		{
			speech[] = {"%1", "%2", "%3", "%4", "%5", "%6", "%7", "%8", "%9", "%10", "%11", "%12", "%13", "%14", "%15", "%16"};
			text = "SentCmdTakeMagazineAt | 1:%1 | 2:%2 | 3:%3 | 4:%4 | 5:%5 | 6:%6 | 7:%7 | 8:%8 | 9:%9 | 10:%10 | 11:%11 | 12:%12 | 13:%13 | 14:%14 | 15:%15 | 16:%16";
		};
	};
	class SentCmdTakeMagazineFar: SentCmdTakeMagazineFar
	{
		versions[] = {"version1", 1};
		class version1
		{
			speech[] = {"%1", "%2", "%3", "%4", "%5", "%6", "%7", "%8", "%9", "%10", "%11", "%12", "%13", "%14", "%15", "%16"};
			text = "SentCmdTakeMagazineFar | 1:%1 | 2:%2 | 3:%3 | 4:%4 | 5:%5 | 6:%6 | 7:%7 | 8:%8 | 9:%9 | 10:%10 | 11:%11 | 12:%12 | 13:%13 | 14:%14 | 15:%15 | 16:%16";
		};
	};
	class SentCmdTakeMine: SentCmdTakeMine
	{
		versions[] = {"version1", 1};
		class version1
		{
			speech[] = {"%1", "%2", "%3", "%4", "%5", "%6", "%7", "%8", "%9", "%10", "%11", "%12", "%13", "%14", "%15", "%16"};
			text = "SentCmdTakeMine | 1:%1 | 2:%2 | 3:%3 | 4:%4 | 5:%5 | 6:%6 | 7:%7 | 8:%8 | 9:%9 | 10:%10 | 11:%11 | 12:%12 | 13:%13 | 14:%14 | 15:%15 | 16:%16";
		};
	};
	class SentCmdTakeWeapon: SentCmdTakeWeapon
	{
		versions[] = {"version1", 1};
		class version1
		{
			speech[] = {"%1", "%2", "%3", "%4", "%5", "%6", "%7", "%8", "%9", "%10", "%11", "%12", "%13", "%14", "%15", "%16"};
			text = "SentCmdTakeWeapon | 1:%1 | 2:%2 | 3:%3 | 4:%4 | 5:%5 | 6:%6 | 7:%7 | 8:%8 | 9:%9 | 10:%10 | 11:%11 | 12:%12 | 13:%13 | 14:%14 | 15:%15 | 16:%16";
		};
	};
	class SentCmdTakeWeaponAt: SentCmdTakeWeaponAt
	{
		versions[] = {"version1", 1};
		class version1
		{
			speech[] = {"%1", "%2", "%3", "%4", "%5", "%6", "%7", "%8", "%9", "%10", "%11", "%12", "%13", "%14", "%15", "%16"};
			text = "SentCmdTakeWeaponAt | 1:%1 | 2:%2 | 3:%3 | 4:%4 | 5:%5 | 6:%6 | 7:%7 | 8:%8 | 9:%9 | 10:%10 | 11:%11 | 12:%12 | 13:%13 | 14:%14 | 15:%15 | 16:%16";
		};
	};
	class SentCmdTakeWeaponFar: SentCmdTakeWeaponFar
	{
		versions[] = {"version1", 1};
		class version1
		{
			speech[] = {"%1", "%2", "%3", "%4", "%5", "%6", "%7", "%8", "%9", "%10", "%11", "%12", "%13", "%14", "%15", "%16"};
			text = "SentCmdTakeWeaponFar | 1:%1 | 2:%2 | 3:%3 | 4:%4 | 5:%5 | 6:%6 | 7:%7 | 8:%8 | 9:%9 | 10:%10 | 11:%11 | 12:%12 | 13:%13 | 14:%14 | 15:%15 | 16:%16";
		};
	};
	class SentCombatGeneric: SentCombatGeneric
	{
		versions[] = {"version1", 1};
		class version1
		{
			speech[] = {"%1", "%2", "%3", "%4", "%5", "%6", "%7", "%8", "%9", "%10", "%11", "%12", "%13", "%14", "%15", "%16"};
			text = "SentCombatGeneric | 1:%1 | 2:%2 | 3:%3 | 4:%4 | 5:%5 | 6:%6 | 7:%7 | 8:%8 | 9:%9 | 10:%10 | 11:%11 | 12:%12 | 13:%13 | 14:%14 | 15:%15 | 16:%16";
		};
	};
	class SentCommandCompleted: SentCommandCompleted
	{
		versions[] = {"version1", 1};
		class version1
		{
			speech[] = {"%1", "%2", "%3", "%4", "%5", "%6", "%7", "%8", "%9", "%10", "%11", "%12", "%13", "%14", "%15", "%16"};
			text = "SentCommandCompleted | 1:%1 | 2:%2 | 3:%3 | 4:%4 | 5:%5 | 6:%6 | 7:%7 | 8:%8 | 9:%9 | 10:%10 | 11:%11 | 12:%12 | 13:%13 | 14:%14 | 15:%15 | 16:%16";
		};
	};
	class SentCommandFailed: SentCommandFailed
	{
		versions[] = {"version1", 1};
		class version1
		{
			speech[] = {"%1", "%2", "%3", "%4", "%5", "%6", "%7", "%8", "%9", "%10", "%11", "%12", "%13", "%14", "%15", "%16"};
			text = "SentCommandFailed | 1:%1 | 2:%2 | 3:%3 | 4:%4 | 5:%5 | 6:%6 | 7:%7 | 8:%8 | 9:%9 | 10:%10 | 11:%11 | 12:%12 | 13:%13 | 14:%14 | 15:%15 | 16:%16";
		};
	};
	class SentConfirmAttack: SentConfirmAttack
	{
		versions[] = {"version1", 1};
		class version1
		{
			speech[] = {"%1", "%2", "%3", "%4", "%5", "%6", "%7", "%8", "%9", "%10", "%11", "%12", "%13", "%14", "%15", "%16"};
			text = "SentConfirmAttack | 1:%1 | 2:%2 | 3:%3 | 4:%4 | 5:%5 | 6:%6 | 7:%7 | 8:%8 | 9:%9 | 10:%10 | 11:%11 | 12:%12 | 13:%13 | 14:%14 | 15:%15 | 16:%16";
		};
	};
	class SentConfirmMove: SentConfirmMove
	{
		versions[] = {"version1", 1};
		class version1
		{
			speech[] = {"%1", "%2", "%3", "%4", "%5", "%6", "%7", "%8", "%9", "%10", "%11", "%12", "%13", "%14", "%15", "%16"};
			text = "SentConfirmMove | 1:%1 | 2:%2 | 3:%3 | 4:%4 | 5:%5 | 6:%6 | 7:%7 | 8:%8 | 9:%9 | 10:%10 | 11:%11 | 12:%12 | 13:%13 | 14:%14 | 15:%15 | 16:%16";
		};
	};
	class SentConfirmOther: SentConfirmOther
	{
		versions[] = {"version1", 1};
		class version1
		{
			speech[] = {"%1", "%2", "%3", "%4", "%5", "%6", "%7", "%8", "%9", "%10", "%11", "%12", "%13", "%14", "%15", "%16"};
			text = "SentConfirmOther | 1:%1 | 2:%2 | 3:%3 | 4:%4 | 5:%5 | 6:%6 | 7:%7 | 8:%8 | 9:%9 | 10:%10 | 11:%11 | 12:%12 | 13:%13 | 14:%14 | 15:%15 | 16:%16";
		};
	};
	class SentContact: SentContact
	{
		versions[] = {"version1", 1};
		class version1
		{
			speech[] = {"%1", "%2", "%3", "%4", "%5", "%6", "%7", "%8", "%9", "%10", "%11", "%12", "%13", "%14", "%15", "%16"};
			text = "SentContact | 1:%1 | 2:%2 | 3:%3 | 4:%4 | 5:%5 | 6:%6 | 7:%7 | 8:%8 | 9:%9 | 10:%10 | 11:%11 | 12:%12 | 13:%13 | 14:%14 | 15:%15 | 16:%16";
		};
	};
	class SentCovering: SentCovering
	{
		versions[] = {"version1", 1};
		class version1
		{
			speech[] = {"%1", "%2", "%3", "%4", "%5", "%6", "%7", "%8", "%9", "%10", "%11", "%12", "%13", "%14", "%15", "%16"};
			text = "SentCovering | 1:%1 | 2:%2 | 3:%3 | 4:%4 | 5:%5 | 6:%6 | 7:%7 | 8:%8 | 9:%9 | 10:%10 | 11:%11 | 12:%12 | 13:%13 | 14:%14 | 15:%15 | 16:%16";
		};
	};
	class SentCoverMe: SentCoverMe
	{
		versions[] = {"version1", 1};
		class version1
		{
			speech[] = {"%1", "%2", "%3", "%4", "%5", "%6", "%7", "%8", "%9", "%10", "%11", "%12", "%13", "%14", "%15", "%16"};
			text = "SentCoverMe | 1:%1 | 2:%2 | 3:%3 | 4:%4 | 5:%5 | 6:%6 | 7:%7 | 8:%8 | 9:%9 | 10:%10 | 11:%11 | 12:%12 | 13:%13 | 14:%14 | 15:%15 | 16:%16";
		};
	};
	class SentDammageCritical: SentDammageCritical
	{
		versions[] = {"version1", 1};
		class version1
		{
			speech[] = {"%1", "%2", "%3", "%4", "%5", "%6", "%7", "%8", "%9", "%10", "%11", "%12", "%13", "%14", "%15", "%16"};
			text = "SentDammageCritical | 1:%1 | 2:%2 | 3:%3 | 4:%4 | 5:%5 | 6:%6 | 7:%7 | 8:%8 | 9:%9 | 10:%10 | 11:%11 | 12:%12 | 13:%13 | 14:%14 | 15:%15 | 16:%16";
		};
	};
	class SentDestinationUnreacheable: SentDestinationUnreacheable
	{
		versions[] = {"version1", 1};
		class version1
		{
			speech[] = {"%1", "%2", "%3", "%4", "%5", "%6", "%7", "%8", "%9", "%10", "%11", "%12", "%13", "%14", "%15", "%16"};
			text = "SentDestinationUnreacheable | 1:%1 | 2:%2 | 3:%3 | 4:%4 | 5:%5 | 6:%6 | 7:%7 | 8:%8 | 9:%9 | 10:%10 | 11:%11 | 12:%12 | 13:%13 | 14:%14 | 15:%15 | 16:%16";
		};
	};
	class SentDetectedBomb: SentDetectedBomb
	{
		versions[] = {"version1", 1};
		class version1
		{
			speech[] = {"%1", "%2", "%3", "%4", "%5", "%6", "%7", "%8", "%9", "%10", "%11", "%12", "%13", "%14", "%15", "%16"};
			text = "SentDetectedBomb | 1:%1 | 2:%2 | 3:%3 | 4:%4 | 5:%5 | 6:%6 | 7:%7 | 8:%8 | 9:%9 | 10:%10 | 11:%11 | 12:%12 | 13:%13 | 14:%14 | 15:%15 | 16:%16";
		};
	};
	class SentDetectedExplosive: SentDetectedExplosive
	{
		versions[] = {"version1", 1};
		class version1
		{
			speech[] = {"%1", "%2", "%3", "%4", "%5", "%6", "%7", "%8", "%9", "%10", "%11", "%12", "%13", "%14", "%15", "%16"};
			text = "SentDetectedExplosive | 1:%1 | 2:%2 | 3:%3 | 4:%4 | 5:%5 | 6:%6 | 7:%7 | 8:%8 | 9:%9 | 10:%10 | 11:%11 | 12:%12 | 13:%13 | 14:%14 | 15:%15 | 16:%16";
		};
	};
	class SentDetectedMine: SentDetectedMine
	{
		versions[] = {"version1", 1};
		class version1
		{
			speech[] = {"%1", "%2", "%3", "%4", "%5", "%6", "%7", "%8", "%9", "%10", "%11", "%12", "%13", "%14", "%15", "%16"};
			text = "SentDetectedMine | 1:%1 | 2:%2 | 3:%3 | 4:%4 | 5:%5 | 6:%6 | 7:%7 | 8:%8 | 9:%9 | 10:%10 | 11:%11 | 12:%12 | 13:%13 | 14:%14 | 15:%15 | 16:%16";
		};
	};
	class SentDisassemble: SentDisassemble
	{
		versions[] = {"version1", 1};
		class version1
		{
			speech[] = {"%1", "%2", "%3", "%4", "%5", "%6", "%7", "%8", "%9", "%10", "%11", "%12", "%13", "%14", "%15", "%16"};
			text = "SentDisassemble | 1:%1 | 2:%2 | 3:%3 | 4:%4 | 5:%5 | 6:%6 | 7:%7 | 8:%8 | 9:%9 | 10:%10 | 11:%11 | 12:%12 | 13:%13 | 14:%14 | 15:%15 | 16:%16";
		};
	};
	class SentEndangered: SentEndangered
	{
		versions[] = {"version1", 1};
		class version1
		{
			speech[] = {"%1", "%2", "%3", "%4", "%5", "%6", "%7", "%8", "%9", "%10", "%11", "%12", "%13", "%14", "%15", "%16"};
			text = "SentEndangered | 1:%1 | 2:%2 | 3:%3 | 4:%4 | 5:%5 | 6:%6 | 7:%7 | 8:%8 | 9:%9 | 10:%10 | 11:%11 | 12:%12 | 13:%13 | 14:%14 | 15:%15 | 16:%16";
		};
	};
	class SentEnemyContact: SentEnemyContact
	{
		versions[] = {"version1", 1};
		class version1
		{
			speech[] = {"%1", "%2", "%3", "%4", "%5", "%6", "%7", "%8", "%9", "%10", "%11", "%12", "%13", "%14", "%15", "%16"};
			text = "SentEnemyContact | 1:%1 | 2:%2 | 3:%3 | 4:%4 | 5:%5 | 6:%6 | 7:%7 | 8:%8 | 9:%9 | 10:%10 | 11:%11 | 12:%12 | 13:%13 | 14:%14 | 15:%15 | 16:%16";
		};
	};
	class SentEnemyDetectedGroupCoreRelative: SentEnemyDetectedGroupCoreRelative
	{
		versions[] = {"version1", 1};
		class version1
		{
			speech[] = {"%1", "%2", "%3", "%4", "%5", "%6", "%7", "%8", "%9", "%10", "%11", "%12", "%13", "%14", "%15", "%16"};
			text = "SentEnemyDetectedGroupCoreRelative | 1:%1 | 2:%2 | 3:%3 | 4:%4 | 5:%5 | 6:%6 | 7:%7 | 8:%8 | 9:%9 | 10:%10 | 11:%11 | 12:%12 | 13:%13 | 14:%14 | 15:%15 | 16:%16";
		};
	};
	class SentEnemyDetectedLocationRelative: SentEnemyDetectedLocationRelative
	{
		versions[] = {"version1", 1};
		class version1
		{
			speech[] = {"%1", "%2", "%3", "%4", "%5", "%6", "%7", "%8", "%9", "%10", "%11", "%12", "%13", "%14", "%15", "%16"};
			text = "SentEnemyDetectedLocationRelative | 1:%1 | 2:%2 | 3:%3 | 4:%4 | 5:%5 | 6:%6 | 7:%7 | 8:%8 | 9:%9 | 10:%10 | 11:%11 | 12:%12 | 13:%13 | 14:%14 | 15:%15 | 16:%16";
		};
	};
	class SentEnemyDetectedOnGridReference: SentEnemyDetectedOnGridReference
	{
		versions[] = {"version1", 1};
		class version1
		{
			speech[] = {"%1", "%2", "%3", "%4", "%5", "%6", "%7", "%8", "%9", "%10", "%11", "%12", "%13", "%14", "%15", "%16"};
			text = "SentEnemyDetectedOnGridReference | 1:%1 | 2:%2 | 3:%3 | 4:%4 | 5:%5 | 6:%6 | 7:%7 | 8:%8 | 9:%9 | 10:%10 | 11:%11 | 12:%12 | 13:%13 | 14:%14 | 15:%15 | 16:%16";
		};
	};
	class SentEnemyDetectedSenderRelative: SentEnemyDetectedSenderRelative
	{
		versions[] = {"version1", 1};
		class version1
		{
			speech[] = {"%1", "%2", "%3", "%4", "%5", "%6", "%7", "%8", "%9", "%10", "%11", "%12", "%13", "%14", "%15", "%16"};
			text = "SentEnemyDetectedSenderRelative | 1:%1 | 2:%2 | 3:%3 | 4:%4 | 5:%5 | 6:%6 | 7:%7 | 8:%8 | 9:%9 | 10:%10 | 11:%11 | 12:%12 | 13:%13 | 14:%14 | 15:%15 | 16:%16";
		};
	};
	class SentEnemyDetectedUnitRelative: SentEnemyDetectedUnitRelative
	{
		versions[] = {"version1", 1};
		class version1
		{
			speech[] = {"%1", "%2", "%3", "%4", "%5", "%6", "%7", "%8", "%9", "%10", "%11", "%12", "%13", "%14", "%15", "%16"};
			text = "SentEnemyDetectedUnitRelative | 1:%1 | 2:%2 | 3:%3 | 4:%4 | 5:%5 | 6:%6 | 7:%7 | 8:%8 | 9:%9 | 10:%10 | 11:%11 | 12:%12 | 13:%13 | 14:%14 | 15:%15 | 16:%16";
		};
	};
	class SentEngage: SentEngage
	{
		versions[] = {"version1", 1};
		class version1
		{
			speech[] = {"%1", "%2", "%3", "%4", "%5", "%6", "%7", "%8", "%9", "%10", "%11", "%12", "%13", "%14", "%15", "%16"};
			text = "SentEngage | 1:%1 | 2:%2 | 3:%3 | 4:%4 | 5:%5 | 6:%6 | 7:%7 | 8:%8 | 9:%9 | 10:%10 | 11:%11 | 12:%12 | 13:%13 | 14:%14 | 15:%15 | 16:%16";
		};
	};
	class SentEngageNoTarget: SentEngageNoTarget
	{
		versions[] = {"version1", 1};
		class version1
		{
			speech[] = {"%1", "%2", "%3", "%4", "%5", "%6", "%7", "%8", "%9", "%10", "%11", "%12", "%13", "%14", "%15", "%16"};
			text = "SentEngageNoTarget | 1:%1 | 2:%2 | 3:%3 | 4:%4 | 5:%5 | 6:%6 | 7:%7 | 8:%8 | 9:%9 | 10:%10 | 11:%11 | 12:%12 | 13:%13 | 14:%14 | 15:%15 | 16:%16";
		};
	};
	class SentFire: SentFire
	{
		versions[] = {"version1", 1};
		class version1
		{
			speech[] = {"%1", "%2", "%3", "%4", "%5", "%6", "%7", "%8", "%9", "%10", "%11", "%12", "%13", "%14", "%15", "%16"};
			text = "SentFire | 1:%1 | 2:%2 | 3:%3 | 4:%4 | 5:%5 | 6:%6 | 7:%7 | 8:%8 | 9:%9 | 10:%10 | 11:%11 | 12:%12 | 13:%13 | 14:%14 | 15:%15 | 16:%16";
		};
	};
	class SentFireNegative: SentFireNegative
	{
		versions[] = {"version1", 1};
		class version1
		{
			speech[] = {"%1", "%2", "%3", "%4", "%5", "%6", "%7", "%8", "%9", "%10", "%11", "%12", "%13", "%14", "%15", "%16"};
			text = "SentFireNegative | 1:%1 | 2:%2 | 3:%3 | 4:%4 | 5:%5 | 6:%6 | 7:%7 | 8:%8 | 9:%9 | 10:%10 | 11:%11 | 12:%12 | 13:%13 | 14:%14 | 15:%15 | 16:%16";
		};
	};
	class SentFireNoTarget: SentFireNoTarget
	{
		versions[] = {"version1", 1};
		class version1
		{
			speech[] = {"%1", "%2", "%3", "%4", "%5", "%6", "%7", "%8", "%9", "%10", "%11", "%12", "%13", "%14", "%15", "%16"};
			text = "SentFireNoTarget | 1:%1 | 2:%2 | 3:%3 | 4:%4 | 5:%5 | 6:%6 | 7:%7 | 8:%8 | 9:%9 | 10:%10 | 11:%11 | 12:%12 | 13:%13 | 14:%14 | 15:%15 | 16:%16";
		};
	};
	class SentFireReady: SentFireReady
	{
		versions[] = {"version1", 1};
		class version1
		{
			speech[] = {"%1", "%2", "%3", "%4", "%5", "%6", "%7", "%8", "%9", "%10", "%11", "%12", "%13", "%14", "%15", "%16"};
			text = "SentFireReady | 1:%1 | 2:%2 | 3:%3 | 4:%4 | 5:%5 | 6:%6 | 7:%7 | 8:%8 | 9:%9 | 10:%10 | 11:%11 | 12:%12 | 13:%13 | 14:%14 | 15:%15 | 16:%16";
		};
	};
	class SentFormColumn: SentFormColumn
	{
		versions[] = {"version1", 1};
		class version1
		{
			speech[] = {"%1", "%2", "%3", "%4", "%5", "%6", "%7", "%8", "%9", "%10", "%11", "%12", "%13", "%14", "%15", "%16"};
			text = "SentFormColumn | 1:%1 | 2:%2 | 3:%3 | 4:%4 | 5:%5 | 6:%6 | 7:%7 | 8:%8 | 9:%9 | 10:%10 | 11:%11 | 12:%12 | 13:%13 | 14:%14 | 15:%15 | 16:%16";
		};
	};
	class SentFormDiamond: SentFormDiamond
	{
		versions[] = {"version1", 1};
		class version1
		{
			speech[] = {"%1", "%2", "%3", "%4", "%5", "%6", "%7", "%8", "%9", "%10", "%11", "%12", "%13", "%14", "%15", "%16"};
			text = "SentFormDiamond | 1:%1 | 2:%2 | 3:%3 | 4:%4 | 5:%5 | 6:%6 | 7:%7 | 8:%8 | 9:%9 | 10:%10 | 11:%11 | 12:%12 | 13:%13 | 14:%14 | 15:%15 | 16:%16";
		};
	};
	class SentFormEcholonLeft: SentFormEcholonLeft
	{
		versions[] = {"version1", 1};
		class version1
		{
			speech[] = {"%1", "%2", "%3", "%4", "%5", "%6", "%7", "%8", "%9", "%10", "%11", "%12", "%13", "%14", "%15", "%16"};
			text = "SentFormEcholonLeft | 1:%1 | 2:%2 | 3:%3 | 4:%4 | 5:%5 | 6:%6 | 7:%7 | 8:%8 | 9:%9 | 10:%10 | 11:%11 | 12:%12 | 13:%13 | 14:%14 | 15:%15 | 16:%16";
		};
	};
	class SentFormEcholonRight: SentFormEcholonRight
	{
		versions[] = {"version1", 1};
		class version1
		{
			speech[] = {"%1", "%2", "%3", "%4", "%5", "%6", "%7", "%8", "%9", "%10", "%11", "%12", "%13", "%14", "%15", "%16"};
			text = "SentFormEcholonRight | 1:%1 | 2:%2 | 3:%3 | 4:%4 | 5:%5 | 6:%6 | 7:%7 | 8:%8 | 9:%9 | 10:%10 | 11:%11 | 12:%12 | 13:%13 | 14:%14 | 15:%15 | 16:%16";
		};
	};
	class SentFormFile: SentFormFile
	{
		versions[] = {"version1", 1};
		class version1
		{
			speech[] = {"%1", "%2", "%3", "%4", "%5", "%6", "%7", "%8", "%9", "%10", "%11", "%12", "%13", "%14", "%15", "%16"};
			text = "SentFormFile | 1:%1 | 2:%2 | 3:%3 | 4:%4 | 5:%5 | 6:%6 | 7:%7 | 8:%8 | 9:%9 | 10:%10 | 11:%11 | 12:%12 | 13:%13 | 14:%14 | 15:%15 | 16:%16";
		};
	};
	class SentFormLine: SentFormLine
	{
		versions[] = {"version1", 1};
		class version1
		{
			speech[] = {"%1", "%2", "%3", "%4", "%5", "%6", "%7", "%8", "%9", "%10", "%11", "%12", "%13", "%14", "%15", "%16"};
			text = "SentFormLine | 1:%1 | 2:%2 | 3:%3 | 4:%4 | 5:%5 | 6:%6 | 7:%7 | 8:%8 | 9:%9 | 10:%10 | 11:%11 | 12:%12 | 13:%13 | 14:%14 | 15:%15 | 16:%16";
		};
	};
	class SentFormPosAdvance: SentFormPosAdvance
	{
		versions[] = {"version1", 1};
		class version1
		{
			speech[] = {"%1", "%2", "%3", "%4", "%5", "%6", "%7", "%8", "%9", "%10", "%11", "%12", "%13", "%14", "%15", "%16"};
			text = "SentFormPosAdvance | 1:%1 | 2:%2 | 3:%3 | 4:%4 | 5:%5 | 6:%6 | 7:%7 | 8:%8 | 9:%9 | 10:%10 | 11:%11 | 12:%12 | 13:%13 | 14:%14 | 15:%15 | 16:%16";
		};
	};
	class SentFormPosFlankLeft: SentFormPosFlankLeft
	{
		versions[] = {"version1", 1};
		class version1
		{
			speech[] = {"%1", "%2", "%3", "%4", "%5", "%6", "%7", "%8", "%9", "%10", "%11", "%12", "%13", "%14", "%15", "%16"};
			text = "SentFormPosFlankLeft | 1:%1 | 2:%2 | 3:%3 | 4:%4 | 5:%5 | 6:%6 | 7:%7 | 8:%8 | 9:%9 | 10:%10 | 11:%11 | 12:%12 | 13:%13 | 14:%14 | 15:%15 | 16:%16";
		};
	};
	class SentFormPosFlankRight: SentFormPosFlankRight
	{
		versions[] = {"version1", 1};
		class version1
		{
			speech[] = {"%1", "%2", "%3", "%4", "%5", "%6", "%7", "%8", "%9", "%10", "%11", "%12", "%13", "%14", "%15", "%16"};
			text = "SentFormPosFlankRight | 1:%1 | 2:%2 | 3:%3 | 4:%4 | 5:%5 | 6:%6 | 7:%7 | 8:%8 | 9:%9 | 10:%10 | 11:%11 | 12:%12 | 13:%13 | 14:%14 | 15:%15 | 16:%16";
		};
	};
	class SentFormPosStayBack: SentFormPosStayBack
	{
		versions[] = {"version1", 1};
		class version1
		{
			speech[] = {"%1", "%2", "%3", "%4", "%5", "%6", "%7", "%8", "%9", "%10", "%11", "%12", "%13", "%14", "%15", "%16"};
			text = "SentFormPosStayBack | 1:%1 | 2:%2 | 3:%3 | 4:%4 | 5:%5 | 6:%6 | 7:%7 | 8:%8 | 9:%9 | 10:%10 | 11:%11 | 12:%12 | 13:%13 | 14:%14 | 15:%15 | 16:%16";
		};
	};
	class SentFormStaggeredColumn: SentFormStaggeredColumn
	{
		versions[] = {"version1", 1};
		class version1
		{
			speech[] = {"%1", "%2", "%3", "%4", "%5", "%6", "%7", "%8", "%9", "%10", "%11", "%12", "%13", "%14", "%15", "%16"};
			text = "SentFormStaggeredColumn | 1:%1 | 2:%2 | 3:%3 | 4:%4 | 5:%5 | 6:%6 | 7:%7 | 8:%8 | 9:%9 | 10:%10 | 11:%11 | 12:%12 | 13:%13 | 14:%14 | 15:%15 | 16:%16";
		};
	};
	class SentFormVee: SentFormVee
	{
		versions[] = {"version1", 1};
		class version1
		{
			speech[] = {"%1", "%2", "%3", "%4", "%5", "%6", "%7", "%8", "%9", "%10", "%11", "%12", "%13", "%14", "%15", "%16"};
			text = "SentFormVee | 1:%1 | 2:%2 | 3:%3 | 4:%4 | 5:%5 | 6:%6 | 7:%7 | 8:%8 | 9:%9 | 10:%10 | 11:%11 | 12:%12 | 13:%13 | 14:%14 | 15:%15 | 16:%16";
		};
	};
	class SentFormWedge: SentFormWedge
	{
		versions[] = {"version1", 1};
		class version1
		{
			speech[] = {"%1", "%2", "%3", "%4", "%5", "%6", "%7", "%8", "%9", "%10", "%11", "%12", "%13", "%14", "%15", "%16"};
			text = "SentFormWedge | 1:%1 | 2:%2 | 3:%3 | 4:%4 | 5:%5 | 6:%6 | 7:%7 | 8:%8 | 9:%9 | 10:%10 | 11:%11 | 12:%12 | 13:%13 | 14:%14 | 15:%15 | 16:%16";
		};
	};
	class SentFuelCritical: SentFuelCritical
	{
		versions[] = {"version1", 1};
		class version1
		{
			speech[] = {"%1", "%2", "%3", "%4", "%5", "%6", "%7", "%8", "%9", "%10", "%11", "%12", "%13", "%14", "%15", "%16"};
			text = "SentFuelCritical | 1:%1 | 2:%2 | 3:%3 | 4:%4 | 5:%5 | 6:%6 | 7:%7 | 8:%8 | 9:%9 | 10:%10 | 11:%11 | 12:%12 | 13:%13 | 14:%14 | 15:%15 | 16:%16";
		};
	};
	class SentFuelLow: SentFuelLow
	{
		versions[] = {"version1", 1};
		class version1
		{
			speech[] = {"%1", "%2", "%3", "%4", "%5", "%6", "%7", "%8", "%9", "%10", "%11", "%12", "%13", "%14", "%15", "%16"};
			text = "SentFuelLow | 1:%1 | 2:%2 | 3:%3 | 4:%4 | 5:%5 | 6:%6 | 7:%7 | 8:%8 | 9:%9 | 10:%10 | 11:%11 | 12:%12 | 13:%13 | 14:%14 | 15:%15 | 16:%16";
		};
	};
	class SentHealthCritical: SentHealthCritical
	{
		versions[] = {"version1", 1};
		class version1
		{
			speech[] = {"%1", "%2", "%3", "%4", "%5", "%6", "%7", "%8", "%9", "%10", "%11", "%12", "%13", "%14", "%15", "%16"};
			text = "SentHealthCritical | 1:%1 | 2:%2 | 3:%3 | 4:%4 | 5:%5 | 6:%6 | 7:%7 | 8:%8 | 9:%9 | 10:%10 | 11:%11 | 12:%12 | 13:%13 | 14:%14 | 15:%15 | 16:%16";
		};
	};
	class SentHealthNormal: SentHealthNormal
	{
		versions[] = {"version1", 1};
		class version1
		{
			speech[] = {"%1", "%2", "%3", "%4", "%5", "%6", "%7", "%8", "%9", "%10", "%11", "%12", "%13", "%14", "%15", "%16"};
			text = "SentHealthNormal | 1:%1 | 2:%2 | 3:%3 | 4:%4 | 5:%5 | 6:%6 | 7:%7 | 8:%8 | 9:%9 | 10:%10 | 11:%11 | 12:%12 | 13:%13 | 14:%14 | 15:%15 | 16:%16";
		};
	};
	class SentHealthUnconscious: SentHealthUnconscious
	{
		versions[] = {"version1", 1};
		class version1
		{
			speech[] = {"%1", "%2", "%3", "%4", "%5", "%6", "%7", "%8", "%9", "%10", "%11", "%12", "%13", "%14", "%15", "%16"};
			text = "SentHealthUnconscious | 1:%1 | 2:%2 | 3:%3 | 4:%4 | 5:%5 | 6:%6 | 7:%7 | 8:%8 | 9:%9 | 10:%10 | 11:%11 | 12:%12 | 13:%13 | 14:%14 | 15:%15 | 16:%16";
		};
	};
	class SentHoldFire: SentHoldFire
	{
		versions[] = {"version1", 1};
		class version1
		{
			speech[] = {"%1", "%2", "%3", "%4", "%5", "%6", "%7", "%8", "%9", "%10", "%11", "%12", "%13", "%14", "%15", "%16"};
			text = "SentHoldFire | 1:%1 | 2:%2 | 3:%3 | 4:%4 | 5:%5 | 6:%6 | 7:%7 | 8:%8 | 9:%9 | 10:%10 | 11:%11 | 12:%12 | 13:%13 | 14:%14 | 15:%15 | 16:%16";
		};
	};
	class SentHoldFireInCombat: SentHoldFireInCombat
	{
		versions[] = {"version1", 1};
		class version1
		{
			speech[] = {"%1", "%2", "%3", "%4", "%5", "%6", "%7", "%8", "%9", "%10", "%11", "%12", "%13", "%14", "%15", "%16"};
			text = "SentHoldFireInCombat | 1:%1 | 2:%2 | 3:%3 | 4:%4 | 5:%5 | 6:%6 | 7:%7 | 8:%8 | 9:%9 | 10:%10 | 11:%11 | 12:%12 | 13:%13 | 14:%14 | 15:%15 | 16:%16";
		};
	};
	class SentIncomingGrenade: SentIncomingGrenade
	{
		versions[] = {"version1", 1};
		class version1
		{
			speech[] = {"%1", "%2", "%3", "%4", "%5", "%6", "%7", "%8", "%9", "%10", "%11", "%12", "%13", "%14", "%15", "%16"};
			text = "SentIncomingGrenade | 1:%1 | 2:%2 | 3:%3 | 4:%4 | 5:%5 | 6:%6 | 7:%7 | 8:%8 | 9:%9 | 10:%10 | 11:%11 | 12:%12 | 13:%13 | 14:%14 | 15:%15 | 16:%16";
		};
	};
	class SentIsLeader: SentIsLeader
	{
		versions[] = {"version1", 1};
		class version1
		{
			speech[] = {"%1", "%2", "%3", "%4", "%5", "%6", "%7", "%8", "%9", "%10", "%11", "%12", "%13", "%14", "%15", "%16"};
			text = "SentIsLeader | 1:%1 | 2:%2 | 3:%3 | 4:%4 | 5:%5 | 6:%6 | 7:%7 | 8:%8 | 9:%9 | 10:%10 | 11:%11 | 12:%12 | 13:%13 | 14:%14 | 15:%15 | 16:%16";
		};
	};
	class SentJoinCompleted: SentJoinCompleted
	{
		versions[] = {"version1", 1};
		class version1
		{
			speech[] = {"%1", "%2", "%3", "%4", "%5", "%6", "%7", "%8", "%9", "%10", "%11", "%12", "%13", "%14", "%15", "%16"};
			text = "SentJoinCompleted | 1:%1 | 2:%2 | 3:%3 | 4:%4 | 5:%5 | 6:%6 | 7:%7 | 8:%8 | 9:%9 | 10:%10 | 11:%11 | 12:%12 | 13:%13 | 14:%14 | 15:%15 | 16:%16";
		};
	};
	class SentKeepFormation: SentKeepFormation
	{
		versions[] = {"version1", 1};
		class version1
		{
			speech[] = {"%1", "%2", "%3", "%4", "%5", "%6", "%7", "%8", "%9", "%10", "%11", "%12", "%13", "%14", "%15", "%16"};
			text = "SentKeepFormation | 1:%1 | 2:%2 | 3:%3 | 4:%4 | 5:%5 | 6:%6 | 7:%7 | 8:%8 | 9:%9 | 10:%10 | 11:%11 | 12:%12 | 13:%13 | 14:%14 | 15:%15 | 16:%16";
		};
	};
	class SentLightsOff: SentLightsOff
	{
		versions[] = {"version1", 1};
		class version1
		{
			speech[] = {"%1", "%2", "%3", "%4", "%5", "%6", "%7", "%8", "%9", "%10", "%11", "%12", "%13", "%14", "%15", "%16"};
			text = "SentLightsOff | 1:%1 | 2:%2 | 3:%3 | 4:%4 | 5:%5 | 6:%6 | 7:%7 | 8:%8 | 9:%9 | 10:%10 | 11:%11 | 12:%12 | 13:%13 | 14:%14 | 15:%15 | 16:%16";
		};
	};
	class SentLightsOn: SentLightsOn
	{
		versions[] = {"version1", 1};
		class version1
		{
			speech[] = {"%1", "%2", "%3", "%4", "%5", "%6", "%7", "%8", "%9", "%10", "%11", "%12", "%13", "%14", "%15", "%16"};
			text = "SentLightsOn | 1:%1 | 2:%2 | 3:%3 | 4:%4 | 5:%5 | 6:%6 | 7:%7 | 8:%8 | 9:%9 | 10:%10 | 11:%11 | 12:%12 | 13:%13 | 14:%14 | 15:%15 | 16:%16";
		};
	};
	class SentLooseFormation: SentLooseFormation
	{
		versions[] = {"version1", 1};
		class version1
		{
			speech[] = {"%1", "%2", "%3", "%4", "%5", "%6", "%7", "%8", "%9", "%10", "%11", "%12", "%13", "%14", "%15", "%16"};
			text = "SentLooseFormation | 1:%1 | 2:%2 | 3:%3 | 4:%4 | 5:%5 | 6:%6 | 7:%7 | 8:%8 | 9:%9 | 10:%10 | 11:%11 | 12:%12 | 13:%13 | 14:%14 | 15:%15 | 16:%16";
		};
	};
	class SentNoTarget: SentNoTarget
	{
		versions[] = {"version1", 1};
		class version1
		{
			speech[] = {"%1", "%2", "%3", "%4", "%5", "%6", "%7", "%8", "%9", "%10", "%11", "%12", "%13", "%14", "%15", "%16"};
			text = "SentNoTarget | 1:%1 | 2:%2 | 3:%3 | 4:%4 | 5:%5 | 6:%6 | 7:%7 | 8:%8 | 9:%9 | 10:%10 | 11:%11 | 12:%12 | 13:%13 | 14:%14 | 15:%15 | 16:%16";
		};
	};
	class SentNotifyAttack: SentNotifyAttack
	{
		versions[] = {"version1", 1};
		class version1
		{
			speech[] = {"%1", "%2", "%3", "%4", "%5", "%6", "%7", "%8", "%9", "%10", "%11", "%12", "%13", "%14", "%15", "%16"};
			text = "SentNotifyAttack | 1:%1 | 2:%2 | 3:%3 | 4:%4 | 5:%5 | 6:%6 | 7:%7 | 8:%8 | 9:%9 | 10:%10 | 11:%11 | 12:%12 | 13:%13 | 14:%14 | 15:%15 | 16:%16";
		};
	};
	class SentNotifyAttackSubgroup: SentNotifyAttackSubgroup
	{
		versions[] = {"version1", 1};
		class version1
		{
			speech[] = {"%1", "%2", "%3", "%4", "%5", "%6", "%7", "%8", "%9", "%10", "%11", "%12", "%13", "%14", "%15", "%16"};
			text = "SentNotifyAttackSubgroup | 1:%1 | 2:%2 | 3:%3 | 4:%4 | 5:%5 | 6:%6 | 7:%7 | 8:%8 | 9:%9 | 10:%10 | 11:%11 | 12:%12 | 13:%13 | 14:%14 | 15:%15 | 16:%16";
		};
	};
	class SentNotifySupport: SentNotifySupport
	{
		versions[] = {"version1", 1};
		class version1
		{
			speech[] = {"%1", "%2", "%3", "%4", "%5", "%6", "%7", "%8", "%9", "%10", "%11", "%12", "%13", "%14", "%15", "%16"};
			text = "SentNotifySupport | 1:%1 | 2:%2 | 3:%3 | 4:%4 | 5:%5 | 6:%6 | 7:%7 | 8:%8 | 9:%9 | 10:%10 | 11:%11 | 12:%12 | 13:%13 | 14:%14 | 15:%15 | 16:%16";
		};
	};
	class SentObjectDestroyed: SentObjectDestroyed
	{
		versions[] = {"version1", 1};
		class version1
		{
			speech[] = {"%1", "%2", "%3", "%4", "%5", "%6", "%7", "%8", "%9", "%10", "%11", "%12", "%13", "%14", "%15", "%16"};
			text = "SentObjectDestroyed | 1:%1 | 2:%2 | 3:%3 | 4:%4 | 5:%5 | 6:%6 | 7:%7 | 8:%8 | 9:%9 | 10:%10 | 11:%11 | 12:%12 | 13:%13 | 14:%14 | 15:%15 | 16:%16";
		};
	};
	class SentObjectDestroyedUnknown: SentObjectDestroyedUnknown
	{
		versions[] = {"version1", 1};
		class version1
		{
			speech[] = {"%1", "%2", "%3", "%4", "%5", "%6", "%7", "%8", "%9", "%10", "%11", "%12", "%13", "%14", "%15", "%16"};
			text = "SentObjectDestroyedUnknown | 1:%1 | 2:%2 | 3:%3 | 4:%4 | 5:%5 | 6:%6 | 7:%7 | 8:%8 | 9:%9 | 10:%10 | 11:%11 | 12:%12 | 13:%13 | 14:%14 | 15:%15 | 16:%16";
		};
	};
	class SentObjectUnconscious: SentObjectUnconscious
	{
		versions[] = {"version1", 1};
		class version1
		{
			speech[] = {"%1", "%2", "%3", "%4", "%5", "%6", "%7", "%8", "%9", "%10", "%11", "%12", "%13", "%14", "%15", "%16"};
			text = "SentObjectUnconscious | 1:%1 | 2:%2 | 3:%3 | 4:%4 | 5:%5 | 6:%6 | 7:%7 | 8:%8 | 9:%9 | 10:%10 | 11:%11 | 12:%12 | 13:%13 | 14:%14 | 15:%15 | 16:%16";
		};
	};
	class SentObjectUnconsciousUnknown: SentObjectUnconsciousUnknown
	{
		versions[] = {"version1", 1};
		class version1
		{
			speech[] = {"%1", "%2", "%3", "%4", "%5", "%6", "%7", "%8", "%9", "%10", "%11", "%12", "%13", "%14", "%15", "%16"};
			text = "SentObjectUnconsciousUnknown | 1:%1 | 2:%2 | 3:%3 | 4:%4 | 5:%5 | 6:%6 | 7:%7 | 8:%8 | 9:%9 | 10:%10 | 11:%11 | 12:%12 | 13:%13 | 14:%14 | 15:%15 | 16:%16";
		};
	};
	class SentOpenFire: SentOpenFire
	{
		versions[] = {"version1", 1};
		class version1
		{
			speech[] = {"%1", "%2", "%3", "%4", "%5", "%6", "%7", "%8", "%9", "%10", "%11", "%12", "%13", "%14", "%15", "%16"};
			text = "SentOpenFire | 1:%1 | 2:%2 | 3:%3 | 4:%4 | 5:%5 | 6:%6 | 7:%7 | 8:%8 | 9:%9 | 10:%10 | 11:%11 | 12:%12 | 13:%13 | 14:%14 | 15:%15 | 16:%16";
		};
	};
	class SentOpenFireInCombat: SentOpenFireInCombat
	{
		versions[] = {"version1", 1};
		class version1
		{
			speech[] = {"%1", "%2", "%3", "%4", "%5", "%6", "%7", "%8", "%9", "%10", "%11", "%12", "%13", "%14", "%15", "%16"};
			text = "SentOpenFireInCombat | 1:%1 | 2:%2 | 3:%3 | 4:%4 | 5:%5 | 6:%6 | 7:%7 | 8:%8 | 9:%9 | 10:%10 | 11:%11 | 12:%12 | 13:%13 | 14:%14 | 15:%15 | 16:%16";
		};
	};
	class SentOutOfFirstAidKits: SentOutOfFirstAidKits
	{
		versions[] = {"version1", 1};
		class version1
		{
			speech[] = {"%1", "%2", "%3", "%4", "%5", "%6", "%7", "%8", "%9", "%10", "%11", "%12", "%13", "%14", "%15", "%16"};
			text = "SentOutOfFirstAidKits | 1:%1 | 2:%2 | 3:%3 | 4:%4 | 5:%5 | 6:%6 | 7:%7 | 8:%8 | 9:%9 | 10:%10 | 11:%11 | 12:%12 | 13:%13 | 14:%14 | 15:%15 | 16:%16";
		};
	};
	class SentPointersOff: SentPointersOff
	{
		versions[] = {"version1", 1};
		class version1
		{
			speech[] = {"%1", "%2", "%3", "%4", "%5", "%6", "%7", "%8", "%9", "%10", "%11", "%12", "%13", "%14", "%15", "%16"};
			text = "SentPointersOff | 1:%1 | 2:%2 | 3:%3 | 4:%4 | 5:%5 | 6:%6 | 7:%7 | 8:%8 | 9:%9 | 10:%10 | 11:%11 | 12:%12 | 13:%13 | 14:%14 | 15:%15 | 16:%16";
		};
	};
	class SentPointersOn: SentPointersOn
	{
		versions[] = {"version1", 1};
		class version1
		{
			speech[] = {"%1", "%2", "%3", "%4", "%5", "%6", "%7", "%8", "%9", "%10", "%11", "%12", "%13", "%14", "%15", "%16"};
			text = "SentPointersOn | 1:%1 | 2:%2 | 3:%3 | 4:%4 | 5:%5 | 6:%6 | 7:%7 | 8:%8 | 9:%9 | 10:%10 | 11:%11 | 12:%12 | 13:%13 | 14:%14 | 15:%15 | 16:%16";
		};
	};
	class SentReloading: SentReloading
	{
		versions[] = {"version1", 1};
		class version1
		{
			speech[] = {"%1", "%2", "%3", "%4", "%5", "%6", "%7", "%8", "%9", "%10", "%11", "%12", "%13", "%14", "%15", "%16"};
			text = "SentReloading | 1:%1 | 2:%2 | 3:%3 | 4:%4 | 5:%5 | 6:%6 | 7:%7 | 8:%8 | 9:%9 | 10:%10 | 11:%11 | 12:%12 | 13:%13 | 14:%14 | 15:%15 | 16:%16";
		};
	};
	class SentRepairThat: SentRepairThat
	{
		versions[] = {"version1", 1};
		class version1
		{
			speech[] = {"%1", "%2", "%3", "%4", "%5", "%6", "%7", "%8", "%9", "%10", "%11", "%12", "%13", "%14", "%15", "%16"};
			text = "SentRepairThat | 1:%1 | 2:%2 | 3:%3 | 4:%4 | 5:%5 | 6:%6 | 7:%7 | 8:%8 | 9:%9 | 10:%10 | 11:%11 | 12:%12 | 13:%13 | 14:%14 | 15:%15 | 16:%16";
		};
	};
	class SentRepeatCommand: SentRepeatCommand
	{
		versions[] = {"version1", 1};
		class version1
		{
			speech[] = {"%1", "%2", "%3", "%4", "%5", "%6", "%7", "%8", "%9", "%10", "%11", "%12", "%13", "%14", "%15", "%16"};
			text = "SentRepeatCommand | 1:%1 | 2:%2 | 3:%3 | 4:%4 | 5:%5 | 6:%6 | 7:%7 | 8:%8 | 9:%9 | 10:%10 | 11:%11 | 12:%12 | 13:%13 | 14:%14 | 15:%15 | 16:%16";
		};
	};
	class SentReportPosition: SentReportPosition
	{
		versions[] = {"version1", 1};
		class version1
		{
			speech[] = {"%1", "%2", "%3", "%4", "%5", "%6", "%7", "%8", "%9", "%10", "%11", "%12", "%13", "%14", "%15", "%16"};
			text = "SentReportPosition | 1:%1 | 2:%2 | 3:%3 | 4:%4 | 5:%5 | 6:%6 | 7:%7 | 8:%8 | 9:%9 | 10:%10 | 11:%11 | 12:%12 | 13:%13 | 14:%14 | 15:%15 | 16:%16";
		};
	};
	class SentReportStatus: SentReportStatus
	{
		versions[] = {"version1", 1};
		class version1
		{
			speech[] = {"%1", "%2", "%3", "%4", "%5", "%6", "%7", "%8", "%9", "%10", "%11", "%12", "%13", "%14", "%15", "%16"};
			text = "SentReportStatus | 1:%1 | 2:%2 | 3:%3 | 4:%4 | 5:%5 | 6:%6 | 7:%7 | 8:%8 | 9:%9 | 10:%10 | 11:%11 | 12:%12 | 13:%13 | 14:%14 | 15:%15 | 16:%16";
		};
	};
	class SentReturnToFormation: SentReturnToFormation
	{
		versions[] = {"version1", 1};
		class version1
		{
			speech[] = {"%1", "%2", "%3", "%4", "%5", "%6", "%7", "%8", "%9", "%10", "%11", "%12", "%13", "%14", "%15", "%16"};
			text = "SentReturnToFormation | 1:%1 | 2:%2 | 3:%3 | 4:%4 | 5:%5 | 6:%6 | 7:%7 | 8:%8 | 9:%9 | 10:%10 | 11:%11 | 12:%12 | 13:%13 | 14:%14 | 15:%15 | 16:%16";
		};
	};
	class SentRouted: SentRouted
	{
		versions[] = {"version1", 1};
		class version1
		{
			speech[] = {"%1", "%2", "%3", "%4", "%5", "%6", "%7", "%8", "%9", "%10", "%11", "%12", "%13", "%14", "%15", "%16"};
			text = "SentRouted | 1:%1 | 2:%2 | 3:%3 | 4:%4 | 5:%5 | 6:%6 | 7:%7 | 8:%8 | 9:%9 | 10:%10 | 11:%11 | 12:%12 | 13:%13 | 14:%14 | 15:%15 | 16:%16";
		};
	};
	class SentScreaming: SentScreaming
	{
		versions[] = {"version1", 1};
		class version1
		{
			speech[] = {"%1", "%2", "%3", "%4", "%5", "%6", "%7", "%8", "%9", "%10", "%11", "%12", "%13", "%14", "%15", "%16"};
			text = "SentScreaming | 1:%1 | 2:%2 | 3:%3 | 4:%4 | 5:%5 | 6:%6 | 7:%7 | 8:%8 | 9:%9 | 10:%10 | 11:%11 | 12:%12 | 13:%13 | 14:%14 | 15:%15 | 16:%16";
		};
	};
	class SentSupportAskHeal: SentSupportAskHeal
	{
		versions[] = {"version1", 1};
		class version1
		{
			speech[] = {"%1", "%2", "%3", "%4", "%5", "%6", "%7", "%8", "%9", "%10", "%11", "%12", "%13", "%14", "%15", "%16"};
			text = "SentSupportAskHeal | 1:%1 | 2:%2 | 3:%3 | 4:%4 | 5:%5 | 6:%6 | 7:%7 | 8:%8 | 9:%9 | 10:%10 | 11:%11 | 12:%12 | 13:%13 | 14:%14 | 15:%15 | 16:%16";
		};
	};
	class SentSupportAskRearm: SentSupportAskRearm
	{
		versions[] = {"version1", 1};
		class version1
		{
			speech[] = {"%1", "%2", "%3", "%4", "%5", "%6", "%7", "%8", "%9", "%10", "%11", "%12", "%13", "%14", "%15", "%16"};
			text = "SentSupportAskRearm | 1:%1 | 2:%2 | 3:%3 | 4:%4 | 5:%5 | 6:%6 | 7:%7 | 8:%8 | 9:%9 | 10:%10 | 11:%11 | 12:%12 | 13:%13 | 14:%14 | 15:%15 | 16:%16";
		};
	};
	class SentSupportAskRefuel: SentSupportAskRefuel
	{
		versions[] = {"version1", 1};
		class version1
		{
			speech[] = {"%1", "%2", "%3", "%4", "%5", "%6", "%7", "%8", "%9", "%10", "%11", "%12", "%13", "%14", "%15", "%16"};
			text = "SentSupportAskRefuel | 1:%1 | 2:%2 | 3:%3 | 4:%4 | 5:%5 | 6:%6 | 7:%7 | 8:%8 | 9:%9 | 10:%10 | 11:%11 | 12:%12 | 13:%13 | 14:%14 | 15:%15 | 16:%16";
		};
	};
	class SentSupportAskRepair: SentSupportAskRepair
	{
		versions[] = {"version1", 1};
		class version1
		{
			speech[] = {"%1", "%2", "%3", "%4", "%5", "%6", "%7", "%8", "%9", "%10", "%11", "%12", "%13", "%14", "%15", "%16"};
			text = "SentSupportAskRepair | 1:%1 | 2:%2 | 3:%3 | 4:%4 | 5:%5 | 6:%6 | 7:%7 | 8:%8 | 9:%9 | 10:%10 | 11:%11 | 12:%12 | 13:%13 | 14:%14 | 15:%15 | 16:%16";
		};
	};
	class SentSupportConfirm: SentSupportConfirm
	{
		versions[] = {"version1", 1};
		class version1
		{
			speech[] = {"%1", "%2", "%3", "%4", "%5", "%6", "%7", "%8", "%9", "%10", "%11", "%12", "%13", "%14", "%15", "%16"};
			text = "SentSupportConfirm | 1:%1 | 2:%2 | 3:%3 | 4:%4 | 5:%5 | 6:%6 | 7:%7 | 8:%8 | 9:%9 | 10:%10 | 11:%11 | 12:%12 | 13:%13 | 14:%14 | 15:%15 | 16:%16";
		};
	};
	class SentSupportDone: SentSupportDone
	{
		versions[] = {"version1", 1};
		class version1
		{
			speech[] = {"%1", "%2", "%3", "%4", "%5", "%6", "%7", "%8", "%9", "%10", "%11", "%12", "%13", "%14", "%15", "%16"};
			text = "SentSupportDone | 1:%1 | 2:%2 | 3:%3 | 4:%4 | 5:%5 | 6:%6 | 7:%7 | 8:%8 | 9:%9 | 10:%10 | 11:%11 | 12:%12 | 13:%13 | 14:%14 | 15:%15 | 16:%16";
		};
	};
	class SentSupportNotAvailable: SentSupportNotAvailable
	{
		versions[] = {"version1", 1};
		class version1
		{
			speech[] = {"%1", "%2", "%3", "%4", "%5", "%6", "%7", "%8", "%9", "%10", "%11", "%12", "%13", "%14", "%15", "%16"};
			text = "SentSupportNotAvailable | 1:%1 | 2:%2 | 3:%3 | 4:%4 | 5:%5 | 6:%6 | 7:%7 | 8:%8 | 9:%9 | 10:%10 | 11:%11 | 12:%12 | 13:%13 | 14:%14 | 15:%15 | 16:%16";
		};
	};
	class SentSupportReady: SentSupportReady
	{
		versions[] = {"version1", 1};
		class version1
		{
			speech[] = {"%1", "%2", "%3", "%4", "%5", "%6", "%7", "%8", "%9", "%10", "%11", "%12", "%13", "%14", "%15", "%16"};
			text = "SentSupportReady | 1:%1 | 2:%2 | 3:%3 | 4:%4 | 5:%5 | 6:%6 | 7:%7 | 8:%8 | 9:%9 | 10:%10 | 11:%11 | 12:%12 | 13:%13 | 14:%14 | 15:%15 | 16:%16";
		};
	};
	class SentSuppressing: SentSuppressing
	{
		versions[] = {"version1", 1};
		class version1
		{
			speech[] = {"%1", "%2", "%3", "%4", "%5", "%6", "%7", "%8", "%9", "%10", "%11", "%12", "%13", "%14", "%15", "%16"};
			text = "SentSuppressing | 1:%1 | 2:%2 | 3:%3 | 4:%4 | 5:%5 | 6:%6 | 7:%7 | 8:%8 | 9:%9 | 10:%10 | 11:%11 | 12:%12 | 13:%13 | 14:%14 | 15:%15 | 16:%16";
		};
	};
	class SentTarget: SentTarget
	{
		versions[] = {"version1", 1};
		class version1
		{
			speech[] = {"%1", "%2", "%3", "%4", "%5", "%6", "%7", "%8", "%9", "%10", "%11", "%12", "%13", "%14", "%15", "%16"};
			text = "SentTarget | 1:%1 | 2:%2 | 3:%3 | 4:%4 | 5:%5 | 6:%6 | 7:%7 | 8:%8 | 9:%9 | 10:%10 | 11:%11 | 12:%12 | 13:%13 | 14:%14 | 15:%15 | 16:%16";
		};
	};
	class SentTeam: SentTeam
	{
		versions[] = {"version1", 1};
		class version1
		{
			speech[] = {"%1", "%2", "%3", "%4", "%5", "%6", "%7", "%8", "%9", "%10", "%11", "%12", "%13", "%14", "%15", "%16"};
			text = "SentTeam | 1:%1 | 2:%2 | 3:%3 | 4:%4 | 5:%5 | 6:%6 | 7:%7 | 8:%8 | 9:%9 | 10:%10 | 11:%11 | 12:%12 | 13:%13 | 14:%14 | 15:%15 | 16:%16";
		};
	};
	class SentTeamPlural: SentTeamPlural
	{
		versions[] = {"version1", 1};
		class version1
		{
			speech[] = {"%1", "%2", "%3", "%4", "%5", "%6", "%7", "%8", "%9", "%10", "%11", "%12", "%13", "%14", "%15", "%16"};
			text = "SentTeamPlural | 1:%1 | 2:%2 | 3:%3 | 4:%4 | 5:%5 | 6:%6 | 7:%7 | 8:%8 | 9:%9 | 10:%10 | 11:%11 | 12:%12 | 13:%13 | 14:%14 | 15:%15 | 16:%16";
		};
	};
	class SentThrowingGrenade: SentThrowingGrenade
	{
		versions[] = {"version1", 1};
		class version1
		{
			speech[] = {"%1", "%2", "%3", "%4", "%5", "%6", "%7", "%8", "%9", "%10", "%11", "%12", "%13", "%14", "%15", "%16"};
			text = "SentThrowingGrenade | 1:%1 | 2:%2 | 3:%3 | 4:%4 | 5:%5 | 6:%6 | 7:%7 | 8:%8 | 9:%9 | 10:%10 | 11:%11 | 12:%12 | 13:%13 | 14:%14 | 15:%15 | 16:%16";
		};
	};
	class SentThrowingSmoke: SentThrowingSmoke
	{
		versions[] = {"version1", 1};
		class version1
		{
			speech[] = {"%1", "%2", "%3", "%4", "%5", "%6", "%7", "%8", "%9", "%10", "%11", "%12", "%13", "%14", "%15", "%16"};
			text = "SentThrowingSmoke | 1:%1 | 2:%2 | 3:%3 | 4:%4 | 5:%5 | 6:%6 | 7:%7 | 8:%8 | 9:%9 | 10:%10 | 11:%11 | 12:%12 | 13:%13 | 14:%14 | 15:%15 | 16:%16";
		};
	};
	class SentUnderFire: SentUnderFire
	{
		versions[] = {"version1", 1};
		class version1
		{
			speech[] = {"%1", "%2", "%3", "%4", "%5", "%6", "%7", "%8", "%9", "%10", "%11", "%12", "%13", "%14", "%15", "%16"};
			text = "SentUnderFire | 1:%1 | 2:%2 | 3:%3 | 4:%4 | 5:%5 | 6:%6 | 7:%7 | 8:%8 | 9:%9 | 10:%10 | 11:%11 | 12:%12 | 13:%13 | 14:%14 | 15:%15 | 16:%16";
		};
	};
	class SentUnitKilled: SentUnitKilled
	{
		versions[] = {"version1", 1};
		class version1
		{
			speech[] = {"%1", "%2", "%3", "%4", "%5", "%6", "%7", "%8", "%9", "%10", "%11", "%12", "%13", "%14", "%15", "%16"};
			text = "SentUnitKilled | 1:%1 | 2:%2 | 3:%3 | 4:%4 | 5:%5 | 6:%6 | 7:%7 | 8:%8 | 9:%9 | 10:%10 | 11:%11 | 12:%12 | 13:%13 | 14:%14 | 15:%15 | 16:%16";
		};
	};
	class SentUnitPosAuto: SentUnitPosAuto
	{
		versions[] = {"version1", 1};
		class version1
		{
			speech[] = {"%1", "%2", "%3", "%4", "%5", "%6", "%7", "%8", "%9", "%10", "%11", "%12", "%13", "%14", "%15", "%16"};
			text = "SentUnitPosAuto | 1:%1 | 2:%2 | 3:%3 | 4:%4 | 5:%5 | 6:%6 | 7:%7 | 8:%8 | 9:%9 | 10:%10 | 11:%11 | 12:%12 | 13:%13 | 14:%14 | 15:%15 | 16:%16";
		};
	};
	class SentUnitPosDown: SentUnitPosDown
	{
		versions[] = {"version1", 1};
		class version1
		{
			speech[] = {"%1", "%2", "%3", "%4", "%5", "%6", "%7", "%8", "%9", "%10", "%11", "%12", "%13", "%14", "%15", "%16"};
			text = "SentUnitPosDown | 1:%1 | 2:%2 | 3:%3 | 4:%4 | 5:%5 | 6:%6 | 7:%7 | 8:%8 | 9:%9 | 10:%10 | 11:%11 | 12:%12 | 13:%13 | 14:%14 | 15:%15 | 16:%16";
		};
	};
	class SentUnitPosMiddle: SentUnitPosMiddle
	{
		versions[] = {"version1", 1};
		class version1
		{
			speech[] = {"%1", "%2", "%3", "%4", "%5", "%6", "%7", "%8", "%9", "%10", "%11", "%12", "%13", "%14", "%15", "%16"};
			text = "SentUnitPosMiddle | 1:%1 | 2:%2 | 3:%3 | 4:%4 | 5:%5 | 6:%6 | 7:%7 | 8:%8 | 9:%9 | 10:%10 | 11:%11 | 12:%12 | 13:%13 | 14:%14 | 15:%15 | 16:%16";
		};
	};
	class SentUnitPosUp: SentUnitPosUp
	{
		versions[] = {"version1", 1};
		class version1
		{
			speech[] = {"%1", "%2", "%3", "%4", "%5", "%6", "%7", "%8", "%9", "%10", "%11", "%12", "%13", "%14", "%15", "%16"};
			text = "SentUnitPosUp | 1:%1 | 2:%2 | 3:%3 | 4:%4 | 5:%5 | 6:%6 | 7:%7 | 8:%8 | 9:%9 | 10:%10 | 11:%11 | 12:%12 | 13:%13 | 14:%14 | 15:%15 | 16:%16";
		};
	};
	class SentWatchAround: SentWatchAround
	{
		versions[] = {"version1", 1};
		class version1
		{
			speech[] = {"%1", "%2", "%3", "%4", "%5", "%6", "%7", "%8", "%9", "%10", "%11", "%12", "%13", "%14", "%15", "%16"};
			text = "SentWatchAround | 1:%1 | 2:%2 | 3:%3 | 4:%4 | 5:%5 | 6:%6 | 7:%7 | 8:%8 | 9:%9 | 10:%10 | 11:%11 | 12:%12 | 13:%13 | 14:%14 | 15:%15 | 16:%16";
		};
	};
	class SentWatchDir: SentWatchDir
	{
		versions[] = {"version1", 1};
		class version1
		{
			speech[] = {"%1", "%2", "%3", "%4", "%5", "%6", "%7", "%8", "%9", "%10", "%11", "%12", "%13", "%14", "%15", "%16"};
			text = "SentWatchDir | 1:%1 | 2:%2 | 3:%3 | 4:%4 | 5:%5 | 6:%6 | 7:%7 | 8:%8 | 9:%9 | 10:%10 | 11:%11 | 12:%12 | 13:%13 | 14:%14 | 15:%15 | 16:%16";
		};
	};
	class SentWatchPos: SentWatchPos
	{
		versions[] = {"version1", 1};
		class version1
		{
			speech[] = {"%1", "%2", "%3", "%4", "%5", "%6", "%7", "%8", "%9", "%10", "%11", "%12", "%13", "%14", "%15", "%16"};
			text = "SentWatchPos | 1:%1 | 2:%2 | 3:%3 | 4:%4 | 5:%5 | 6:%6 | 7:%7 | 8:%8 | 9:%9 | 10:%10 | 11:%11 | 12:%12 | 13:%13 | 14:%14 | 15:%15 | 16:%16";
		};
	};
	class SentWatchTgt: SentWatchTgt
	{
		versions[] = {"version1", 1};
		class version1
		{
			speech[] = {"%1", "%2", "%3", "%4", "%5", "%6", "%7", "%8", "%9", "%10", "%11", "%12", "%13", "%14", "%15", "%16"};
			text = "SentWatchTgt | 1:%1 | 2:%2 | 3:%3 | 4:%4 | 5:%5 | 6:%6 | 7:%7 | 8:%8 | 9:%9 | 10:%10 | 11:%11 | 12:%12 | 13:%13 | 14:%14 | 15:%15 | 16:%16";
		};
	};
	class SentWhereAreYou: SentWhereAreYou
	{
		versions[] = {"version1", 1};
		class version1
		{
			speech[] = {"%1", "%2", "%3", "%4", "%5", "%6", "%7", "%8", "%9", "%10", "%11", "%12", "%13", "%14", "%15", "%16"};
			text = "SentWhereAreYou | 1:%1 | 2:%2 | 3:%3 | 4:%4 | 5:%5 | 6:%6 | 7:%7 | 8:%8 | 9:%9 | 10:%10 | 11:%11 | 12:%12 | 13:%13 | 14:%14 | 15:%15 | 16:%16";
		};
	};
	class SentWitnessDeadBody: SentWitnessDeadBody
	{
		versions[] = {"version1", 1};
		class version1
		{
			speech[] = {"%1", "%2", "%3", "%4", "%5", "%6", "%7", "%8", "%9", "%10", "%11", "%12", "%13", "%14", "%15", "%16"};
			text = "SentWitnessDeadBody | 1:%1 | 2:%2 | 3:%3 | 4:%4 | 5:%5 | 6:%6 | 7:%7 | 8:%8 | 9:%9 | 10:%10 | 11:%11 | 12:%12 | 13:%13 | 14:%14 | 15:%15 | 16:%16";
		};
	};
	class SentWitnessKilled: SentWitnessKilled
	{
		versions[] = {"version1", 1};
		class version1
		{
			speech[] = {"%1", "%2", "%3", "%4", "%5", "%6", "%7", "%8", "%9", "%10", "%11", "%12", "%13", "%14", "%15", "%16"};
			text = "SentWitnessKilled | 1:%1 | 2:%2 | 3:%3 | 4:%4 | 5:%5 | 6:%6 | 7:%7 | 8:%8 | 9:%9 | 10:%10 | 11:%11 | 12:%12 | 13:%13 | 14:%14 | 15:%15 | 16:%16";
		};
	};
	class UICommand: UICommand
	{
		versions[] = {"version1", 1};
		class version1
		{
			speech[] = {"%1", "%2", "%3", "%4", "%5", "%6", "%7", "%8", "%9", "%10", "%11", "%12", "%13", "%14", "%15", "%16"};
			text = "UICommand | 1:%1 | 2:%2 | 3:%3 | 4:%4 | 5:%5 | 6:%6 | 7:%7 | 8:%8 | 9:%9 | 10:%10 | 11:%11 | 12:%12 | 13:%13 | 14:%14 | 15:%15 | 16:%16";
		};
	};
	class UrgentCommand: UrgentCommand
	{
		versions[] = {"version1", 1};
		class version1
		{
			speech[] = {"%1", "%2", "%3", "%4", "%5", "%6", "%7", "%8", "%9", "%10", "%11", "%12", "%13", "%14", "%15", "%16"};
			text = "UrgentCommand | 1:%1 | 2:%2 | 3:%3 | 4:%4 | 5:%5 | 6:%6 | 7:%7 | 8:%8 | 9:%9 | 10:%10 | 11:%11 | 12:%12 | 13:%13 | 14:%14 | 15:%15 | 16:%16";
		};
	};
	class VehicleAzimut: VehicleAzimut
	{
		versions[] = {"version1", 1};
		class version1
		{
			speech[] = {"%1", "%2", "%3", "%4", "%5", "%6", "%7", "%8", "%9", "%10", "%11", "%12", "%13", "%14", "%15", "%16"};
			text = "VehicleAzimut | 1:%1 | 2:%2 | 3:%3 | 4:%4 | 5:%5 | 6:%6 | 7:%7 | 8:%8 | 9:%9 | 10:%10 | 11:%11 | 12:%12 | 13:%13 | 14:%14 | 15:%15 | 16:%16";
		};
	};
	class VehicleBackward: VehicleBackward
	{
		versions[] = {"version1", 1};
		class version1
		{
			speech[] = {"%1", "%2", "%3", "%4", "%5", "%6", "%7", "%8", "%9", "%10", "%11", "%12", "%13", "%14", "%15", "%16"};
			text = "VehicleBackward | 1:%1 | 2:%2 | 3:%3 | 4:%4 | 5:%5 | 6:%6 | 7:%7 | 8:%8 | 9:%9 | 10:%10 | 11:%11 | 12:%12 | 13:%13 | 14:%14 | 15:%15 | 16:%16";
		};
	};
	class VehicleCancelManualFire: VehicleCancelManualFire
	{
		versions[] = {"version1", 1};
		class version1
		{
			speech[] = {"%1", "%2", "%3", "%4", "%5", "%6", "%7", "%8", "%9", "%10", "%11", "%12", "%13", "%14", "%15", "%16"};
			text = "VehicleCancelManualFire | 1:%1 | 2:%2 | 3:%3 | 4:%4 | 5:%5 | 6:%6 | 7:%7 | 8:%8 | 9:%9 | 10:%10 | 11:%11 | 12:%12 | 13:%13 | 14:%14 | 15:%15 | 16:%16";
		};
	};
	class VehicleCeaseFire: VehicleCeaseFire
	{
		versions[] = {"version1", 1};
		class version1
		{
			speech[] = {"%1", "%2", "%3", "%4", "%5", "%6", "%7", "%8", "%9", "%10", "%11", "%12", "%13", "%14", "%15", "%16"};
			text = "VehicleCeaseFire | 1:%1 | 2:%2 | 3:%3 | 4:%4 | 5:%5 | 6:%6 | 7:%7 | 8:%8 | 9:%9 | 10:%10 | 11:%11 | 12:%12 | 13:%13 | 14:%14 | 15:%15 | 16:%16";
		};
	};
	class VehicleDirectFire: VehicleDirectFire
	{
		versions[] = {"version1", 1};
		class version1
		{
			speech[] = {"%1", "%2", "%3", "%4", "%5", "%6", "%7", "%8", "%9", "%10", "%11", "%12", "%13", "%14", "%15", "%16"};
			text = "VehicleDirectFire | 1:%1 | 2:%2 | 3:%3 | 4:%4 | 5:%5 | 6:%6 | 7:%7 | 8:%8 | 9:%9 | 10:%10 | 11:%11 | 12:%12 | 13:%13 | 14:%14 | 15:%15 | 16:%16";
		};
	};
	class VehicleFaster: VehicleFaster
	{
		versions[] = {"version1", 1};
		class version1
		{
			speech[] = {"%1", "%2", "%3", "%4", "%5", "%6", "%7", "%8", "%9", "%10", "%11", "%12", "%13", "%14", "%15", "%16"};
			text = "VehicleFaster | 1:%1 | 2:%2 | 3:%3 | 4:%4 | 5:%5 | 6:%6 | 7:%7 | 8:%8 | 9:%9 | 10:%10 | 11:%11 | 12:%12 | 13:%13 | 14:%14 | 15:%15 | 16:%16";
		};
	};
	class VehicleFire: VehicleFire
	{
		versions[] = {"version1", 1};
		class version1
		{
			speech[] = {"%1", "%2", "%3", "%4", "%5", "%6", "%7", "%8", "%9", "%10", "%11", "%12", "%13", "%14", "%15", "%16"};
			text = "VehicleFire | 1:%1 | 2:%2 | 3:%3 | 4:%4 | 5:%5 | 6:%6 | 7:%7 | 8:%8 | 9:%9 | 10:%10 | 11:%11 | 12:%12 | 13:%13 | 14:%14 | 15:%15 | 16:%16";
		};
	};
	class VehicleFireFailed: VehicleFireFailed
	{
		versions[] = {"version1", 1};
		class version1
		{
			speech[] = {"%1", "%2", "%3", "%4", "%5", "%6", "%7", "%8", "%9", "%10", "%11", "%12", "%13", "%14", "%15", "%16"};
			text = "VehicleFireFailed | 1:%1 | 2:%2 | 3:%3 | 4:%4 | 5:%5 | 6:%6 | 7:%7 | 8:%8 | 9:%9 | 10:%10 | 11:%11 | 12:%12 | 13:%13 | 14:%14 | 15:%15 | 16:%16";
		};
	};
	class VehicleForward: VehicleForward
	{
		versions[] = {"version1", 1};
		class version1
		{
			speech[] = {"%1", "%2", "%3", "%4", "%5", "%6", "%7", "%8", "%9", "%10", "%11", "%12", "%13", "%14", "%15", "%16"};
			text = "VehicleForward | 1:%1 | 2:%2 | 3:%3 | 4:%4 | 5:%5 | 6:%6 | 7:%7 | 8:%8 | 9:%9 | 10:%10 | 11:%11 | 12:%12 | 13:%13 | 14:%14 | 15:%15 | 16:%16";
		};
	};
	class VehicleJoin: VehicleJoin
	{
		versions[] = {"version1", 1};
		class version1
		{
			speech[] = {"%1", "%2", "%3", "%4", "%5", "%6", "%7", "%8", "%9", "%10", "%11", "%12", "%13", "%14", "%15", "%16"};
			text = "VehicleJoin | 1:%1 | 2:%2 | 3:%3 | 4:%4 | 5:%5 | 6:%6 | 7:%7 | 8:%8 | 9:%9 | 10:%10 | 11:%11 | 12:%12 | 13:%13 | 14:%14 | 15:%15 | 16:%16";
		};
	};
	class VehicleLeft: VehicleLeft
	{
		versions[] = {"version1", 1};
		class version1
		{
			speech[] = {"%1", "%2", "%3", "%4", "%5", "%6", "%7", "%8", "%9", "%10", "%11", "%12", "%13", "%14", "%15", "%16"};
			text = "VehicleLeft | 1:%1 | 2:%2 | 3:%3 | 4:%4 | 5:%5 | 6:%6 | 7:%7 | 8:%8 | 9:%9 | 10:%10 | 11:%11 | 12:%12 | 13:%13 | 14:%14 | 15:%15 | 16:%16";
		};
	};
	class VehicleLoad: VehicleLoad
	{
		versions[] = {"version1", 1};
		class version1
		{
			speech[] = {"%1", "%2", "%3", "%4", "%5", "%6", "%7", "%8", "%9", "%10", "%11", "%12", "%13", "%14", "%15", "%16"};
			text = "VehicleLoad | 1:%1 | 2:%2 | 3:%3 | 4:%4 | 5:%5 | 6:%6 | 7:%7 | 8:%8 | 9:%9 | 10:%10 | 11:%11 | 12:%12 | 13:%13 | 14:%14 | 15:%15 | 16:%16";
		};
	};
	class VehicleLoadMagazine: VehicleLoadMagazine
	{
		versions[] = {"version1", 1};
		class version1
		{
			speech[] = {"%1", "%2", "%3", "%4", "%5", "%6", "%7", "%8", "%9", "%10", "%11", "%12", "%13", "%14", "%15", "%16"};
			text = "VehicleLoadMagazine | 1:%1 | 2:%2 | 3:%3 | 4:%4 | 5:%5 | 6:%6 | 7:%7 | 8:%8 | 9:%9 | 10:%10 | 11:%11 | 12:%12 | 13:%13 | 14:%14 | 15:%15 | 16:%16";
		};
	};
	class VehicleManualFire: VehicleManualFire
	{
		versions[] = {"version1", 1};
		class version1
		{
			speech[] = {"%1", "%2", "%3", "%4", "%5", "%6", "%7", "%8", "%9", "%10", "%11", "%12", "%13", "%14", "%15", "%16"};
			text = "VehicleManualFire | 1:%1 | 2:%2 | 3:%3 | 4:%4 | 5:%5 | 6:%6 | 7:%7 | 8:%8 | 9:%9 | 10:%10 | 11:%11 | 12:%12 | 13:%13 | 14:%14 | 15:%15 | 16:%16";
		};
	};
	class VehicleMoveGroupRelative: VehicleMoveGroupRelative
	{
		versions[] = {"version1", 1};
		class version1
		{
			speech[] = {"%1", "%2", "%3", "%4", "%5", "%6", "%7", "%8", "%9", "%10", "%11", "%12", "%13", "%14", "%15", "%16"};
			text = "VehicleMoveGroupRelative | 1:%1 | 2:%2 | 3:%3 | 4:%4 | 5:%5 | 6:%6 | 7:%7 | 8:%8 | 9:%9 | 10:%10 | 11:%11 | 12:%12 | 13:%13 | 14:%14 | 15:%15 | 16:%16";
		};
	};
	class VehicleMoveLocationRelative: VehicleMoveLocationRelative
	{
		versions[] = {"version1", 1};
		class version1
		{
			speech[] = {"%1", "%2", "%3", "%4", "%5", "%6", "%7", "%8", "%9", "%10", "%11", "%12", "%13", "%14", "%15", "%16"};
			text = "VehicleMoveLocationRelative | 1:%1 | 2:%2 | 3:%3 | 4:%4 | 5:%5 | 6:%6 | 7:%7 | 8:%8 | 9:%9 | 10:%10 | 11:%11 | 12:%12 | 13:%13 | 14:%14 | 15:%15 | 16:%16";
		};
	};
	class VehicleMoveRecipientsRelative: VehicleMoveRecipientsRelative
	{
		versions[] = {"version1", 1};
		class version1
		{
			speech[] = {"%1", "%2", "%3", "%4", "%5", "%6", "%7", "%8", "%9", "%10", "%11", "%12", "%13", "%14", "%15", "%16"};
			text = "VehicleMoveRecipientsRelative | 1:%1 | 2:%2 | 3:%3 | 4:%4 | 5:%5 | 6:%6 | 7:%7 | 8:%8 | 9:%9 | 10:%10 | 11:%11 | 12:%12 | 13:%13 | 14:%14 | 15:%15 | 16:%16";
		};
	};
	class VehicleMoveToGrid: VehicleMoveToGrid
	{
		versions[] = {"version1", 1};
		class version1
		{
			speech[] = {"%1", "%2", "%3", "%4", "%5", "%6", "%7", "%8", "%9", "%10", "%11", "%12", "%13", "%14", "%15", "%16"};
			text = "VehicleMoveToGrid | 1:%1 | 2:%2 | 3:%3 | 4:%4 | 5:%5 | 6:%6 | 7:%7 | 8:%8 | 9:%9 | 10:%10 | 11:%11 | 12:%12 | 13:%13 | 14:%14 | 15:%15 | 16:%16";
		};
	};
	class VehicleMoveToObject: VehicleMoveToObject
	{
		versions[] = {"version1", 1};
		class version1
		{
			speech[] = {"%1", "%2", "%3", "%4", "%5", "%6", "%7", "%8", "%9", "%10", "%11", "%12", "%13", "%14", "%15", "%16"};
			text = "VehicleMoveToObject | 1:%1 | 2:%2 | 3:%3 | 4:%4 | 5:%5 | 6:%6 | 7:%7 | 8:%8 | 9:%9 | 10:%10 | 11:%11 | 12:%12 | 13:%13 | 14:%14 | 15:%15 | 16:%16";
		};
	};
	class VehicleNoTarget: VehicleNoTarget
	{
		versions[] = {"version1", 1};
		class version1
		{
			speech[] = {"%1", "%2", "%3", "%4", "%5", "%6", "%7", "%8", "%9", "%10", "%11", "%12", "%13", "%14", "%15", "%16"};
			text = "VehicleNoTarget | 1:%1 | 2:%2 | 3:%3 | 4:%4 | 5:%5 | 6:%6 | 7:%7 | 8:%8 | 9:%9 | 10:%10 | 11:%11 | 12:%12 | 13:%13 | 14:%14 | 15:%15 | 16:%16";
		};
	};
	class VehicleRight: VehicleRight
	{
		versions[] = {"version1", 1};
		class version1
		{
			speech[] = {"%1", "%2", "%3", "%4", "%5", "%6", "%7", "%8", "%9", "%10", "%11", "%12", "%13", "%14", "%15", "%16"};
			text = "VehicleRight | 1:%1 | 2:%2 | 3:%3 | 4:%4 | 5:%5 | 6:%6 | 7:%7 | 8:%8 | 9:%9 | 10:%10 | 11:%11 | 12:%12 | 13:%13 | 14:%14 | 15:%15 | 16:%16";
		};
	};
	class VehicleSlower: VehicleSlower
	{
		versions[] = {"version1", 1};
		class version1
		{
			speech[] = {"%1", "%2", "%3", "%4", "%5", "%6", "%7", "%8", "%9", "%10", "%11", "%12", "%13", "%14", "%15", "%16"};
			text = "VehicleSlower | 1:%1 | 2:%2 | 3:%3 | 4:%4 | 5:%5 | 6:%6 | 7:%7 | 8:%8 | 9:%9 | 10:%10 | 11:%11 | 12:%12 | 13:%13 | 14:%14 | 15:%15 | 16:%16";
		};
	};
	class VehicleStop: VehicleStop
	{
		versions[] = {"version1", 1};
		class version1
		{
			speech[] = {"%1", "%2", "%3", "%4", "%5", "%6", "%7", "%8", "%9", "%10", "%11", "%12", "%13", "%14", "%15", "%16"};
			text = "VehicleStop | 1:%1 | 2:%2 | 3:%3 | 4:%4 | 5:%5 | 6:%6 | 7:%7 | 8:%8 | 9:%9 | 10:%10 | 11:%11 | 12:%12 | 13:%13 | 14:%14 | 15:%15 | 16:%16";
		};
	};
	class VehicleTarget: VehicleTarget
	{
		versions[] = {"version1", 1};
		class version1
		{
			speech[] = {"%1", "%2", "%3", "%4", "%5", "%6", "%7", "%8", "%9", "%10", "%11", "%12", "%13", "%14", "%15", "%16"};
			text = "VehicleTarget | 1:%1 | 2:%2 | 3:%3 | 4:%4 | 5:%5 | 6:%6 | 7:%7 | 8:%8 | 9:%9 | 10:%10 | 11:%11 | 12:%12 | 13:%13 | 14:%14 | 15:%15 | 16:%16";
		};
	};
	class VehicleWatchPos: VehicleWatchPos
	{
		versions[] = {"version1", 1};
		class version1
		{
			speech[] = {"%1", "%2", "%3", "%4", "%5", "%6", "%7", "%8", "%9", "%10", "%11", "%12", "%13", "%14", "%15", "%16"};
			text = "VehicleWatchPos | 1:%1 | 2:%2 | 3:%3 | 4:%4 | 5:%5 | 6:%6 | 7:%7 | 8:%8 | 9:%9 | 10:%10 | 11:%11 | 12:%12 | 13:%13 | 14:%14 | 15:%15 | 16:%16";
		};
	};
	class VehicleWatchTgt: VehicleWatchTgt
	{
		versions[] = {"version1", 1};
		class version1
		{
			speech[] = {"%1", "%2", "%3", "%4", "%5", "%6", "%7", "%8", "%9", "%10", "%11", "%12", "%13", "%14", "%15", "%16"};
			text = "VehicleWatchTgt | 1:%1 | 2:%2 | 3:%3 | 4:%4 | 5:%5 | 6:%6 | 7:%7 | 8:%8 | 9:%9 | 10:%10 | 11:%11 | 12:%12 | 13:%13 | 14:%14 | 15:%15 | 16:%16";
		};
	};
};
