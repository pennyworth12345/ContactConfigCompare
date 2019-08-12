class VehicleSystemsTemplateRightCommander: DefaultVehicleSystemsDisplayManagerRight
{
	class Components: Components
	{
		class VehicleDriverDisplay
		{
			componentType = "TransportFeedDisplayComponent";
			source = "Driver";
		};
		class VehiclePrimaryGunnerDisplay
		{
			componentType = "TransportFeedDisplayComponent";
			source = "PrimaryGunner";
		};
	};
};
