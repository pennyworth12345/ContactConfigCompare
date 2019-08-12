class RscDisplayAttributesMan: RscDisplayAttributes
{
	filterAttributes = 1;
	onLoad = "[""onLoad"",_this,""RscDisplayAttributesMan"",'CuratorDisplays'] call 	(uinamespace getvariable 'BIS_fnc_initDisplay')";
	onUnload = "[""onUnload"",_this,""RscDisplayAttributesMan"",'CuratorDisplays'] call 	(uinamespace getvariable 'BIS_fnc_initDisplay')";
	scriptName = "RscDisplayAttributesMan";
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
				class Rank: RscAttributeRank {};
				class RespawnPosition: RscAttributeRespawnPosition {};
				class Skill: RscAttributeSkill {};
				class UnitPos: RscAttributeUnitPos {};
			};
		};
		class Title: Title {};
	};
};
