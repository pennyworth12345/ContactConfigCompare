class CfgBrains
{
	class DefaultAnimalBrain
	{
		class Components {};
	};
	class DefaultCivilianBrain
	{
		class Components {};
	};
	class DefaultSoldierBrain
	{
		class Components
		{
			class AIBrainAimingErrorComponent {};
			class AIBrainCountermeasuresComponent
			{
				CMOnTargettedProbability = 0.5;
				maxReactionTime = 3;
				minReactionTime = 0.1;
				randomReactionTimePercent = 0.3;
			};
			class AIBrainSuppressionComponent {};
			class AIBrainTargetSelectorComponent {};
		};
	};
};
