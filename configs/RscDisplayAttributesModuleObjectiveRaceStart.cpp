class RscDisplayAttributesModuleObjectiveRaceStart: RscDisplayAttributes
{
	onLoad = "[""onLoad"",_this,""RscDisplayAttributesModuleObjectiveRaceStart"",'KartDisplays'] call 	(uinamespace getvariable 'BIS_fnc_initDisplay')";
	onUnload = "[""onUnload"",_this,""RscDisplayAttributesModuleObjectiveRaceStart"",'KartDisplays'] call 	(uinamespace getvariable 'BIS_fnc_initDisplay')";
	scriptName = "RscDisplayAttributesModuleObjectiveRaceStart";
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
							text = "Move to the lineup and wait for the race!";
						};
						class EditMarker: EditMarker
						{
							text = "LINE UP";
						};
						class EditTemplate: EditTemplate {};
						class EditTitle: EditTitle
						{
							text = "Line Up and Get Ready";
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
							text = "The objective will be completed automatically when a 'Race - Finish' module is placed. This module will disappear afterwards.";
						};
					};
				};
			};
		};
		class Title: Title {};
	};
};
