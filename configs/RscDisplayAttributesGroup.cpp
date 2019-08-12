class RscDisplayAttributesGroup: RscDisplayAttributes
{
	filterAttributes = 1;
	onLoad = "[""onLoad"",_this,""RscDisplayAttributesGroup"",'CuratorDisplays'] call 	(uinamespace getvariable 'BIS_fnc_initDisplay')";
	onUnload = "[""onUnload"",_this,""RscDisplayAttributesGroup"",'CuratorDisplays'] call 	(uinamespace getvariable 'BIS_fnc_initDisplay')";
	scriptName = "RscDisplayAttributesGroup";
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
				class GroupID: RscAttributeGroupID {};
				class RespawnPosition: RscAttributeRespawnPosition
				{
					class Controls: controls
					{
						class Background: Background {};
						class Civ: Civ {};
						class Disabled: Disabled {};
						class East: East {};
						class Guer: Guer {};
						class Title: Title
						{
							text = "Respawn on leader for";
						};
						class West: West {};
					};
				};
				class Skill: RscAttributeSkill {};
				class SpeedMode: RscAttributeSpeedMode {};
				class UnitPos: RscAttributeUnitPos {};
			};
		};
		class Title: Title {};
	};
};
