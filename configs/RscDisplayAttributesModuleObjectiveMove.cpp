class RscDisplayAttributesModuleObjectiveMove: RscDisplayAttributes
{
	onLoad = "[""onLoad"",_this,""RscDisplayAttributesModuleObjectiveMove"",'CuratorDisplays'] call 	(uinamespace getvariable 'BIS_fnc_initDisplay')";
	onUnload = "[""onUnload"",_this,""RscDisplayAttributesModuleObjectiveMove"",'CuratorDisplays'] call 	(uinamespace getvariable 'BIS_fnc_initDisplay')";
	scriptName = "RscDisplayAttributesModuleObjectiveMove";
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
				class Owners: RscAttributeOwners {};
				class TaskDescription: RscAttributeTaskDescription
				{
					class Controls: controls
					{
						class EditDescription: EditDescription
						{
							text = "Reach the destination.";
						};
						class EditMarker: EditMarker
						{
							text = "Move";
						};
						class EditTemplate: EditTemplate {};
						class EditTitle: EditTitle
						{
							text = "Move";
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
							text = "The objective will be completed automatically when any unit of any involved side will reach the destination. The module will disappear afterwards.";
						};
					};
				};
			};
		};
		class Title: Title {};
	};
};
