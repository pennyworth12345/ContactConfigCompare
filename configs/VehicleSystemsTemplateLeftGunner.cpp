class VehicleSystemsTemplateLeftGunner: DefaultVehicleSystemsDisplayManagerLeft
{
	class Components: Components
	{
		class VehicleCommanderDisplay
		{
			componentType = "TransportFeedDisplayComponent";
			source = "Commander";
		};
		class VehicleDriverDisplay
		{
			componentType = "TransportFeedDisplayComponent";
			source = "Driver";
		};
	};
};
