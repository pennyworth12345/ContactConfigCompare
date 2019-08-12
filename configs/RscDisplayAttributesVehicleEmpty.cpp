class RscDisplayAttributesVehicleEmpty: RscDisplayAttributes
{
	filterAttributes = 1;
	onLoad = "[""onLoad"",_this,""RscDisplayAttributesVehicleEmpty"",'CuratorDisplays'] call 	(uinamespace getvariable 'BIS_fnc_initDisplay')";
	onUnload = "[""onUnload"",_this,""RscDisplayAttributesVehicleEmpty"",'CuratorDisplays'] call 	(uinamespace getvariable 'BIS_fnc_initDisplay')";
	scriptName = "RscDisplayAttributesVehicleEmpty";
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
				class Damage: RscAttributeDamage {};
				class Exec: RscAttributeExec {};
				class Fuel: RscAttributeFuel {};
				class Lock: RscAttributeLock {};
				class RespawnPosition: RscAttributeRespawnPosition {};
				class RespawnVehicle: RscAttributeRespawnVehicle {};
			};
		};
		class Title: Title {};
	};
};
