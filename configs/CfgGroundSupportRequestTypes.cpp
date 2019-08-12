class CfgGroundSupportRequestTypes
{
	class CloseAirSupport
	{
		description = "Eliminate the target vehicle designated by %1.";
		fsmPath = "a3\Missions_F_Heli\MPTypes\GroundSupport\fsms\CloseAirSupport.fsm";
		marker = "DESTROY";
		parentDescription = "Provide close air support to ground forces.";
		parentTitle = "Close Air Support";
		title = "%1";
	};
	class Medevac
	{
		description = "Evacuate %1 back to base for medical attention.";
		fsmPath = "a3\Missions_F_Heli\MPTypes\GroundSupport\fsms\Medevac.fsm";
		marker = "MEDEVAC";
		parentDescription = "Evacuate casualties back to base.";
		parentTitle = "Medevac";
		title = "%1";
	};
	class Slingload
	{
		description = "Transport the cargo to the location designated by %1.";
		fsmPath = "a3\Missions_F_Heli\MPTypes\GroundSupport\fsms\Slingload.fsm";
		marker = "RESUPPLY";
		parentDescription = "Transport ammunition and weapons to our forces on the ground. Supply crates are stored in the maintenance area at base.";
		parentTitle = "Resupply";
		title = "%1";
	};
	class Transport
	{
		description = "Transport %1 to sector %2. You may also unload them at any sector that is not under our control.";
		fsmPath = "a3\Missions_F_Heli\MPTypes\GroundSupport\fsms\Transport.fsm";
		marker = "TRANSPORT";
		parentDescription = "Transport ground forces operating within the AO.";
		parentTitle = "Transport";
		title = "%1";
	};
};
