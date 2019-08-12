class cfgWaypoints
{
	class A3
	{
		displayName = "Advanced";
		class Artillery
		{
			displayName = "FIRE MISSION";
			displayNameDebug = "Artillery";
			file = "A3\functions_f\waypoints\fn_wpArtillery.sqf";
			icon = "\a3\Ui_f\data\Map\MapControl\waypointeditor_CA.paa";
		};
		class Demine
		{
			displayName = "CLEAR MINES";
			file = "A3\functions_f_orange\waypoints\fn_wpDemine.sqf";
			icon = "\a3\Ui_f\data\Map\MapControl\waypointeditor_CA.paa";
			class Attributes
			{
				class ClearUnknown
				{
					control = "Checkbox";
					defaultValue = "true";
					displayName = "Deactivate All Mines";
					expression = "_this setWaypointScript (waypointScript _this + format [' %1',_value]);";
					property = "ClearUnknown";
					tooltip = "When checked, the group will clear all mines in the area, otherwise it will target only mines known to the group's side.";
				};
			};
		};
		class Land
		{
			displayName = "LAND";
			displayNameDebug = "Land";
			file = "A3\functions_f\waypoints\fn_wpLand.sqf";
			icon = "\a3\Ui_f\data\Map\MapControl\waypointeditor_CA.paa";
		};
	};
	class Default
	{
		displayName = "Default";
		class Cycle
		{
			displayName = "CYCLE";
			icon = "\a3\3DEN\Data\CfgWaypoints\Cycle_ca.paa";
			tooltip = "";
			type = "CYCLE";
		};
		class Destroy
		{
			displayName = "DESTROY";
			icon = "\a3\3DEN\Data\CfgWaypoints\Destroy_ca.paa";
			tooltip = "";
			type = "DESTROY";
		};
		class Dismiss
		{
			displayName = "DISMISSED";
			icon = "\a3\3DEN\Data\CfgWaypoints\Dismiss_ca.paa";
			tooltip = "";
			type = "DISMISS";
		};
		class Follow
		{
			displayName = "FOLLOW";
			icon = "\a3\3DEN\Data\CfgWaypoints\Follow_ca.paa";
			tooltip = "";
			type = "FOLLOW";
		};
		class GetIn
		{
			displayName = "GET IN";
			icon = "\a3\3DEN\Data\CfgWaypoints\GetIn_ca.paa";
			tooltip = "";
			type = "GETIN";
		};
		class GetInNearest
		{
			displayName = "GET IN NEAREST";
			icon = "\a3\3DEN\Data\CfgWaypoints\GetInNearest_ca.paa";
			tooltip = "";
			type = "GETIN NEAREST";
		};
		class GetOut
		{
			displayName = "GET OUT";
			icon = "\a3\3DEN\Data\CfgWaypoints\GetOut_ca.paa";
			tooltip = "";
			type = "GETOUT";
		};
		class Guard
		{
			displayName = "GUARD";
			icon = "\a3\3DEN\Data\CfgWaypoints\Guard_ca.paa";
			tooltip = "";
			type = "GUARD";
		};
		class Hold
		{
			displayName = "HOLD";
			icon = "\a3\3DEN\Data\CfgWaypoints\Hold_ca.paa";
			tooltip = "";
			type = "HOLD";
		};
		class Hook
		{
			displayName = "LIFT CARGO";
			icon = "\a3\3DEN\Data\CfgWaypoints\Hook_ca.paa";
			tooltip = "";
			type = "HOOK";
		};
		class Join
		{
			displayName = "JOIN";
			icon = "\a3\3DEN\Data\CfgWaypoints\Join_ca.paa";
			tooltip = "";
			type = "JOIN";
		};
		class Leader
		{
			displayName = "JOIN AND LEAD";
			icon = "\a3\3DEN\Data\CfgWaypoints\Leader_ca.paa";
			tooltip = "";
			type = "LEADER";
		};
		class Load
		{
			displayName = "LOAD";
			icon = "\a3\3DEN\Data\CfgWaypoints\Load_ca.paa";
			tooltip = "";
			type = "LOAD";
		};
		class Loiter
		{
			displayName = "LOITER";
			icon = "\a3\3DEN\Data\CfgWaypoints\Loiter_ca.paa";
			tooltip = "";
			type = "LOITER";
			class Attributes
			{
				class LoiterAltitude
				{
					control = "EditZ";
					data = "LoiterAltitude";
					displayName = "Loiter Altitude";
					tooltip = "Altitude above waypoint's initial XY position in which vehicles in the group will loiter. They will maintain this altitude steadily, not copying the terrain. When -1, vehicles will fly in default altitude and copy the terrain.";
					validate = "number";
				};
				class LoiterDirection
				{
					control = "LoiterDirection";
					data = "LoiterDirection";
					displayName = "Loiter Direction";
				};
				class LoiterRadius
				{
					control = "Edit";
					data = "LoiterRadius";
					displayName = "Loiter Radius";
					validate = "number";
				};
			};
		};
		class Move
		{
			displayName = "MOVE";
			icon = "\a3\3DEN\Data\CfgWaypoints\Move_ca.paa";
			tooltip = "";
			type = "MOVE";
		};
		class Scripted
		{
			displayName = "SCRIPTED";
			icon = "\a3\3DEN\Data\CfgWaypoints\Scripted_ca.paa";
			tooltip = "";
			type = "SCRIPTED";
		};
		class SeekAndDestroy
		{
			displayName = "SEEK AND DESTROY";
			icon = "\a3\3DEN\Data\CfgWaypoints\SeekAndDestroy_ca.paa";
			tooltip = "";
			type = "SAD";
		};
		class Sentry
		{
			displayName = "SENTRY";
			icon = "\a3\3DEN\Data\CfgWaypoints\Sentry_ca.paa";
			tooltip = "";
			type = "SENTRY";
		};
		class Support
		{
			displayName = "SUPPORT";
			icon = "\a3\3DEN\Data\CfgWaypoints\Support_ca.paa";
			tooltip = "";
			type = "SUPPORT";
		};
		class Talk
		{
			displayName = "TALK";
			icon = "\a3\3DEN\Data\CfgWaypoints\Talk_ca.paa";
			tooltip = "";
			type = "TALK";
		};
		class TransportUnload
		{
			displayName = "TRANSPORT UNLOAD";
			icon = "\a3\3DEN\Data\CfgWaypoints\TransportUnload_ca.paa";
			tooltip = "";
			type = "TR UNLOAD";
		};
		class Unhook
		{
			displayName = "DROP CARGO";
			icon = "\a3\3DEN\Data\CfgWaypoints\Unhook_ca.paa";
			tooltip = "";
			type = "UNHOOK";
		};
		class Unload
		{
			displayName = "UNLOAD";
			icon = "\a3\3DEN\Data\CfgWaypoints\Unload_ca.paa";
			tooltip = "";
			type = "UNLOAD";
		};
		class VehicleInVehicleGetIn
		{
			displayName = "VEHICLE GET IN";
			icon = "\a3\3DEN\Data\CfgWaypoints\GetIn_ca.paa";
			tooltip = "";
			type = "VEHICLEINVEHICLEGETIN";
		};
		class VehicleInVehicleGetOut
		{
			displayName = "VEHICLE GET OUT";
			icon = "\a3\3DEN\Data\CfgWaypoints\GetOut_ca.paa";
			tooltip = "";
			type = "VEHICLEINVEHICLEGETOUT";
		};
		class VehicleInVehicleUnload
		{
			displayName = "VEHICLE UNLOAD";
			icon = "\a3\3DEN\Data\CfgWaypoints\Unload_ca.paa";
			tooltip = "";
			type = "VEHICLEINVEHICLEUNLOAD";
		};
	};
};
