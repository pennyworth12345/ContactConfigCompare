class RscDisplayAttributesWaypoint: RscDisplayAttributes
{
	filterAttributes = 1;
	onLoad = "[""onLoad"",_this,""RscDisplayAttributesWaypoint"",'CuratorDisplays'] call 	(uinamespace getvariable 'BIS_fnc_initDisplay')";
	onUnload = "[""onUnload"",_this,""RscDisplayAttributesWaypoint"",'CuratorDisplays'] call 	(uinamespace getvariable 'BIS_fnc_initDisplay')";
	scriptName = "RscDisplayAttributesWaypoint";
	scriptPath = "CuratorDisplays";
	class Controls: Controls
	{
		class Background: Background {};
		class ButtonCancel: ButtonCancel {};
		class ButtonOK: ButtonOK {};
		class Content: Content
		{
			class Controls: controls
			{
				class Behaviour: RscAttributeBehaviour {};
				class Formation: RscAttributeFormation {};
				class SpeedMode: RscAttributeSpeedMode {};
				class WaypointTimeout: RscAttributeWaypointTimeout {};
				class WaypointType: RscAttributeWaypointType {};
			};
		};
		class Title: Title {};
	};
};
