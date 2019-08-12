class RscDisplayAttributesModuleObjectiveRaceCP: RscDisplayAttributes
{
	onLoad = "[""onLoad"",_this,""RscDisplayAttributesModuleObjectiveRaceCP"",'KartDisplays'] call 	(uinamespace getvariable 'BIS_fnc_initDisplay')";
	onUnload = "[""onUnload"",_this,""RscDisplayAttributesModuleObjectiveRaceCP"",'KartDisplays'] call 	(uinamespace getvariable 'BIS_fnc_initDisplay')";
	scriptName = "RscDisplayAttributesModuleObjectiveRaceCP";
	scriptPath = "KartDisplays";
	class Controls: Controls
	{
		class Background: Background {};
		class ButtonCancel: ButtonCancel {};
		class ButtonOK: ButtonOK {};
		class Content: Content
		{
			class Controls: controls
			{
				class Owners: RscAttributeOwners {};
				class Text: RscAttributeText
				{
					class Controls: controls
					{
						class Title: Title
						{
							text = "To win the race, players will need to pass all Check Points. The module will disappear after the race has finished.";
						};
					};
				};
			};
		};
		class Title: Title {};
	};
};
