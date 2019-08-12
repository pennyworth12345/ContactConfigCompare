class RscDisplayAttributesModuleObjectiveAttackDefend: RscDisplayAttributes
{
	onLoad = "[""onLoad"",_this,""RscDisplayAttributesModuleObjectiveAttackDefend"",'CuratorDisplays'] call 	(uinamespace getvariable 'BIS_fnc_initDisplay')";
	onUnload = "[""onUnload"",_this,""RscDisplayAttributesModuleObjectiveAttackDefend"",'CuratorDisplays'] call 	(uinamespace getvariable 'BIS_fnc_initDisplay')";
	scriptName = "RscDisplayAttributesModuleObjectiveAttackDefend";
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
				class AreaSize: RscAttributeAreaSize {};
				class Name: RscAttributeName
				{
					class Controls: controls
					{
						class Title: Title
						{
							text = "Area name";
						};
						class Value: Value {};
					};
				};
				class Owners2: RscAttributeOwners2
				{
					class Controls: controls
					{
						class Background1: Background1 {};
						class Background2: Background2 {};
						class BLUFOR1: BLUFOR1 {};
						class BLUFOR2: BLUFOR2 {};
						class Civilian1: Civilian1 {};
						class Civilian2: Civilian2 {};
						class Independent1: Independent1 {};
						class Independent2: Independent2 {};
						class OPFOR1: OPFOR1 {};
						class OPFOR2: OPFOR2 {};
						class Title1: Title1
						{
							text = "Attackers";
						};
						class Title2: Title2
						{
							text = "Defenders";
						};
					};
				};
				class Text: RscAttributeText
				{
					class Controls: controls
					{
						class Title: Title
						{
							text = "Set 'attackers' and 'defenders' to define which sides can fight for the sector. When the attackers seize it, the objective will be completed and the defenders won't be able to reclaim the sector afterwards.";
						};
					};
				};
			};
		};
		class Title: Title {};
	};
};
