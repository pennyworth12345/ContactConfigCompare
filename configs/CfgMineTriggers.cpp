class CfgMineTriggers
{
	access = 1;
	class Default
	{
		mineDelay = 0.2;
		mineMagnetic = 0;
		mineTriggerMass = 30;
		mineTriggerRange = 2;
		mineTriggerType = "radius";
		mineUnderwaterOnly = 0;
		mineWireEnd[] = {0, 1, 5};
		mineWireStart[] = {0, 1, 0};
		restrictZoneCenter[] = {0, 0, 0};
		restrictZoneRadius = 3;
		scope = 0;
		timerStep = -1;
	};
	class IRTrigger: WireTrigger
	{
		mineDelay = 0;
		mineMagnetic = 1;
		mineTriggerActivationRange = 3;
		mineTriggerMass = 200;
		mineTriggerRange = 1;
		mineWireEnd[] = {0, 0.1, 20};
		mineWireStart[] = {0, 0.1, 0};
		restrictZoneCenter[] = {0, 0, 10};
		restrictZoneRadius = 10;
		timerStep = 30;
	};
	class RangeTrigger: Default
	{
		mineMagnetic = 0;
		mineTriggerMass = 30;
		mineTriggerRange = 2;
		mineTriggerType = "radius";
	};
	class RangeTriggerBounding: RangeTrigger
	{
		mineDelay = 1;
		mineTriggerActivationRange = 5;
		mineTriggerRange = 3;
		restrictZoneCenter[] = {0, 0, 0};
		restrictZoneRadius = 5;
	};
	class RangeTriggerShort: RangeTrigger
	{
		mineTriggerActivationRange = 3;
		mineTriggerRange = 1;
	};
	class RemoteTrigger: Default
	{
		mineTriggerMass = 0;
		mineTriggerType = "remote";
		restrictZoneRadius = 3;
		timerStep = 40;
	};
	class TankTriggerMagnetic: WireTrigger
	{
		mineMagnetic = 1;
		mineTriggerMass = 7000;
		mineTriggerRange = 0;
		mineWireEnd[] = {0, 1, 0};
		mineWireStart[] = {0, 0, 0};
		restrictZoneCenter[] = {0, 0, 0};
		restrictZoneRadius = 5;
	};
	class TimeTrigger: Default
	{
		mineTriggerType = "timer";
		timerStep = 30;
	};
	class UnderwaterRangeTriggerMagnetic: RangeTrigger
	{
		mineMagnetic = 1;
		mineTriggerMass = 1000;
		mineTriggerRange = 10;
		mineUnderwaterOnly = 1;
		restrictZoneRadius = 10;
	};
	class UnderwaterRangeTriggerMagneticShort: WireTrigger
	{
		mineWireEnd[] = {0, 10, 0};
		mineWireStart[] = {0, 0, 0};
		restrictZoneCenter[] = {0, 5, 0};
		restrictZoneRadius = 10;
	};
	class UXOTrigger1
	{
		mineDelay = 0.5;
		mineMagnetic = 0;
		mineTriggerMass = 30;
		mineTriggerRange = 2;
		mineTriggerType = "radius";
		mineUnderwaterOnly = 0;
		mineWireEnd[] = {0, 1, 5};
		mineWireStart[] = {0, 1, 0};
		restrictZoneCenter[] = {0, 0, 0};
		restrictZoneRadius = 3;
		scope = 0;
		timerStep = -1;
	};
	class UXOTrigger2: UXOTrigger1
	{
		mineDelay = 0;
		mineTriggerMass = 10;
		mineTriggerRange = 1;
	};
	class UXOTrigger3: UXOTrigger1
	{
		mineDelay = 0;
		mineTriggerMass = 200;
		mineTriggerRange = 0.1;
	};
	class UXOTrigger4: UXOTrigger1
	{
		mineDelay = 12;
		mineTriggerMass = 30;
		mineTriggerRange = 3;
	};
	class WireTrigger: Default
	{
		mineTriggerMass = 14;
		mineTriggerType = "wire";
		mineWireEnd[] = {1.6, 0.1, 0};
		mineWireStart[] = {-1.4, 0.1, 0};
		restrictZoneCenter[] = {0.1, 0, 0};
		restrictZoneRadius = 3;
	};
};
