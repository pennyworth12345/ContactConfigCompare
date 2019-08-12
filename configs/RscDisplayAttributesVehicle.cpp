class RscDisplayAttributesVehicle: RscDisplayAttributes
{
	filterAttributes = 1;
	onLoad = "[""onLoad"",_this,""RscDisplayAttributesVehicle"",'CuratorDisplays'] call 	(uinamespace getvariable 'BIS_fnc_initDisplay')";
	onUnload = "[""onUnload"",_this,""RscDisplayAttributesVehicle"",'CuratorDisplays'] call 	(uinamespace getvariable 'BIS_fnc_initDisplay')";
	scriptName = "RscDisplayAttributesVehicle";
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
				class Rank: RscAttributeRank {};
				class RespawnPosition: RscAttributeRespawnPosition {};
				class RespawnVehicle: RscAttributeRespawnVehicle {};
				class Skill: RscAttributeSkill {};
			};
		};
		class Title: Title {};
	};
};
