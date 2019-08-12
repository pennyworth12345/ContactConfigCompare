class VehicleSystemsTemplateRightDriver: DefaultVehicleSystemsDisplayManagerRight
{
	class Components: Components
	{
		class VehicleCommanderDisplay
		{
			componentType = "TransportFeedDisplayComponent";
			source = "Commander";
		};
		class VehiclePrimaryGunnerDisplay
		{
			componentType = "TransportFeedDisplayComponent";
			source = "PrimaryGunner";
		};
	};
};
