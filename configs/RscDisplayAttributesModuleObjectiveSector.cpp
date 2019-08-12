class RscDisplayAttributesModuleObjectiveSector: RscDisplayAttributes
{
	onLoad = "[""onLoad"",_this,""RscDisplayAttributesModuleObjectiveSector"",'CuratorDisplays'] call 	(uinamespace getvariable 'BIS_fnc_initDisplay')";
	onUnload = "[""onUnload"",_this,""RscDisplayAttributesModuleObjectiveSector"",'CuratorDisplays'] call 	(uinamespace getvariable 'BIS_fnc_initDisplay')";
	scriptName = "RscDisplayAttributesModuleObjectiveSector";
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
				class Name: RscAttributeName {};
				class Owners: RscAttributeOwners
				{
					class Controls: controls
					{
						class Background: Background {};
						class BLUFOR: BLUFOR {};
						class Civilian: Civilian {};
						class GroupList: GroupList {};
						class Independent: Independent {};
						class OPFOR: OPFOR {};
						class TabSide: TabSide {};
						class Title: Title
						{
							text = "Conquerors";
						};
						class UnitList: UnitList {};
					};
				};
				class Text: RscAttributeText
				{
					class Controls: controls
					{
						class Title: Title
						{
							text = "Set 'conquerors' to define which sides can fight for the sector. Ownership can change indefinitely.";
						};
					};
				};
			};
		};
		class Title: Title {};
	};
};
