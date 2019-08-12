class CfgFSMs
{
	access = 1;
	class Butterfly
	{
		finalStates[] = {};
		initState = "Init";
		class States
		{
			class checkWait
			{
				name = "checkWait";
				class Init
				{
					function = "nothing";
					parameters[] = {};
					thresholds[] = {};
				};
				class Links
				{
					class Always
					{
						priority = 0;
						to = "SetTimer3";
						class Action
						{
							function = "nothing";
							parameters[] = {};
							thresholds[] = {};
						};
						class Condition
						{
							function = "true";
							parameters[] = {};
							threshold = 0;
						};
					};
					class WaitCompleted
					{
						priority = 1;
						to = "SetTimer";
						class Action
						{
							function = "switchAction";
							parameters[] = {0};
							thresholds[] = {};
						};
						class Condition
						{
							function = "waitCompleted";
							parameters[] = {};
							threshold = 0;
						};
					};
				};
			};
			class Continue
			{
				name = "Continue";
				class Init
				{
					function = "nothing";
					parameters[] = {};
					thresholds[] = {};
				};
				class Links
				{
					class Always
					{
						priority = 0;
						to = "Move";
						class Action
						{
							function = "nothing";
							parameters[] = {};
							thresholds[] = {};
						};
						class Condition
						{
							function = "true";
							parameters[] = {};
							threshold = 0;
						};
					};
				};
			};
			class Init
			{
				name = "Init";
				class Init
				{
					function = "nothing";
					parameters[] = {};
					thresholds[] = {{0, 0.5, 0.5}};
				};
				class Links
				{
					class Always
					{
						priority = 0;
						to = "SetTimer";
						class Action
						{
							function = "nothing";
							parameters[] = {};
							thresholds[] = {};
						};
						class Condition
						{
							function = "true";
							parameters[] = {};
							threshold = 0;
						};
					};
				};
			};
			class Land
			{
				name = "Land";
				class Init
				{
					function = "Land";
					parameters[] = {};
					thresholds[] = {};
				};
				class Links
				{
					class Always
					{
						priority = 0;
						to = "Wait";
						class Action
						{
							function = "nothing";
							parameters[] = {};
							thresholds[] = {};
						};
						class Condition
						{
							function = "true";
							parameters[] = {};
							threshold = 0;
						};
					};
				};
			};
			class Move
			{
				name = "Move";
				class Init
				{
					function = "randomMove";
					parameters[] = {3};
					thresholds[] = {};
				};
				class Links
				{
					class MoveCompleted
					{
						priority = 1;
						to = "Continue";
						class Action
						{
							function = "nothing";
							parameters[] = {};
							thresholds[] = {};
						};
						class Condition
						{
							function = "moveCompleted";
							parameters[] = {};
							threshold = 0;
						};
					};
					class TimeElapsed
					{
						priority = 0;
						to = "SetTimer2";
						class Action
						{
							function = "nothing";
							parameters[] = {};
							thresholds[] = {};
						};
						class Condition
						{
							function = "timeElapsed";
							parameters[] = {};
							threshold = 0;
						};
					};
				};
			};
			class MoveLand
			{
				name = "MoveLand";
				class Init
				{
					function = "randomMoveLand";
					parameters[] = {2};
					thresholds[] = {};
				};
				class Links
				{
					class MoveCompleted
					{
						priority = 1;
						to = "SetTimer3";
						class Action
						{
							function = "wait";
							parameters[] = {5, 15};
							thresholds[] = {};
						};
						class Condition
						{
							function = "moveCompletedVertical";
							parameters[] = {};
							threshold = 0;
						};
					};
					class TimeElapsed
					{
						priority = 0;
						to = "Land";
						class Action
						{
							function = "nothing";
							parameters[] = {};
							thresholds[] = {};
						};
						class Condition
						{
							function = "timeElapsed";
							parameters[] = {};
							threshold = 0;
						};
					};
				};
			};
			class SetTimer
			{
				name = "SetTimer";
				class Init
				{
					function = "setTimer";
					parameters[] = {10, 25};
					thresholds[] = {};
				};
				class Links
				{
					class Always
					{
						priority = 0;
						to = "Move";
						class Action
						{
							function = "nothing";
							parameters[] = {};
							thresholds[] = {};
						};
						class Condition
						{
							function = "true";
							parameters[] = {};
							threshold = 0;
						};
					};
				};
			};
			class SetTimer2
			{
				name = "SetTimer2";
				class Init
				{
					function = "setTimer";
					parameters[] = {3, 6};
					thresholds[] = {};
				};
				class Links
				{
					class Always
					{
						priority = 0;
						to = "MoveLand";
						class Action
						{
							function = "nothing";
							parameters[] = {};
							thresholds[] = {};
						};
						class Condition
						{
							function = "true";
							parameters[] = {};
							threshold = 0;
						};
					};
				};
			};
			class SetTimer3
			{
				name = "SetTimer3";
				class Init
				{
					function = "setTimer";
					parameters[] = {4, 6};
					thresholds[] = {};
				};
				class Links
				{
					class TimeElapsed
					{
						priority = 0;
						to = "checkWait";
						class Action
						{
							function = "switchAction";
							parameters[] = {1};
							thresholds[] = {};
						};
						class Condition
						{
							function = "timeElapsed";
							parameters[] = {};
							threshold = 0;
						};
					};
				};
			};
			class Wait
			{
				name = "Wait";
				class Init
				{
					function = "wait";
					parameters[] = {3, 10};
					thresholds[] = {};
				};
				class Links
				{
					class Always
					{
						priority = 0;
						to = "SetTimer3";
						class Action
						{
							function = "nothing";
							parameters[] = {};
							thresholds[] = {};
						};
						class Condition
						{
							function = "true";
							parameters[] = {};
							threshold = 0;
						};
					};
				};
			};
		};
	};
	class Dragonfly
	{
		finalStates[] = {};
		initState = "Init";
		class States
		{
			class Init
			{
				name = "Init";
				class Init
				{
					function = "setNoBackwards";
					parameters[] = {1};
					thresholds[] = {{0, 0.5, 0.5}};
				};
				class Links
				{
					class Always
					{
						priority = 0;
						to = "SetTimerRandom";
						class Action
						{
							function = "nothing";
							parameters[] = {};
							thresholds[] = {};
						};
						class Condition
						{
							function = "true";
							parameters[] = {};
							threshold = 0;
						};
					};
				};
			};
			class LongerWait
			{
				name = "LongerWait";
				class Init
				{
					function = "wait";
					parameters[] = {0.8, 2};
					thresholds[] = {};
				};
				class Links
				{
					class WaitCompleted
					{
						priority = 0;
						to = "SetTimerRandom";
						class Action
						{
							function = "nothing";
							parameters[] = {};
							thresholds[] = {};
						};
						class Condition
						{
							function = "waitCompleted";
							parameters[] = {};
							threshold = 0;
						};
					};
				};
			};
			class LongMove
			{
				name = "LongMove";
				class Init
				{
					function = "randomMove";
					parameters[] = {2.5, -0.1, 1.2, 5};
					thresholds[] = {};
				};
				class Links
				{
					class MoveCompleted
					{
						priority = 1;
						to = "SetRandom3";
						class Action
						{
							function = "nothing";
							parameters[] = {};
							thresholds[] = {};
						};
						class Condition
						{
							function = "moveCompleted";
							parameters[] = {};
							threshold = 0;
						};
					};
					class TimeElapsed
					{
						priority = 0;
						to = "SetRandom2";
						class Action
						{
							function = "nothing";
							parameters[] = {};
							thresholds[] = {};
						};
						class Condition
						{
							function = "timeElapsed";
							parameters[] = {};
							threshold = 0;
						};
					};
				};
			};
			class LongWait
			{
				name = "LongWait";
				class Init
				{
					function = "wait";
					parameters[] = {4, 8};
					thresholds[] = {};
				};
				class Links
				{
					class WaitCompleted
					{
						priority = 0;
						to = "SetTimerRandom";
						class Action
						{
							function = "nothing";
							parameters[] = {};
							thresholds[] = {};
						};
						class Condition
						{
							function = "waitCompleted";
							parameters[] = {};
							threshold = 0;
						};
					};
				};
			};
			class Random_Move
			{
				name = "Random_Move";
				class Init
				{
					function = "randomMove";
					parameters[] = {1, -0.1, 1.2, 5};
					thresholds[] = {};
				};
				class Links
				{
					class MoveCompleted
					{
						priority = 1;
						to = "SetRandom3";
						class Action
						{
							function = "nothing";
							parameters[] = {};
							thresholds[] = {};
						};
						class Condition
						{
							function = "moveCompleted";
							parameters[] = {};
							threshold = 0;
						};
					};
					class TimeElapsed
					{
						priority = 0;
						to = "SetRandom2";
						class Action
						{
							function = "nothing";
							parameters[] = {};
							thresholds[] = {};
						};
						class Condition
						{
							function = "timeElapsed";
							parameters[] = {};
							threshold = 0;
						};
					};
				};
			};
			class SetRandom
			{
				name = "SetRandom";
				class Init
				{
					function = "nothing";
					parameters[] = {};
					thresholds[] = {{1, 0, 1}};
				};
				class Links
				{
					class Always
					{
						priority = 0;
						to = "Random_Move";
						class Action
						{
							function = "nothing";
							parameters[] = {};
							thresholds[] = {};
						};
						class Condition
						{
							function = "true";
							parameters[] = {};
							threshold = 0;
						};
					};
					class constProbability
					{
						priority = 1;
						to = "LongMove";
						class Action
						{
							function = "nothing";
							parameters[] = {};
							thresholds[] = {};
						};
						class Condition
						{
							function = "const";
							parameters[] = {0.1};
							threshold = 1;
						};
					};
				};
			};
			class SetRandom2
			{
				name = "SetRandom2";
				class Init
				{
					function = "nothing";
					parameters[] = {};
					thresholds[] = {{1, 0, 1}};
				};
				class Links
				{
					class Always
					{
						priority = 0;
						to = "LongerWait";
						class Action
						{
							function = "nothing";
							parameters[] = {};
							thresholds[] = {};
						};
						class Condition
						{
							function = "true";
							parameters[] = {};
							threshold = 0;
						};
					};
					class constProbability
					{
						priority = 1;
						to = "LongWait";
						class Action
						{
							function = "nothing";
							parameters[] = {};
							thresholds[] = {};
						};
						class Condition
						{
							function = "const";
							parameters[] = {0.1};
							threshold = 1;
						};
					};
				};
			};
			class SetRandom3
			{
				name = "SetRandom3";
				class Init
				{
					function = "nothing";
					parameters[] = {};
					thresholds[] = {{1, 0, 1}};
				};
				class Links
				{
					class Always
					{
						priority = 0;
						to = "ShortWait";
						class Action
						{
							function = "nothing";
							parameters[] = {};
							thresholds[] = {};
						};
						class Condition
						{
							function = "true";
							parameters[] = {};
							threshold = 0;
						};
					};
					class constProbability
					{
						priority = 1;
						to = "LongWait";
						class Action
						{
							function = "nothing";
							parameters[] = {};
							thresholds[] = {};
						};
						class Condition
						{
							function = "const";
							parameters[] = {0.15};
							threshold = 1;
						};
					};
				};
			};
			class SetTimerRandom
			{
				name = "SetTimerRandom";
				class Init
				{
					function = "setTimer";
					parameters[] = {0.5, 2};
					thresholds[] = {};
				};
				class Links
				{
					class Always
					{
						priority = 0;
						to = "SetRandom";
						class Action
						{
							function = "nothing";
							parameters[] = {};
							thresholds[] = {};
						};
						class Condition
						{
							function = "true";
							parameters[] = {};
							threshold = 0;
						};
					};
				};
			};
			class ShortWait
			{
				name = "ShortWait";
				class Init
				{
					function = "wait";
					parameters[] = {0.6, 1.5};
					thresholds[] = {};
				};
				class Links
				{
					class WaitCompleted
					{
						priority = 0;
						to = "SetTimerRandom";
						class Action
						{
							function = "nothing";
							parameters[] = {};
							thresholds[] = {};
						};
						class Condition
						{
							function = "waitCompleted";
							parameters[] = {};
							threshold = 0;
						};
					};
				};
			};
		};
	};
	class Formation
	{
		finalStates[] = {};
		initState = "Init";
		class States
		{
			class Clean_up
			{
				name = "Clean_up";
				class Init
				{
					function = "formationCleanUp";
					parameters[] = {};
					thresholds[] = {};
				};
				class Links
				{
					class Always
					{
						priority = 0;
						to = "Start";
						class Action
						{
							function = "nothing";
							parameters[] = {};
							thresholds[] = {};
						};
						class Condition
						{
							function = "true";
							parameters[] = {};
							threshold = 0;
						};
					};
				};
			};
			class Combat
			{
				name = "Combat";
				class Init
				{
					function = "nothing";
					parameters[] = {};
					thresholds[] = {};
				};
				class Links
				{
					class Always
					{
						priority = 0;
						to = "Search_path__Covering";
						class Action
						{
							function = "nothing";
							parameters[] = {};
							thresholds[] = {};
						};
						class Condition
						{
							function = "true";
							parameters[] = {};
							threshold = 0;
						};
					};
					class Leader_near_tgt
					{
						priority = 1;
						to = "Leader";
						class Action
						{
							function = "nothing";
							parameters[] = {};
							thresholds[] = {};
						};
						class Condition
						{
							function = "formationIsLeader";
							parameters[] = {};
							threshold = 0;
						};
					};
				};
			};
			class Drop_to_ground
			{
				name = "Drop_to_ground";
				class Init
				{
					function = "setUnitPosToDown";
					parameters[] = {};
					thresholds[] = {};
				};
				class Links
				{
					class Always
					{
						priority = 0;
						to = "Reload";
						class Action
						{
							function = "nothing";
							parameters[] = {};
							thresholds[] = {};
						};
						class Condition
						{
							function = "true";
							parameters[] = {};
							threshold = 0;
						};
					};
				};
			};
			class Drop_to_ground_1
			{
				name = "Drop_to_ground_1";
				class Init
				{
					function = "setUnitPosToDown";
					parameters[] = {};
					thresholds[] = {};
				};
				class Links
				{
					class Always
					{
						priority = 0;
						to = "Reload__Hiden_";
						class Action
						{
							function = "nothing";
							parameters[] = {};
							thresholds[] = {};
						};
						class Condition
						{
							function = "true";
							parameters[] = {};
							threshold = 0;
						};
					};
				};
			};
			class Excluded
			{
				name = "Excluded";
				class Init
				{
					function = "formationExcluded";
					parameters[] = {};
					thresholds[] = {};
				};
				class Links
				{
					class Always
					{
						priority = 0;
						to = "Search_path__No_1";
						class Action
						{
							function = "nothing";
							parameters[] = {};
							thresholds[] = {};
						};
						class Condition
						{
							function = "true";
							parameters[] = {};
							threshold = 0;
						};
					};
				};
			};
			class Hide_in_cover__Hidden
			{
				name = "Hide_in_cover__Hidden";
				class Init
				{
					function = "formationHideInCover";
					parameters[] = {};
					thresholds[] = {};
				};
				class Links
				{
					class Abort_No_combat
					{
						priority = 3;
						to = "Clean_up";
						class Action
						{
							function = "nothing";
							parameters[] = {};
							thresholds[] = {};
						};
						class Condition
						{
							function = "1-behaviourCombat";
							parameters[] = {};
							threshold = 0;
						};
					};
					class Abort_Vehicle
					{
						priority = 3;
						to = "Clean_up";
						class Action
						{
							function = "nothing";
							parameters[] = {};
							thresholds[] = {};
						};
						class Condition
						{
							function = "vehicle";
							parameters[] = {};
							threshold = 0;
						};
					};
					class Random_delay
					{
						priority = 0;
						to = "Hide_or_Out_";
						class Action
						{
							function = "nothing";
							parameters[] = {};
							thresholds[] = {};
						};
						class Condition
						{
							function = "randomDelay";
							parameters[] = {};
							threshold = 0;
						};
					};
					class Reload
					{
						priority = 2;
						to = "Drop_to_ground_1";
						class Action
						{
							function = "nothing";
							parameters[] = {};
							thresholds[] = {};
						};
						class Condition
						{
							function = "reloadNeeded";
							parameters[] = {};
							threshold = 0;
						};
					};
					class Stop_covering
					{
						priority = 1;
						to = "Clean_up";
						class Action
						{
							function = "nothing";
							parameters[] = {};
							thresholds[] = {};
						};
						class Condition
						{
							function = "formationCanLeaveCover";
							parameters[] = {};
							threshold = 0;
						};
					};
				};
			};
			class Hide_or_Out_
			{
				name = "Hide_or_Out_";
				class Init
				{
					function = "formationInit";
					parameters[] = {};
					thresholds[] = {{1, 0.2, 1.2}};
				};
				class Links
				{
					class Otherwise
					{
						priority = 0;
						to = "Hide_in_cover__Hidden";
						class Action
						{
							function = "nothing";
							parameters[] = {};
							thresholds[] = {};
						};
						class Condition
						{
							function = "true";
							parameters[] = {};
							threshold = 0;
						};
					};
					class Random
					{
						priority = 1;
						to = "Next_target__Out";
						class Action
						{
							function = "nothing";
							parameters[] = {};
							thresholds[] = {};
						};
						class Condition
						{
							function = "true";
							parameters[] = {};
							threshold = 1;
						};
					};
				};
			};
			class Init
			{
				name = "Init";
				class Init
				{
					function = "formationInit";
					parameters[] = {};
					thresholds[] = {{0, 0.5, 0.5}};
				};
				class Links
				{
					class Always
					{
						priority = 0;
						to = "Start";
						class Action
						{
							function = "nothing";
							parameters[] = {};
							thresholds[] = {};
						};
						class Condition
						{
							function = "true";
							parameters[] = {};
							threshold = 0;
						};
					};
				};
			};
			class Leader
			{
				name = "Leader";
				class Init
				{
					function = "formationLeader";
					parameters[] = {};
					thresholds[] = {};
				};
				class Links
				{
					class Always
					{
						priority = 0;
						to = "Search_path__No";
						class Action
						{
							function = "nothing";
							parameters[] = {};
							thresholds[] = {};
						};
						class Condition
						{
							function = "true";
							parameters[] = {};
							threshold = 0;
						};
					};
				};
			};
			class Next_target__Out
			{
				name = "Next_target__Out";
				class Init
				{
					function = "formationNextTarget";
					parameters[] = {};
					thresholds[] = {};
				};
				class Links
				{
					class Abort_No_combat
					{
						priority = 3;
						to = "Clean_up";
						class Action
						{
							function = "nothing";
							parameters[] = {};
							thresholds[] = {};
						};
						class Condition
						{
							function = "1-behaviourCombat";
							parameters[] = {};
							threshold = 0;
						};
					};
					class Abort_Vehicle
					{
						priority = 3;
						to = "Clean_up";
						class Action
						{
							function = "nothing";
							parameters[] = {};
							thresholds[] = {};
						};
						class Condition
						{
							function = "vehicle";
							parameters[] = {};
							threshold = 0;
						};
					};
					class Random_delay
					{
						priority = 0;
						to = "Hide_or_Out_";
						class Action
						{
							function = "nothing";
							parameters[] = {};
							thresholds[] = {};
						};
						class Condition
						{
							function = "randomDelay";
							parameters[] = {};
							threshold = 0;
						};
					};
					class Reload
					{
						priority = 2;
						to = "Drop_to_ground_1";
						class Action
						{
							function = "nothing";
							parameters[] = {};
							thresholds[] = {};
						};
						class Condition
						{
							function = "reloadNeeded";
							parameters[] = {};
							threshold = 0;
						};
					};
					class Stop_covering
					{
						priority = 1;
						to = "Clean_up";
						class Action
						{
							function = "nothing";
							parameters[] = {};
							thresholds[] = {};
						};
						class Condition
						{
							function = "formationCanLeaveCover";
							parameters[] = {};
							threshold = 0;
						};
					};
				};
			};
			class Provide_cover__Out
			{
				name = "Provide_cover__Out";
				class Init
				{
					function = "formationProvideCover";
					parameters[] = {};
					thresholds[] = {};
				};
				class Links
				{
					class Abort_No_combat
					{
						priority = 3;
						to = "Clean_up";
						class Action
						{
							function = "nothing";
							parameters[] = {};
							thresholds[] = {};
						};
						class Condition
						{
							function = "1-behaviourCombat";
							parameters[] = {};
							threshold = 0;
						};
					};
					class Abort_Vehicle
					{
						priority = 3;
						to = "Clean_up";
						class Action
						{
							function = "nothing";
							parameters[] = {};
							thresholds[] = {};
						};
						class Condition
						{
							function = "vehicle";
							parameters[] = {};
							threshold = 0;
						};
					};
					class Random_delay
					{
						priority = 0;
						to = "Hide_or_Out_";
						class Action
						{
							function = "nothing";
							parameters[] = {};
							thresholds[] = {};
						};
						class Condition
						{
							function = "randomDelay";
							parameters[] = {};
							threshold = 0;
						};
					};
					class Reload
					{
						priority = 2;
						to = "Drop_to_ground_1";
						class Action
						{
							function = "nothing";
							parameters[] = {};
							thresholds[] = {};
						};
						class Condition
						{
							function = "reloadNeeded";
							parameters[] = {};
							threshold = 0;
						};
					};
					class Stop_covering
					{
						priority = 1;
						to = "Clean_up";
						class Action
						{
							function = "nothing";
							parameters[] = {};
							thresholds[] = {};
						};
						class Condition
						{
							function = "formationCanLeaveCover";
							parameters[] = {};
							threshold = 0;
						};
					};
				};
			};
			class Reload
			{
				name = "Reload";
				class Init
				{
					function = "reload";
					parameters[] = {};
					thresholds[] = {};
				};
				class Links
				{
					class No_cover
					{
						priority = 1;
						to = "Start";
						class Action
						{
							function = "nothing";
							parameters[] = {};
							thresholds[] = {};
						};
						class Condition
						{
							function = "true";
							parameters[] = {};
							threshold = 0;
						};
					};
				};
			};
			class Reload__Hiden_
			{
				name = "Reload__Hiden_";
				class Init
				{
					function = "reload";
					parameters[] = {};
					thresholds[] = {};
				};
				class Links
				{
					class Always
					{
						priority = 0;
						to = "Provide_cover__Out";
						class Action
						{
							function = "nothing";
							parameters[] = {};
							thresholds[] = {};
						};
						class Condition
						{
							function = "true";
							parameters[] = {};
							threshold = 0;
						};
					};
				};
			};
			class Search_path__Covering
			{
				name = "Search_path__Covering";
				class Init
				{
					function = "searchPath";
					parameters[] = {10, 5};
					thresholds[] = {};
				};
				class Links
				{
					class Cover_reached
					{
						priority = 4;
						to = "Provide_cover__Out";
						class Action
						{
							function = "nothing";
							parameters[] = {};
							thresholds[] = {};
						};
						class Condition
						{
							function = "coverReached";
							parameters[] = {};
							threshold = 0;
						};
					};
					class No_cover
					{
						priority = 1;
						to = "Start";
						class Action
						{
							function = "nothing";
							parameters[] = {};
							thresholds[] = {};
						};
						class Condition
						{
							function = "true";
							parameters[] = {};
							threshold = 0;
						};
					};
				};
			};
			class Search_path__No
			{
				name = "Search_path__No";
				class Init
				{
					function = "searchPath";
					parameters[] = {0, 0};
					thresholds[] = {};
				};
				class Links
				{
					class Cover_reached
					{
						priority = 4;
						to = "Provide_cover__Out";
						class Action
						{
							function = "nothing";
							parameters[] = {};
							thresholds[] = {};
						};
						class Condition
						{
							function = "coverReached";
							parameters[] = {};
							threshold = 0;
						};
					};
					class No_cover
					{
						priority = 1;
						to = "Test_reload";
						class Action
						{
							function = "nothing";
							parameters[] = {};
							thresholds[] = {};
						};
						class Condition
						{
							function = "true";
							parameters[] = {};
							threshold = 0;
						};
					};
				};
			};
			class Search_path__No_1
			{
				name = "Search_path__No_1";
				class Init
				{
					function = "searchPath";
					parameters[] = {0, 0};
					thresholds[] = {};
				};
				class Links
				{
					class Cover_reached
					{
						priority = 4;
						to = "Provide_cover__Out";
						class Action
						{
							function = "nothing";
							parameters[] = {};
							thresholds[] = {};
						};
						class Condition
						{
							function = "coverReached";
							parameters[] = {};
							threshold = 0;
						};
					};
					class No_cover
					{
						priority = 1;
						to = "Start";
						class Action
						{
							function = "nothing";
							parameters[] = {};
							thresholds[] = {};
						};
						class Condition
						{
							function = "true";
							parameters[] = {};
							threshold = 0;
						};
					};
				};
			};
			class Start
			{
				name = "Start";
				class Init
				{
					function = "nothing";
					parameters[] = {};
					thresholds[] = {};
				};
				class Links
				{
					class Combat
					{
						priority = 1;
						to = "Combat";
						class Action
						{
							function = "nothing";
							parameters[] = {};
							thresholds[] = {};
						};
						class Condition
						{
							function = "behaviourCombat";
							parameters[] = {};
							threshold = 0;
						};
					};
					class No_combat
					{
						priority = 0;
						to = "Excluded";
						class Action
						{
							function = "nothing";
							parameters[] = {};
							thresholds[] = {};
						};
						class Condition
						{
							function = "true";
							parameters[] = {};
							threshold = 0;
						};
					};
					class Vehicle
					{
						priority = 2;
						to = "Excluded";
						class Action
						{
							function = "nothing";
							parameters[] = {};
							thresholds[] = {};
						};
						class Condition
						{
							function = "vehicle";
							parameters[] = {};
							threshold = 0;
						};
					};
				};
			};
			class Test_reload
			{
				name = "Test_reload";
				class Init
				{
					function = "nothing";
					parameters[] = {};
					thresholds[] = {};
				};
				class Links
				{
					class No_cover
					{
						priority = 1;
						to = "Start";
						class Action
						{
							function = "nothing";
							parameters[] = {};
							thresholds[] = {};
						};
						class Condition
						{
							function = "true";
							parameters[] = {};
							threshold = 0;
						};
					};
					class Reload
					{
						priority = 3;
						to = "Drop_to_ground";
						class Action
						{
							function = "nothing";
							parameters[] = {};
							thresholds[] = {};
						};
						class Condition
						{
							function = "reloadNeeded";
							parameters[] = {};
							threshold = 0;
						};
					};
				};
			};
		};
	};
	class HoneyBee
	{
		finalStates[] = {};
		initState = "Init";
		class States
		{
			class Break
			{
				name = "Break";
				class Init
				{
					function = "break";
					parameters[] = {50};
					thresholds[] = {};
				};
				class Links
				{
					class Always
					{
						priority = 0;
						to = "SetTimer";
						class Action
						{
							function = "nothing";
							parameters[] = {};
							thresholds[] = {};
						};
						class Condition
						{
							function = "true";
							parameters[] = {};
							threshold = 0;
						};
					};
				};
			};
			class Init
			{
				name = "Init";
				class Init
				{
					function = "setNoBackwards";
					parameters[] = {0};
					thresholds[] = {{0, 0.5, 0.5}};
				};
				class Links
				{
					class Always
					{
						priority = 0;
						to = "SetTimerRandom";
						class Action
						{
							function = "nothing";
							parameters[] = {};
							thresholds[] = {};
						};
						class Condition
						{
							function = "true";
							parameters[] = {};
							threshold = 0;
						};
					};
				};
			};
			class LongMove
			{
				name = "LongMove";
				class Init
				{
					function = "randomMove";
					parameters[] = {1.5};
					thresholds[] = {};
				};
				class Links
				{
					class MoveCompleted
					{
						priority = 1;
						to = "SetRandom";
						class Action
						{
							function = "nothing";
							parameters[] = {};
							thresholds[] = {};
						};
						class Condition
						{
							function = "moveCompleted";
							parameters[] = {};
							threshold = 0;
						};
					};
					class TimeElapsed
					{
						priority = 0;
						to = "SetRandom";
						class Action
						{
							function = "nothing";
							parameters[] = {};
							thresholds[] = {};
						};
						class Condition
						{
							function = "timeElapsed";
							parameters[] = {};
							threshold = 0;
						};
					};
				};
			};
			class SetRandom
			{
				name = "SetRandom";
				class Init
				{
					function = "nothing";
					parameters[] = {};
					thresholds[] = {{1, 0, 1}};
				};
				class Links
				{
					class Always
					{
						priority = 0;
						to = "Break";
						class Action
						{
							function = "nothing";
							parameters[] = {};
							thresholds[] = {};
						};
						class Condition
						{
							function = "true";
							parameters[] = {};
							threshold = 0;
						};
					};
					class constProbability
					{
						priority = 1;
						to = "SetRandom_1";
						class Action
						{
							function = "nothing";
							parameters[] = {};
							thresholds[] = {};
						};
						class Condition
						{
							function = "const";
							parameters[] = {0.5};
							threshold = 1;
						};
					};
				};
			};
			class SetRandom_1
			{
				name = "SetRandom_1";
				class Init
				{
					function = "nothing";
					parameters[] = {};
					thresholds[] = {{1, 0, 1}};
				};
				class Links
				{
					class Always
					{
						priority = 0;
						to = "ShortMove";
						class Action
						{
							function = "nothing";
							parameters[] = {};
							thresholds[] = {};
						};
						class Condition
						{
							function = "true";
							parameters[] = {};
							threshold = 0;
						};
					};
					class constProbability
					{
						priority = 1;
						to = "LongMove";
						class Action
						{
							function = "nothing";
							parameters[] = {};
							thresholds[] = {};
						};
						class Condition
						{
							function = "const";
							parameters[] = {0.1};
							threshold = 1;
						};
					};
				};
			};
			class SetTimer
			{
				name = "SetTimer";
				class Init
				{
					function = "setTimer";
					parameters[] = {0.1, 0.3};
					thresholds[] = {};
				};
				class Links
				{
					class TimeElapsed
					{
						priority = 0;
						to = "SetTimerRandom";
						class Action
						{
							function = "nothing";
							parameters[] = {};
							thresholds[] = {};
						};
						class Condition
						{
							function = "timeElapsed";
							parameters[] = {};
							threshold = 0;
						};
					};
				};
			};
			class SetTimerRandom
			{
				name = "SetTimerRandom";
				class Init
				{
					function = "setTimer";
					parameters[] = {0.5, 2};
					thresholds[] = {};
				};
				class Links
				{
					class Always
					{
						priority = 0;
						to = "SetRandom_1";
						class Action
						{
							function = "nothing";
							parameters[] = {};
							thresholds[] = {};
						};
						class Condition
						{
							function = "true";
							parameters[] = {};
							threshold = 0;
						};
					};
				};
			};
			class ShortMove
			{
				name = "ShortMove";
				class Init
				{
					function = "randomMove";
					parameters[] = {0.2};
					thresholds[] = {};
				};
				class Links
				{
					class MoveCompleted
					{
						priority = 1;
						to = "SetRandom";
						class Action
						{
							function = "nothing";
							parameters[] = {};
							thresholds[] = {};
						};
						class Condition
						{
							function = "moveCompleted";
							parameters[] = {};
							threshold = 0;
						};
					};
					class TimeElapsed
					{
						priority = 0;
						to = "SetRandom";
						class Action
						{
							function = "nothing";
							parameters[] = {};
							thresholds[] = {};
						};
						class Condition
						{
							function = "timeElapsed";
							parameters[] = {};
							threshold = 0;
						};
					};
				};
			};
		};
	};
};
