class RscVehicleToggles
{
	h = "0.8 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
	iconH = "0.8 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
	iconW = "0.8 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
	idc = 112;
	style = -1;
	type = 18;
	w = "9.8 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
	x = "0.1 * 					(			((safezoneW / safezoneH) min 1.2) / 40) + 		(profilenamespace getvariable [""IGUI_GRID_VEHICLE_X"",		(safezoneX + 0.5 * 			(			((safezoneW / safezoneH) min 1.2) / 40))])";
	xSpace = "0.1 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
	y = "3.4 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) + 		(profilenamespace getvariable [""IGUI_GRID_VEHICLE_Y"",		(safezoneY + 0.5 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25))])";
	class Icons
	{
		class AutohoverIcon
		{
			colorOff[] = {1, 1, 1, 0.15};
			colorOn[] = {"(profilenamespace getvariable ['IGUI_TEXT_RGB_R',0])", "(profilenamespace getvariable ['IGUI_TEXT_RGB_G',1])", "(profilenamespace getvariable ['IGUI_TEXT_RGB_B',1])", "(profilenamespace getvariable ['IGUI_TEXT_RGB_A',0.8])"};
			colorOn2[] = {"(profilenamespace getvariable ['IGUI_TEXT_RGB_R',0])", "(profilenamespace getvariable ['IGUI_TEXT_RGB_G',1])", "(profilenamespace getvariable ['IGUI_TEXT_RGB_B',1])", "(profilenamespace getvariable ['IGUI_TEXT_RGB_A',0.8])"};
			textureOff = "\A3\Ui_f\data\IGUI\Cfg\VehicleToggles\AutohoverIconOn_ca.paa";
			textureOn = "\A3\Ui_f\data\IGUI\Cfg\VehicleToggles\AutohoverIconOn_ca.paa";
			textureOn2 = "\A3\Ui_f\data\IGUI\Cfg\VehicleToggles\AutohoverIconOn_ca.paa";
			type = "Autohover";
		};
		class CollisionLightsIcon
		{
			colorOff[] = {1, 1, 1, 0.15};
			colorOn[] = {"(profilenamespace getvariable ['IGUI_TEXT_RGB_R',0])", "(profilenamespace getvariable ['IGUI_TEXT_RGB_G',1])", "(profilenamespace getvariable ['IGUI_TEXT_RGB_B',1])", "(profilenamespace getvariable ['IGUI_TEXT_RGB_A',0.8])"};
			colorOn2[] = {"(profilenamespace getvariable ['IGUI_TEXT_RGB_R',0])", "(profilenamespace getvariable ['IGUI_TEXT_RGB_G',1])", "(profilenamespace getvariable ['IGUI_TEXT_RGB_B',1])", "(profilenamespace getvariable ['IGUI_TEXT_RGB_A',0.8])"};
			textureOff = "\A3\Ui_f\data\IGUI\Cfg\VehicleToggles\CollisionLightsIconOn_ca.paa";
			textureOn = "\A3\Ui_f\data\IGUI\Cfg\VehicleToggles\CollisionLightsIconOn_ca.paa";
			textureOn2 = "\A3\Ui_f\data\IGUI\Cfg\VehicleToggles\CollisionLightsIconOn_ca.paa";
			type = "CollisionLights";
		};
		class EngineIcon
		{
			colorOff[] = {1, 1, 1, 0.15};
			colorOn[] = {"(profilenamespace getvariable ['IGUI_TEXT_RGB_R',0])", "(profilenamespace getvariable ['IGUI_TEXT_RGB_G',1])", "(profilenamespace getvariable ['IGUI_TEXT_RGB_B',1])", "(profilenamespace getvariable ['IGUI_TEXT_RGB_A',0.8])"};
			colorOn2[] = {"(profilenamespace getvariable ['IGUI_TEXT_RGB_R',0])", "(profilenamespace getvariable ['IGUI_TEXT_RGB_G',1])", "(profilenamespace getvariable ['IGUI_TEXT_RGB_B',1])", "(profilenamespace getvariable ['IGUI_TEXT_RGB_A',0.8])"};
			textureOff = "\A3\Ui_f\data\IGUI\Cfg\VehicleToggles\EngineIconOn_ca.paa";
			textureOn = "\A3\Ui_f\data\IGUI\Cfg\VehicleToggles\EngineIconOn_ca.paa";
			textureOn2 = "\A3\Ui_f\data\IGUI\Cfg\VehicleToggles\EngineIconOn_ca.paa";
			type = "Engine";
		};
		class FlapsIcon
		{
			colorOff[] = {1, 1, 1, 0.15};
			colorOn[] = {"(profilenamespace getvariable ['IGUI_TEXT_RGB_R',0])", "(profilenamespace getvariable ['IGUI_TEXT_RGB_G',1])", "(profilenamespace getvariable ['IGUI_TEXT_RGB_B',1])", "(profilenamespace getvariable ['IGUI_TEXT_RGB_A',0.8])"};
			colorOn2[] = {"(profilenamespace getvariable ['IGUI_TEXT_RGB_R',0])", "(profilenamespace getvariable ['IGUI_TEXT_RGB_G',1])", "(profilenamespace getvariable ['IGUI_TEXT_RGB_B',1])", "(profilenamespace getvariable ['IGUI_TEXT_RGB_A',0.8])"};
			textureOff = "\A3\Ui_f\data\IGUI\Cfg\VehicleToggles\FlapsIconOff_ca.paa";
			textureOn = "\A3\Ui_f\data\IGUI\Cfg\VehicleToggles\FlapsIconOn_ca.paa";
			textureOn2 = "\A3\Ui_f\data\IGUI\Cfg\VehicleToggles\FlapsIconOn2_ca.paa";
			type = "Flaps";
		};
		class LandingAutopilotIcon
		{
			colorOff[] = {1, 1, 1, 0.15};
			colorOn[] = {"(profilenamespace getvariable ['IGUI_TEXT_RGB_R',0])", "(profilenamespace getvariable ['IGUI_TEXT_RGB_G',1])", "(profilenamespace getvariable ['IGUI_TEXT_RGB_B',1])", "(profilenamespace getvariable ['IGUI_TEXT_RGB_A',0.8])"};
			colorOn2[] = {"(profilenamespace getvariable ['IGUI_TEXT_RGB_R',0])", "(profilenamespace getvariable ['IGUI_TEXT_RGB_G',1])", "(profilenamespace getvariable ['IGUI_TEXT_RGB_B',1])", "(profilenamespace getvariable ['IGUI_TEXT_RGB_A',0.8])"};
			textureOff = "\A3\Ui_f\data\IGUI\Cfg\VehicleToggles\LandingAutopilotIconOn_ca.paa";
			textureOn = "\A3\Ui_f\data\IGUI\Cfg\VehicleToggles\LandingAutopilotIconOn_ca.paa";
			textureOn2 = "\A3\Ui_f\data\IGUI\Cfg\VehicleToggles\LandingAutopilotIconOn_ca.paa";
			type = "LandingAutopilot";
		};
		class LandingGearIcon
		{
			colorOff[] = {"(profilenamespace getvariable ['IGUI_TEXT_RGB_R',0])", "(profilenamespace getvariable ['IGUI_TEXT_RGB_G',1])", "(profilenamespace getvariable ['IGUI_TEXT_RGB_B',1])", "(profilenamespace getvariable ['IGUI_TEXT_RGB_A',0.8])"};
			colorOn[] = {1, 1, 1, 0.15};
			colorOn2[] = {1, 1, 1, 0.15};
			textureOff = "\A3\Ui_f\data\IGUI\Cfg\VehicleToggles\LandingGearIconOn_ca.paa";
			textureOn = "\A3\Ui_f\data\IGUI\Cfg\VehicleToggles\LandingGearIconOn_ca.paa";
			textureOn2 = "\A3\Ui_f\data\IGUI\Cfg\VehicleToggles\LandingGearIconOn_ca.paa";
			type = "LandingGear";
		};
		class LightsIcon
		{
			colorOff[] = {1, 1, 1, 0.15};
			colorOn[] = {"(profilenamespace getvariable ['IGUI_TEXT_RGB_R',0])", "(profilenamespace getvariable ['IGUI_TEXT_RGB_G',1])", "(profilenamespace getvariable ['IGUI_TEXT_RGB_B',1])", "(profilenamespace getvariable ['IGUI_TEXT_RGB_A',0.8])"};
			colorOn2[] = {"(profilenamespace getvariable ['IGUI_TEXT_RGB_R',0])", "(profilenamespace getvariable ['IGUI_TEXT_RGB_G',1])", "(profilenamespace getvariable ['IGUI_TEXT_RGB_B',1])", "(profilenamespace getvariable ['IGUI_TEXT_RGB_A',0.8])"};
			textureOff = "\A3\Ui_f\data\IGUI\Cfg\VehicleToggles\LightsIconOn_ca.paa";
			textureOn = "\A3\Ui_f\data\IGUI\Cfg\VehicleToggles\LightsIconOn_ca.paa";
			textureOn2 = "\A3\Ui_f\data\IGUI\Cfg\VehicleToggles\LightsIconOn_ca.paa";
			type = "Lights";
		};
		class PeriscopeDepthIcon
		{
			colorOff[] = {1, 1, 1, 0.15};
			colorOn[] = {"(profilenamespace getvariable ['IGUI_TEXT_RGB_R',0])", "(profilenamespace getvariable ['IGUI_TEXT_RGB_G',1])", "(profilenamespace getvariable ['IGUI_TEXT_RGB_B',1])", "(profilenamespace getvariable ['IGUI_TEXT_RGB_A',0.8])"};
			colorOn2[] = {"(profilenamespace getvariable ['IGUI_TEXT_RGB_R',0])", "(profilenamespace getvariable ['IGUI_TEXT_RGB_G',1])", "(profilenamespace getvariable ['IGUI_TEXT_RGB_B',1])", "(profilenamespace getvariable ['IGUI_TEXT_RGB_A',0.8])"};
			textureOff = "\A3\Ui_f\data\IGUI\Cfg\VehicleToggles\PeriscopeIconOn_ca.paa";
			textureOn = "\A3\Ui_f\data\IGUI\Cfg\VehicleToggles\PeriscopeIconOn_ca.paa";
			textureOn2 = "\A3\Ui_f\data\IGUI\Cfg\VehicleToggles\PeriscopeIconOn_ca.paa";
			type = "PeriscopeDeep";
		};
		class RPMIcon
		{
			colorOff[] = {"(profilenamespace getvariable ['IGUI_ERROR_RGB_R',0.8])", "(profilenamespace getvariable ['IGUI_ERROR_RGB_G',0.0])", "(profilenamespace getvariable ['IGUI_ERROR_RGB_B',0.0])", "(profilenamespace getvariable ['IGUI_ERROR_RGB_A',1.0])"};
			colorOn[] = {"(profilenamespace getvariable ['IGUI_WARNING_RGB_R',0.8])", "(profilenamespace getvariable ['IGUI_WARNING_RGB_G',0.5])", "(profilenamespace getvariable ['IGUI_WARNING_RGB_B',0.0])", "(profilenamespace getvariable ['IGUI_WARNING_RGB_A',0.8])"};
			colorOn2[] = {1, 1, 1, 0.15};
			textureOff = "\A3\Ui_f\data\IGUI\Cfg\VehicleToggles\RPMIconOn2_ca.paa";
			textureOn = "\A3\Ui_f\data\IGUI\Cfg\VehicleToggles\RPMIconOn_ca.paa";
			textureOn2 = "\A3\Ui_f\data\IGUI\Cfg\VehicleToggles\RPMIconOff_ca.paa";
			type = "RPM";
		};
		class SlingLoadRopeIcon
		{
			colorOff[] = {1, 1, 1, 0.15};
			colorOn[] = {"(profilenamespace getvariable ['IGUI_TEXT_RGB_R',0])", "(profilenamespace getvariable ['IGUI_TEXT_RGB_G',1])", "(profilenamespace getvariable ['IGUI_TEXT_RGB_B',1])", "(profilenamespace getvariable ['IGUI_TEXT_RGB_A',0.8])"};
			colorOn2[] = {"(profilenamespace getvariable ['IGUI_TEXT_RGB_R',0])", "(profilenamespace getvariable ['IGUI_TEXT_RGB_G',1])", "(profilenamespace getvariable ['IGUI_TEXT_RGB_B',1])", "(profilenamespace getvariable ['IGUI_TEXT_RGB_A',0.8])"};
			textureOff = "\A3\Ui_f\data\IGUI\Cfg\VehicleToggles\SlingLoadRopeIconOn_ca.paa";
			textureOn = "\A3\Ui_f\data\IGUI\Cfg\VehicleToggles\SlingLoadRopeIconOn_ca.paa";
			textureOn2 = "\A3\Ui_f\data\IGUI\Cfg\VehicleToggles\SlingLoadRopeIconOn2_ca.paa";
			type = "SlingLoadRope";
		};
		class TRQIcon
		{
			colorOff[] = {1, 1, 1, 0.15};
			colorOn[] = {"(profilenamespace getvariable ['IGUI_WARNING_RGB_R',0.8])", "(profilenamespace getvariable ['IGUI_WARNING_RGB_G',0.5])", "(profilenamespace getvariable ['IGUI_WARNING_RGB_B',0.0])", "(profilenamespace getvariable ['IGUI_WARNING_RGB_A',0.8])"};
			colorOn2[] = {"(profilenamespace getvariable ['IGUI_ERROR_RGB_R',0.8])", "(profilenamespace getvariable ['IGUI_ERROR_RGB_G',0.0])", "(profilenamespace getvariable ['IGUI_ERROR_RGB_B',0.0])", "(profilenamespace getvariable ['IGUI_ERROR_RGB_A',1.0])"};
			textureOff = "\A3\Ui_f\data\IGUI\Cfg\VehicleToggles\TRQIconOff_ca.paa";
			textureOn = "\A3\Ui_f\data\IGUI\Cfg\VehicleToggles\TRQIconOn_ca.paa";
			textureOn2 = "\A3\Ui_f\data\IGUI\Cfg\VehicleToggles\TRQIconOn2_ca.paa";
			type = "Torque";
		};
		class VehicleCargoIcon
		{
			colorOff[] = {"(profilenamespace getvariable ['IGUI_WARNING_RGB_R',0.8])", "(profilenamespace getvariable ['IGUI_WARNING_RGB_G',0.5])", "(profilenamespace getvariable ['IGUI_WARNING_RGB_B',0.0])", "(profilenamespace getvariable ['IGUI_WARNING_RGB_A',0.8])"};
			colorOn[] = {1, 1, 1, 0.15};
			colorOn2[] = {"(profilenamespace getvariable ['IGUI_TEXT_RGB_R',0])", "(profilenamespace getvariable ['IGUI_TEXT_RGB_G',1])", "(profilenamespace getvariable ['IGUI_TEXT_RGB_B',1])", "(profilenamespace getvariable ['IGUI_TEXT_RGB_A',0.8])"};
			textureOff = "\A3\Ui_f\data\IGUI\Cfg\VehicleToggles\VehicleCargoIconOff_ca.paa";
			textureOn = "\A3\Ui_f\data\IGUI\Cfg\VehicleToggles\VehicleCargoIconOn_ca.paa";
			textureOn2 = "\A3\Ui_f\data\IGUI\Cfg\VehicleToggles\VehicleCargoIconOn2_ca.paa";
			type = "VehicleCargo";
		};
		class VTolIcon
		{
			colorOff[] = {1, 1, 1, 0.15};
			colorOn[] = {"(profilenamespace getvariable ['IGUI_TEXT_RGB_R',0])", "(profilenamespace getvariable ['IGUI_TEXT_RGB_G',1])", "(profilenamespace getvariable ['IGUI_TEXT_RGB_B',1])", "(profilenamespace getvariable ['IGUI_TEXT_RGB_A',0.8])"};
			colorOn2[] = {"(profilenamespace getvariable ['IGUI_TEXT_RGB_R',0])", "(profilenamespace getvariable ['IGUI_TEXT_RGB_G',1])", "(profilenamespace getvariable ['IGUI_TEXT_RGB_B',1])", "(profilenamespace getvariable ['IGUI_TEXT_RGB_A',0.8])"};
			textureOff = "\A3\Ui_f\data\IGUI\Cfg\VehicleToggles\VTOLIconOn_ca.paa";
			textureOn = "\A3\Ui_f\data\IGUI\Cfg\VehicleToggles\VTOLIconOn_ca.paa";
			textureOn2 = "\A3\Ui_f\data\IGUI\Cfg\VehicleToggles\VTOLIconOn_ca.paa";
			type = "VTol";
		};
		class WheelBrakeIcon
		{
			colorOff[] = {1, 1, 1, 0.15};
			colorOn[] = {"(profilenamespace getvariable ['IGUI_TEXT_RGB_R',0])", "(profilenamespace getvariable ['IGUI_TEXT_RGB_G',1])", "(profilenamespace getvariable ['IGUI_TEXT_RGB_B',1])", "(profilenamespace getvariable ['IGUI_TEXT_RGB_A',0.8])"};
			colorOn2[] = {"(profilenamespace getvariable ['IGUI_TEXT_RGB_R',0])", "(profilenamespace getvariable ['IGUI_TEXT_RGB_G',1])", "(profilenamespace getvariable ['IGUI_TEXT_RGB_B',1])", "(profilenamespace getvariable ['IGUI_TEXT_RGB_A',0.8])"};
			textureOff = "\A3\Ui_f\data\IGUI\Cfg\VehicleToggles\WheelBreakIconOn_ca.paa";
			textureOn = "\A3\Ui_f\data\IGUI\Cfg\VehicleToggles\WheelBreakIconOn_ca.paa";
			textureOn2 = "\A3\Ui_f\data\IGUI\Cfg\VehicleToggles\WheelBreakIconOn_ca.paa";
			type = "WheelBrake";
		};
	};
};
