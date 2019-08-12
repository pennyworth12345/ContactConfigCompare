class RscDisplayAttributesModuleObjectiveRaceFinish: RscDisplayAttributes
{
	onLoad = "[""onLoad"",_this,""RscDisplayAttributesModuleObjectiveRaceFinish"",'KartDisplays'] call 	(uinamespace getvariable 'BIS_fnc_initDisplay')";
	onUnload = "[""onUnload"",_this,""RscDisplayAttributesModuleObjectiveRaceFinish"",'KartDisplays'] call 	(uinamespace getvariable 'BIS_fnc_initDisplay')";
	scriptName = "RscDisplayAttributesModuleObjectiveRaceFinish";
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
				class TaskDescription: RscAttributeTaskDescription
				{
					class Controls: controls
					{
						class EditDescription: EditDescription
						{
							text = "Race to the destination! You'll have to pass all Check Points (if they're used).";
						};
						class EditMarker: EditMarker
						{
							text = "Race";
						};
						class EditTemplate: EditTemplate {};
						class EditTitle: EditTitle
						{
							text = "Race";
						};
						class TitleDescription: TitleDescription {};
						class TitleMarker: TitleMarker {};
						class TitleTemplate: TitleTemplate {};
						class TitleTitle: TitleTitle {};
					};
				};
				class Text: RscAttributeText
				{
					class Controls: controls
					{
						class Title: Title
						{
							text = "The race will start right after this module is placed. The objective will be completed automatically once any unit of any involved side reaches the destination and all Check Points (if any). The module and all Check Points will disappear afterwards.";
						};
					};
				};
			};
		};
		class Title: Title {};
	};
};
