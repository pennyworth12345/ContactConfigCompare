class VehicleSystemsTemplateLeftPilot: DefaultVehicleSystemsDisplayManagerLeft
{
	class Components
	{
		class CrewDisplay
		{
			componentType = "CrewDisplayComponent";
			resource = "RscCustomInfoCrew";
		};
		class EmptyDisplay
		{
			componentType = "EmptyDisplayComponent";
		};
		class MinimapDisplay
		{
			componentType = "MinimapDisplayComponent";
			resource = "RscCustomInfoAirborneMiniMap";
		};
		class SensorDisplay
		{
			componentType = "SensorsDisplayComponent";
			range[] = {4000, 2000, 16000, 8000};
			resource = "RscCustomInfoSensors";
		};
		class SlingLoadDisplay
		{
			componentType = "SlingLoadDisplayComponent";
			resource = "RscCustomInfoSlingLoad";
		};
		class UAVDisplay
		{
			componentType = "UAVFeedDisplayComponent";
		};
		class VehicleDriverDisplay
		{
			componentType = "TransportFeedDisplayComponent";
			source = "Driver";
		};
	};
};
