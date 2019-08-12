class CfgArmorSimulations
{
	class Armor_ERA_Heavy: Default
	{
		class AP: AP
		{
			speed[] = {0.65, 1};
		};
		class HE: HE
		{
			hit[] = {0.1, 1};
			speed[] = {1};
		};
		class HEAT: HEAT
		{
			speed[] = {0.01, 1};
		};
		class TandemHEAT: TandemHEAT
		{
			speed[] = {0.65, 1};
		};
	};
	class Armor_ERA_Light: Default
	{
		class AP: AP
		{
			speed[] = {0.9, 1};
		};
		class HE: HE
		{
			hit[] = {0.1, 1};
			speed[] = {1};
		};
		class HEAT: HEAT
		{
			speed[] = {0.05, 1};
		};
		class TandemHEAT: TandemHEAT
		{
			speed[] = {0.9, 1};
		};
	};
	class Armor_SLAT: Default
	{
		class AP: AP
		{
			hit[] = {0};
			speed[] = {0.95, 1};
		};
		class HE: HE
		{
			hit[] = {0.25, 1};
			speed[] = {1};
		};
		class HEAT: HEAT
		{
			speed[] = {0.05, 1};
		};
		class TandemHEAT: TandemHEAT
		{
			speed[] = {0.65, 1};
		};
	};
	class Default
	{
		class AP
		{
			hit[] = {1};
			speed[] = {0.9, 1};
		};
		class Default
		{
			hit[] = {1};
			speed[] = {1};
		};
		class HE
		{
			hit[] = {1};
			speed[] = {0.5, 1};
		};
		class HEAT
		{
			hit[] = {1};
			speed[] = {0.8, 1};
		};
		class TandemHEAT
		{
			hit[] = {1};
			speed[] = {0.9, 1};
		};
	};
};
