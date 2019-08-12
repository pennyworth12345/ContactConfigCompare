class DefaultVehicleSystemsDisplayManagerRight
{
	componentType = "VehicleSystemsDisplayManager";
	defaultDisplay = "EmptyDisplay";
	right = 1;
	x = "(profilenamespace getvariable [""IGUI_GRID_CUSTOMINFORIGHT_X"",	((safezoneX + safezoneW) - (		(10 * 			(			((safezoneW / safezoneH) min 1.2) / 40)) + 0.5 * 			(			((safezoneW / safezoneH) min 1.2) / 40)))])";
	y = "(profilenamespace getvariable [""IGUI_GRID_CUSTOMINFORIGHT_Y"",	(safezoneY + safezoneH - 21 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25))])";
	class Components
	{
		class CrewDisplay
		{
			componentType = "CrewDisplayComponent";
		};
		class EmptyDisplay
		{
			componentType = "EmptyDisplayComponent";
		};
		class MineDetectorDisplay
		{
			componentType = "MineDetectorDisplayComponent";
		};
		class MinimapDisplay
		{
			componentType = "MinimapDisplayComponent";
		};
		class SlingLoadDisplay
		{
			componentType = "SlingLoadDisplayComponent";
		};
		class UAVDisplay
		{
			componentType = "UAVFeedDisplayComponent";
		};
	};
};
