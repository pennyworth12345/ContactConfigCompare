class CfgDestructPos
{
	scope = 1;
	class DelayedDestruction
	{
		hideDuration = "0.65+lifeTime*0.05";
		timeBeforeHiding = "0.2";
	};
	class DelayedDestructionAmmo: DelayedDestruction
	{
		hideDuration = "10";
		timeBeforeHiding = "21";
	};
	class DelayedDestructionAmmoBox
	{
		hideDuration = "lifeTime/12";
		timeBeforeHiding = "lifeTime/12";
	};
	class FuelStationDestr
	{
		hideDuration = "lifeTime*0.05+0.2";
		timeBeforeHiding = "0.2";
	};
};
