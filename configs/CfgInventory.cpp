class CfgInventory
{
	class Objects
	{
		class Bottle
		{
			simulation = "InventoryItem";
			weight = 0.5;
			class InventoryPlacements
			{
				class Bottle
				{
					priority = 1;
					size = 1;
					type = "Bottle";
				};
			};
		};
		class Man
		{
			simulation = "Man";
			class InventorySlots
			{
				class Back
				{
					size = 1;
					type = "Back";
				};
				class EarPhones
				{
					size = 1;
					type = "EarPhones";
				};
				class Goggles
				{
					size = 1;
					type = "Goggles";
				};
				class LeftHand
				{
					size = 1;
					type = "LeftHand";
				};
				class RightHand
				{
					size = 1;
					type = "RightHand";
				};
				class Weapon
				{
					size = 1;
					type = "WeaponInUse";
				};
			};
		};
		class Rucksack
		{
			simulation = "Baggage";
			weight = 1.5;
			class InventoryPlacements
			{
				class InHands
				{
					priority = 0;
					size = 1;
					type = "WeaponInUse";
				};
				class OnBack
				{
					priority = 1;
					size = 1;
					type = "Back";
				};
			};
			class InventorySlots
			{
				class Bottle
				{
					size = 1;
					type = "Bottle";
				};
				class Inside
				{
					size = 16;
					type = "Common";
				};
				class Weapon1
				{
					size = 1;
					type = "Weapon";
				};
				class Weapon2
				{
					size = 1;
					type = "Weapon";
				};
			};
		};
	};
	class SlotTypes
	{
		class Back {};
		class Common {};
		class EarPhones {};
		class Googles {};
		class LeftHand {};
		class RightHand {};
		class Weapon {};
		class WeaponInUse {};
	};
};
